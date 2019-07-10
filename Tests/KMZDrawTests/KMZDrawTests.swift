import XCTest
@testable import KMZDraw

final class KMZDrawTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(KMZDraw().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
