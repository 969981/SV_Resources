/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6f134; name: FUN_00a6f134
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6f134(long param_1,undefined4 param_2)

{
  short *psVar1;
  long **pplVar2;
  long **pplVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  uint param4;
  long *plVar35;
  long *plVar36;
  byte *pbVar37;
  long *local_450;
  undefined8 uStack_448;
  long *local_440;
  undefined2 local_438;
  undefined2 local_436;
  undefined4 uStack_434;
  long *aplStack_430 [5];
  char *pcStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  char *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  char *pcStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  char *local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  char *pcStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  char *local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  char *pcStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  char *local_360;
  undefined8 uStack_358;
  long *local_350;
  long **pplStack_348;
  long *local_340;
  long *local_338;
  char *local_330;
  char *pcStack_328;
  long *local_320;
  char *pcStack_318;
  undefined8 local_310;
  long *local_308;
  long *local_300;
  undefined *puStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  long *local_2e0;
  char *pcStack_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  long *local_2c0;
  undefined8 local_2b8;
  char *pcStack_2b0;
  undefined8 local_2a8;
  long *local_2a0;
  undefined1 *local_298;
  undefined *puStack_290;
  undefined8 local_288;
  long *local_280;
  undefined8 local_278;
  char *pcStack_270;
  undefined8 local_268;
  long *local_260;
  long *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  long *local_238;
  undefined1 *local_230;
  undefined *local_228;
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  long *local_1f8;
  long *local_1f0;
  long *local_1e8;
  char *local_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  long *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long *local_198;
  long **local_190;
  undefined8 local_188;
  long *local_180;
  long *local_178;
  long **local_170;
  undefined8 local_168;
  long *local_160;
  long *local_158;
  long **local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long **local_130;
  undefined8 local_128;
  long *local_120;
  long *local_118 [4];
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  long *local_78;
  
  FUN_0181e2bc();
  FUN_00a72f08(param_1,param_2);
  FUN_01360220(param_1);
  plVar36 = (long *)(param_1 + 0x50);
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    uVar11 = FUN_00cf44f4(*(undefined8 *)(lVar31 + 0x70));
    local_436 = FUN_00cf41a8(*(undefined8 *)(lVar31 + 0x70));
    local_440 = (long *)(PTR_DAT_047d8ee0 + 0x10);
    local_438 = uVar11;
    sVar12 = FUN_01dd51e0(&local_440);
    if (sVar12 == 0) {
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_440 = (long *)0x92e87b8a797258c8;
      local_438 = 0x8b6e;
      local_436 = 0x3be;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0xc;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) & 0xfe;
LAB_00a6f308:
        *(byte *)(lVar31 + 0x58) = bVar9;
      }
LAB_00a6f30c:
      (**(code **)(*plVar33 + 0x60))(plVar33);
      goto LAB_00a6f31c;
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,sVar12,3,2,1);
    }
    local_158 = *(long **)(param_1 + 0x30);
    if (local_158 == (long *)0x0) goto LAB_00a6f244;
    lVar31 = local_158[6];
    if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
    psVar1 = (short *)(lVar31 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar10 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar12 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
      *(undefined8 *)(lVar31 + 8) = uVar23;
      *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
LAB_00a6f244:
      aplStack_430[0]._0_3_ = 0xc;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      local_118[2] = (long *)0x3;
      local_118[3] = (long *)0x0;
      local_350 = (long *)0x79f5e800afa0ae87;
      pplStack_348 = (long **)0x3c8b397;
      local_440 = (long *)0x92e87b8a797258c8;
      local_438 = 0x8b6e;
      local_436 = 0x3be;
      uStack_434 = 0;
      local_118[0] = (long *)&DAT_e6b50e272d8cd992;
      local_118[1] = (long *)&DAT_03c3b7e8;
      local_340 = (long *)0x15;
      local_338 = (long *)0x0;
      FUN_0136049c(&local_158,&local_440,local_118,aplStack_430 + 0x1c);
      if (local_338 != (long *)0x0) {
        (**(code **)(*local_338 + 0x20))();
      }
      if (local_118[3] != (long *)0x0) {
        (**(code **)(*local_118[3] + 0x20))();
      }
      if (aplStack_430[1] != (long *)0x0) {
        (**(code **)(*aplStack_430[1] + 0x20))();
      }
      if (local_158 != (long *)0x0) {
        lVar31 = local_158[6];
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar31 + 0x10) = 0;
          (**(code **)(*local_158 + 0x50))();
        }
        else if (sVar12 == 0) goto LAB_00a71e7c;
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_138 = (long *)0x92e87b8a797258c8;
      local_130 = (long **)0x3be8b6e;
      local_128 = 0xc;
      local_120 = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_138);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) | 1;
        goto LAB_00a6f308;
      }
      goto LAB_00a6f30c;
    }
    if (sVar12 != -1) goto LAB_00a6f244;
LAB_00a72e1c:
    pcVar25 = "count != 0";
    pcVar26 = "AddReference";
    pcVar27 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar28 = "Reference counter overflows.";
LAB_00a72e3c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar25,pcVar26,pcVar27,0x58,pcVar28);
  }
LAB_00a6f31c:
  if (*plVar36 != 0) {
    uVar14 = FUN_00cf44f4(*(undefined8 *)(*plVar36 + 0x70));
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_01360bf4(*(long *)PTR_DAT_047d90c0,0,uVar14);
    }
    local_138 = *(long **)(param_1 + 0x30);
    if (local_138 != (long *)0x0) {
      lVar31 = local_138[6];
      if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
        *(undefined8 *)(lVar31 + 8) = uVar23;
        *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0x9d49fdfebf6fcfe4;
    local_438 = 0xfb;
    local_436 = 0x3c2;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0x14;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_118[2] = (long *)0x3;
    local_118[3] = (long *)0x0;
    local_350 = (long *)0x738145784feacf19;
    pplStack_348 = (long **)0x3c84b87;
    local_118[0] = (long *)&DAT_e6b50e272d8cd992;
    local_118[1] = (long *)&DAT_03c3b7e8;
    local_340 = (long *)0x16;
    local_338 = (long *)0x0;
    FUN_0136049c(&local_138,&local_440,local_118,aplStack_430 + 0x1c);
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (local_118[3] != (long *)0x0) {
      (**(code **)(*local_118[3] + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_138 != (long *)0x0) {
      lVar31 = local_138[6];
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*local_138 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar14 = FUN_00cf44f4();
      uVar18 = FUN_00cf41a8(*(undefined8 *)(lVar31 + 0x70));
      uVar19 = FUN_00f14b64(*(undefined8 *)(lVar31 + 0x70));
      uVar15 = FUN_00f13da0(uVar14,uVar18,uVar19);
      uVar15 = uVar15 & 0xff;
    }
    else {
      uVar15 = FUN_00e9987c();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_138 = *(long **)(param_1 + 0x30);
    if (local_138 != (long *)0x0) {
      lVar31 = local_138[6];
      if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
        *(undefined8 *)(lVar31 + 8) = uVar23;
        *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0x33978cd4b467d699;
    local_438 = 0xd1eb;
    local_436 = 0x3c5;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0xc;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_118[2] = (long *)0x3;
    local_118[3] = (long *)0x0;
    local_350 = (long *)0xc8f858d01388e617;
    pplStack_348 = (long **)0x3c0ab82;
    local_118[0] = (long *)&DAT_e6b50e272d8cd992;
    local_118[1] = (long *)&DAT_03c3b7e8;
    local_340 = (long *)0x10;
    local_338 = (long *)0x0;
    FUN_0136049c(&local_138,&local_440,local_118,aplStack_430 + 0x1c);
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (local_118[3] != (long *)0x0) {
      (**(code **)(*local_118[3] + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_138 != (long *)0x0) {
      lVar31 = local_138[6];
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*local_138 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    plVar33 = *(long **)(param_1 + 0x38);
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x58))(plVar33);
    }
    local_440 = (long *)0x7d711b90ff606f8d;
    local_438 = 0xe231;
    local_436 = 0x3c2;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0x12;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar20 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
    bVar9 = FUN_00cec030(*(undefined8 *)(lVar31 + 0x70));
    plVar33 = *(long **)(param_1 + 0x38);
    if (bVar9 == 2) {
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_118[0] = (long *)0x7d711b90ff606f8d;
      local_118[1] = (long *)0x3c2e231;
      local_118[2] = (long *)0x12;
      local_118[3] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],local_118);
      if (lVar31 != 0) {
        *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe;
      }
    }
    else {
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_118[0] = (long *)0x8f7e04feb8dc576b;
      local_118[1] = (long *)0x3c3b991;
      local_118[2] = (long *)0x23;
      local_118[3] = (long *)0x0;
      puVar21 = (undefined8 *)FUN_00e895f4(plVar33[0x2e],local_118);
      if (puVar21 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar21 + 0x20))((long *)*puVar21,1);
        (**(code **)(*(long *)*puVar21 + 0xd0))((float)bVar9);
        *(undefined1 *)((long)puVar21 + 0x31) = 0;
        if ((undefined1 *)puVar21[7] != (undefined1 *)0x0) {
          *(undefined1 *)puVar21[7] = 1;
        }
      }
      if (local_118[3] != (long *)0x0) {
        (**(code **)(*local_118[3] + 0x20))();
      }
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
  }
  puVar8 = PTR_DAT_047d8a08;
  puVar7 = PTR_DAT_047d8a00;
  puVar6 = PTR_DAT_047d89f8;
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar20 = *(long *)puVar7;
    *(long *)puVar8 = lVar20;
    uVar4 = *(undefined1 *)(lVar20 + 0x2c);
    uVar15 = FUN_00c80208(*(undefined8 *)(lVar31 + 0x70));
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar16 = FUN_00f13ef0(lVar31);
      uVar16 = uVar16 & 0xffff;
    }
    else {
      uVar16 = FUN_00ddf348();
    }
    if (uVar16 == 0) {
      local_440 = (long *)&DAT_c90a559991648ec0;
      local_438 = 0xf425;
      local_436 = 0x3c9;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0xf;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      FUN_00a6cd34(uVar4,&local_440);
LAB_00a6f6f0:
      if (aplStack_430[1] != (long *)0x0) {
        (**(code **)(*aplStack_430[1] + 0x20))();
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_118[0] = (long *)&DAT_c90a559991648ec0;
      local_118[1] = (long *)0x3c9f425;
      local_118[2] = (long *)0xf;
      local_118[3] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],local_118);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) | 1;
