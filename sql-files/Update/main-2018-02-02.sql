ALTER TABLE `auction`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `cart_inventory`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `guild_storage`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `inventory`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `mail`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `storage`
	ADD COLUMN `opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `card3`,
	ADD COLUMN `opt_val0` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx0`,
	ADD COLUMN `opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val0`,
	ADD COLUMN `opt_val1` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx1`,
	ADD COLUMN `opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val1`,
	ADD COLUMN `opt_val2` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx2`,
	ADD COLUMN `opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val2`,
	ADD COLUMN `opt_val3` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx3`,
	ADD COLUMN `opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0' AFTER `opt_val3`,
	ADD COLUMN `opt_val4` SMALLINT(5) NOT NULL DEFAULT '0' AFTER `opt_idx4`;

ALTER TABLE `homunculus`
	ADD COLUMN `autofeed` TINYINT(2) NOT NULL DEFAULT '0' AFTER `vaporize`;

CREATE TABLE IF NOT EXISTS `rodex_items` (
	`id` INT(11) NOT NULL AUTO_INCREMENT,
	`mail_id` BIGINT(20) NOT NULL DEFAULT '0',
	`nameid` INT(11) NOT NULL DEFAULT '0',
	`amount` INT(11) NOT NULL DEFAULT '0',
	`equip` INT(11) UNSIGNED NOT NULL DEFAULT '0',
	`identify` SMALLINT(6) NOT NULL DEFAULT '0',
	`refine` TINYINT(3) UNSIGNED NOT NULL DEFAULT '0',
	`attribute` TINYINT(4) NOT NULL DEFAULT '0',
	`card0` SMALLINT(11) NOT NULL DEFAULT '0',
	`card1` SMALLINT(11) NOT NULL DEFAULT '0',
	`card2` SMALLINT(11) NOT NULL DEFAULT '0',
	`card3` SMALLINT(11) NOT NULL DEFAULT '0',
	`opt_idx0` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0',
	`opt_val0` SMALLINT(5) NOT NULL DEFAULT '0',
	`opt_idx1` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0',
	`opt_val1` SMALLINT(5) NOT NULL DEFAULT '0',
	`opt_idx2` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0',
	`opt_val2` SMALLINT(5) NOT NULL DEFAULT '0',
	`opt_idx3` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0',
	`opt_val3` SMALLINT(5) NOT NULL DEFAULT '0',
	`opt_idx4` SMALLINT(5) UNSIGNED NOT NULL DEFAULT '0',
	`opt_val4` SMALLINT(5) NOT NULL DEFAULT '0',
	`expire_time` INT(11) UNSIGNED NOT NULL DEFAULT '0',
	`bound` TINYINT(1) UNSIGNED NOT NULL DEFAULT '0',
	`unique_id` BIGINT(20) UNSIGNED NOT NULL DEFAULT '0',
	PRIMARY KEY (`id`),
  KEY `mail_id` (`mail_id`)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS `rodex_mail` (
	`mail_id` BIGINT(20) NOT NULL AUTO_INCREMENT,
	`sender_name` VARCHAR(30) NOT NULL COLLATE 'utf8_unicode_ci',
	`sender_id` INT(11) NOT NULL,
	`receiver_name` VARCHAR(30) NOT NULL COLLATE 'utf8_unicode_ci',
	`receiver_id` INT(11) NOT NULL,
	`receiver_accountid` INT(11) NOT NULL,
	`title` VARCHAR(50) NOT NULL COLLATE 'utf8_unicode_ci',
	`body` VARCHAR(510) NOT NULL COLLATE 'utf8_unicode_ci',
	`zeny` BIGINT(20) NOT NULL,
	`type` TINYINT(8) UNSIGNED NOT NULL,
	`is_read` TINYINT(8) NOT NULL,
	`send_date` INT(11) NOT NULL,
	`expire_date` INT(11) NOT NULL,
	`weight` INT(11) NOT NULL,
	PRIMARY KEY (`mail_id`),
  KEY `sender_id` (`sender_id`),
  KEY `receiver_id` (`receiver_id`),
  KEY `receiver_accountid` (`receiver_accountid`),
  KEY `send_date` (`send_date`),
  KEY `expire_date` (`expire_date`)
) ENGINE=MyISAM;