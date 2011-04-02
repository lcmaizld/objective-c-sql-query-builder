/*
 * Copyright 2011 Ziminji
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "ZIMSqlStatement.h"

/*!
 @class					ZIMSqlShowTablesStatement
 @discussion			This class represents an SQL show tables statements.
 @updated				2011-04-02
 @see					http://dev.mysql.com/doc/refman/5.0/en/show-tables.html
 */
@interface ZIMSqlShowTablesStatement : NSObject <ZIMSqlStatement> {

	@protected
		NSString *_clause;

}
/*!
 @method				like:
 @discussion			This method will causing only those tables that match the specified
						like constraint.
 @updated				2011-04-01
 */
- (void) like: (NSString *)value;
/*!
 @method				statement
 @discussion			This method will return the SQL statement.
 @return				The SQL statement that was constructed.
 @updated				2011-04-01
 */
- (NSString *) statement;

@end
