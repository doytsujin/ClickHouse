#pragma once

#include <Analyzer/IQueryTreeNode.h>

namespace DB
{

/** Collect aggregate function nodes in node children.
  * Do not visit subqueries.
  */
QueryTreeNodes collectAggregateFunctionNodes(const QueryTreeNodePtr & node);

/** Collect aggregate function nodes in node children and add them into result.
  * Do not visit subqueries.
  */
void collectAggregateFunctionNodes(const QueryTreeNodePtr & node, QueryTreeNodes & result);

/** Assert that there are no aggregate function nodes in node children.
  * Do not visit subqueries.
  */
void assertNoAggregateFunctionNodes(const QueryTreeNodePtr & node, const String & assert_no_aggregates_place_message);

/** Assert that there are no GROUPING functions in node children.
  * Do not visit subqueries.
  */
void assertNoGroupingFunction(const QueryTreeNodePtr & node, const String & assert_no_grouping_function_place_message);

}
