class Solution(object):
    def groupAnagrams(self, strs):
        mpp={}
        for s in strs:
            key = "".join(sorted(s))
            if key not in mpp:
                mpp[key]=[]
            mpp[key].append(s)
        return list(mpp.values())