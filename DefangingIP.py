class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        x=address.replace(".", "[.]")
        return x
        