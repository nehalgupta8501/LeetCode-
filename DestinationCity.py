class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        dest=dict()
        for i in range(len(paths)):
            dest[paths[i][0]]=paths[i][1]
            
        for i in range(len(paths)):
            if paths[i][1] not in dest:
                return paths[i][1]
        return None