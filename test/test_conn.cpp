/*

Copyright 2017 Adam Reichold

This file is part of rodbc.

rodbc is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

rodbc is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with rodbc.  If not, see <http://www.gnu.org/licenses/>.

*/
#include "connection.hpp"

#include "util.hpp"

#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE( conn, Fixture )

BOOST_AUTO_TEST_CASE( canConnect )
{
}

BOOST_AUTO_TEST_CASE( isNotDead )
{
    BOOST_CHECK( !conn.isDead() );
}

BOOST_AUTO_TEST_CASE( canStartTransaction )
{
    rodbc::Transaction trans{ conn };
}

BOOST_AUTO_TEST_CASE( canCommitTransaction )
{
    rodbc::Transaction trans{ conn };
    trans.commit();
}

BOOST_AUTO_TEST_SUITE_END()