LAB_00a6f774:
        *(byte *)(lVar31 + 0x58) = bVar9;
      }
    }
    else {
      if ((uVar15 & 0xffff) != 0) {
        local_440 = (long *)&DAT_c90a559991648ec0;
        local_438 = 0xf425;
        local_436 = 0x3c9;
        uStack_434 = 0;
        aplStack_430[0]._0_3_ = 0xf;
        aplStack_430[0]._3_5_ = 0;
        aplStack_430[1] = (long *)0x0;
        FUN_01deb588(uVar15,uVar4,&local_440);
        goto LAB_00a6f6f0;
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_440 = (long *)&DAT_c90a559991648ec0;
      local_438 = 0xf425;
      local_436 = 0x3c9;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0xf;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) & 0xfe;
        goto LAB_00a6f774;
      }
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
  }
  lVar31 = *plVar36;
  if (lVar31 == 0) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = *(long **)(param_1 + 0x38);
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x58))(plVar33);
    }
    local_440 = (long *)0x53facf8673e88da2;
    local_438 = 0xf602;
    local_436 = 0x3be;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0x17;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    uVar15 = FUN_00dbf838(*(undefined8 *)(lVar31 + 0x70));
    uVar16 = FUN_00dbfb7c(*(undefined8 *)(lVar31 + 0x70));
    lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
    if (lVar31 != 0) {
      *(byte *)(lVar31 + 0x58) =
           *(byte *)(lVar31 + 0x58) & 0xfe |
           (uVar15 & 0xfff0 ^ uVar15 >> 0x10 ^ uVar16 >> 0x10 ^ uVar16 & 0xfff0) < 0x10;
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
    plVar33 = (long *)*plVar36;
  }
  if (plVar33 == (long *)0x0) {
    lVar31 = 0;
  }
  else {
    plVar34 = *(long **)(param_1 + 0x38);
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x58))(plVar34);
    }
    local_440 = (long *)0xd4f209092417fce7;
    local_438 = 0x2949;
    local_436 = 0x3c4;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0xe;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar31 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
    if (lVar31 != 0) {
      *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar34 + 0x60))(plVar34);
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar31 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar31;
    plVar34 = *(long **)(lVar31 + 0x1c8);
    plVar32 = *(long **)(lVar31 + 0x1c0);
    if (*(long **)(lVar31 + 0x1c0) != plVar34) {
LAB_00a6f8d8:
      plVar35 = plVar32 + 1;
      lVar31 = *plVar32;
      uVar22 = FUN_011b8548(lVar31 + 0x28);
      if ((uVar22 & 1) == 0) goto code_r0x00a6f8ec;
      plVar34 = plVar33 + 5;
      do {
        lVar20 = *plVar34;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar5) {
          *(int *)plVar34 = (int)lVar20 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      local_138 = plVar33;
      if ((int)lVar20 == -1) goto LAB_00a72e44;
      uVar22 = FUN_0153a294(lVar31,&local_138);
      if (local_138 == (long *)0x0) {
joined_r0x00a7283c:
        if ((uVar22 & 1) == 0) {
          lVar20 = plVar33[0xe];
          plVar33 = (long *)(lVar20 + 0x20);
          lVar31 = nn::os::GetCurrentThread();
          do {
            if (*plVar33 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x28));
                while (*plVar33 == 0) {
                  cVar10 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar5) {
                    *plVar33 = lVar31;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 == '\0') goto LAB_00a6f970;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar5) {
              *plVar33 = lVar31;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
LAB_00a6f970:
          iVar17 = FUN_0100bd94(lVar20);
          *(undefined8 *)(lVar20 + 0x20) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x28));
          if (iVar17 != 0) {
            if ((iVar17 - 2U & 0xff) < 9) {
              uVar14 = *(undefined4 *)(&DAT_03d30208 + (long)(char)(iVar17 - 2U) * 4);
            }
            else {
              uVar14 = 0;
            }
            plVar33 = *(long **)(param_1 + 0x38);
            if (plVar33 != (long *)0x0) {
              (**(code **)(*plVar33 + 0x58))(plVar33);
            }
            local_118[0] = (long *)0xa77bc8f2d6660684;
            local_118[1] = (long *)0x3c49540;
            local_118[2] = (long *)0x13;
            local_118[3] = (long *)0x0;
            puVar21 = (undefined8 *)FUN_00e895f4(plVar33[0x2e],local_118);
            if (puVar21 != (undefined8 *)0x0) {
              (**(code **)(*(long *)*puVar21 + 0x20))((long *)*puVar21,1);
              (**(code **)(*(long *)*puVar21 + 0xd0))(uVar14);
              *(undefined1 *)((long)puVar21 + 0x31) = 0;
              if ((undefined1 *)puVar21[7] != (undefined1 *)0x0) {
                *(undefined1 *)puVar21[7] = 1;
              }
            }
            if (local_118[3] != (long *)0x0) {
              (**(code **)(*local_118[3] + 0x20))();
            }
            (**(code **)(*plVar33 + 0x60))(plVar33);
            plVar33 = *(long **)(param_1 + 0x38);
            if (plVar33 != (long *)0x0) {
              (**(code **)(*plVar33 + 0x58))(plVar33);
            }
            local_350 = (long *)0xd4f209092417fce7;
            pplStack_348 = (long **)0x3c42949;
            local_340 = (long *)0xe;
            local_338 = (long *)0x0;
            lVar31 = FUN_00c8c7b4(plVar33[0x2e],aplStack_430 + 0x1c);
            if (lVar31 != 0) {
              *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 1;
            }
            (**(code **)(*plVar33 + 0x60))(plVar33);
          }
        }
        goto LAB_00a6fad8;
      }
      plVar34 = local_138 + 5;
      do {
        lVar31 = *plVar34;
        iVar17 = (int)lVar31 + -1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar5) {
          *(int *)plVar34 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*local_138 + 0x10))();
        goto joined_r0x00a7283c;
      }
      if ((int)lVar31 != 0) goto joined_r0x00a7283c;
      goto LAB_00a72e6c;
    }
