//
//  QKTestCase.h
//  QueryKit
//
//  Created by Stuart Connolly (stuconnolly.com) on July 18, 2012
//  Copyright (c) 2012 Stuart Connolly. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#import <QueryKit/QueryKit.h>
#import <XCTest/XCTest.h>

@interface QKTestCase : XCTestCase 
{
@private
	QKQuery *_query;
	
	NSString *_identifierQuote;
	
	QKQueryDatabase _database;
}

@property (readwrite, retain) QKQuery *query;

@property (readwrite, retain) NSString *identifierQuote;

@property (readwrite, assign) QKQueryDatabase database;

- (id)initWithInvocation:(NSInvocation *)invocation database:(QKQueryDatabase)database identifierQuote:(NSString *)quote;

@end
