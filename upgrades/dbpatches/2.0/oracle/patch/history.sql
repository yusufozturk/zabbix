ALTER TABLE history MODIFY itemid DEFAULT NULL;
ALTER TABLE history ADD ns number(10) DEFAULT '0' NOT NULL;