LAB_00a6fad8:
    plVar33 = (long *)*plVar36;
    lVar31 = 0;
    if (plVar33 != (long *)0x0) {
      plVar34 = plVar33 + 5;
      do {
        lVar31 = *plVar34;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar5) {
          *(int *)plVar34 = (int)lVar31 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((int)lVar31 == -1) {
LAB_00a72e44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar15 = FUN_01539950(plVar33[0xe]);
      if (uVar15 - 0x18 < 6) {
        lVar31 = 0;
      }
      else if (uVar15 - 0x1e < 4) {
        lVar31 = 1;
      }
      else if (uVar15 == 0x22) {
        lVar31 = 4;
      }
      else if (uVar15 - 0x23 < 7) {
        lVar31 = 3;
      }
      else {
        uVar16 = uVar15 & 0xfffffffe;
        if (uVar16 == 0x2c) {
          lVar31 = 6;
        }
        else if (uVar16 == 0x2a) {
          lVar31 = 5;
        }
        else if (uVar15 == 0x2f) {
          lVar31 = 7;
        }
        else {
          lVar20 = 9;
          if (uVar16 != 0x32) {
            lVar20 = 2;
          }
          lVar31 = 8;
          if (uVar16 != 0x30) {
            lVar31 = lVar20;
          }
        }
      }
      do {
        lVar20 = *plVar34;
        iVar17 = (int)lVar20 + -1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar5) {
          *(int *)plVar34 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
      else if ((int)lVar20 == 0) {
LAB_00a72e6c:
        pcVar25 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar26 = "DecrementReferenceInternal";
        pcVar27 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar28 = "Reference counter underflows.";
        goto LAB_00a72e3c;
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_440 = (long *)0x29a80d39dc5b9937;
      local_438 = 0xb9c9;
      local_436 = 0x3c3;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0x22;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x29a80c39dc5b9784;
      aplStack_430[2] = (long *)0x3c2e25d;
      aplStack_430[3] = (long *)0x22;
      aplStack_430[4] = (long *)0x29a80e39dc5b9aea;
      pcStack_408 = "L_icon_generation_00/generation_01";
      local_400 = 0x22;
      local_3f8 = 0x29a80f39dc5b9c9d;
      local_3f0 = "L_icon_generation_00/generation_00";
      local_3e8 = 0x22;
      local_3e0 = 0x29a80939dc5b926b;
      pcStack_3d8 = "L_icon_generation_00/generation_06";
      local_3d0 = 0x22;
      uStack_3c8 = 0x29a80a39dc5b941e;
      local_3c0 = "L_icon_generation_00/generation_05";
      uStack_3b8 = 0x22;
      local_3b0 = 0x29a80b39dc5b95d1;
      pcStack_3a8 = "L_icon_generation_00/generation_04";
      local_3a0 = 0x22;
      uStack_398 = 0x29a80739dc5b8f05;
      local_380 = 0x29a80639dc5b8d52;
      pcStack_378 = "L_icon_generation_00/generation_09";
      local_370 = 0x22;
      uStack_368 = 0x29a80839dc5b90b8;
      local_390 = "L_icon_generation_00/generation_08";
      uStack_388 = 0x22;
      local_360 = "L_icon_generation_00/generation_07";
      uStack_358 = 0x22;
      FUN_01096e28(local_118,aplStack_430 + lVar31 * 3 + -2);
      plVar34 = local_118[0];
      local_440 = (long *)PTR_DAT_047d8b70;
      if (local_118[0] != (long *)0x0) {
        local_440 = local_118[0] + 6;
      }
      local_440 = (long *)*local_440;
      plVar32 = (long *)PTR_PTR_047d4508;
      if (local_118[0] != (long *)0x0) {
        plVar32 = local_118[0] + 7;
      }
      lVar31 = *plVar32;
      if (local_118[0] == (long *)0x0) {
        lVar20 = 0;
      }
      else {
        lVar20 = local_118[0][8];
      }
      local_438 = (undefined2)lVar31;
      local_436 = (undefined2)((ulong)lVar31 >> 0x10);
      uStack_434 = (undefined4)((ulong)lVar31 >> 0x20);
      aplStack_430[0]._0_3_ = (undefined3)lVar20;
      aplStack_430[0]._3_5_ = (undefined5)((ulong)lVar20 >> 0x18);
      aplStack_430[1] = (long *)0x0;
      if (local_118[0] != (long *)0x0) {
        (**(code **)(*local_118[0] + 0x18))(local_118[0]);
      }
      aplStack_430[1] = plVar34;
      lVar31 = FUN_00e895f4(plVar33[0x2e],&local_440);
      if (lVar31 != 0) {
        FUN_00dfcea4();
      }
      if (aplStack_430[1] != (long *)0x0) {
        (**(code **)(*aplStack_430[1] + 0x20))();
      }
      if (local_118[0] != (long *)0x0) {
        (**(code **)(*local_118[0] + 0x20))();
      }
      (**(code **)(*plVar33 + 0x60))(plVar33);
      lVar31 = *plVar36;
    }
  }
  if (lVar31 != 0) {
    if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar20 = *(long *)puVar7;
    *(long *)puVar8 = lVar20;
    uVar4 = *(undefined1 *)(lVar20 + 0x2c);
    uVar15 = FUN_0113b7d0(lVar31);
    uVar16 = FUN_01155170(lVar31);
    local_440 = (long *)0xb42d8a2a8b140c65;
    local_438 = 0xb61a;
    local_436 = 0x3bd;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0x13;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    FUN_01deaef0(uVar15,uVar4,&local_440);
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if ((uVar15 & 0xff) == (uVar16 & 0xff)) {
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_118[0] = (long *)0xb42d892a8b140ab2;
      local_118[1] = (long *)0x3c3b96a;
      local_118[2] = (long *)0x13;
      local_118[3] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],local_118);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) & 0xfe;
        goto LAB_00a6feb0;
      }
    }
    else {
      local_118[0] = (long *)0xb42d892a8b140ab2;
      local_118[1] = (long *)0x3c3b96a;
      local_118[2] = (long *)0x13;
      local_118[3] = (long *)0x0;
      FUN_01deaef0(uVar16,uVar4,local_118);
      if (local_118[3] != (long *)0x0) {
        (**(code **)(*local_118[3] + 0x20))();
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_350 = (long *)0xb42d892a8b140ab2;
      pplStack_348 = (long **)0x3c3b96a;
      local_340 = (long *)0x13;
      local_338 = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],aplStack_430 + 0x1c);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) | 1;
