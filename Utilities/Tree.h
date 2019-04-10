/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：何海涛
//==================================================================

#pragma once

#include <vector>

struct TreeNode {
    int m_nValue;
    std::vector<TreeNode *> m_vChildren;
};

TreeNode *CreateTreeNode(int value);

void ConnectTreeNodes(TreeNode *pParent, TreeNode *pChild);

void PrintTreeNode(const TreeNode *pNode);

void PrintTree(const TreeNode *pRoot);

void DestroyTree(TreeNode *pRoot);
