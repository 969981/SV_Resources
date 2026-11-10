/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00419ba0; name: FUN_00419ba0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00419ba0(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  byte local_ba0 [64];
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined4 local_b38;
  undefined8 local_b34;
  undefined8 uStack_b2c;
  undefined8 local_b24;
  undefined8 uStack_b1c;
  undefined8 local_b14;
  undefined8 local_b0c;
  undefined8 uStack_b04;
  undefined8 local_afc;
  undefined8 uStack_af4;
  undefined4 local_aec;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  int local_9d8;
  int iStack_9d4;
  int iStack_9d0;
  int iStack_9cc;
  int local_9c8;
  int local_9c4;
  int local_9c0;
  int local_9bc;
  int local_9b8;
  int iStack_9b4;
  int local_9b0;
  int iStack_9ac;
  int iStack_9a8;
  int iStack_9a4;
  int iStack_9a0;
  int iStack_99c;
  int iStack_998;
  int iStack_994;
  int iStack_990;
  int local_98c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  byte local_960 [32];
  int local_940;
  int local_93c;
  int local_938;
  int local_934;
  int local_930;
  int local_92c;
  int local_928;
  int local_924;
  int local_920;
  int local_91c;
  undefined1 auStack_918 [40];
  undefined1 auStack_8f0 [40];
  undefined1 auStack_8c8 [40];
  int local_8a0;
  int iStack_89c;
  int iStack_898;
  int iStack_894;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  int local_880;
  int iStack_87c;
  int local_878;
  int iStack_874;
  int iStack_870;
  int iStack_86c;
  int local_868;
  int iStack_864;
  int iStack_860;
  int iStack_85c;
  int local_858;
  int iStack_854;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined1 auStack_828 [40];
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  int local_7d8;
  int local_7d4;
  int local_7d0;
  int local_7cc;
  int local_7c8;
  int local_7c4;
  int local_7c0;
  int local_7bc;
  int local_7b8;
  int local_7b4;
  int local_7b0;
  int local_7ac;
  int local_7a8;
  int local_7a4;
  int local_7a0;
  int local_79c;
  int local_798;
  int local_794;
  int local_790;
  int local_78c;
  int local_788;
  int local_784;
  int local_780;
  int local_77c;
  int local_778;
  int local_774;
  int local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760 [4];
  int local_750;
  int local_74c;
  int local_748;
  int local_744;
  int local_740;
  int local_73c;
  int local_738 [4];
  int local_728;
  int local_724;
  int local_720;
  int local_71c;
  int local_718;
  int local_714;
  undefined8 local_710 [4];
  undefined8 local_6f0;
  undefined1 auStack_6e8 [40];
  int local_6c0;
  int local_6bc;
  int local_6b8;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int local_6a0;
  int local_69c;
  int local_698;
  int local_694;
  int local_690;
  int local_68c;
  int local_688;
  int local_684;
  int local_680;
  int local_67c;
  int local_678;
  int local_674;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined1 auStack_648 [40];
  int local_620;
  int local_61c;
  int local_618;
  int local_614;
  int local_610;
  int local_60c;
  int local_608;
  int local_604;
  int local_600;
  int local_5fc;
  int local_5f8;
  int local_5f4;
  int local_5f0;
  int local_5ec;
  int local_5e8;
  int local_5e4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined1 auStack_5a8 [40];
  int local_580;
  int local_57c;
  int local_578;
  int local_574;
  int local_570;
  int local_56c;
  int local_568;
  int local_564;
  int local_560;
  int local_55c;
  int local_558;
  int local_554;
  int local_550;
  int local_54c;
  int local_548;
  int local_544;
  int local_540;
  int local_53c;
  int local_538;
  int local_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined1 auStack_508 [40];
  int local_4e0;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined1 auStack_468 [40];
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined1 auStack_3c8 [40];
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined1 auStack_328 [40];
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined1 auStack_288 [40];
  byte local_260 [512];
  
  if ((0x10 < *(byte *)(param_3 + 0x3f)) ||
     ((*(byte *)(param_3 + 0x3f) == 0x10 &&
      ((*(long *)(param_3 + 0x30) != 0 || *(long *)(param_3 + 0x37) != 0 ||
       ((0x13 < *(byte *)(param_3 + 0x2f) &&
        ((*(byte *)(param_3 + 0x2f) != 0x14 ||
         ((0xdd < *(byte *)(param_3 + 0x2e) &&
          ((*(byte *)(param_3 + 0x2e) != 0xde ||
           ((0xf8 < *(byte *)(param_3 + 0x2d) &&
            ((*(byte *)(param_3 + 0x2d) != 0xf9 ||
             ((0xdd < *(byte *)(param_3 + 0x2c) &&
              ((*(byte *)(param_3 + 0x2c) != 0xde ||
               ((0xa1 < *(byte *)(param_3 + 0x2b) &&
                ((*(byte *)(param_3 + 0x2b) != 0xa2 ||
                 ((0xf6 < *(byte *)(param_3 + 0x2a) &&
                  ((*(byte *)(param_3 + 0x2a) != 0xf7 ||
                   ((0x9b < *(byte *)(param_3 + 0x29) &&
                    ((*(byte *)(param_3 + 0x29) != 0x9c ||
                     ((0xd5 < *(byte *)(param_3 + 0x28) &&
                      ((*(byte *)(param_3 + 0x28) != 0xd6 ||
                       ((0x57 < *(byte *)(param_3 + 0x27) &&
                        ((*(byte *)(param_3 + 0x27) != 0x58 ||
                         ((0x11 < *(byte *)(param_3 + 0x26) &&
                          ((*(byte *)(param_3 + 0x26) != 0x12 ||
                           ((0x62 < *(byte *)(param_3 + 0x25) &&
                            ((*(byte *)(param_3 + 0x25) != 99 ||
                             ((0x19 < *(byte *)(param_3 + 0x24) &&
                              ((*(byte *)(param_3 + 0x24) != 0x1a ||
                               ((0x5b < *(byte *)(param_3 + 0x23) &&
                                ((*(byte *)(param_3 + 0x23) != 0x5c ||
                                 ((0xf4 < *(byte *)(param_3 + 0x22) &&
                                  ((*(byte *)(param_3 + 0x22) != 0xf5 ||
                                   ((0xd2 < *(byte *)(param_3 + 0x21) &&
                                    ((*(byte *)(param_3 + 0x21) != 0xd3 ||
                                     (0xec < *(byte *)(param_3 + 0x20)))))))))))))))))))))))))))))))
                      )))))))))))))))))))))))))))))))))))) {
    return false;
  }
  uVar7 = (ulong)*(byte *)((long)param_4 + 10) << 3 | (ulong)*(byte *)((long)param_4 + 0xb) << 0xb |
          (ulong)(byte)param_4[3] << 0x13;
  uVar8 = (ulong)(byte)param_4[1] << 6 | (ulong)*(byte *)((long)param_4 + 5) << 0xe |
          (ulong)*(byte *)((long)param_4 + 6) << 0x16;
  uVar22 = uVar8 + 0x1000000;
  lVar26 = ((ulong)*(byte *)((long)param_4 + 7) << 5 | (ulong)(byte)param_4[2] << 0xd |
           (ulong)*(byte *)((long)param_4 + 9) << 0x15) + (uVar22 >> 0x19);
  uVar9 = (ulong)*(byte *)((long)param_4 + 0x17) << 5 | (ulong)(byte)param_4[6] << 0xd |
          (ulong)*(byte *)((long)param_4 + 0x19) << 0x15;
  uVar23 = (ulong)*(byte *)((long)param_4 + 0x1d) << 2 |
           (ulong)*(byte *)((long)param_4 + 0x1e) << 10 |
           ((ulong)*(byte *)((long)param_4 + 0x1f) & 0x7f) << 0x12;
  uVar25 = uVar23 + 0x1000000;
  lVar20 = (ulong)*param_4 + (uVar25 >> 0x19) * 0x13;
  uVar24 = uVar7 + 0x1000000;
  lVar29 = ((ulong)*(byte *)((long)param_4 + 0xd) << 2 | (ulong)*(byte *)((long)param_4 + 0xe) << 10
           | (ulong)*(byte *)((long)param_4 + 0xf) << 0x12) + (uVar24 >> 0x19);
  uVar27 = uVar9 + 0x1000000;
  lVar2 = ((ulong)*(byte *)((long)param_4 + 0x1a) << 4 |
           (ulong)*(byte *)((long)param_4 + 0x1b) << 0xc | (ulong)(byte)param_4[7] << 0x14) +
          (uVar27 >> 0x19);
  uVar3 = (ulong)param_4[4] + 0x1000000;
  lVar4 = ((ulong)(byte)param_4[5] << 7 | (ulong)*(byte *)((long)param_4 + 0x15) << 0xf |
          (ulong)*(byte *)((long)param_4 + 0x16) << 0x17) + (uVar3 >> 0x19);
  uVar5 = lVar20 + 0x2000000;
  local_9d8 = (int)lVar20 - ((uint)uVar5 & 0xfc000000);
  uVar6 = lVar26 + 0x2000000;
  iStack_9d4 = ((int)uVar8 - ((uint)uVar22 & 0x7e000000)) + (int)(uVar5 >> 0x1a);
  iStack_9cc = ((int)(uVar6 >> 0x1a) + (int)uVar7) - ((uint)uVar24 & 0xe000000);
  uVar22 = lVar29 + 0x2000000;
  local_9c4 = (param_4[4] + (int)(uVar22 >> 0x1a)) - ((uint)uVar3 & 0xfe000000);
  local_9c8 = (int)lVar29 - ((uint)uVar22 & 0xfc000000);
  uVar22 = lVar4 + 0x2000000;
  local_9c0 = (int)lVar4 - ((uint)uVar22 & 0xfc000000);
  local_9bc = ((int)(uVar22 >> 0x1a) + (int)uVar9) - ((uint)uVar27 & 0x3e000000);
  uVar22 = lVar2 + 0x2000000;
  iStack_9d0 = (int)lVar26 - ((uint)uVar6 & 0xfc000000);
  local_9b8 = (int)lVar2 - ((uint)uVar22 & 0xfc000000);
  iStack_9b4 = ((int)uVar23 + (int)(uVar22 >> 0x1a)) - ((uint)uVar25 & 0x2000000);
  local_98c = 0;
  iStack_9a4 = 0;
  iStack_9a0 = 0;
  iStack_9ac = 0;
  iStack_9a8 = 0;
  iStack_994 = 0;
  iStack_990 = 0;
  iStack_99c = 0;
  iStack_998 = 0;
  local_9b0 = 1;
  FUN_004239e0(&local_ae0);
  FUN_00421730(&local_800,&local_ae0,&DAT_03cecf80);
  local_ae0 = CONCAT44((int)((ulong)local_ae0 >> 0x20) - iStack_9ac,(int)local_ae0 - local_9b0);
  uStack_ad8 = CONCAT44((int)((ulong)uStack_ad8 >> 0x20) - iStack_9a4,(int)uStack_ad8 - iStack_9a8);
  local_ac8 = CONCAT44((int)((ulong)local_ac8 >> 0x20) - iStack_994,(int)local_ac8 - iStack_998);
  local_800 = CONCAT44((int)((ulong)local_800 >> 0x20) + iStack_9ac,(int)local_800 + local_9b0);
  uStack_7f8 = CONCAT44((int)((ulong)uStack_7f8 >> 0x20) + iStack_9a4,(int)uStack_7f8 + iStack_9a8);
  local_ad0 = CONCAT44((int)((ulong)local_ad0 >> 0x20) - iStack_99c,(int)local_ad0 - iStack_9a0);
  local_ac0 = CONCAT44((int)((ulong)local_ac0 >> 0x20) - local_98c,(int)local_ac0 - iStack_990);
  local_7f0 = CONCAT44((int)((ulong)local_7f0 >> 0x20) + iStack_99c,(int)local_7f0 + iStack_9a0);
  local_7e8 = CONCAT44((int)((ulong)local_7e8 >> 0x20) + iStack_994,(int)local_7e8 + iStack_998);
  local_7e0 = CONCAT44((int)((ulong)local_7e0 >> 0x20) + local_98c,(int)local_7e0 + iStack_990);
  FUN_004239e0(&local_8a0,&local_800);
  FUN_00421730(&local_8a0,&local_8a0,&local_800);
  FUN_004239e0(&local_a00,&local_8a0);
  FUN_00421730(&local_a00,&local_a00,&local_800);
  FUN_00421730(&local_a00,&local_a00,&local_ae0);
  FUN_004239e0(local_760,&local_a00);
  FUN_004239e0(local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_260 + 0x100,&local_a00,local_260 + 0x100);
  FUN_00421730(local_760,local_760,local_260 + 0x100);
  FUN_004239e0(local_760,local_760);
  FUN_00421730(local_760,local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_760,local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_260 + 0x100,local_260 + 0x100,local_760);
  FUN_004239e0(local_260,local_260 + 0x100);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_004239e0(local_260,local_260);
  FUN_00421730(local_260 + 0x100,local_260,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_760,local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_760);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_260 + 0x100,local_260 + 0x100,local_760);
  FUN_004239e0(local_260,local_260 + 0x100);
  iVar19 = 99;
  do {
    FUN_004239e0(local_260,local_260);
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  FUN_00421730(local_260 + 0x100,local_260,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_004239e0(local_260 + 0x100,local_260 + 0x100);
  FUN_00421730(local_760,local_260 + 0x100,local_760);
  FUN_004239e0(local_760,local_760);
  FUN_004239e0(local_760,local_760);
  FUN_00421730(&local_a00,local_760,&local_a00);
  FUN_00421730(&local_a00,&local_a00,&local_8a0);
  FUN_00421730(&local_a00,&local_a00,&local_ae0);
  FUN_004239e0(&local_940,&local_a00);
  FUN_00421730(&local_940,&local_940,&local_800);
  iVar19 = (int)local_ae0;
  iVar31 = local_ae0._4_4_;
  local_b60 = CONCAT44(local_93c - local_ae0._4_4_,local_940 - (int)local_ae0);
  iVar28 = (int)uStack_ad8;
  iVar32 = uStack_ad8._4_4_;
  uStack_b58 = CONCAT44(local_934 - uStack_ad8._4_4_,local_938 - (int)uStack_ad8);
  iVar11 = (int)local_ad0;
  iVar12 = local_ad0._4_4_;
  iVar13 = (int)local_ac8;
  local_b50 = CONCAT44(local_92c - local_ad0._4_4_,local_930 - (int)local_ad0);
  iVar14 = local_ac8._4_4_;
  local_b48 = CONCAT44(local_924 - local_ac8._4_4_,local_928 - (int)local_ac8);
  iVar15 = (int)local_ac0;
  iVar16 = local_ac0._4_4_;
  local_b40 = CONCAT44(local_91c - local_ac0._4_4_,local_920 - (int)local_ac0);
  FUN_00421ab0(local_960,&local_b60);
  iVar18 = FUN_003f6d80(local_960,&DAT_03cecfd0,0x20);
  if (iVar18 != 0) {
    local_b60 = CONCAT44(iVar31 + local_93c,iVar19 + local_940);
    uStack_b58 = CONCAT44(iVar32 + local_934,iVar28 + local_938);
    local_b50 = CONCAT44(iVar12 + local_92c,iVar11 + local_930);
    local_b48 = CONCAT44(iVar14 + local_924,iVar13 + local_928);
    local_b40 = CONCAT44(iVar16 + local_91c,iVar15 + local_920);
    FUN_00421ab0(local_960,&local_b60);
    iVar19 = FUN_003f6d80(local_960,&DAT_03cecfd0,0x20);
    if (iVar19 != 0) {
      return false;
    }
    FUN_00421730(&local_a00,&local_a00,&DAT_03cecfa8);
  }
  FUN_00421ab0(local_960,&local_a00);
  if ((local_960[0] & 1) != *(byte *)((long)param_4 + 0x1f) >> 7) {
    local_9f0 = CONCAT44(-(int)((ulong)local_9f0 >> 0x20),-(int)local_9f0);
    local_9e8 = CONCAT44(-(int)((ulong)local_9e8 >> 0x20),-(int)local_9e8);
    local_a00 = CONCAT44(-(int)((ulong)local_a00 >> 0x20),-(int)local_a00);
    uStack_9f8 = CONCAT44(-(int)((ulong)uStack_9f8 >> 0x20),-(int)uStack_9f8);
    local_9e0 = CONCAT44(-(int)((ulong)local_9e0 >> 0x20),-(int)local_9e0);
  }
  FUN_00421730(&local_988,&local_a00,&local_9d8);
  iVar19 = (int)local_a00;
  local_a00._4_4_ = -(int)((ulong)local_a00 >> 0x20);
  iVar31 = (int)uStack_9f8;
  uStack_9f8._4_4_ = -(int)((ulong)uStack_9f8 >> 0x20);
  iVar28 = (int)local_9f0;
  local_9f0._4_4_ = -(int)((ulong)local_9f0 >> 0x20);
  iVar32 = (int)local_9e8;
  local_9e8._4_4_ = -(int)((ulong)local_9e8 >> 0x20);
  uVar22 = (ulong)local_9e0 >> 0x20;
  local_9e0._0_4_ = -(int)local_9e0;
  local_9e0._4_4_ = -(int)uVar22;
  local_988 = CONCAT44(-(int)((ulong)local_988 >> 0x20),-(int)local_988);
  uStack_980 = CONCAT44(-(int)((ulong)uStack_980 >> 0x20),-(int)uStack_980);
  local_978 = CONCAT44(-(int)((ulong)local_978 >> 0x20),-(int)local_978);
  uStack_970 = CONCAT44(-(int)((ulong)uStack_970 >> 0x20),-(int)uStack_970);
  local_968 = CONCAT44(-(int)((ulong)local_968 >> 0x20),-(int)local_968);
  local_a00._0_4_ = -iVar19;
  uStack_9f8._0_4_ = -iVar31;
  local_9f0._0_4_ = -iVar28;
  local_9e8._0_4_ = -iVar32;
  FUN_00475350(&local_ae0);
  FUN_004766e0(&local_ae0,param_3,0x20);
  FUN_004766e0(&local_ae0,param_4,0x20);
  FUN_004766e0(&local_ae0,param_1,param_2);
  FUN_00475390(local_ba0,&local_ae0);
  FUN_00418eb0(local_ba0);
  uVar22 = 0;
  do {
    bVar10 = local_ba0[uVar22 >> 3 & 0x1fffffff];
    uVar30 = (uint)uVar22 & 4;
    uVar25 = uVar22 + 4;
    local_260[uVar22 + 0x100] = bVar10 >> (uVar22 & 4) & 1;
    local_260[uVar22 + 0x101] = bVar10 >> (ulong)(uVar30 | 1) & 1;
    local_260[uVar22 + 0x102] = bVar10 >> (ulong)(uVar30 | 2) & 1;
    local_260[uVar22 + 0x103] = bVar10 >> (ulong)(uVar30 | 3) & 1;
    uVar22 = uVar25;
  } while (uVar25 != 0x100);
  pbVar1 = local_260 + 0x100;
  uVar22 = 0;
  uVar25 = (ulong)pbVar1 | 2;
  uVar24 = (ulong)pbVar1 | 1;
  uVar30 = 0xfe;
  lVar26 = 1;
  do {
    if ((uVar22 < 0xff) && (pbVar1[uVar22] != 0)) {
      uVar21 = uVar30;
      if (4 < uVar30) {
        uVar21 = 5;
      }
      iVar19 = (int)(char)pbVar1[lVar26];
      if (iVar19 != 0) {
        iVar31 = iVar19 * 2 + (int)(char)pbVar1[uVar22];
        if (iVar31 < 0x10) {
          pbVar1[uVar22] = (byte)iVar31;
          pbVar1[lVar26] = 0;
        }
        else {
          iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -2;
          if (iVar19 < -0xf) goto LAB_0041ab8c;
          pbVar1[uVar22] = (byte)iVar19;
          uVar27 = uVar22;
          do {
            if (*(char *)(uVar24 + uVar27) == '\0') {
              *(undefined1 *)(uVar24 + uVar27) = 1;
              break;
            }
            *(undefined1 *)(uVar24 + uVar27) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar27 < 0xff);
        }
      }
      if (uVar21 != 0) {
        iVar19 = (int)(char)pbVar1[lVar26 + 1];
        if (iVar19 != 0) {
          iVar31 = iVar19 * 4 + (int)(char)pbVar1[uVar22];
          if (iVar31 < 0x10) {
            pbVar1[uVar22] = (byte)iVar31;
            pbVar1[lVar26 + 1] = 0;
          }
          else {
            iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -4;
            if (iVar19 < -0xf) goto LAB_0041ab8c;
            lVar29 = 0;
            pbVar1[uVar22] = (byte)iVar19;
            do {
              if (*(char *)(uVar25 + lVar29) == '\0') {
                *(undefined1 *)(uVar25 + lVar29) = 1;
                break;
              }
              *(undefined1 *)(uVar25 + lVar29) = 0;
              lVar29 = lVar29 + 1;
            } while ((ulong)(lVar26 + lVar29) < 0xff);
          }
        }
        if (uVar21 != 1) {
          uVar27 = lVar26 + 2;
          iVar19 = (int)(char)pbVar1[uVar27];
          if (iVar19 != 0) {
            iVar31 = iVar19 * 8 + (int)(char)pbVar1[uVar22];
            if (iVar31 < 0x10) {
              pbVar1[uVar22] = (byte)iVar31;
              pbVar1[uVar27] = 0;
            }
            else {
              iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -8;
              if (iVar19 < -0xf) goto LAB_0041ab8c;
              pbVar1[uVar22] = (byte)iVar19;
              do {
                if (pbVar1[uVar27] == 0) {
                  pbVar1[uVar27] = 1;
                  break;
                }
                pbVar1[uVar27] = 0;
                bVar17 = uVar27 < 0xff;
                uVar27 = uVar27 + 1;
              } while (bVar17);
            }
          }
          if (uVar21 != 2) {
            uVar27 = lVar26 + 3;
            iVar19 = (int)(char)pbVar1[uVar27];
            if (iVar19 != 0) {
              iVar31 = iVar19 * 0x10 + (int)(char)pbVar1[uVar22];
              if (iVar31 < 0x10) {
                pbVar1[uVar22] = (byte)iVar31;
                pbVar1[uVar27] = 0;
              }
              else {
                iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -0x10;
                if (iVar19 < -0xf) goto LAB_0041ab8c;
                pbVar1[uVar22] = (byte)iVar19;
                do {
                  if (pbVar1[uVar27] == 0) {
                    pbVar1[uVar27] = 1;
                    break;
                  }
                  pbVar1[uVar27] = 0;
                  bVar17 = uVar27 < 0xff;
                  uVar27 = uVar27 + 1;
                } while (bVar17);
              }
            }
            if (uVar21 != 3) {
              uVar27 = lVar26 + 4;
              iVar19 = (int)(char)pbVar1[uVar27];
              if (iVar19 != 0) {
                iVar31 = iVar19 * 0x20 + (int)(char)pbVar1[uVar22];
                if (iVar31 < 0x10) {
                  pbVar1[uVar22] = (byte)iVar31;
                  pbVar1[uVar27] = 0;
                }
                else {
                  iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -0x20;
                  if (iVar19 < -0xf) goto LAB_0041ab8c;
                  pbVar1[uVar22] = (byte)iVar19;
                  do {
                    if (pbVar1[uVar27] == 0) {
                      pbVar1[uVar27] = 1;
                      break;
                    }
                    pbVar1[uVar27] = 0;
                    bVar17 = uVar27 < 0xff;
                    uVar27 = uVar27 + 1;
                  } while (bVar17);
                }
              }
              if (uVar21 != 4) {
                uVar27 = lVar26 + 5;
                iVar19 = (int)(char)pbVar1[uVar27];
                if (iVar19 != 0) {
                  iVar31 = iVar19 * 0x40 + (int)(char)pbVar1[uVar22];
                  if (iVar31 < 0x10) {
                    pbVar1[uVar22] = (byte)iVar31;
                    pbVar1[uVar27] = 0;
                  }
                  else {
                    iVar19 = (int)(char)pbVar1[uVar22] + iVar19 * -0x40;
                    if (-0x10 < iVar19) {
                      pbVar1[uVar22] = (byte)iVar19;
                      do {
                        if (pbVar1[uVar27] == 0) {
                          pbVar1[uVar27] = 1;
                          break;
                        }
                        pbVar1[uVar27] = 0;
                        bVar17 = uVar27 < 0xff;
                        uVar27 = uVar27 + 1;
                      } while (bVar17);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0041ab8c:
    uVar22 = uVar22 + 1;
    lVar26 = lVar26 + 1;
    uVar30 = uVar30 - 1;
    uVar25 = uVar25 + 1;
  } while (uVar22 != 0x100);
  uVar22 = 0;
  do {
    bVar10 = ((byte *)(param_3 + 0x20))[uVar22 >> 3 & 0x1fffffff];
    uVar30 = (uint)uVar22 & 4;
    uVar25 = uVar22 + 4;
    local_260[uVar22] = bVar10 >> (uVar22 & 4) & 1;
    local_260[uVar22 + 1] = bVar10 >> (ulong)(uVar30 | 1) & 1;
    local_260[uVar22 + 2] = bVar10 >> (ulong)(uVar30 | 2) & 1;
    local_260[uVar22 + 3] = bVar10 >> (ulong)(uVar30 | 3) & 1;
    uVar22 = uVar25;
  } while (uVar25 != 0x100);
  uVar22 = 0;
  uVar25 = (ulong)local_260 | 2;
  uVar24 = (ulong)local_260 | 1;
  uVar30 = 0xfe;
  lVar26 = 1;
  do {
    if ((uVar22 < 0xff) && (local_260[uVar22] != 0)) {
      uVar21 = uVar30;
      if (4 < uVar30) {
        uVar21 = 5;
      }
      iVar19 = (int)(char)local_260[lVar26];
      if (iVar19 != 0) {
        iVar28 = (int)(char)local_260[uVar22];
        iVar31 = iVar19 * 2 + iVar28;
        if (iVar31 < 0x10) {
          local_260[uVar22] = (byte)iVar31;
          local_260[lVar26] = 0;
        }
        else {
          iVar28 = iVar28 + iVar19 * -2;
          if (iVar28 < -0xf) goto LAB_0041aecc;
          local_260[uVar22] = (byte)iVar28;
          uVar27 = uVar22;
          do {
            if (*(char *)(uVar24 + uVar27) == '\0') {
              *(undefined1 *)(uVar24 + uVar27) = 1;
              break;
            }
            *(undefined1 *)(uVar24 + uVar27) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar27 < 0xff);
        }
      }
      if (uVar21 != 0) {
        iVar19 = (int)(char)local_260[lVar26 + 1];
        if (iVar19 != 0) {
          iVar28 = (int)(char)local_260[uVar22];
          iVar31 = iVar19 * 4 + iVar28;
          if (iVar31 < 0x10) {
            local_260[uVar22] = (byte)iVar31;
            local_260[lVar26 + 1] = 0;
          }
          else {
            iVar28 = iVar28 + iVar19 * -4;
            if (iVar28 < -0xf) goto LAB_0041aecc;
            lVar29 = 0;
            local_260[uVar22] = (byte)iVar28;
            do {
              if (*(char *)(uVar25 + lVar29) == '\0') {
                *(undefined1 *)(uVar25 + lVar29) = 1;
                break;
              }
              *(undefined1 *)(uVar25 + lVar29) = 0;
              lVar29 = lVar29 + 1;
            } while ((ulong)(lVar26 + lVar29) < 0xff);
          }
        }
        if (uVar21 != 1) {
          uVar27 = lVar26 + 2;
          iVar19 = (int)(char)local_260[uVar27];
          if (iVar19 != 0) {
            iVar28 = (int)(char)local_260[uVar22];
            iVar31 = iVar19 * 8 + iVar28;
            if (iVar31 < 0x10) {
              local_260[uVar22] = (byte)iVar31;
              local_260[uVar27] = 0;
            }
            else {
              iVar28 = iVar28 + iVar19 * -8;
              if (iVar28 < -0xf) goto LAB_0041aecc;
              local_260[uVar22] = (byte)iVar28;
              do {
                if (local_260[uVar27] == 0) {
                  local_260[uVar27] = 1;
                  break;
                }
                local_260[uVar27] = 0;
                bVar17 = uVar27 < 0xff;
                uVar27 = uVar27 + 1;
              } while (bVar17);
            }
          }
          if (uVar21 != 2) {
            uVar27 = lVar26 + 3;
            iVar19 = (int)(char)local_260[uVar27];
            if (iVar19 != 0) {
              iVar28 = (int)(char)local_260[uVar22];
              iVar31 = iVar19 * 0x10 + iVar28;
              if (iVar31 < 0x10) {
                local_260[uVar22] = (byte)iVar31;
                local_260[uVar27] = 0;
              }
              else {
                iVar28 = iVar28 + iVar19 * -0x10;
                if (iVar28 < -0xf) goto LAB_0041aecc;
                local_260[uVar22] = (byte)iVar28;
                do {
                  if (local_260[uVar27] == 0) {
                    local_260[uVar27] = 1;
                    break;
                  }
                  local_260[uVar27] = 0;
                  bVar17 = uVar27 < 0xff;
                  uVar27 = uVar27 + 1;
                } while (bVar17);
              }
            }
            if (uVar21 != 3) {
              uVar27 = lVar26 + 4;
              iVar19 = (int)(char)local_260[uVar27];
              if (iVar19 != 0) {
                iVar28 = (int)(char)local_260[uVar22];
                iVar31 = iVar19 * 0x20 + iVar28;
                if (iVar31 < 0x10) {
                  local_260[uVar22] = (byte)iVar31;
                  local_260[uVar27] = 0;
                }
                else {
                  iVar28 = iVar28 + iVar19 * -0x20;
                  if (iVar28 < -0xf) goto LAB_0041aecc;
                  local_260[uVar22] = (byte)iVar28;
                  do {
                    if (local_260[uVar27] == 0) {
                      local_260[uVar27] = 1;
                      break;
                    }
                    local_260[uVar27] = 0;
                    bVar17 = uVar27 < 0xff;
                    uVar27 = uVar27 + 1;
                  } while (bVar17);
                }
              }
              if (uVar21 != 4) {
                uVar27 = lVar26 + 5;
                iVar19 = (int)(char)local_260[uVar27];
                if (iVar19 != 0) {
                  iVar28 = (int)(char)local_260[uVar22];
                  iVar31 = iVar19 * 0x40 + iVar28;
                  if (iVar31 < 0x10) {
                    local_260[uVar22] = (byte)iVar31;
                    local_260[uVar27] = 0;
                  }
                  else {
                    iVar28 = iVar28 + iVar19 * -0x40;
                    if (-0x10 < iVar28) {
                      local_260[uVar22] = (byte)iVar28;
                      do {
                        if (local_260[uVar27] == 0) {
                          local_260[uVar27] = 1;
                          break;
                        }
                        local_260[uVar27] = 0;
                        bVar17 = uVar27 < 0xff;
                        uVar27 = uVar27 + 1;
                      } while (bVar17);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0041aecc:
    uVar22 = uVar22 + 1;
    lVar26 = lVar26 + 1;
    uVar30 = uVar30 - 1;
    uVar25 = uVar25 + 1;
  } while (uVar22 != 0x100);
  local_760[1] = local_a00._4_4_ + iStack_9d4;
  local_760[0] = (int)local_a00 + local_9d8;
  local_738[0] = local_9d8 - (int)local_a00;
  local_760[3] = uStack_9f8._4_4_ + iStack_9cc;
  local_760[2] = (int)uStack_9f8 + iStack_9d0;
  local_74c = local_9f0._4_4_ + local_9c4;
  local_750 = (int)local_9f0 + local_9c8;
  local_744 = local_9e8._4_4_ + local_9bc;
  local_748 = (int)local_9e8 + local_9c0;
  local_738[1] = iStack_9d4 - local_a00._4_4_;
  local_738[3] = iStack_9cc - uStack_9f8._4_4_;
  local_724 = local_9c4 - local_9f0._4_4_;
  local_71c = local_9bc - local_9e8._4_4_;
  local_714 = iStack_9b4 - local_9e0._4_4_;
  local_73c = local_9e0._4_4_ + iStack_9b4;
  local_738[2] = iStack_9d0 - (int)uStack_9f8;
  local_728 = local_9c8 - (int)local_9f0;
  local_720 = local_9c0 - (int)local_9e8;
  local_718 = local_9b8 - (int)local_9e0;
  local_6f0 = CONCAT44(local_98c,iStack_990);
  local_710[1] = CONCAT44(iStack_9a4,iStack_9a8);
  local_710[0] = CONCAT44(iStack_9ac,local_9b0);
  local_710[3] = CONCAT44(iStack_994,iStack_998);
  local_710[2] = CONCAT44(iStack_99c,iStack_9a0);
  local_740 = (int)local_9e0 + local_9b8;
  FUN_00421730(auStack_6e8,&local_988,&DAT_03ced3b0);
  iStack_898 = (int)uStack_9f8;
  iStack_894 = uStack_9f8._4_4_;
  local_8a0 = (int)local_a00;
  iStack_89c = local_a00._4_4_;
  local_888 = (int)local_9e8;
  local_884 = local_9e8._4_4_;
  local_890 = (int)local_9f0;
  local_88c = local_9f0._4_4_;
  iStack_870 = iStack_9d0;
  iStack_86c = iStack_9cc;
  local_878 = local_9d8;
  iStack_874 = iStack_9d4;
  iStack_860 = local_9c0;
  iStack_85c = local_9bc;
  local_868 = local_9c8;
  iStack_864 = local_9c4;
  local_880 = (int)local_9e0;
  iStack_87c = local_9e0._4_4_;
  local_858 = local_9b8;
  iStack_854 = iStack_9b4;
  local_830 = CONCAT44(local_98c,iStack_990);
  uStack_848 = CONCAT44(iStack_9a4,iStack_9a8);
  local_850 = CONCAT44(iStack_9ac,local_9b0);
  local_838 = CONCAT44(iStack_994,iStack_998);
  local_840 = CONCAT44(iStack_99c,iStack_9a0);
  FUN_00423520(&local_800,&local_8a0);
  FUN_00421730(&local_940,&local_800,&local_788);
  FUN_00421730(auStack_918,&local_7d8,&local_7b0);
  FUN_00421730(auStack_8f0,&local_7b0,&local_788);
  FUN_00421730(auStack_8c8,&local_800,&local_7d8);
  FUN_00423c20(&local_800,&local_940,local_760);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_6c0 = local_8a0 + local_878;
  local_6bc = iStack_89c + iStack_874;
  local_6b8 = iStack_898 + iStack_870;
  local_6b4 = iStack_894 + iStack_86c;
  uStack_658 = local_838;
  local_660 = local_840;
  uStack_668 = uStack_848;
  local_670 = local_850;
  local_698 = local_878 - local_8a0;
  local_690 = iStack_870 - iStack_898;
  local_694 = iStack_874 - iStack_89c;
  local_68c = iStack_86c - iStack_894;
  local_6b0 = local_890 + local_868;
  local_6ac = local_88c + iStack_864;
  local_6a8 = local_888 + iStack_860;
  local_688 = local_868 - local_890;
  local_6a4 = local_884 + iStack_85c;
  local_680 = iStack_860 - local_888;
  local_678 = local_858 - local_880;
  local_684 = iStack_864 - local_88c;
  local_67c = iStack_85c - local_884;
  local_6a0 = local_880 + local_858;
  local_69c = iStack_87c + iStack_854;
  local_674 = iStack_854 - iStack_87c;
  local_650 = local_830;
  FUN_00421730(auStack_648,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_6c0);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_620 = local_8a0 + local_878;
  local_61c = iStack_89c + iStack_874;
  local_618 = iStack_898 + iStack_870;
  local_614 = iStack_894 + iStack_86c;
  uStack_5b8 = local_838;
  local_5c0 = local_840;
  uStack_5c8 = uStack_848;
  local_5d0 = local_850;
  local_5f8 = local_878 - local_8a0;
  local_5f4 = iStack_874 - iStack_89c;
  local_5f0 = iStack_870 - iStack_898;
  local_5ec = iStack_86c - iStack_894;
  local_610 = local_890 + local_868;
  local_60c = local_88c + iStack_864;
  local_5e8 = local_868 - local_890;
  local_5e4 = iStack_864 - local_88c;
  local_5e0 = iStack_860 - local_888;
  local_608 = local_888 + iStack_860;
  local_604 = local_884 + iStack_85c;
  local_5dc = iStack_85c - local_884;
  local_5d8 = local_858 - local_880;
  local_5d4 = iStack_854 - iStack_87c;
  local_600 = local_880 + local_858;
  local_5fc = iStack_87c + iStack_854;
  local_5b0 = local_830;
  FUN_00421730(auStack_5a8,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_620);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_580 = local_8a0 + local_878;
  local_57c = iStack_89c + iStack_874;
  local_578 = iStack_898 + iStack_870;
  local_574 = iStack_894 + iStack_86c;
  uStack_518 = local_838;
  local_520 = local_840;
  uStack_528 = uStack_848;
  local_530 = local_850;
  local_558 = local_878 - local_8a0;
  local_554 = iStack_874 - iStack_89c;
  local_550 = iStack_870 - iStack_898;
  local_54c = iStack_86c - iStack_894;
  local_570 = local_890 + local_868;
  local_56c = local_88c + iStack_864;
  local_548 = local_868 - local_890;
  local_544 = iStack_864 - local_88c;
  local_540 = iStack_860 - local_888;
  local_568 = local_888 + iStack_860;
  local_564 = local_884 + iStack_85c;
  local_53c = iStack_85c - local_884;
  local_538 = local_858 - local_880;
  local_534 = iStack_854 - iStack_87c;
  local_560 = local_880 + local_858;
  local_55c = iStack_87c + iStack_854;
  local_510 = local_830;
  FUN_00421730(auStack_508,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_580);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_4e0 = local_8a0 + local_878;
  local_4dc = iStack_89c + iStack_874;
  local_4d8 = iStack_898 + iStack_870;
  local_4d4 = iStack_894 + iStack_86c;
  uStack_478 = local_838;
  local_480 = local_840;
  uStack_488 = uStack_848;
  local_490 = local_850;
  local_4b8 = local_878 - local_8a0;
  local_4b4 = iStack_874 - iStack_89c;
  local_4b0 = iStack_870 - iStack_898;
  local_4ac = iStack_86c - iStack_894;
  local_4d0 = local_890 + local_868;
  local_4cc = local_88c + iStack_864;
  local_4a8 = local_868 - local_890;
  local_4a4 = iStack_864 - local_88c;
  local_4a0 = iStack_860 - local_888;
  local_4c8 = local_888 + iStack_860;
  local_4c4 = local_884 + iStack_85c;
  local_49c = iStack_85c - local_884;
  local_498 = local_858 - local_880;
  local_494 = iStack_854 - iStack_87c;
  local_4c0 = local_880 + local_858;
  local_4bc = iStack_87c + iStack_854;
  local_470 = local_830;
  FUN_00421730(auStack_468,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_4e0);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_440 = local_8a0 + local_878;
  local_43c = iStack_89c + iStack_874;
  local_438 = iStack_898 + iStack_870;
  local_434 = iStack_894 + iStack_86c;
  uStack_3d8 = local_838;
  local_3e0 = local_840;
  uStack_3e8 = uStack_848;
  local_3f0 = local_850;
  local_418 = local_878 - local_8a0;
  local_414 = iStack_874 - iStack_89c;
  local_410 = iStack_870 - iStack_898;
  local_40c = iStack_86c - iStack_894;
  local_430 = local_890 + local_868;
  local_42c = local_88c + iStack_864;
  local_408 = local_868 - local_890;
  local_404 = iStack_864 - local_88c;
  local_400 = iStack_860 - local_888;
  local_428 = local_888 + iStack_860;
  local_424 = local_884 + iStack_85c;
  local_3fc = iStack_85c - local_884;
  local_3f8 = local_858 - local_880;
  local_3f4 = iStack_854 - iStack_87c;
  local_420 = local_880 + local_858;
  local_41c = iStack_87c + iStack_854;
  local_3d0 = local_830;
  FUN_00421730(auStack_3c8,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_440);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_3a0 = local_8a0 + local_878;
  local_39c = iStack_89c + iStack_874;
  local_398 = iStack_898 + iStack_870;
  local_394 = iStack_894 + iStack_86c;
  uStack_338 = local_838;
  local_340 = local_840;
  uStack_348 = uStack_848;
  local_350 = local_850;
  local_378 = local_878 - local_8a0;
  local_374 = iStack_874 - iStack_89c;
  local_370 = iStack_870 - iStack_898;
  local_36c = iStack_86c - iStack_894;
  local_390 = local_890 + local_868;
  local_38c = local_88c + iStack_864;
  local_368 = local_868 - local_890;
  local_364 = iStack_864 - local_88c;
  local_360 = iStack_860 - local_888;
  local_388 = local_888 + iStack_860;
  local_384 = local_884 + iStack_85c;
  local_35c = iStack_85c - local_884;
  local_358 = local_858 - local_880;
  local_354 = iStack_854 - iStack_87c;
  local_380 = local_880 + local_858;
  local_37c = iStack_87c + iStack_854;
  local_330 = local_830;
  FUN_00421730(auStack_328,auStack_828,&DAT_03ced3b0);
  FUN_00423c20(&local_800,&local_940,&local_3a0);
  FUN_00421730(&local_8a0,&local_800,&local_788);
  FUN_00421730(&local_878,&local_7d8,&local_7b0);
  FUN_00421730(&local_850,&local_7b0,&local_788);
  FUN_00421730(auStack_828,&local_800,&local_7d8);
  local_300 = local_8a0 + local_878;
  local_2fc = iStack_89c + iStack_874;
  local_2f8 = iStack_898 + iStack_870;
  local_2f4 = iStack_894 + iStack_86c;
  uStack_298 = local_838;
  local_2a0 = local_840;
  uStack_2a8 = uStack_848;
  local_2b0 = local_850;
  local_2d8 = local_878 - local_8a0;
  local_2d4 = iStack_874 - iStack_89c;
  local_2d0 = iStack_870 - iStack_898;
  local_2cc = iStack_86c - iStack_894;
  local_2f0 = local_890 + local_868;
  local_2ec = local_88c + iStack_864;
  local_2c8 = local_868 - local_890;
  local_2c4 = iStack_864 - local_88c;
  local_2c0 = iStack_860 - local_888;
  local_2e8 = local_888 + iStack_860;
  local_2e4 = local_884 + iStack_85c;
  local_2bc = iStack_85c - local_884;
  local_2b8 = local_858 - local_880;
  local_2b4 = iStack_854 - iStack_87c;
  local_2e0 = local_880 + local_858;
  local_2dc = iStack_87c + iStack_854;
  local_290 = local_830;
  FUN_00421730(auStack_288,auStack_828,&DAT_03ced3b0);
  uStack_b58 = 0;
  local_b60 = 0;
  local_b48 = 0;
  local_b50 = 0;
  uVar22 = 0xff;
  local_b40 = 0;
  local_b14 = 0x100000000;
  local_b38 = 1;
  local_aec = 0;
  uStack_b2c = 0;
  local_b34 = 0;
  uStack_b1c = 0;
  local_b24 = 0;
  uStack_b04 = 0;
  local_b0c = 0;
  uStack_af4 = 0;
  local_afc = 0;
  do {
    if ((local_260[uVar22 + 0x100] != 0) || (local_260[uVar22] != 0)) {
LAB_0041bda4:
      if (-1 < (int)uVar22) {
        uVar22 = uVar22 & 0xffffffff;
        goto LAB_0041be54;
      }
      break;
    }
    uVar25 = (ulong)((int)uVar22 - 1);
    if ((local_260[uVar25 + 0x100] != 0) || (local_260[uVar25] != 0)) {
      uVar22 = (ulong)((int)uVar22 - 1);
      goto LAB_0041bda4;
    }
    uVar22 = uVar22 - 2;
  } while ((int)uVar22 != -1);
  goto LAB_0041c6a0;
LAB_0041be54:
  do {
    FUN_00423520(&local_800,&local_b60);
    bVar10 = local_260[uVar22 + 0x100];
    if ((char)bVar10 < '\x01') {
      if ((char)bVar10 < '\0') {
        FUN_00421730(&local_8a0,&local_800,&local_788);
        FUN_00421730(&local_878,&local_7d8,&local_7b0);
        FUN_00421730(&local_850,&local_7b0,&local_788);
        FUN_00421730(auStack_828,&local_800,&local_7d8);
        local_800._0_4_ = local_8a0 + local_878;
        local_800._4_4_ = iStack_89c + iStack_874;
        local_7d8 = local_878 - local_8a0;
        local_7d4 = iStack_874 - iStack_89c;
        uStack_7f8._0_4_ = iStack_898 + iStack_870;
        uStack_7f8._4_4_ = iStack_894 + iStack_86c;
        local_7cc = iStack_86c - iStack_894;
        local_7f0._0_4_ = local_890 + local_868;
        local_7f0._4_4_ = local_88c + iStack_864;
        local_7e8._4_4_ = local_884 + iStack_85c;
        local_7e8._0_4_ = local_888 + iStack_860;
        local_7d0 = iStack_870 - iStack_898;
        local_7c8 = local_868 - local_890;
        local_7c4 = iStack_864 - local_88c;
        local_7c0 = iStack_860 - local_888;
        local_7bc = iStack_85c - local_884;
        local_7b8 = local_858 - local_880;
        local_7b4 = iStack_854 - iStack_87c;
        lVar26 = (long)-((int)(char)(bVar10 - ((char)bVar10 >> 7)) >> 1);
        local_7e0._0_4_ = local_880 + local_858;
        local_7e0._4_4_ = iStack_87c + iStack_854;
        FUN_00421730(&local_7b0,&local_800,local_738 + lVar26 * 0x28);
        FUN_00421730(&local_7d8,&local_7d8,local_760 + lVar26 * 0x28);
        FUN_00421730(&local_788,auStack_6e8 + lVar26 * 0xa0,auStack_828);
        FUN_00421730(&local_800,&local_850,local_710 + lVar26 * 0x14);
        iVar16 = local_7e0._4_4_;
        iVar15 = (int)local_7e0;
        iVar14 = local_7e8._4_4_;
        iVar13 = (int)local_7e8;
        iVar12 = local_7f0._4_4_;
        iVar11 = (int)local_7f0;
        iVar32 = uStack_7f8._4_4_;
        iVar28 = (int)uStack_7f8;
        iVar31 = local_800._4_4_;
        iVar19 = (int)local_800;
        local_800 = CONCAT44(local_7ac - local_7d4,local_7b0 - local_7d8);
        uStack_7f8 = CONCAT44(local_7a4 - local_7cc,local_7a8 - local_7d0);
        local_7f0 = CONCAT44(local_79c - local_7c4,local_7a0 - local_7c8);
        local_7e8 = CONCAT44(local_794 - local_7bc,local_798 - local_7c0);
        local_7e0 = CONCAT44(local_78c - local_7b4,local_790 - local_7b8);
        local_7d8 = local_7d8 + local_7b0;
        local_7d4 = local_7d4 + local_7ac;
        local_7d0 = local_7d0 + local_7a8;
        local_7cc = local_7cc + local_7a4;
        local_7c8 = local_7c8 + local_7a0;
        local_7c4 = local_7c4 + local_79c;
        local_7c0 = local_7c0 + local_798;
        local_7bc = local_7bc + local_794;
        local_7b8 = local_7b8 + local_790;
        local_7b4 = local_7b4 + local_78c;
        local_7b0 = iVar19 * 2 - local_788;
        local_7ac = iVar31 * 2 - local_784;
        local_7a8 = iVar28 * 2 - local_780;
        local_7a4 = iVar32 * 2 - local_77c;
        local_7a0 = iVar11 * 2 - local_778;
        local_79c = iVar12 * 2 - local_774;
        local_788 = local_788 + iVar19 * 2;
        local_784 = local_784 + iVar31 * 2;
        local_780 = local_780 + iVar28 * 2;
        local_77c = local_77c + iVar32 * 2;
        local_778 = local_778 + iVar11 * 2;
        local_774 = local_774 + iVar12 * 2;
        local_798 = iVar13 * 2 - local_770;
        local_794 = iVar14 * 2 - local_76c;
        local_770 = local_770 + iVar13 * 2;
        local_76c = local_76c + iVar14 * 2;
        local_790 = iVar15 * 2 - local_768;
        local_78c = iVar16 * 2 - local_764;
        local_768 = local_768 + iVar15 * 2;
        local_764 = local_764 + iVar16 * 2;
        bVar10 = local_260[uVar22];
        goto joined_r0x0041c698;
      }
      uVar30 = (uint)(char)local_260[uVar22];
      uVar21 = (int)(char)local_260[uVar22];
      if ((int)uVar30 < 1) goto LAB_0041bef8;
LAB_0041bdb8:
      FUN_00421730(&local_8a0,&local_800,&local_788);
      FUN_00421730(&local_878,&local_7d8,&local_7b0);
      FUN_00421730(&local_850,&local_7b0,&local_788);
      FUN_00421730(auStack_828,&local_800,&local_7d8);
      FUN_004231d0(&local_800,&local_8a0,(uVar30 >> 1 & 0x7f) * 0x78 + 0x3cecff0);
    }
    else {
      FUN_00421730(&local_8a0,&local_800,&local_788);
      FUN_00421730(&local_878,&local_7d8,&local_7b0);
      FUN_00421730(&local_850,&local_7b0,&local_788);
      FUN_00421730(auStack_828,&local_800,&local_7d8);
      FUN_00423c20(&local_800,&local_8a0,local_760 + (ulong)(bVar10 >> 1) * 0x28);
      bVar10 = local_260[uVar22];
joined_r0x0041c698:
      uVar30 = (uint)(char)bVar10;
      uVar21 = uVar30;
      if (0 < (int)uVar30) goto LAB_0041bdb8;
LAB_0041bef8:
      if ((int)uVar21 < 0) {
        FUN_00421730(&local_8a0,&local_800,&local_788);
        FUN_00421730(&local_878,&local_7d8,&local_7b0);
        FUN_00421730(&local_850,&local_7b0,&local_788);
        FUN_00421730(auStack_828,&local_800,&local_7d8);
        local_800._0_4_ = local_8a0 + local_878;
        local_800._4_4_ = iStack_89c + iStack_874;
        local_7d4 = iStack_874 - iStack_89c;
        uStack_7f8._0_4_ = iStack_898 + iStack_870;
        uStack_7f8._4_4_ = iStack_894 + iStack_86c;
        local_7f0._0_4_ = local_890 + local_868;
        local_7f0._4_4_ = local_88c + iStack_864;
        local_7e8._0_4_ = local_888 + iStack_860;
        local_7e8._4_4_ = local_884 + iStack_85c;
        local_7e0._0_4_ = local_880 + local_858;
        local_7e0._4_4_ = iStack_87c + iStack_854;
        local_7d8 = local_878 - local_8a0;
        local_7d0 = iStack_870 - iStack_898;
        local_7cc = iStack_86c - iStack_894;
        local_7c8 = local_868 - local_890;
        local_7c4 = iStack_864 - local_88c;
        local_7c0 = iStack_860 - local_888;
        local_7bc = iStack_85c - local_884;
        local_7b8 = local_858 - local_880;
        local_7b4 = iStack_854 - iStack_87c;
        lVar26 = (long)-((int)(char)((char)uVar21 + (char)((uVar21 & 0x80) >> 7)) >> 1) * 0x78;
        FUN_00421730(&local_7b0,&local_800,&UNK_03ced018 + lVar26);
        FUN_00421730(&local_7d8,&local_7d8,&UNK_03cecff0 + lVar26);
        FUN_00421730(&local_788,&UNK_03ced040 + lVar26,auStack_828);
        local_800 = CONCAT44(local_7ac - local_7d4,local_7b0 - local_7d8);
        uStack_7f8 = CONCAT44(local_7a4 - local_7cc,local_7a8 - local_7d0);
        local_7f0 = CONCAT44(local_79c - local_7c4,local_7a0 - local_7c8);
        local_7e8 = CONCAT44(local_794 - local_7bc,local_798 - local_7c0);
        local_7d8 = local_7d8 + local_7b0;
        local_7d0 = local_7d0 + local_7a8;
        local_7c0 = local_7c0 + local_798;
        local_7bc = local_7bc + local_794;
        local_7d4 = local_7d4 + local_7ac;
        iVar19 = local_7b8 + local_790;
        iVar31 = local_7b4 + local_78c;
        local_7cc = local_7cc + local_7a4;
        local_7c8 = local_7c8 + local_7a0;
        local_7c4 = local_7c4 + local_79c;
        local_7b0 = (int)local_850 * 2 - local_788;
        local_788 = local_788 + (int)local_850 * 2;
        local_7ac = local_850._4_4_ * 2 - local_784;
        local_784 = local_784 + local_850._4_4_ * 2;
        local_7a8 = (int)uStack_848 * 2 - local_780;
        local_7a4 = uStack_848._4_4_ * 2 - local_77c;
        local_7a0 = (int)local_840 * 2 - local_778;
        local_79c = local_840._4_4_ * 2 - local_774;
        local_780 = local_780 + (int)uStack_848 * 2;
        local_77c = local_77c + uStack_848._4_4_ * 2;
        local_778 = local_778 + (int)local_840 * 2;
        local_774 = local_774 + local_840._4_4_ * 2;
        local_798 = (int)local_838 * 2 - local_770;
        local_794 = local_838._4_4_ * 2 - local_76c;
        local_7e0 = CONCAT44(local_78c - local_7b4,local_790 - local_7b8);
        local_770 = local_770 + (int)local_838 * 2;
        local_76c = local_76c + local_838._4_4_ * 2;
        local_790 = (int)local_830 * 2 - local_768;
        local_78c = local_830._4_4_ * 2 - local_764;
        local_768 = local_768 + (int)local_830 * 2;
        local_764 = local_764 + local_830._4_4_ * 2;
        local_7b8 = iVar19;
        local_7b4 = iVar31;
      }
    }
    FUN_00421730(&local_b60,&local_800,&local_788);
    FUN_00421730(&local_b38,&local_7d8,&local_7b0);
    FUN_00421730((long)&local_b14 + 4,&local_7b0,&local_788);
    bVar17 = 0 < (long)uVar22;
    uVar22 = uVar22 - 1;
  } while (bVar17);
LAB_0041c6a0:
  FUN_00420f00(local_760,(long)&local_b14 + 4);
  FUN_00421730(local_260 + 0x100,&local_b60,local_760);
  FUN_00421730(local_260,&local_b38,local_760);
  FUN_00421ab0(&local_800,local_260);
  FUN_00421ab0(local_960,local_260 + 0x100);
  local_7e8 = CONCAT17(local_7e8._7_1_ ^ local_960[0] << 7,(undefined7)local_7e8);
  iVar19 = FUN_003f6d80(&local_800,param_3,0x20);
  return iVar19 == 0;
}


