/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0127e924; name: FUN_0127e924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0127e924(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long *extraout_x11;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  undefined8 local_528;
  undefined *puStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  long *local_508;
  undefined8 local_500;
  char *pcStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  long *local_4e0;
  undefined8 local_4d8;
  undefined *puStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  long *local_4b8;
  undefined8 local_4b0;
  undefined *puStack_4a8;
  undefined8 local_4a0;
  long *local_498;
  long *local_490;
  undefined8 local_488;
  undefined *puStack_480;
  undefined8 local_478;
  long *local_470;
  long *local_468;
  undefined8 local_460;
  undefined *puStack_458;
  undefined8 local_450;
  long *local_448;
  long *local_440;
  undefined8 local_438;
  char *pcStack_430;
  undefined8 local_428;
  long *local_420;
  long *local_418;
  undefined8 local_410;
  char *pcStack_408;
  undefined8 local_400;
  long *local_3f8;
  long *local_3f0;
  undefined1 *local_3e8;
  char *local_3e0;
  undefined8 uStack_3d8;
  long *local_3d0;
  long *local_3c8;
  long *local_3c0;
  char *pcStack_3b8;
  undefined8 local_3b0;
  long *local_3a8;
  long *local_3a0;
  long *local_398;
  char *pcStack_390;
  undefined8 local_388;
  long *local_380;
  long *local_378;
  long *local_370;
  char *local_368;
  long local_360;
  long *local_358;
  long local_350;
  long local_348;
  long local_340;
  long *local_338;
  long local_330;
  long local_328;
  long local_320;
  long *local_318;
  long local_310;
  long local_308;
  long local_300;
  long *local_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  long *local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long *local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long *local_298;
  long local_290;
  long local_288;
  long local_280;
  long *local_278;
  long local_270;
  long local_268;
  long local_260;
  long *local_258;
  long local_250;
  long local_248;
  long local_240;
  long *local_238;
  long local_230;
  long local_228;
  long local_220;
  long *local_218;
  long local_210;
  long local_208;
  long local_200;
  long *local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long *local_1b8;
  long *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long *local_158;
  long local_150 [9];
  long local_108;
  long local_100;
  long local_f8;
  long *plStack_f0;
  long local_d0;
  undefined1 *local_c8;
  long *plStack_c0;
  undefined8 local_a0;
  
  puVar27 = (uint *)*param_4;
  plVar34 = (long *)*param_3;
  uVar5 = *puVar27;
  lVar13 = FUN_0104b474(*param_2 + 0x108,&local_370);
  if (lVar13 == 0) {
    return plVar34;
  }
  piVar2 = (int *)((long)puVar27 + (ulong)uVar5);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    return plVar34;
  }
  if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
    return plVar34;
  }
  plVar28 = *(long **)(lVar13 + 0x170);
  if (plVar28 == (long *)0x0) {
    FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
  }
  else {
    lVar13 = plVar28[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01280404;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar17;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_01280424;
    FUN_0104c208(&local_d0,plVar28[199] + 0x48);
    lVar13 = plVar28[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar28 + 0x50))(plVar28);
    }
    else if (sVar4 == 0) goto LAB_0128044c;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar19 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar27 = (uint *)((long)piVar2 + uVar19);
    lVar13 = (long)puVar27 + (ulong)*puVar27;
  }
  bVar6 = *(byte *)(lVar13 + 4);
  puVar20 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar20 = &DAT_cbf29ce484222645;
    pbVar22 = (byte *)(lVar13 + 5);
    do {
      puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar22;
      pbVar22 = pbVar22 + 1;
    } while (bVar6 != 0);
  }
  if (local_c8 != (undefined1 *)0x0) {
    uVar19 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      uVar19 = (ulong)puVar20 / (ulong)local_c8;
    }
    uVar23 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      puVar25 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar20);
    }
    else {
      puVar25 = puVar20;
      if (local_c8 <= puVar20) {
        puVar25 = puVar20 + -(uVar19 * (long)local_c8);
      }
    }
    plVar28 = *(long **)(local_d0 + (long)puVar25 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      puVar24 = local_c8 + -1;
      if (uVar23 < 2) {
        do {
          if ((undefined1 *)plVar28[1] == puVar20) {
            if ((undefined1 *)plVar28[2] == puVar20) goto LAB_0127eb74;
          }
          else if ((undefined1 *)((ulong)plVar28[1] & (ulong)puVar24) != puVar25) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          puVar26 = (undefined1 *)plVar28[1];
          if (puVar26 == puVar20) {
            if ((undefined1 *)plVar28[2] == puVar20) goto LAB_0127eb74;
          }
          else {
            if (local_c8 <= puVar26) {
              uVar9 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar26 / (ulong)local_c8;
              }
              puVar26 = puVar26 + -(uVar9 * (long)local_c8);
            }
            if (puVar26 != puVar25) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  goto LAB_0127fbd0;
LAB_0127eb74:
  if (uVar23 < 2) {
    puVar25 = (undefined1 *)((ulong)puVar24 & (ulong)puVar20);
  }
  else {
    puVar25 = puVar20;
    if (local_c8 <= puVar20) {
      puVar25 = puVar20 + -(uVar19 * (long)local_c8);
    }
  }
  plVar28 = *(long **)(local_d0 + (long)puVar25 * 8);
  if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
    if (uVar23 < 2) {
      do {
        if ((undefined1 *)plVar28[1] == puVar20) {
          if ((undefined1 *)plVar28[2] == puVar20) goto LAB_0127ec18;
        }
        else if ((undefined1 *)((ulong)plVar28[1] & (ulong)puVar24) != puVar25) break;
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
    else {
      do {
        puVar24 = (undefined1 *)plVar28[1];
        if (puVar24 == puVar20) {
          if ((undefined1 *)plVar28[2] == puVar20) goto LAB_0127ec18;
        }
        else {
          if (local_c8 <= puVar24) {
            uVar19 = 0;
            if (local_c8 != (undefined1 *)0x0) {
              uVar19 = (ulong)puVar24 / (ulong)local_c8;
            }
            puVar24 = puVar24 + -(uVar19 * (long)local_c8);
          }
          if (puVar24 != puVar25) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
  }
  goto LAB_0127edc8;
LAB_0127ec18:
  FUN_0104c68c(&local_108,plVar28 + 6);
  lVar13 = local_108;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    iVar12 = 0;
  }
  else {
    uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    iVar12 = 0;
    if (uVar19 != 0) {
      iVar12 = *(int *)((long)piVar2 + uVar19);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar12) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar21 = (undefined8 *)(local_108 + (long)iVar12 * 0x68);
  local_170 = *puVar21;
  local_168 = puVar21[1];
  local_160 = puVar21[2];
  local_158 = (long *)puVar21[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
  }
  memcpy(local_150,(void *)(lVar13 + (long)iVar12 * 0x68 + 0x20),0x48);
  if (local_c8 != (undefined1 *)0x0) {
    uVar19 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      puVar20 = (undefined1 *)((ulong)(local_c8 + -1) & 0x5650fad11dcff55);
    }
    else if (local_c8 < (undefined1 *)0x5650fad11dcff56) {
      uVar23 = 0;
      if (local_c8 != (undefined1 *)0x0) {
        uVar23 = 0x5650fad11dcff55 / (ulong)local_c8;
      }
      puVar20 = (undefined1 *)(0x5650fad11dcff55 - uVar23 * (long)local_c8);
    }
    else {
      puVar20 = (undefined1 *)0x5650fad11dcff55;
    }
    plVar28 = *(long **)(local_d0 + (long)puVar20 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar28[1] == 0x5650fad11dcff55) {
            if (plVar28[2] == 0x5650fad11dcff55) goto LAB_0127edcc;
          }
          else if ((undefined1 *)(plVar28[1] & (ulong)(local_c8 + -1)) != puVar20) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          puVar25 = (undefined1 *)plVar28[1];
          if (puVar25 == (undefined1 *)0x5650fad11dcff55) {
            if (plVar28[2] == 0x5650fad11dcff55) goto LAB_0127edcc;
          }
          else {
            if (local_c8 <= puVar25) {
              uVar19 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                uVar19 = (ulong)puVar25 / (ulong)local_c8;
              }
              puVar25 = puVar25 + -(uVar19 * (long)local_c8);
            }
            if (puVar25 != puVar20) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
LAB_0127edc8:
  FUN_02143970();
  plVar28 = extraout_x11;
LAB_0127edcc:
  FUN_0104c68c(&local_1a8,plVar28 + 6);
  local_370 = (long *)&DAT_b549f3433c9e99e3;
  local_368 = "cursorParts";
  local_360 = 0xb;
  local_358 = (long *)0x0;
  FUN_012804b0(&local_1b0,&local_170,&local_370);
  lVar18 = local_1a0;
  lVar13 = local_1a8;
  plVar28 = local_1b0;
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x18))(local_1b0);
  }
  plVar15 = (long *)PTR_DAT_047d8b70;
  if (lVar13 != lVar18) {
    plVar16 = (long *)PTR_DAT_047d8b70;
    if (plVar28 != (long *)0x0) {
      plVar16 = plVar28 + 6;
    }
    do {
      FUN_00faae34(&local_370,*(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18));
      plVar3 = plVar15;
      if (local_370 != (long *)0x0) {
        plVar3 = local_370 + 6;
      }
      lVar31 = *plVar16;
      lVar32 = *plVar3;
      if (local_370 != (long *)0x0) {
        (**(code **)(*local_370 + 0x20))();
      }
      if (lVar31 == lVar32) goto LAB_0127ee90;
      lVar13 = lVar13 + 0x68;
    } while (lVar18 != lVar13);
    lVar13 = lVar18;
  }
LAB_0127ee90:
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  plVar28 = plVar34;
  if (local_1a0 != lVar13) {
    param_1 = (long *)*param_1;
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
      local_3e8 = (undefined1 *)0x0;
    }
    else {
      uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
      local_3e8 = (undefined1 *)0x0;
      if (uVar19 != 0) {
        puVar27 = (uint *)((long)piVar2 + uVar19);
        local_3e8 = (undefined1 *)((long)puVar27 + (ulong)*puVar27);
      }
    }
    FUN_00ea0a7c(&local_3c0,&local_3e8);
    plVar28 = local_3c0;
    plVar16 = (long *)PTR_PTR_047d4508;
    local_370 = plVar15;
    if (local_3c0 != (long *)0x0) {
      local_370 = local_3c0 + 6;
    }
    local_370 = (long *)*local_370;
    plVar3 = (long *)PTR_PTR_047d4508;
    if (local_3c0 != (long *)0x0) {
      plVar3 = local_3c0 + 7;
    }
    local_368 = (char *)*plVar3;
    if (local_3c0 == (long *)0x0) {
      local_360 = 0;
    }
    else {
      local_360 = local_3c0[8];
    }
    local_358 = (long *)0x0;
    if (local_3c0 != (long *)0x0) {
      (**(code **)(*local_3c0 + 0x18))(local_3c0);
    }
    local_358 = plVar28;
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = param_1;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar28 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x380,0x10);
    if (plVar28 == (long *)0x0) {
      (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    memset(plVar28,0,0x380);
    FUN_0104c068(plVar28);
    puVar10 = PTR_DAT_047dd068;
    plVar28[0x44] = 0;
    plVar28[0x23] = 0;
    plVar28[0x24] = 0;
    plVar28[0x27] = 0;
    plVar28[0x28] = 0;
    *plVar28 = (long)(puVar10 + 0x10);
    plVar28[4] = (long)(puVar10 + 0x150);
    plVar28[5] = (long)(puVar10 + 0x1a0);
    plVar28[0x46] = (long)&DAT_03c886bc;
    plVar28[0x4a] = (long)&DAT_03c886bc;
    plVar28[0x4e] = (long)&DAT_03c886bc;
    plVar28[0x52] = (long)&DAT_03c886bc;
    plVar28[0x5a] = 1;
    *(undefined4 *)(plVar28 + 0x5b) = 0x10101;
    *(undefined4 *)(plVar28 + 0x5c) = 0x3fc00000;
    plVar28[0x41] = (long)&DAT_cbf29ce484222645;
    plVar28[0x42] = (long)&DAT_03c886bc;
    plVar28[0x43] = 0;
    plVar28[0x45] = (long)&DAT_cbf29ce484222645;
    plVar28[0x47] = 0;
    plVar28[0x48] = 0;
    plVar28[0x49] = (long)&DAT_cbf29ce484222645;
    plVar28[0x4b] = 0;
    plVar28[0x4c] = 0;
    plVar28[0x4d] = (long)&DAT_cbf29ce484222645;
    plVar28[0x4f] = 0;
    plVar28[0x50] = 0;
    plVar28[0x51] = (long)&DAT_cbf29ce484222645;
    plVar28[0x53] = 0;
    plVar28[0x54] = 0;
    plVar28[0x55] = (long)&DAT_cbf29ce484222645;
    plVar28[0x56] = (long)&DAT_03c886bc;
    plVar28[0x59] = 0;
    plVar28[0x58] = 0;
    plVar28[0x57] = 0;
    *(undefined1 *)((long)plVar28 + 0x2dc) = 0;
    *(undefined4 *)(plVar28 + 0x5d) = 0;
    plVar28[0x5e] = 0;
    *(undefined1 *)(plVar28 + 0x5f) = 0;
    plVar28[0x21] = (long)&DAT_cbf29ce484222645;
    plVar28[0x22] = (long)&DAT_03c886bc;
    plVar28[0x25] = (long)&DAT_cbf29ce484222645;
    plVar28[0x26] = (long)&DAT_03c886bc;
    plVar28[0x29] = (long)&DAT_cbf29ce484222645;
    plVar28[0x2a] = (long)&DAT_03c886bc;
    plVar28[0x2b] = 0;
    plVar28[0x2c] = 0;
    plVar28[0x2d] = (long)&DAT_cbf29ce484222645;
    plVar28[0x2e] = (long)&DAT_03c886bc;
    plVar28[0x2f] = 0;
    plVar28[0x30] = 0;
    plVar28[0x31] = (long)&DAT_cbf29ce484222645;
    plVar28[0x32] = (long)&DAT_03c886bc;
    plVar28[0x33] = 0;
    plVar28[0x34] = 0;
    plVar28[0x35] = (long)&DAT_cbf29ce484222645;
    plVar28[0x36] = (long)&DAT_03c886bc;
    plVar28[0x37] = 0;
    plVar28[0x38] = 0;
    plVar28[0x39] = (long)&DAT_cbf29ce484222645;
    plVar28[0x3a] = (long)&DAT_03c886bc;
    plVar28[0x3b] = 0;
    plVar28[0x3c] = 0;
    plVar28[0x3d] = (long)&DAT_cbf29ce484222645;
    plVar28[0x3e] = (long)&DAT_03c886bc;
    plVar28[0x3f] = 0;
    plVar28[0x40] = 0;
    *(undefined4 *)((long)plVar28 + 0x31c) = 0;
    *(undefined8 *)((long)plVar28 + 0x30c) = 0;
    *(undefined8 *)((long)plVar28 + 0x314) = 0;
    *(undefined8 *)((long)plVar28 + 0x2fc) = 0;
    *(undefined8 *)((long)plVar28 + 0x304) = 0;
    *(undefined4 *)(plVar28 + 3) = 0x100380;
    plVar28[1] = (long)param_1;
    plVar28[2] = (long)plVar28;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = plVar28[6];
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_01280404:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar17;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_01280424:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar3 = local_358;
    plVar28[8] = (long)local_370;
    plVar28[9] = (long)local_368;
    plVar28[10] = local_360;
    if (local_358 != (long *)0x0) {
      (**(code **)(*local_358 + 0x18))(local_358);
    }
    plVar14 = (long *)plVar28[0xb];
    plVar28[0xb] = (long)plVar3;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    local_398 = plVar28;
    (**(code **)(*plVar34 + 0x120))(plVar34,&local_398);
    if (local_398 != (long *)0x0) {
      lVar18 = local_398[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*local_398 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_0128044c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar34 + 0x80))(plVar34,&local_370);
    if (local_358 != (long *)0x0) {
      (**(code **)(*local_358 + 0x20))();
    }
    if (local_3c0 != (long *)0x0) {
      (**(code **)(*local_3c0 + 0x20))();
    }
    FUN_00faae34(&local_370,*(undefined8 *)(local_150[0] + 0x18));
    plVar3 = local_370;
    plVar34 = plVar15;
    if (local_370 != (long *)0x0) {
      plVar34 = local_370 + 6;
    }
    lVar18 = *plVar34;
    plVar34 = plVar16;
    if (local_370 != (long *)0x0) {
      plVar34 = local_370 + 7;
    }
    lVar31 = *plVar34;
    if (local_370 == (long *)0x0) {
      lVar32 = 0;
    }
    else {
      lVar32 = local_370[8];
      (**(code **)(*local_370 + 0x18))(local_370);
    }
    FUN_00faae34(&local_398,*(undefined8 *)(local_150[0] + 0x18));
    plVar34 = local_398;
    if (local_398 != (long *)0x0) {
      plVar15 = local_398 + 6;
    }
    lVar33 = *plVar15;
    if (local_398 != (long *)0x0) {
      plVar16 = local_398 + 7;
    }
    lVar29 = *plVar16;
    if (local_398 == (long *)0x0) {
      lVar30 = 0;
    }
    else {
      lVar30 = local_398[8];
      (**(code **)(*local_398 + 0x18))(local_398);
    }
    plVar28[0x11] = lVar18;
    plVar28[0x12] = lVar31;
    plVar28[0x13] = lVar32;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar15 = (long *)plVar28[0x14];
    plVar28[0x14] = (long)plVar3;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar28[0x15] = lVar33;
    plVar28[0x16] = lVar29;
    plVar28[0x17] = lVar30;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x18))(plVar34);
    }
    plVar16 = (long *)plVar28[0x18];
    plVar28[0x18] = (long)plVar34;
    plVar15 = (long *)PTR_PTR_047d4508;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))();
    }
    plVar16 = (long *)PTR_DAT_047d8b70;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x20))(plVar34);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if (local_398 != (long *)0x0) {
      (**(code **)(*local_398 + 0x20))();
    }
    if (local_370 != (long *)0x0) {
      (**(code **)(*local_370 + 0x20))();
    }
    local_398 = (long *)0x130083360bccddae;
    pcStack_390 = "text00";
    local_388 = 6;
    local_380 = (long *)0x0;
    FUN_012804b0(&local_378,&local_170,&local_398);
    plVar3 = local_378;
    plVar34 = plVar15;
    local_370 = plVar16;
    if (local_378 != (long *)0x0) {
      plVar34 = local_378 + 7;
      local_370 = local_378 + 6;
    }
    local_370 = (long *)*local_370;
    local_368 = (char *)*plVar34;
    if (local_378 == (long *)0x0) {
      local_360 = 0;
    }
    else {
      local_360 = local_378[8];
    }
    local_358 = (long *)0x0;
    if (local_378 != (long *)0x0) {
      (**(code **)(*local_378 + 0x18))(local_378);
    }
    local_358 = plVar3;
    local_3c0 = (long *)0x130084360bccdf61;
    pcStack_3b8 = "text01";
    local_3b0 = 6;
    local_3a8 = (long *)0x0;
    FUN_012804b0(&local_3a0,&local_170,&local_3c0);
    plVar14 = local_3a0;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_3a0 != (long *)0x0) {
      plVar34 = local_3a0 + 7;
      plVar3 = local_3a0 + 6;
    }
    local_350 = *plVar3;
    local_348 = *plVar34;
    if (local_3a0 == (long *)0x0) {
      local_340 = 0;
    }
    else {
      local_340 = local_3a0[8];
    }
    local_338 = (long *)0x0;
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x18))(local_3a0);
    }
    local_338 = plVar14;
    local_3e8 = &DAT_b549f3433c9e99e3;
    local_3d0 = (long *)0x0;
    local_3e0 = "cursorParts";
    uStack_3d8 = 0xb;
    FUN_012804b0(&local_3c8,&local_170,&local_3e8);
    plVar14 = local_3c8;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_3c8 != (long *)0x0) {
      plVar34 = local_3c8 + 7;
      plVar3 = local_3c8 + 6;
    }
    local_330 = *plVar3;
    local_328 = *plVar34;
    if (local_3c8 == (long *)0x0) {
      local_320 = 0;
    }
    else {
      local_320 = local_3c8[8];
    }
    local_318 = (long *)0x0;
    if (local_3c8 != (long *)0x0) {
      (**(code **)(*local_3c8 + 0x18))(local_3c8);
    }
    local_318 = plVar14;
    local_410 = 0x26daf7b88670db69;
    pcStack_408 = "speakerName";
    local_400 = 0xb;
    local_3f8 = (long *)0x0;
    FUN_012804b0(&local_3f0,&local_170,&local_410);
    plVar14 = local_3f0;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_3f0 != (long *)0x0) {
      plVar34 = local_3f0 + 7;
      plVar3 = local_3f0 + 6;
    }
    local_310 = *plVar3;
    local_308 = *plVar34;
    if (local_3f0 == (long *)0x0) {
      local_300 = 0;
    }
    else {
      local_300 = local_3f0[8];
    }
    local_2f8 = (long *)0x0;
    if (local_3f0 != (long *)0x0) {
      (**(code **)(*local_3f0 + 0x18))(local_3f0);
    }
    local_2f8 = plVar14;
    local_438 = 0x89c8e90bf89448a9;
    pcStack_430 = "speakerText";
    local_428 = 0xb;
    local_420 = (long *)0x0;
    FUN_012804b0(&local_418,&local_170,&local_438);
    plVar14 = local_418;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_418 != (long *)0x0) {
      plVar34 = local_418 + 7;
      plVar3 = local_418 + 6;
    }
    local_2f0 = *plVar3;
    local_2e8 = *plVar34;
    if (local_418 == (long *)0x0) {
      local_2e0 = 0;
    }
    else {
      local_2e0 = local_418[8];
    }
    local_2d8 = (long *)0x0;
    if (local_418 != (long *)0x0) {
      (**(code **)(*local_418 + 0x18))(local_418);
    }
    local_2d8 = plVar14;
    local_460 = 0x127c3807bda8f4de;
    puStack_458 = &DAT_03c88729;
    local_450 = 2;
    local_448 = (long *)0x0;
    FUN_0104b1dc(&local_440,&local_170,&local_460);
    plVar14 = local_440;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_440 != (long *)0x0) {
      plVar34 = local_440 + 7;
      plVar3 = local_440 + 6;
    }
    local_2d0 = *plVar3;
    local_2c8 = *plVar34;
    if (local_440 == (long *)0x0) {
      local_2c0 = 0;
    }
    else {
      local_2c0 = local_440[8];
    }
    local_2b8 = (long *)0x0;
    if (local_440 != (long *)0x0) {
      (**(code **)(*local_440 + 0x18))(local_440);
    }
    local_2b8 = plVar14;
    local_488 = 0x607b273c00779f;
    puStack_480 = &DAT_03be9a30;
    local_478 = 3;
    local_470 = (long *)0x0;
    FUN_0104b1dc(&local_468,&local_170,&local_488);
    plVar14 = local_468;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_468 != (long *)0x0) {
      plVar34 = local_468 + 7;
      plVar3 = local_468 + 6;
    }
    local_2b0 = *plVar3;
    local_2a8 = *plVar34;
    if (local_468 == (long *)0x0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = local_468[8];
    }
    local_298 = (long *)0x0;
    if (local_468 != (long *)0x0) {
      (**(code **)(*local_468 + 0x18))(local_468);
    }
    local_298 = plVar14;
    local_4a0 = 4;
    local_498 = (long *)0x0;
    local_4b0 = 0x1dd494cdfcbdea68;
    puStack_4a8 = &DAT_03c049f3;
    FUN_0104b1dc(&local_490,lVar13,&local_4b0);
    plVar14 = local_490;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_490 != (long *)0x0) {
      plVar34 = local_490 + 7;
      plVar3 = local_490 + 6;
    }
    local_290 = *plVar3;
    local_288 = *plVar34;
    if (local_490 == (long *)0x0) {
      local_280 = 0;
    }
    else {
      local_280 = local_490[8];
    }
    local_278 = (long *)0x0;
    if (local_490 != (long *)0x0) {
      (**(code **)(*local_490 + 0x18))(local_490);
    }
    puVar10 = PTR_DAT_047d3e28;
    local_278 = plVar14;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar11 = PTR_DAT_047d3e30;
    local_270 = *(long *)PTR_DAT_047d3e30;
    local_268 = *(long *)(PTR_DAT_047d3e30 + 8);
    local_260 = *(long *)(PTR_DAT_047d3e30 + 0x10);
    local_258 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_258 != (long *)0x0) {
      (**(code **)(*local_258 + 0x18))();
    }
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_250 = *(long *)puVar11;
    local_248 = *(long *)(puVar11 + 8);
    local_240 = *(long *)(puVar11 + 0x10);
    local_238 = *(long **)(puVar11 + 0x18);
    if (local_238 != (long *)0x0) {
      (**(code **)(*local_238 + 0x18))();
    }
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_230 = *(long *)puVar11;
    local_228 = *(long *)(puVar11 + 8);
    local_220 = *(long *)(puVar11 + 0x10);
    local_218 = *(long **)(puVar11 + 0x18);
    if (local_218 != (long *)0x0) {
      (**(code **)(*local_218 + 0x18))();
    }
    local_4c8 = 4;
    uStack_4c0 = 0;
    local_4d8 = 0x1dd494cdfcbdea68;
    puStack_4d0 = &DAT_03c049f3;
    FUN_0104b1dc(&local_4b8,&local_170,&local_4d8);
    plVar14 = local_4b8;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_4b8 != (long *)0x0) {
      plVar34 = local_4b8 + 7;
      plVar3 = local_4b8 + 6;
    }
    local_210 = *plVar3;
    local_208 = *plVar34;
    if (local_4b8 == (long *)0x0) {
      local_200 = 0;
    }
    else {
      local_200 = local_4b8[8];
    }
    local_1f8 = (long *)0x0;
    if (local_4b8 != (long *)0x0) {
      (**(code **)(*local_4b8 + 0x18))(local_4b8);
    }
    local_1f8 = plVar14;
    local_500 = 0x73cc257384b9a129;
    pcStack_4f8 = "pattern";
    local_4f0 = 7;
    uStack_4e8 = 0;
    FUN_0104b1dc(&local_4e0,&local_170,&local_500);
    plVar14 = local_4e0;
    plVar34 = plVar15;
    plVar3 = plVar16;
    if (local_4e0 != (long *)0x0) {
      plVar34 = local_4e0 + 7;
      plVar3 = local_4e0 + 6;
    }
    local_1f0 = *plVar3;
    local_1e8 = *plVar34;
    if (local_4e0 == (long *)0x0) {
      local_1e0 = 0;
    }
    else {
      local_1e0 = local_4e0[8];
    }
    local_1d8 = (long *)0x0;
    if (local_4e0 != (long *)0x0) {
      (**(code **)(*local_4e0 + 0x18))(local_4e0);
    }
    local_1d8 = plVar14;
    local_528 = 0x61693b2773755209;
    puStack_520 = &DAT_03c43bfb;
    local_518 = 3;
    uStack_510 = 0;
    FUN_0104b1dc(&local_508,&local_170,&local_528);
    plVar34 = local_508;
    if (local_508 != (long *)0x0) {
      plVar15 = local_508 + 7;
      plVar16 = local_508 + 6;
    }
    local_1d0 = *plVar16;
    local_1c8 = *plVar15;
    if (local_508 == (long *)0x0) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = local_508[8];
    }
    local_1b8 = (long *)0x0;
    if (local_508 == (long *)0x0) {
      local_1b8 = local_508;
    }
    else {
      (**(code **)(*local_508 + 0x18))(local_508);
      local_1b8 = plVar34;
      if (local_508 != (long *)0x0) {
        (**(code **)(*local_508 + 0x20))();
      }
    }
    if (local_4e0 != (long *)0x0) {
      (**(code **)(*local_4e0 + 0x20))();
    }
    if (local_4b8 != (long *)0x0) {
      (**(code **)(*local_4b8 + 0x20))();
    }
    if (local_490 != (long *)0x0) {
      (**(code **)(*local_490 + 0x20))();
    }
    if (local_498 != (long *)0x0) {
      (**(code **)(*local_498 + 0x20))();
    }
    if (local_468 != (long *)0x0) {
      (**(code **)(*local_468 + 0x20))();
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    if (local_440 != (long *)0x0) {
      (**(code **)(*local_440 + 0x20))();
    }
    if (local_448 != (long *)0x0) {
      (**(code **)(*local_448 + 0x20))();
    }
    if (local_418 != (long *)0x0) {
      (**(code **)(*local_418 + 0x20))();
    }
    if (local_420 != (long *)0x0) {
      (**(code **)(*local_420 + 0x20))();
    }
    if (local_3f0 != (long *)0x0) {
      (**(code **)(*local_3f0 + 0x20))();
    }
    if (local_3f8 != (long *)0x0) {
      (**(code **)(*local_3f8 + 0x20))();
    }
    if (local_3c8 != (long *)0x0) {
      (**(code **)(*local_3c8 + 0x20))();
    }
    if (local_3d0 != (long *)0x0) {
      (**(code **)(*local_3d0 + 0x20))();
    }
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x20))();
    }
    if (local_3a8 != (long *)0x0) {
      (**(code **)(*local_3a8 + 0x20))();
    }
    if (local_378 != (long *)0x0) {
      (**(code **)(*local_378 + 0x20))();
    }
    if (local_380 != (long *)0x0) {
      (**(code **)(*local_380 + 0x20))();
    }
    plVar34 = local_358;
    plVar28[0x21] = (long)local_370;
    plVar28[0x22] = (long)local_368;
    plVar28[0x23] = local_360;
    if (local_358 != (long *)0x0) {
      (**(code **)(*local_358 + 0x18))(local_358);
    }
    plVar15 = (long *)plVar28[0x24];
    plVar28[0x24] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_338;
    plVar28[0x25] = local_350;
    plVar28[0x26] = local_348;
    plVar28[0x27] = local_340;
    if (local_338 != (long *)0x0) {
      (**(code **)(*local_338 + 0x18))(local_338);
    }
    plVar15 = (long *)plVar28[0x28];
    plVar28[0x28] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_318;
    plVar28[0x29] = local_330;
    plVar28[0x2a] = local_328;
    plVar28[0x2b] = local_320;
    if (local_318 != (long *)0x0) {
      (**(code **)(*local_318 + 0x18))(local_318);
    }
    plVar15 = (long *)plVar28[0x2c];
    plVar28[0x2c] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_2f8;
    plVar28[0x2d] = local_310;
    plVar28[0x2e] = local_308;
    plVar28[0x2f] = local_300;
    if (local_2f8 != (long *)0x0) {
      (**(code **)(*local_2f8 + 0x18))(local_2f8);
    }
    plVar15 = (long *)plVar28[0x30];
    plVar28[0x30] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_2d8;
    plVar28[0x31] = local_2f0;
    plVar28[0x32] = local_2e8;
    plVar28[0x33] = local_2e0;
    if (local_2d8 != (long *)0x0) {
      (**(code **)(*local_2d8 + 0x18))(local_2d8);
    }
    plVar15 = (long *)plVar28[0x34];
    plVar28[0x34] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_2b8;
    plVar28[0x35] = local_2d0;
    plVar28[0x36] = local_2c8;
    plVar28[0x37] = local_2c0;
    if (local_2b8 != (long *)0x0) {
      (**(code **)(*local_2b8 + 0x18))(local_2b8);
    }
    plVar15 = (long *)plVar28[0x38];
    plVar28[0x38] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_298;
    plVar28[0x39] = local_2b0;
    plVar28[0x3a] = local_2a8;
    plVar28[0x3b] = local_2a0;
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x18))(local_298);
    }
    plVar15 = (long *)plVar28[0x3c];
    plVar28[0x3c] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_278;
    plVar28[0x3d] = local_290;
    plVar28[0x3e] = local_288;
    plVar28[0x3f] = local_280;
    if (local_278 != (long *)0x0) {
      (**(code **)(*local_278 + 0x18))(local_278);
    }
    plVar15 = (long *)plVar28[0x40];
    plVar28[0x40] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_258;
    plVar28[0x41] = local_270;
    plVar28[0x42] = local_268;
    plVar28[0x43] = local_260;
    if (local_258 != (long *)0x0) {
      (**(code **)(*local_258 + 0x18))(local_258);
    }
    plVar15 = (long *)plVar28[0x44];
    plVar28[0x44] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_238;
    plVar28[0x45] = local_250;
    plVar28[0x46] = local_248;
    plVar28[0x47] = local_240;
    if (local_238 != (long *)0x0) {
      (**(code **)(*local_238 + 0x18))(local_238);
    }
    plVar15 = (long *)plVar28[0x48];
    plVar28[0x48] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_218;
    plVar28[0x49] = local_230;
    plVar28[0x4a] = local_228;
    plVar28[0x4b] = local_220;
    if (local_218 != (long *)0x0) {
      (**(code **)(*local_218 + 0x18))(local_218);
    }
    plVar15 = (long *)plVar28[0x4c];
    plVar28[0x4c] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_1f8;
    plVar28[0x4d] = local_210;
    plVar28[0x4e] = local_208;
    plVar28[0x4f] = local_200;
    if (local_1f8 != (long *)0x0) {
      (**(code **)(*local_1f8 + 0x18))(local_1f8);
    }
    plVar15 = (long *)plVar28[0x50];
    plVar28[0x50] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_1d8;
    plVar28[0x51] = local_1f0;
    plVar28[0x52] = local_1e8;
    plVar28[0x53] = local_1e0;
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 0x18))(local_1d8);
    }
    plVar15 = (long *)plVar28[0x54];
    plVar28[0x54] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    plVar34 = local_1b8;
    plVar28[0x55] = local_1d0;
    plVar28[0x56] = local_1c8;
    plVar28[0x57] = local_1c0;
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x18))(local_1b8);
    }
    plVar15 = (long *)plVar28[0x58];
    plVar28[0x58] = (long)plVar34;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    FUN_012806b0(&local_370);
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  lVar13 = local_1a8;
  if (local_1a8 != 0) {
    lVar18 = local_1a0;
    if (local_1a0 == local_1a8) {
      lVar18 = local_1a8;
    }
    else {
      do {
        plVar34 = (long *)(lVar18 + -0x50);
        lVar18 = lVar18 + -0x68;
        if ((long *)*plVar34 != (long *)0x0) {
          (**(code **)(*(long *)*plVar34 + 0x20))();
        }
      } while (lVar13 != lVar18);
      lVar18 = local_1a8;
    }
    local_1a0 = lVar13;
    uVar19 = (**(code **)(*local_190 + 0xf8))(local_190);
    if (((uVar19 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*local_190 + 0x18))(local_190,lVar18,local_198 - lVar18,8);
    }
    else {
      FUN_00c48fe8(local_190,lVar18,local_198 - lVar18,8);
    }
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  lVar13 = local_108;
  plVar34 = plVar28;
  if (local_108 != 0) {
    lVar18 = local_100;
    if (local_100 == local_108) {
      lVar18 = local_108;
    }
    else {
      do {
        plVar28 = (long *)(lVar18 + -0x50);
        lVar18 = lVar18 + -0x68;
        if ((long *)*plVar28 != (long *)0x0) {
          (**(code **)(*(long *)*plVar28 + 0x20))();
        }
      } while (lVar13 != lVar18);
      lVar18 = local_108;
    }
    local_100 = lVar13;
    uVar19 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar19 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar18,local_f8 - lVar18,8);
    }
    else {
      FUN_00c48fe8(plStack_f0,lVar18,local_f8 - lVar18,8);
    }
  }
LAB_0127fbd0:
  FUN_0104b710(&local_d0,local_a0);
  lVar13 = local_d0;
  local_d0 = 0;
  if (lVar13 != 0) {
    uVar19 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
    if (((uVar19 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar13,(long)local_c8 << 3,8);
    }
    else {
      FUN_00c48fe8(plStack_c0,lVar13,(long)local_c8 << 3,8);
    }
  }
  return plVar34;
}


