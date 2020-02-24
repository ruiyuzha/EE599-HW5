#include "src/lib/BST.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TestMaxh, ReturnMaxh) {
  vector<int> init = {3,2,20,15,27};
  BST solution(init);
  int actual = solution.GetBTHeight();
  EXPECT_EQ(3, actual);
}

TEST(TestMaxhNULL, ReturnMaxhNULL) {
  vector<int> init = {};
  BST solution(init);
  int actual = solution.GetBTHeight();
  EXPECT_EQ(0, actual);
}

TEST(TestInorderRecursively, ReturnInorderRecursively) {
  vector<int> init = {3,2,20,15,27};
  BST solution(init);
  solution.inorder_recursively();
  bool actual1=solution.find(2);
  bool actual2=solution.find(3);
  bool actual3=solution.find(15);
  bool actual4=solution.find(20);
  bool actual5=solution.find(27);
  EXPECT_EQ(1, actual1);
  EXPECT_EQ(1, actual2);
  EXPECT_EQ(1, actual3);
  EXPECT_EQ(1, actual4);
  EXPECT_EQ(1, actual5);
}

TEST(TestInorderNonRecursively, ReturnInorderNonRecursively) {
  vector<int> init = {3,2,20,15,27};
  BST solution(init);
  solution.inorder_nonrecursively();
  bool actual1=solution.find(2);
  bool actual2=solution.find(3);
  bool actual3=solution.find(15);
  bool actual4=solution.find(20);
  bool actual5=solution.find(27);
  EXPECT_EQ(1, actual1);
  EXPECT_EQ(1, actual2);
  EXPECT_EQ(1, actual3);
  EXPECT_EQ(1, actual4);
  EXPECT_EQ(1, actual5);
}