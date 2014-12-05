from kdtree import KDTree

data = [(1,2),(4,0),(8,3),(10,5),(9,8),(4,2)]

tree = KDTree.construct_from_data(data)
nearest = tree.query(query_point=(10,0), t=1)
print(nearest)