LAB_00a6feb0:
        *(byte *)(lVar31 + 0x58) = bVar9;
      }
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar20 = *(long *)puVar7;
    *(long *)puVar8 = lVar20;
    uVar4 = *(undefined1 *)(lVar20 + 0x2c);
    cVar10 = FUN_010ca6e8(*(undefined8 *)(lVar31 + 0x70));
    if (cVar10 == '\x13') {
      uVar23 = FUN_00e9782c();
    }
    else {
      uVar23 = FUN_010ca6e8(*(undefined8 *)(lVar31 + 0x70));
    }
    if (((uint)uVar23 & 0xfe) == 0x12) {
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_440 = (long *)&DAT_b42d882a8b1408ff;
      local_438 = 0xccde;
      local_436 = 0x3bf;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0x13;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) & 0xfe;
        goto LAB_00a6ff5c;
      }
    }
    else {
      local_440 = (long *)&DAT_b42d882a8b1408ff;
      local_438 = 0xccde;
      local_436 = 0x3bf;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0x13;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      FUN_01deb23c(uVar23,uVar4,&local_440);
      if (aplStack_430[1] != (long *)0x0) {
        (**(code **)(*aplStack_430[1] + 0x20))();
      }
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_118[0] = (long *)&DAT_b42d882a8b1408ff;
      local_118[1] = (long *)0x3bfccde;
      local_118[2] = (long *)0x13;
      local_118[3] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],local_118);
      if (lVar31 != 0) {
        bVar9 = *(byte *)(lVar31 + 0x58) | 1;
LAB_00a6ff5c:
        *(byte *)(lVar31 + 0x58) = bVar9;
      }
    }
    (**(code **)(*plVar33 + 0x60))(plVar33);
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    uVar15 = FUN_0168a508(*(undefined8 *)(lVar31 + 0x70));
    if (((uVar15 & 0xff) == 0xff) ||
       (*(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4) < (uVar15 & 0xff))) {
      plVar33 = *(long **)(param_1 + 0x38);
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x58))(plVar33);
      }
      local_440 = (long *)0x59274b8329be4fdd;
      local_438 = 0x8f7a;
      local_436 = 0x3c1;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0xb;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar33[0x2e],&local_440);
      if (lVar31 != 0) {
        *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe;
      }
      (**(code **)(*plVar33 + 0x60))(plVar33);
    }
    else {
      cVar10 = FUN_01e23388(lVar31);
      local_178 = (long *)CONCAT71(local_178._1_7_,cVar10);
      if ((byte)(cVar10 - 0x25U) < 2) {
        uVar14 = FUN_021f8f38(lVar31,cVar10);
      }
      else {
        uVar14 = 1;
      }
      local_158 = (long *)CONCAT44(local_158._4_4_,uVar14);
      local_350 = (long *)0x0;
      pplStack_348 = (long **)0x0;
      FUN_01084328(aplStack_430 + 0x1c,param_1 + 0x40);
      FUN_01dee40c(local_118,aplStack_430 + 0x1c,&local_178,&local_158);
      plVar33 = local_350;
      if (local_350 != (long *)0x0) {
        plVar34 = local_350 + 3;
        do {
          sVar12 = (short)*plVar34;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar5) {
            *(short *)plVar34 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 1) {
          piVar24 = (int *)((long)local_350 + 0x1c);
          do {
            iVar17 = *piVar24;
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar31 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar31;
            local_440 = (long *)*plVar33;
            FUN_00c44438(lVar31 + 0x8040,&local_440);
          }
        }
        else if (sVar12 == 0) goto LAB_00a72bc8;
      }
      plVar33 = local_118[1];
      local_138 = local_118[1];
      if (local_118[1] == (long *)0x0) {
        plVar34 = (long *)0x0;
      }
      else {
        (**(code **)(*local_118[1] + 0x18))(local_118[1]);
        plVar34 = local_138;
      }
      plVar32 = (long *)PTR_PTR_047d4508;
      if (plVar34 != (long *)0x0) {
        plVar32 = plVar34 + 7;
      }
      FUN_0181e6b8(0xaf,*plVar32);
      lVar20 = *(long *)PTR_DAT_047d90d0;
      FUN_011a6b30(&local_440,&local_138);
      lVar31 = *(long *)(lVar20 + 0x2a0);
      if (0xaf < (ulong)(*(long *)(lVar20 + 0x2a8) - lVar31 >> 3)) {
        FUN_010614bc(*(undefined8 *)(lVar31 + 0x578),&local_440,0);
      }
      if (aplStack_430[2] != (long *)0x0) {
        (**(code **)(*aplStack_430[2] + 0x20))();
      }
      if (local_440 != (long *)0x0) {
        (**(code **)(*local_440 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      plVar34 = *(long **)(param_1 + 0x38);
      if (plVar34 != (long *)0x0) {
        (**(code **)(*plVar34 + 0x58))(plVar34);
      }
      local_440 = (long *)0x59274b8329be4fdd;
      local_438 = 0x8f7a;
      local_436 = 0x3c1;
      uStack_434 = 0;
      aplStack_430[0]._0_3_ = 0xb;
      aplStack_430[0]._3_5_ = 0;
      aplStack_430[1] = (long *)0x0;
      lVar31 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
      if (lVar31 != 0) {
        *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 1;
      }
      (**(code **)(*plVar34 + 0x60))(plVar34);
      if ((byte)local_118[0] != '\0') {
        if (plVar33 != (long *)0x0) {
          (**(code **)(*plVar33 + 0x20))(plVar33);
        }
        local_118[0] = (long *)((ulong)local_118[0] & 0xffffffffffffff00);
      }
    }
  }
  lVar31 = *plVar36;
  plVar33 = (long *)&DAT_cbf29ce484222645;
  if (lVar31 == 0) {
    lVar31 = 0;
  }
  else {
    local_e8 = 0;
    pcStack_e0 = (char *)0x0;
    local_f8 = (char *)0x0;
    uStack_f0 = 0;
    local_118[2] = (long *)0x0;
    local_118[3] = (long *)0x0;
    local_118[0] = (long *)0x0;
    local_118[1] = (long *)0x0;
    snprintf((char *)local_118,0x40,"L_skill_%02d",0);
    plVar34 = *(long **)(param_1 + 0x38);
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x58))(plVar34);
    }
    local_440 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_118[0] != 0) {
      local_440 = (long *)&DAT_cbf29ce484222645;
      pbVar37 = (byte *)((ulong)local_118 | 1);
      bVar9 = (byte)local_118[0];
      do {
        local_440 = (long *)(((ulong)local_440 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (bVar9 != 0);
    }
    local_438 = SUB82(local_118,0);
    local_436 = (undefined2)((ulong)local_118 >> 0x10);
    uStack_434 = (undefined4)((ulong)local_118 >> 0x20);
    aplStack_430[0]._0_3_ = 0x3f;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar34 + 0x60))(plVar34);
    snprintf((char *)local_118,0x40,"L_skill_%02d",1);
    plVar34 = *(long **)(param_1 + 0x38);
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x58))(plVar34);
    }
    local_440 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_118[0] != 0) {
      local_440 = (long *)&DAT_cbf29ce484222645;
      pbVar37 = (byte *)((ulong)local_118 | 1);
      bVar9 = (byte)local_118[0];
      do {
        local_440 = (long *)(((ulong)local_440 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (bVar9 != 0);
    }
    local_438 = SUB82(local_118,0);
    local_436 = (undefined2)((ulong)local_118 >> 0x10);
    uStack_434 = (undefined4)((ulong)local_118 >> 0x20);
    aplStack_430[0]._0_3_ = 0x3f;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar34 + 0x60))(plVar34);
    snprintf((char *)local_118,0x40,"L_skill_%02d",2);
    plVar34 = *(long **)(param_1 + 0x38);
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x58))(plVar34);
    }
    local_440 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_118[0] != 0) {
      local_440 = (long *)&DAT_cbf29ce484222645;
      pbVar37 = (byte *)((ulong)local_118 | 1);
      bVar9 = (byte)local_118[0];
      do {
        local_440 = (long *)(((ulong)local_440 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (bVar9 != 0);
    }
    local_438 = SUB82(local_118,0);
    local_436 = (undefined2)((ulong)local_118 >> 0x10);
    uStack_434 = (undefined4)((ulong)local_118 >> 0x20);
    aplStack_430[0]._0_3_ = 0x3f;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar34 + 0x60))(plVar34);
    snprintf((char *)local_118,0x40,"L_skill_%02d",3);
    plVar34 = *(long **)(param_1 + 0x38);
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x58))(plVar34);
    }
    local_440 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_118[0] != 0) {
      local_440 = (long *)&DAT_cbf29ce484222645;
      pbVar37 = (byte *)((ulong)local_118 | 1);
      bVar9 = (byte)local_118[0];
      do {
        local_440 = (long *)(((ulong)local_440 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (bVar9 != 0);
    }
    local_438 = SUB82(local_118,0);
    local_436 = (undefined2)((ulong)local_118 >> 0x10);
    uStack_434 = (undefined4)((ulong)local_118 >> 0x20);
    aplStack_430[0]._0_3_ = 0x3f;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_440);
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar34 + 0x60))(plVar34);
    sVar12 = FUN_00eedbc8(*(undefined8 *)(lVar31 + 0x70),0);
    sVar13 = FUN_00eedbc8(*(undefined8 *)(lVar31 + 0x70),1);
    uVar15 = 2;
    if (sVar12 == 0) {
      uVar15 = 1;
    }
    uVar16 = (uint)(sVar12 != 0);
    if (sVar13 != 0) {
      uVar16 = uVar15;
    }
    sVar12 = FUN_00eedbc8(*(undefined8 *)(lVar31 + 0x70),2);
    if (sVar12 != 0) {
      uVar16 = uVar16 + 1;
    }
    sVar12 = FUN_00eedbc8(*(undefined8 *)(lVar31 + 0x70),3);
    if (sVar12 != 0) {
      uVar16 = uVar16 + 1;
    }
    if (uVar16 != 0) {
      uVar15 = 0;
      pbVar37 = (byte *)((ulong)local_118 | 1);
      do {
        uVar14 = FUN_00eedbc8(*(undefined8 *)(lVar31 + 0x70),uVar15);
        if (((*PTR_DAT_047d7940 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7940);
        }
        uVar23 = *(undefined8 *)PTR_DAT_047d7948;
        *(undefined8 *)PTR_DAT_047d7950 = uVar23;
        piVar24 = (int *)FUN_00cf60cc(uVar23,uVar14);
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 9) ||
           (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar22 == 0)) {
          param4 = 0;
        }
        else {
          param4 = (uint)*(byte *)((long)piVar24 + uVar22);
        }
        if (*(long *)PTR_DAT_047d90c0 != 0) {
          FUN_011b8b24(*(long *)PTR_DAT_047d90c0,0,uVar14);
        }
        snprintf((char *)local_118,0x40,"L_skill_%02d/T_skill_name_00",uVar15);
        local_1c8 = *(long **)(param_1 + 0x30);
        if (local_1c8 != (long *)0x0) {
          lVar20 = local_1c8[6];
          if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
          psVar1 = (short *)(lVar20 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar12 == 0) {
            uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
            *(undefined8 *)(lVar20 + 8) = uVar23;
            *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
          }
          else if (sVar12 == -1) goto LAB_00a72e1c;
        }
        local_350 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_118[0] != 0) {
          local_350 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = pbVar37;
          bVar9 = (byte)local_118[0];
          do {
            local_350 = (long *)(((ulong)local_350 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = *pbVar30;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_120 = (long *)0x0;
        local_140 = (long *)0x0;
        local_138 = (long *)&DAT_e6b50e272d8cd992;
        local_130 = (long **)&DAT_03c3b7e8;
        local_128 = 3;
        local_158 = (long *)0x9b6466d279c134ae;
        local_340 = (long *)0x3f;
        local_338 = (long *)0x0;
        local_150 = (long **)0x3ca63c9;
        local_148 = (long *)0x12;
        pplStack_348 = local_118;
        FUN_0136049c(&local_1c8,aplStack_430 + 0x1c,&local_138,&local_158);
        if (local_140 != (long *)0x0) {
          (**(code **)(*local_140 + 0x20))();
        }
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x20))();
        }
        if (local_338 != (long *)0x0) {
          (**(code **)(*local_338 + 0x20))();
        }
        if (local_1c8 != (long *)0x0) {
          lVar20 = local_1c8[6];
          psVar1 = (short *)(lVar20 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar20 + 0x10) = 0;
            (**(code **)(*local_1c8 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_00a71e7c;
        }
        snprintf((char *)local_118,0x40,"L_skill_%02d/type_%02d",uVar15,param4);
        plVar34 = *(long **)(param_1 + 0x38);
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x58))(plVar34);
        }
        uVar22 = (ulong)local_118[0] & 0xff;
        local_178 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_118[0] != '\0') {
          local_178 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = pbVar37;
          do {
            local_178 = (long *)(((ulong)local_178 ^ uVar22) * 0x100000001b3);
            bVar9 = *pbVar30;
            uVar22 = (ulong)bVar9;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_168 = 0x3f;
        local_160 = (long *)0x0;
        local_170 = local_118;
        lVar20 = FUN_00e895f4(plVar34[0x2e],&local_178);
        if (lVar20 != 0) {
          FUN_00dfcea4();
        }
        if (local_160 != (long *)0x0) {
          (**(code **)(*local_160 + 0x20))();
        }
        (**(code **)(*plVar34 + 0x60))(plVar34);
        snprintf((char *)local_118,0x40,"L_skill_%02d",uVar15);
        plVar34 = *(long **)(param_1 + 0x38);
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x58))(plVar34);
        }
        uVar22 = (ulong)local_118[0] & 0xff;
        local_198 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_118[0] != '\0') {
          local_198 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = pbVar37;
          do {
            local_198 = (long *)(((ulong)local_198 ^ uVar22) * 0x100000001b3);
            bVar9 = *pbVar30;
            uVar22 = (ulong)bVar9;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_188 = 0x3f;
        local_180 = (long *)0x0;
        local_190 = local_118;
        lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_198);
        if (lVar20 != 0) {
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
        }
        (**(code **)(*plVar34 + 0x60))(plVar34);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar16);
    }
    lVar31 = *plVar36;
  }
  if (lVar31 != 0) {
    local_350 = (long *)0x3bd437a;
    pplStack_348 = (long **)0x3c2e244;
    local_340 = (long *)0x3bef643;
    local_338 = (long *)0x3c6a238;
    local_330 = "L_icon_04";
    pcStack_328 = "L_icon_03";
    local_118[0] = (long *)0x0;
    local_118[1] = (long *)0x0;
    local_118[2] = (long *)0x0;
    local_118[3] = (long *)0x0;
    local_f8 = (char *)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    pcStack_e0 = (char *)0x0;
    local_440 = (long *)0x0;
    local_438 = 0;
    local_436 = 0;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    aplStack_430[2] = (long *)0x0;
    aplStack_430[3] = (long *)0x0;
    aplStack_430[4] = (long *)0x0;
    pcStack_408 = (char *)0x0;
    uVar15 = FUN_00d4ea44(*(undefined8 *)(lVar31 + 0x70));
    lVar31 = 0;
    pbVar37 = (byte *)((ulong)local_118 | 1);
    do {
      if (((byte)(&DAT_03d30200)[lVar31] - 1 & 0xff) < 5) {
        cVar10 = (&DAT_03d62e98)
                 [(ulong)((byte)(&DAT_03d30200)[lVar31] - 1) + (ulong)(uVar15 & 0xffff) * 5];
      }
      else {
        cVar10 = '\0';
      }
      plVar34 = aplStack_430[lVar31 + 0x1c];
      snprintf((char *)local_118,0x40,"%s",plVar34);
      snprintf((char *)&local_440,0x40,"%s/ptn",(char *)plVar34);
      plVar34 = *(long **)(param_1 + 0x38);
      if (cVar10 == '\0') {
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x58))(plVar34);
        }
        uVar22 = (ulong)local_118[0] & 0xff;
        local_138 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_118[0] != '\0') {
          local_138 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = pbVar37;
          do {
            local_138 = (long *)(((ulong)local_138 ^ uVar22) * 0x100000001b3);
            bVar9 = *pbVar30;
            uVar22 = (ulong)bVar9;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_128 = 0x3f;
        local_120 = (long *)0x0;
        local_130 = local_118;
        lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_138);
        if (lVar20 != 0) {
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
        }
        (**(code **)(*plVar34 + 0x60))(plVar34);
      }
      else {
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x58))(plVar34);
        }
        uVar22 = (ulong)local_118[0] & 0xff;
        local_158 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_118[0] != '\0') {
          local_158 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = pbVar37;
          do {
            local_158 = (long *)(((ulong)local_158 ^ uVar22) * 0x100000001b3);
            bVar9 = *pbVar30;
            uVar22 = (ulong)bVar9;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_148 = (long *)0x3f;
        local_140 = (long *)0x0;
        local_150 = local_118;
        lVar20 = FUN_00c8c7b4(plVar34[0x2e],&local_158);
        if (lVar20 != 0) {
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
        }
        (**(code **)(*plVar34 + 0x60))(plVar34);
        plVar34 = *(long **)(param_1 + 0x38);
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x58))(plVar34);
        }
        local_178 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_440 != 0) {
          local_178 = (long *)&DAT_cbf29ce484222645;
          pbVar30 = (byte *)((ulong)&local_440 | 1);
          bVar9 = (byte)local_440;
          do {
            local_178 = (long *)(((ulong)local_178 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = *pbVar30;
            pbVar30 = pbVar30 + 1;
          } while (bVar9 != 0);
        }
        local_170 = &local_440;
        local_168 = 0x3f;
        local_160 = (long *)0x0;
        puVar21 = (undefined8 *)FUN_00e895f4(plVar34[0x2e],&local_178);
        if (puVar21 != (undefined8 *)0x0) {
          uVar23 = 0x3f800000;
          if ('\0' < cVar10) {
            uVar23 = 0;
          }
          (**(code **)(*(long *)*puVar21 + 0x20))((long *)*puVar21,1);
          (**(code **)(*(long *)*puVar21 + 0xd0))(uVar23);
          *(undefined1 *)((long)puVar21 + 0x31) = 0;
          if ((undefined1 *)puVar21[7] != (undefined1 *)0x0) {
            *(undefined1 *)puVar21[7] = 1;
          }
        }
        if (local_160 != (long *)0x0) {
          (**(code **)(*local_160 + 0x20))();
        }
        (**(code **)(*plVar34 + 0x60))(plVar34);
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 != 6);
  }
  FUN_01dee204(param_1);
  local_450 = (long *)0x0;
  uStack_448 = 0;
  FUN_01084328(&local_450,param_1 + 0x40);
  if (local_450 != (long *)0x0) {
    if (*(short *)((long)local_450 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_450 + 0x1a);
      sVar12 = *(short *)((long)local_450 + 0x1a);
LAB_00a72abc:
      sVar13 = *psVar1;
      if (sVar13 == sVar12) {
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
        if (cVar10 != '\0') goto LAB_00a72ae0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a72ae0:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x00a72ae8;
      lVar31 = local_450[2];
      if (lVar31 != 0) {
        plVar34 = (long *)(lVar31 + -0x28);
        local_440 = DAT_03d301c7;
        local_438 = (undefined2)(undefined7)DAT_03d301cf;
        local_436 = (undefined2)((uint7)(undefined7)DAT_03d301cf >> 0x10);
        uStack_434 = CONCAT13((char)ram0x03d301d6,(int3)((uint7)(undefined7)DAT_03d301cf >> 0x20));
        aplStack_430[0]._0_3_ = (undefined3)((uint)ram0x03d301d6 >> 8);
        FUN_017bfaf8(plVar34,0,&local_440,plVar36);
        lVar31 = *(long *)(lVar31 + 0x70);
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar31 + 0x10) = 0;
          (**(code **)(*plVar34 + 0x50))(plVar34);
        }
        else if (sVar12 == 0) goto LAB_00a71e7c;
      }
    }
