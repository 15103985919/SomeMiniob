#include "sql/stmt/drop_table_stmt.h"
#include "common/log/log.h"
#include "common/types.h"
#include "sql/parser/parse_defs.h"
#include "sql/stmt/create_table_stmt.h"
#include "event/sql_debug.h"

RC DropTableStmt::create(Db *db, const DropTableSqlNode &drop_table, Stmt *&stmt)
{
  stmt=new DropTableStmt(drop_table.relation_name);
  return RC::SUCCESS;
}

