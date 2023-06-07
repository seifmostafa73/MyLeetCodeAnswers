public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        var anigrams = new Dictionary<string, IList<string>>(); // stroing each anigram group

        foreach (var str in strs) {
        // an anigram could be checked by ordering of characters of a string eat->ate,tea->ate
            var sortedStr = String.Concat(str.OrderBy(c => c));
            if (!anigrams.ContainsKey(sortedStr)) {
                //so know we just add each word to it's anigram group
                anigrams[sortedStr] = new List<string>();
            }
            anigrams[sortedStr].Add(str);
        }

        return anigrams.Values.ToList();
    }
}