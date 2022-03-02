public class Solution {
    public int[][] FloodFill(int[][] image, int sr, int sc, int newColor) {
        int TargetColor = image[sr][sc];
      
      if(TargetColor == newColor)
        return image;
      
      ChangeColor(image,sr,sc,TargetColor,newColor);
      return image;
    }
  
  public void ChangeColor(int[][] image,int sr,int sc,int TargetColor,int newColor)
  {
    //checking wether to continue or not
    if(sr>= image.Length || sr<0 || sc>=image[0].Length || sc<0 || image[sr][sc] != TargetColor)
      return;
   
    image[sr][sc] = newColor;
    
    ChangeColor(image,sr-1,sc,TargetColor,newColor); // Calling for Upper pixel
    ChangeColor(image,sr+1,sc,TargetColor,newColor); //Calling for Lower Pixel
    ChangeColor(image,sr,sc+1,TargetColor,newColor); //Calling for the Right Pixel
    ChangeColor(image,sr,sc-1,TargetColor,newColor); //Calling for Left Pixel
  }
}