LAB_00a72b84:
    plVar34 = local_450;
    if (local_450 != (long *)0x0) {
      plVar32 = local_450 + 3;
      do {
        sVar12 = (short)*plVar32;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar5) {
          *(short *)plVar32 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        piVar24 = (int *)((long)local_450 + 0x1c);
        do {
          iVar17 = *piVar24;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar17 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar31 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar31;
          local_440 = (long *)*plVar34;
          FUN_00c44438(lVar31 + 0x8040,&local_440);
        }
      }
      else if (sVar12 == 0) {
LAB_00a72bc8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    uVar15 = FUN_0113b8a0(*(undefined8 *)(lVar31 + 0x70));
    if (0x136 < (uVar15 & 0xffff)) {
      uVar14 = FUN_00cf44f4(*(undefined8 *)(lVar31 + 0x70));
      uVar18 = FUN_00cf41a8(*(undefined8 *)(lVar31 + 0x70));
      uVar19 = FUN_00e99784(lVar31);
      uVar15 = FUN_0143b78c(uVar14,uVar18,uVar19);
    }
    local_198 = *(long **)(param_1 + 0x30);
    if (local_198 != (long *)0x0) {
      lVar31 = local_198[6];
      if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
        *(undefined8 *)(lVar31 + 8) = uVar23;
        *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0x918b115bfb22414f;
    local_438 = 0x7769;
    local_436 = 0x3c7;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0xc;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_118[2] = (long *)0x3;
    local_118[3] = (long *)0x0;
    local_350 = (long *)0xf392734f300348b9;
    pplStack_348 = (long **)0x3c11d4f;
    local_118[0] = (long *)&DAT_e6b50e272d8cd992;
    local_118[1] = (long *)&DAT_03c3b7e8;
    local_340 = (long *)0x15;
    local_338 = (long *)0x0;
    FUN_0136049c(&local_198,&local_440,local_118,aplStack_430 + 0x1c);
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (local_118[3] != (long *)0x0) {
      (**(code **)(*local_118[3] + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_198 != (long *)0x0) {
      lVar31 = local_198[6];
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*local_198 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b8e34(*(long *)PTR_DAT_047d90c0,0,uVar15);
    }
    local_1c8 = *(long **)(param_1 + 0x30);
    if (local_1c8 != (long *)0x0) {
      lVar31 = local_1c8[6];
      if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
        *(undefined8 *)(lVar31 + 8) = uVar23;
        *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_160 = (long *)0x0;
    local_138 = (long *)0x9a58db7460a186a9;
    local_130 = (long **)0x3c9890f;
    local_128 = 0x12;
    local_120 = (long *)0x0;
    local_148 = (long *)0x3;
    local_140 = (long *)0x0;
    local_170 = (long **)0x3bfcd07;
    local_178 = (long *)0xf392724f30034706;
    local_158 = (long *)&DAT_e6b50e272d8cd992;
    local_150 = (long **)&DAT_03c3b7e8;
    local_168 = 0x15;
    FUN_0136049c(&local_1c8,&local_138,&local_158,&local_178);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_1c8 != (long *)0x0) {
      lVar31 = local_1c8[6];
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*local_1c8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
  }
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    local_198 = *(long **)(param_1 + 0x30);
    if (local_198 != (long *)0x0) {
      lVar20 = local_198[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0xf08e9c50463f71bc;
    local_438 = 0x39a7;
    local_436 = 0x3c0;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 9;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_118[2] = (long *)0x3;
    local_118[3] = (long *)0x0;
    local_350 = (long *)0xba83191f4d00c53c;
    pplStack_348 = (long **)0x3c0aba8;
    local_118[0] = (long *)&DAT_e6b50e272d8cd992;
    local_118[1] = (long *)&DAT_03c3b7e8;
    local_340 = (long *)0x12;
    local_338 = (long *)0x0;
    FUN_0136049c(&local_198,&local_440,local_118,aplStack_430 + 0x1c);
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (local_118[3] != (long *)0x0) {
      (**(code **)(*local_118[3] + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_198 != (long *)0x0) {
      lVar20 = local_198[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_198 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    uVar22 = FUN_00e974e0(*(undefined8 *)(lVar31 + 0x70));
    if ((uVar22 & 0xffff) == 0) {
      local_1c8 = *(long **)(param_1 + 0x30);
      if (local_1c8 != (long *)0x0) {
        lVar31 = local_1c8[6];
        if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
          *(undefined8 *)(lVar31 + 8) = uVar23;
          *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
        }
        else if (sVar12 == -1) goto LAB_00a72e1c;
      }
      local_160 = (long *)0x0;
      local_138 = (long *)0x85134317b453210f;
      local_130 = (long **)0x3bef61a;
      local_128 = 0x14;
      local_120 = (long *)0x0;
      local_148 = (long *)0x3;
      local_140 = (long *)0x0;
      local_170 = (long **)0x3c77776;
      local_178 = (long *)0xcc31e1a7a9772dd4;
      local_158 = (long *)&DAT_e6b50e272d8cd992;
      local_150 = (long **)&DAT_03c3b7e8;
      local_168 = 0x11;
      FUN_0136049c(&local_1c8,&local_138,&local_158,&local_178);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_1c8 != (long *)0x0) {
        lVar31 = local_1c8[6];
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        goto LAB_00a71e70;
      }
    }
    else {
      FUN_01def290(uVar22,1,0);
      local_1c8 = *(long **)(param_1 + 0x30);
      if (local_1c8 != (long *)0x0) {
        lVar31 = local_1c8[6];
        if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
          *(undefined8 *)(lVar31 + 8) = uVar23;
          *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
        }
        else if (sVar12 == -1) goto LAB_00a72e1c;
      }
      local_160 = (long *)0x0;
      local_138 = (long *)0x85134317b453210f;
      local_130 = (long **)0x3bef61a;
      local_128 = 0x14;
      local_120 = (long *)0x0;
      local_148 = (long *)0x3;
      local_140 = (long *)0x0;
      local_170 = (long **)0x3c98922;
      local_178 = (long *)0xba831a1f4d00c6ef;
      local_158 = (long *)&DAT_e6b50e272d8cd992;
      local_150 = (long **)&DAT_03c3b7e8;
      local_168 = 0x12;
      FUN_0136049c(&local_1c8,&local_138,&local_158,&local_178);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_1c8 != (long *)0x0) {
        lVar31 = local_1c8[6];
        psVar1 = (short *)(lVar31 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_00a71e70:
        if (sVar12 == 1) {
          *(undefined8 *)(lVar31 + 0x10) = 0;
          (**(code **)(*local_1c8 + 0x50))();
        }
        else if (sVar12 == 0) goto LAB_00a71e7c;
      }
    }
  }
  lVar31 = *plVar36;
  if (lVar31 == 0) {
LAB_00a725a8:
    lVar31 = 0;
  }
  else {
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f13ef0(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_00ddf348();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f13ef0(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_00d75438();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,1,uVar15,3,0,1);
    }
    local_78 = *(long **)(param_1 + 0x30);
    if (local_78 != (long *)0x0) {
      lVar20 = local_78[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0xa511f43948895f3;
    local_438 = 0x8b85;
    local_436 = 0x3be;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0xd;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_118[2] = (long *)0x3;
    local_118[3] = (long *)0x0;
    local_350 = (long *)0x2cca9368e16718be;
    pplStack_348 = (long **)0x3c271bf;
    local_118[0] = (long *)&DAT_e6b50e272d8cd992;
    local_118[1] = (long *)&DAT_03c3b7e8;
    local_340 = (long *)0x10;
    local_338 = (long *)0x0;
    FUN_0136049c(&local_78,&local_440,local_118,aplStack_430 + 0x1c);
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (local_118[3] != (long *)0x0) {
      (**(code **)(*local_118[3] + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      lVar20 = local_78[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f1415c(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_013e87d8();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_1a0 = *(long **)(param_1 + 0x30);
    if (local_1a0 != (long *)0x0) {
      lVar20 = local_1a0[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_160 = (long *)0x0;
    local_138 = (long *)0xeb380060ae422c37;
    local_130 = (long **)0x3c70e14;
    local_158 = (long *)&DAT_e6b50e272d8cd992;
    local_150 = (long **)&DAT_03c3b7e8;
    local_178 = (long *)0x6e318271e06fbe;
    local_170 = (long **)0x3c84bc6;
    local_168 = 0x11;
    local_128 = 0x11;
    local_120 = (long *)0x0;
    local_148 = (long *)0x3;
    local_140 = (long *)0x0;
    FUN_0136049c(&local_1a0,&local_138,&local_158,&local_178);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_1a0 != (long *)0x0) {
      lVar20 = local_1a0[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_1a0 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f142b0(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_013e8170();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_1a8 = *(long **)(param_1 + 0x30);
    if (local_1a8 != (long *)0x0) {
      lVar20 = local_1a8[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_180 = (long *)0x0;
    local_198 = (long *)0x94ad1aa5febc7faf;
    local_188 = 0x12;
    local_190 = (long **)0x3c8b3b7;
    local_1b8 = 3;
    local_1c8 = (long *)&DAT_e6b50e272d8cd992;
    local_1c0 = &DAT_03c3b7e8;
    local_1b0 = (long *)0x0;
    local_1e8 = (long *)0x6e318271e06fbe;
    local_1e0 = "msg_ui_box_status";
    local_1d8 = 0x11;
    local_1d0 = (long *)0x0;
    FUN_0136049c(&local_1a8,&local_198,&local_1c8,&local_1e8);
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x20))();
    }
    if (local_1b0 != (long *)0x0) {
      (**(code **)(*local_1b0 + 0x20))();
    }
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 0x20))();
    }
    if (local_1a8 != (long *)0x0) {
      lVar20 = local_1a8[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_1a8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f14560(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_013e8b0c();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_1f0 = *(long **)(param_1 + 0x30);
    if (local_1f0 != (long *)0x0) {
      lVar20 = local_1f0[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_1f8 = (long *)0x0;
    local_210 = 0xfda2427515afcde2;
    local_200 = 0x13;
    local_208 = "T_spattack_param_00";
    local_220 = 3;
    local_230 = &DAT_e6b50e272d8cd992;
    local_228 = &DAT_03c3b7e8;
    local_218 = (long *)0x0;
    local_250 = 0x6e318271e06fbe;
    local_248 = "msg_ui_box_status";
    local_240 = 0x11;
    local_238 = (long *)0x0;
    FUN_0136049c(&local_1f0,&local_210,&local_230,&local_250);
    if (local_238 != (long *)0x0) {
      (**(code **)(*local_238 + 0x20))();
    }
    if (local_218 != (long *)0x0) {
      (**(code **)(*local_218 + 0x20))();
    }
    if (local_1f8 != (long *)0x0) {
      (**(code **)(*local_1f8 + 0x20))();
    }
    if (local_1f0 != (long *)0x0) {
      lVar20 = local_1f0[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_1f0 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f146b8(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_013e84a4();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_258 = *(long **)(param_1 + 0x30);
    if (local_258 != (long *)0x0) {
      lVar20 = local_258[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_260 = (long *)0x0;
    local_278 = 0x2f54fa1adfa52bd8;
    pcStack_270 = "T_spdefense_param_00";
    local_268 = 0x14;
    local_288 = 3;
    local_280 = (long *)0x0;
    local_298 = &DAT_e6b50e272d8cd992;
    puStack_290 = &DAT_03c3b7e8;
    local_2b8 = 0x6e318271e06fbe;
    pcStack_2b0 = "msg_ui_box_status";
    local_2a8 = 0x11;
    local_2a0 = (long *)0x0;
    FUN_0136049c(&local_258,&local_278,&local_298,&local_2b8);
    if (local_2a0 != (long *)0x0) {
      (**(code **)(*local_2a0 + 0x20))();
    }
    if (local_280 != (long *)0x0) {
      (**(code **)(*local_280 + 0x20))();
    }
    if (local_260 != (long *)0x0) {
      (**(code **)(*local_260 + 0x20))();
    }
    if (local_258 != (long *)0x0) {
      lVar20 = local_258[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_258 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    if (*(long *)(*(long *)(lVar31 + 0x70) + 8) == 0) {
      uVar15 = FUN_00f14408(lVar31);
      uVar15 = uVar15 & 0xffff;
    }
    else {
      uVar15 = FUN_013e8e40();
    }
    if (*(long *)PTR_DAT_047d90c0 != 0) {
      FUN_011b6a88(*(long *)PTR_DAT_047d90c0,0,uVar15,3,0,1);
    }
    local_2c0 = *(long **)(param_1 + 0x30);
    if (local_2c0 != (long *)0x0) {
      lVar20 = local_2c0[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_2e0 = (long *)0xbff26f4a3202eaba;
    pcStack_2d8 = "T_speed_param_00";
    local_2d0 = 0x10;
    local_2c8 = (long *)0x0;
    local_2f0 = 3;
    local_2e8 = (long *)0x0;
    local_300 = (long *)&DAT_e6b50e272d8cd992;
    puStack_2f8 = &DAT_03c3b7e8;
    local_320 = (long *)0x6e318271e06fbe;
    pcStack_318 = "msg_ui_box_status";
    local_310 = 0x11;
    local_308 = (long *)0x0;
    FUN_0136049c(aplStack_430 + 0x2e,aplStack_430 + 0x2a,aplStack_430 + 0x26,aplStack_430 + 0x22);
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
    if (local_2e8 != (long *)0x0) {
      (**(code **)(*local_2e8 + 0x20))();
    }
    if (local_2c8 != (long *)0x0) {
      (**(code **)(*local_2c8 + 0x20))();
    }
    if (local_2c0 != (long *)0x0) {
      lVar20 = local_2c0[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_2c0 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    uVar15 = FUN_00d4ea44(*(undefined8 *)(lVar31 + 0x70));
    FUN_01dee654(param_1,0,0);
    lVar31 = (ulong)(uVar15 & 0xffff) * 5;
    FUN_01dee654(param_1,1,(long)(char)(&DAT_03d62e98)[lVar31]);
    FUN_01dee654(param_1,2,(long)(char)(&DAT_03d62e99)[lVar31]);
    FUN_01dee654(param_1,3,(long)(char)(&DAT_03d62e9a)[lVar31]);
    FUN_01dee654(param_1,4,(long)(char)(&DAT_03d62e9b)[lVar31]);
    FUN_01dee654(param_1,5,(long)(char)(&DAT_03d62e9c)[lVar31]);
    lVar31 = *(long *)(param_1 + 0x50);
    if (lVar31 == 0) goto LAB_00a725a8;
    local_1c8 = *(long **)(param_1 + 0x30);
    if (local_1c8 != (long *)0x0) {
      lVar20 = local_1c8[6];
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar23;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_440 = (long *)0x3f76e2ca78cdf662;
    local_438 = 0x70ac;
    local_436 = 0x3c2;
    uStack_434 = 0;
    aplStack_430[0]._0_3_ = 0x10;
    aplStack_430[0]._3_5_ = 0;
    aplStack_430[1] = (long *)0x0;
    local_340 = (long *)0x3;
    local_338 = (long *)0x0;
    local_138 = (long *)0x7c9b05b1f8616dd8;
    local_130 = (long **)0x3c91f5b;
    local_350 = (long *)&DAT_e6b50e272d8cd992;
    pplStack_348 = (long **)&DAT_03c3b7e8;
    local_128 = 0x14;
    local_120 = (long *)0x0;
    FUN_0136049c(&local_1c8,&local_440,aplStack_430 + 0x1c,&local_138);
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x20))();
    }
    if (aplStack_430[1] != (long *)0x0) {
      (**(code **)(*aplStack_430[1] + 0x20))();
    }
    if (local_1c8 != (long *)0x0) {
      lVar20 = local_1c8[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar20 + 0x10) = 0;
        (**(code **)(*local_1c8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    iVar17 = FUN_00e97b78(*(undefined8 *)(lVar31 + 0x70));
    local_e8 = 0;
    pcStack_e0 = (char *)0x0;
    local_f8 = (char *)0x0;
    uStack_f0 = 0;
    local_118[2] = (long *)0x0;
    local_118[3] = (long *)0x0;
    local_118[0] = (long *)0x0;
    local_118[1] = (long *)0x0;
    snprintf((char *)local_118,0x40,"SEIKAKU_%03d",iVar17);
    local_1e8 = *(long **)(param_1 + 0x30);
    if (local_1e8 != (long *)0x0) {
      lVar31 = local_1e8[6];
      if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00a72dfc;
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
        *(undefined8 *)(lVar31 + 8) = uVar23;
        *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) goto LAB_00a72e1c;
    }
    local_160 = (long *)0x0;
    local_158 = (long *)0x3f76e3ca78cdf815;
    local_150 = (long **)0x3c84b9e;
    local_148 = (long *)0x10;
    local_140 = (long *)0x0;
    local_178 = (long *)0xc9fd8204968a4108;
    local_170 = (long **)0x3c9f453;
    local_168 = 7;
    if ((byte)local_118[0] != 0) {
      pbVar37 = (byte *)((ulong)local_118 | 1);
      bVar9 = (byte)local_118[0];
      do {
        plVar33 = (long *)(((ulong)plVar33 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (bVar9 != 0);
    }
    local_190 = local_118;
    local_188 = 0x3f;
    local_180 = (long *)0x0;
    local_198 = plVar33;
    FUN_0136049c(&local_1e8,&local_158,&local_178,&local_198);
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 0x20))();
    }
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_1e8 != (long *)0x0) {
      lVar31 = local_1e8[6];
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar10 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*local_1e8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00a71e7c;
    }
    lVar31 = *plVar36;
  }
  local_440 = (long *)0x42b4ae1c5985ab88;
  local_438 = 0x5ec8;
  local_436 = 0x3bf;
  uStack_434 = 0;
  aplStack_430[0]._0_3_ = 0x13;
  aplStack_430[0]._3_5_ = 0;
  aplStack_430[1] = (long *)0x42b4af1c5985ad3b;
  aplStack_430[2] = (long *)0x3bef64d;
  aplStack_430[3] = (long *)0x13;
  aplStack_430[4] = (long *)0x42b4b01c5985aeee;
  pcStack_408 = "msg_ui_box_judge_06";
  local_400 = 0x13;
  local_3f8 = 0x42b4b11c5985b0a1;
  local_3f0 = "msg_ui_box_judge_07";
  local_3e8 = 0x13;
  local_3e0 = 0x42b4aa1c5985a4bc;
  pcStack_3d8 = "msg_ui_box_judge_08";
  local_3d0 = 0x13;
  uStack_3c8 = 0x42b4ab1c5985a66f;
  local_3c0 = "msg_ui_box_judge_09";
  uStack_3b8 = 0x13;
  local_3b0 = 0x7c493136c4bed53c;
  pcStack_3a8 = "msg_judge_03_01";
  local_3a0 = 0xf;
  local_118[0] = (long *)0xa511e4394889440;
  local_118[1] = (long *)0x3c70e26;
  local_118[2] = (long *)0xd;
  local_118[3] = (long *)0xeb37ff60ae422a84;
  local_f8 = "T_attack_param_01";
  uStack_f0 = 0x11;
  local_e8 = 0x94ad19a5febc7dfc;
  pcStack_e0 = "T_defense_param_01";
  local_d8 = 0x12;
  uStack_d0 = 0xfda2437515afcf95;
  local_c8 = "T_spattack_param_01";
  uStack_c0 = 0x13;
  local_b8 = 0x2f54fb1adfa52d8b;
  pcStack_b0 = "T_spdefense_param_01";
  local_a8 = 0x14;
  uStack_a0 = 0xbff2704a3202ec6d;
  local_98 = "T_speed_param_01";
  uStack_90 = 0x10;
  if (lVar31 != 0) {
    lVar20 = 0;
    do {
      bVar9 = (&DAT_03d30200)[lVar20];
      uVar16 = FUN_00d1eb6c(*(undefined8 *)(lVar31 + 0x70));
      uVar15 = 1 << (ulong)(bVar9 & 0x1f);
      if ((uVar16 & uVar15 & 0xff) == 0) {
        uVar16 = FUN_00d1eb6c(*(undefined8 *)(lVar31 + 0x70));
        if ((uVar16 & uVar15 & 0xff) == 0) {
          uVar15 = FUN_00e97f14(lVar31,(uint)bVar9);
          if (uVar15 == 0) {
            lVar29 = 0;
          }
          else if (uVar15 < 0x10) {
            lVar29 = 1;
          }
          else if (uVar15 < 0x1a) {
            lVar29 = 2;
          }
          else if (uVar15 < 0x1e) {
            lVar29 = 3;
          }
          else {
            lVar29 = 4;
            if (uVar15 != 0x1e) {
              lVar29 = 5;
            }
          }
        }
        else {
          lVar29 = 5;
        }
      }
      else {
        lVar29 = 6;
      }
      plVar35 = local_118[lVar20 * 3 + 2];
      plVar33 = local_118[lVar20 * 3];
      pplVar2 = (long **)local_118[lVar20 * 3 + 1];
      local_178 = *(long **)(param_1 + 0x30);
      plVar34 = aplStack_430[lVar29 * 3 + -2];
      pplVar3 = (long **)aplStack_430[lVar29 * 3 + -1];
      plVar32 = aplStack_430[lVar29 * 3];
      if (local_178 != (long *)0x0) {
        lVar29 = local_178[6];
        if (*(long *)(lVar29 + 0x10) == 0) goto LAB_00a72dfc;
        psVar1 = (short *)(lVar29 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
          *(undefined8 *)(lVar29 + 8) = uVar23;
          *(undefined4 *)(lVar29 + 0x1c) = 0xfffffffe;
        }
        else if (sVar12 == -1) goto LAB_00a72e1c;
      }
      local_338 = (long *)0x0;
      local_138 = (long *)&DAT_e6b50e272d8cd992;
      local_130 = (long **)&DAT_03c3b7e8;
      local_128 = 3;
      local_120 = (long *)0x0;
      local_140 = (long *)0x0;
      local_350 = plVar33;
      pplStack_348 = pplVar2;
      local_340 = plVar35;
      local_158 = plVar34;
      local_150 = pplVar3;
      local_148 = plVar32;
      FUN_0136049c(&local_178,aplStack_430 + 0x1c,&local_138,&local_158);
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_338 != (long *)0x0) {
        (**(code **)(*local_338 + 0x20))();
      }
      if (local_178 != (long *)0x0) {
        lVar29 = local_178[6];
        psVar1 = (short *)(lVar29 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar29 + 0x10) = 0;
          (**(code **)(*local_178 + 0x50))();
        }
        else if (sVar12 == 0) goto LAB_00a71e7c;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 6);
  }
  if ((*plVar36 == 0) || (uVar15 = FUN_01e23450(), 3 < uVar15)) goto LAB_00a71a70;
  local_138 = *(long **)(param_1 + 0x30);
  if (local_138 != (long *)0x0) {
    lVar31 = local_138[6];
    if (*(long *)(lVar31 + 0x10) == 0) {
LAB_00a72dfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar31 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar10 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar12 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
      *(undefined8 *)(lVar31 + 8) = uVar23;
      *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) goto LAB_00a72e1c;
  }
  lVar31 = (ulong)uVar15 * 0x18;
  local_118[0] = (long *)&DAT_e6b50e272d8cd992;
  local_118[1] = (long *)&DAT_03c3b7e8;
  local_440 = (long *)0x6878352797dd78b8;
  local_438 = 0x2d6;
  local_436 = 0x3c5;
  uStack_434 = 0;
  local_350 = *(long **)(&DAT_04541ea0 + lVar31);
  pplStack_348 = (long **)(&PTR_s_msg_ui_box_judge_00_04541ea8)[(ulong)uVar15 * 3];
  local_340 = *(long **)(&DAT_04541eb0 + lVar31);
  aplStack_430[0]._0_3_ = 10;
  aplStack_430[0]._3_5_ = 0;
  aplStack_430[1] = (long *)0x0;
  local_118[2] = (long *)0x3;
  local_118[3] = (long *)0x0;
  local_338 = (long *)0x0;
  FUN_0136049c(&local_138,&local_440,local_118,aplStack_430 + 0x1c);
  if (local_338 != (long *)0x0) {
    (**(code **)(*local_338 + 0x20))();
  }
  if (local_118[3] != (long *)0x0) {
    (**(code **)(*local_118[3] + 0x20))();
  }
  if (aplStack_430[1] != (long *)0x0) {
    (**(code **)(*aplStack_430[1] + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    lVar31 = local_138[6];
    psVar1 = (short *)(lVar31 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar10 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar31 + 0x10) = 0;
      (**(code **)(*local_138 + 0x50))();
    }
    else if (sVar12 == 0) {
LAB_00a71e7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_00a71a70:
  plVar36 = *(long **)(param_1 + 0x38);
  if (plVar36 != (long *)0x0) {
    (**(code **)(*plVar36 + 0x58))(plVar36);
  }
  local_440 = (long *)0xd3eaf21d9ddf596f;
  local_438 = 0xde1f;
  local_436 = 0x3c7;
  uStack_434 = 0;
  aplStack_430[0]._0_3_ = 0xe;
  aplStack_430[0]._3_5_ = 0;
  aplStack_430[1] = (long *)0x0;
  lVar31 = FUN_01dee7ac(plVar36,&local_440);
  if (lVar31 != 0) {
    FUN_00d4f874();
  }
  if (plVar36 != (long *)0x0) {
    (**(code **)(*plVar36 + 0x60))(plVar36);
  }
  plVar36 = *(long **)(param_1 + 0x38);
  if (plVar36 != (long *)0x0) {
    (**(code **)(*plVar36 + 0x58))(plVar36);
  }
  local_440 = (long *)0xd3eaf11d9ddf57bc;
  local_438 = 0x2e8;
  local_436 = 0x3c5;
  uStack_434 = 0;
  aplStack_430[0]._0_3_ = 0xe;
  aplStack_430[0]._3_5_ = 0;
  aplStack_430[1] = (long *)0x0;
  lVar31 = FUN_01dee7ac(plVar36,&local_440);
  if (lVar31 != 0) {
    FUN_00d4f874();
  }
  if (plVar36 != (long *)0x0) {
    (**(code **)(*plVar36 + 0x60))(plVar36);
  }
  return;
code_r0x00a6f8ec:
  plVar32 = plVar35;
  if (plVar34 == plVar35) goto LAB_00a6fad8;
  goto LAB_00a6f8d8;
code_r0x00a72ae8:
  sVar12 = sVar13;
  if (sVar13 == 0) goto LAB_00a72b84;
  goto LAB_00a72abc;
}


