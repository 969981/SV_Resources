/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021488ac; name: FUN_021488ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_021488ac(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *extraout_x8;
  long lVar19;
  undefined1 *extraout_x9;
  undefined8 *puVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong extraout_x10;
  uint *puVar24;
  undefined1 *puVar25;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  uint *puVar30;
  undefined8 uVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  long local_5a8;
  long *local_5a0;
  code *local_598;
  code *local_590;
  long *local_588;
  undefined8 local_580;
  long lStack_578;
  long *local_518;
  undefined1 *puStack_510;
  long local_508;
  long *local_500;
  undefined1 *local_4f8;
  undefined1 *puStack_4f0;
  long local_4e8;
  long *local_4e0;
  undefined1 *local_4d8;
  undefined1 *puStack_4d0;
  long local_4c8;
  long *local_4c0;
  undefined1 *local_4b8;
  undefined1 *puStack_4b0;
  long local_4a8;
  long *local_4a0;
  undefined1 *local_498;
  undefined1 *puStack_490;
  long local_488;
  long *local_480;
  undefined1 *local_478;
  undefined1 *puStack_470;
  long local_468;
  long *local_460;
  undefined1 *local_458;
  undefined1 *puStack_450;
  long local_448;
  long *local_440;
  undefined1 *local_438;
  undefined1 *puStack_430;
  long local_428;
  long *local_420;
  undefined1 *local_418;
  undefined1 *puStack_410;
  long local_408;
  long *local_400;
  undefined1 *local_3f8;
  undefined1 *puStack_3f0;
  long local_3e8;
  long *local_3e0;
  undefined1 *local_3d8;
  undefined1 *puStack_3d0;
  long local_3c8;
  long *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  long local_3a8;
  long *local_3a0;
  undefined1 *local_398;
  undefined1 *local_390;
  long local_388;
  long *local_380;
  undefined1 *local_378;
  undefined1 *local_370;
  long local_368;
  long *local_360;
  undefined1 *local_358;
  undefined1 *local_350;
  long local_348;
  long *local_340;
  undefined1 *local_338;
  undefined1 *local_330;
  long local_328;
  long *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  long local_308;
  long *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  long local_2e8;
  long *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  long local_2c8;
  long *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  long local_2a8;
  long *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  long local_288;
  long *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  long local_268;
  long *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  long local_248;
  long *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  long local_228;
  long *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  long local_208;
  long *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  long local_1e8;
  long *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  long local_1c8;
  long *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  long local_188;
  long *local_180;
  long *local_178;
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
  
  puVar30 = (uint *)*param_4;
  lVar16 = *param_2;
  lVar35 = *param_3;
  uVar6 = *puVar30;
  lVar11 = FUN_0104b474(lVar16 + 0x108,&local_518);
  if (lVar11 != 0) {
    piVar3 = (int *)((long)puVar30 + (ulong)uVar6);
    if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (((ushort *)((long)piVar3 - (long)*piVar3))[3] != 0)) {
      plVar32 = *(long **)(lVar11 + 0x170);
      if (plVar32 == (long *)0x0) {
        FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
      }
      else {
        lVar11 = plVar32[6];
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar31 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar31;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        FUN_0104c208(&local_d0,plVar32[199] + 0x48);
        lVar11 = plVar32[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar32 + 0x50))(plVar32);
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar17 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar30 = (uint *)((long)piVar3 + uVar17);
        lVar11 = (long)puVar30 + (ulong)*puVar30;
      }
      bVar7 = *(byte *)(lVar11 + 4);
      puVar18 = &DAT_cbf29ce484222645;
      if (bVar7 != 0) {
        puVar18 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar11 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar7 != 0);
      }
      if (local_c8 != (undefined1 *)0x0) {
        uVar17 = 0;
        if (local_c8 != (undefined1 *)0x0) {
          uVar17 = (ulong)puVar18 / (ulong)local_c8;
        }
        uVar23 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          puVar26 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar18);
        }
        else {
          puVar26 = puVar18;
          if (local_c8 <= puVar18) {
            puVar26 = puVar18 + -(uVar17 * (long)local_c8);
          }
        }
        plVar32 = *(long **)(local_d0 + (long)puVar26 * 8);
        if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
          puVar25 = local_c8 + -1;
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar32[1] == puVar18) {
                if ((undefined1 *)plVar32[2] == puVar18) goto LAB_02148b00;
              }
              else if ((undefined1 *)((ulong)plVar32[1] & (ulong)puVar25) != puVar26) break;
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
          }
          else {
            do {
              puVar28 = (undefined1 *)plVar32[1];
              if (puVar28 == puVar18) {
                if ((undefined1 *)plVar32[2] == puVar18) {
LAB_02148b00:
                  puVar26 = local_c8;
                  lVar11 = local_d0;
                  if (uVar23 < 2) goto LAB_02148b70;
                  puVar28 = puVar18;
                  if (local_c8 <= puVar18) {
                    puVar28 = puVar18 + -(uVar17 * (long)local_c8);
                  }
                  do {
                    plVar32 = *(long **)(lVar11 + (long)puVar28 * 8);
                    if ((plVar32 != (long *)0x0) &&
                       (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
                      if (uVar23 < 2) {
                        do {
                          if ((undefined1 *)plVar32[1] == puVar18) {
                            if ((undefined1 *)plVar32[2] == puVar18) goto LAB_02148ba4;
                          }
                          else if ((undefined1 *)((ulong)plVar32[1] & (ulong)puVar25) != puVar28)
                          break;
                          plVar32 = (long *)*plVar32;
                        } while (plVar32 != (long *)0x0);
                      }
                      else {
                        do {
                          puVar25 = (undefined1 *)plVar32[1];
                          if (puVar25 == puVar18) {
                            if ((undefined1 *)plVar32[2] == puVar18) goto LAB_02148ba4;
                          }
                          else {
                            if (puVar26 <= puVar25) {
                              uVar17 = 0;
                              if (puVar26 != (undefined1 *)0x0) {
                                uVar17 = (ulong)puVar25 / (ulong)puVar26;
                              }
                              puVar25 = puVar25 + -(uVar17 * (long)puVar26);
                            }
                            if (puVar25 != puVar28) break;
                          }
                          plVar32 = (long *)*plVar32;
                        } while (plVar32 != (long *)0x0);
                      }
                    }
                    FUN_02143970();
                    puVar18 = extraout_x8;
                    puVar26 = extraout_x9;
                    uVar23 = extraout_x10;
                    puVar25 = extraout_x11;
                    lVar11 = extraout_x13;
LAB_02148b70:
                    puVar28 = (undefined1 *)((ulong)puVar25 & (ulong)puVar18);
                  } while( true );
                }
              }
              else {
                if (local_c8 <= puVar28) {
                  uVar27 = 0;
                  if (local_c8 != (undefined1 *)0x0) {
                    uVar27 = (ulong)puVar28 / (ulong)local_c8;
                  }
                  puVar28 = puVar28 + -(uVar27 * (long)local_c8);
                }
                if (puVar28 != puVar26) break;
              }
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
          }
        }
      }
LAB_0214a388:
      FUN_0104b710(&local_d0,local_a0);
      lVar11 = local_d0;
      local_d0 = 0;
      if (lVar11 != 0) {
        uVar17 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
        if (((uVar17 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar11,(long)local_c8 << 3,8);
        }
        else {
          FUN_00c48fe8(plStack_c0,lVar11,(long)local_c8 << 3,8);
        }
      }
    }
  }
  return lVar35;
LAB_02148ba4:
  FUN_0104c68c(&local_108,plVar32 + 6);
  lVar11 = local_108;
  lVar19 = (long)*piVar3;
  if (*(ushort *)((long)piVar3 - lVar19) < 9) {
    iVar10 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar3 - lVar19))[4];
    iVar10 = 0;
    if (uVar17 != 0) {
      iVar10 = *(int *)((long)piVar3 + uVar17);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar20 = (undefined8 *)(local_108 + (long)iVar10 * 0x68);
  local_170 = *puVar20;
  local_168 = puVar20[1];
  local_160 = puVar20[2];
  local_158 = (long *)puVar20[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
    lVar19 = (long)*piVar3;
  }
  memcpy(local_150,(void *)(lVar11 + (long)iVar10 * 0x68 + 0x20),0x48);
  uVar31 = *param_1;
  if (*(ushort *)((long)piVar3 - lVar19) < 5) {
    local_178 = (long *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar3 - lVar19))[2];
    local_178 = (long *)0x0;
    if (uVar17 != 0) {
      puVar30 = (uint *)((long)piVar3 + uVar17);
      local_178 = (long *)((long)puVar30 + (ulong)*puVar30);
    }
  }
  FUN_00ea0a7c(&local_5a0,&local_178);
  plVar12 = local_5a0;
  plVar2 = (long *)PTR_DAT_047d8b70;
  plVar32 = (long *)PTR_PTR_047d4508;
  local_518 = (long *)PTR_DAT_047d8b70;
  if (local_5a0 != (long *)0x0) {
    local_518 = local_5a0 + 6;
  }
  local_518 = (long *)*local_518;
  plVar14 = (long *)PTR_PTR_047d4508;
  if (local_5a0 != (long *)0x0) {
    plVar14 = local_5a0 + 7;
  }
  puStack_510 = (undefined1 *)*plVar14;
  if (local_5a0 == (long *)0x0) {
    local_508 = 0;
  }
  else {
    local_508 = local_5a0[8];
  }
  local_500 = (long *)0x0;
  if (local_5a0 != (long *)0x0) {
    (**(code **)(*local_5a0 + 0x18))(local_5a0);
  }
  local_500 = plVar12;
  lVar35 = FUN_0165e730(lVar35,uVar31,&local_518);
  if (local_500 != (long *)0x0) {
    (**(code **)(*local_500 + 0x20))();
  }
  if (local_5a0 != (long *)0x0) {
    (**(code **)(*local_5a0 + 0x20))();
  }
  FUN_00faae34(&local_518,*(undefined8 *)(local_150[0] + 0x18));
  plVar14 = local_518;
  plVar12 = plVar2;
  if (local_518 != (long *)0x0) {
    plVar12 = local_518 + 6;
  }
  lVar11 = *plVar12;
  if (local_518 != (long *)0x0) {
    plVar32 = local_518 + 7;
  }
  lVar19 = *plVar32;
  if (local_518 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_518[8];
    (**(code **)(*local_518 + 0x18))(local_518);
  }
  FUN_00faae34(&local_5a0,*(undefined8 *)(local_150[0] + 0x18));
  plVar32 = local_5a0;
  if (local_5a0 != (long *)0x0) {
    plVar2 = local_5a0 + 6;
  }
  lVar33 = *plVar2;
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_5a0 != (long *)0x0) {
    plVar2 = local_5a0 + 7;
  }
  lVar34 = *plVar2;
  if (local_5a0 == (long *)0x0) {
    lVar36 = 0;
  }
  else {
    lVar36 = local_5a0[8];
    (**(code **)(*local_5a0 + 0x18))(local_5a0);
  }
  *(long *)(lVar35 + 0x88) = lVar11;
  *(long *)(lVar35 + 0x90) = lVar19;
  *(long *)(lVar35 + 0x98) = lVar37;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar12 = *(long **)(lVar35 + 0xa0);
  *(long **)(lVar35 + 0xa0) = plVar14;
  plVar2 = (long *)PTR_PTR_047d4508;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  *(long *)(lVar35 + 0xb8) = lVar36;
  *(long *)(lVar35 + 0xa8) = lVar33;
  *(long *)(lVar35 + 0xb0) = lVar34;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  plVar13 = *(long **)(lVar35 + 0xc0);
  *(long **)(lVar35 + 0xc0) = plVar32;
  plVar12 = (long *)PTR_DAT_047d8b70;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_5a0 != (long *)0x0) {
    (**(code **)(*local_5a0 + 0x20))();
  }
  if (local_518 != (long *)0x0) {
    (**(code **)(*local_518 + 0x20))();
  }
  memset(&local_358,0,0x1e0);
  local_250 = &DAT_03c886bc;
  local_3b0 = &DAT_03c886bc;
  local_518 = (long *)&DAT_cbf29ce484222645;
  puStack_510 = &DAT_03c886bc;
  local_4f8 = &DAT_cbf29ce484222645;
  puStack_4f0 = &DAT_03c886bc;
  local_390 = &DAT_03c886bc;
  local_370 = &DAT_03c886bc;
  local_350 = &DAT_03c886bc;
  local_330 = &DAT_03c886bc;
  local_310 = &DAT_03c886bc;
  local_2f0 = &DAT_03c886bc;
  local_2d0 = &DAT_03c886bc;
  local_2b0 = &DAT_03c886bc;
  local_290 = &DAT_03c886bc;
  local_270 = &DAT_03c886bc;
  local_230 = &DAT_03c886bc;
  local_210 = &DAT_03c886bc;
  local_1f0 = &DAT_03c886bc;
  local_1d0 = &DAT_03c886bc;
  local_1b0 = &DAT_03c886bc;
  local_190 = &DAT_03c886bc;
  local_3b8 = &DAT_cbf29ce484222645;
  local_3a0 = (long *)0x0;
  local_3a8 = 0;
  local_398 = &DAT_cbf29ce484222645;
  local_380 = (long *)0x0;
  local_388 = 0;
  local_378 = &DAT_cbf29ce484222645;
  local_360 = (long *)0x0;
  local_368 = 0;
  local_358 = &DAT_cbf29ce484222645;
  local_340 = (long *)0x0;
  local_348 = 0;
  local_338 = &DAT_cbf29ce484222645;
  local_320 = (long *)0x0;
  local_328 = 0;
  local_318 = &DAT_cbf29ce484222645;
  local_300 = (long *)0x0;
  local_308 = 0;
  local_2f8 = &DAT_cbf29ce484222645;
  local_2e0 = (long *)0x0;
  local_2e8 = 0;
  local_2d8 = &DAT_cbf29ce484222645;
  local_2c0 = (long *)0x0;
  local_2c8 = 0;
  local_2b8 = &DAT_cbf29ce484222645;
  local_2a0 = (long *)0x0;
  local_2a8 = 0;
  local_298 = &DAT_cbf29ce484222645;
  local_280 = (long *)0x0;
  local_288 = 0;
  local_278 = &DAT_cbf29ce484222645;
  local_260 = (long *)0x0;
  local_268 = 0;
  local_258 = &DAT_cbf29ce484222645;
  local_240 = (long *)0x0;
  local_248 = 0;
  local_238 = &DAT_cbf29ce484222645;
  local_220 = (long *)0x0;
  local_228 = 0;
  local_218 = &DAT_cbf29ce484222645;
  local_200 = (long *)0x0;
  local_208 = 0;
  local_1f8 = &DAT_cbf29ce484222645;
  local_1e0 = (long *)0x0;
  local_1e8 = 0;
  local_1d8 = &DAT_cbf29ce484222645;
  local_1c0 = (long *)0x0;
  local_1c8 = 0;
  local_1b8 = &DAT_cbf29ce484222645;
  local_1a0 = (long *)0x0;
  local_1a8 = 0;
  local_198 = &DAT_cbf29ce484222645;
  local_180 = (long *)0x0;
  local_188 = 0;
  local_4d8 = &DAT_cbf29ce484222645;
  puStack_4d0 = &DAT_03c886bc;
  local_4b8 = &DAT_cbf29ce484222645;
  puStack_4b0 = &DAT_03c886bc;
  local_498 = &DAT_cbf29ce484222645;
  puStack_490 = &DAT_03c886bc;
  local_478 = &DAT_cbf29ce484222645;
  puStack_470 = &DAT_03c886bc;
  local_458 = &DAT_cbf29ce484222645;
  puStack_450 = &DAT_03c886bc;
  local_438 = &DAT_cbf29ce484222645;
  puStack_430 = &DAT_03c886bc;
  local_418 = &DAT_cbf29ce484222645;
  puStack_410 = &DAT_03c886bc;
  local_3f8 = &DAT_cbf29ce484222645;
  puStack_3f0 = &DAT_03c886bc;
  local_3d8 = &DAT_cbf29ce484222645;
  puStack_3d0 = &DAT_03c886bc;
  local_5a0 = (long *)0xcd587b271f5ccf44;
  local_598 = (code *)&DAT_03c1e091;
  local_590 = (code *)0x3;
  local_588 = (long *)0x0;
  local_508 = 0;
  local_500 = (long *)0x0;
  local_4e8 = 0;
  local_4e0 = (long *)0x0;
  local_4c8 = 0;
  local_4c0 = (long *)0x0;
  local_4a8 = 0;
  local_4a0 = (long *)0x0;
  local_488 = 0;
  local_480 = (long *)0x0;
  local_468 = 0;
  local_460 = (long *)0x0;
  local_448 = 0;
  local_440 = (long *)0x0;
  local_428 = 0;
  local_420 = (long *)0x0;
  local_408 = 0;
  local_400 = (long *)0x0;
  local_3e8 = 0;
  local_3e0 = (long *)0x0;
  local_3c8 = 0;
  local_3c0 = (long *)0x0;
  FUN_012804b0(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  plVar32 = (long *)*plVar32;
  plVar13 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar13 = local_178 + 7;
  }
  lVar11 = *plVar13;
  if (local_178 == (long *)0x0) {
    lVar19 = 0;
  }
  else {
    lVar19 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar13 = local_500;
  local_500 = (long *)0x0;
  local_518 = plVar32;
  puStack_510 = (undefined1 *)lVar11;
  local_508 = lVar19;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  local_500 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xe96f97220bc951e;
  local_598 = (code *)0x3ca0332;
  local_590 = (code *)0x9;
  local_588 = (long *)0x0;
  FUN_012804b0(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_4e0;
  local_4e0 = (long *)0x0;
  local_4f8 = (undefined1 *)lVar11;
  puStack_4f0 = (undefined1 *)lVar19;
  local_4e8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_4e0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x126b3107bd9a75c6;
  local_598 = (code *)&DAT_03bdc748;
  local_590 = (code *)0x2;
  local_588 = (long *)0x0;
  FUN_012804b0(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_4c0;
  local_4c0 = (long *)0x0;
  local_4d8 = (undefined1 *)lVar11;
  puStack_4d0 = (undefined1 *)lVar19;
  local_4c8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_4c0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xf01992684072c991;
  local_598 = (code *)0x3c57c7a;
  local_590 = (code *)0x6;
  local_588 = (long *)0x0;
  FUN_012804b0(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_4a0;
  local_4a0 = (long *)0x0;
  local_4b8 = (undefined1 *)lVar11;
  puStack_4b0 = (undefined1 *)lVar19;
  local_4a8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_4a0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xc2e20ce5bc3f5b9e;
  local_598 = (code *)&DAT_03c6df4b;
  local_590 = (code *)0x4;
  local_588 = (long *)0x0;
  FUN_012804b0(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_480;
  local_480 = (long *)0x0;
  local_498 = (undefined1 *)lVar11;
  puStack_490 = (undefined1 *)lVar19;
  local_488 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_480 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3d9725830cec70;
  local_598 = (code *)0x3c04a00;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_460;
  local_460 = (long *)0x0;
  local_478 = (undefined1 *)lVar11;
  puStack_470 = (undefined1 *)lVar19;
  local_468 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_460 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3d9a25830cf189;
  local_598 = (code *)0x3ca033c;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_440;
  local_440 = (long *)0x0;
  local_458 = (undefined1 *)lVar11;
  puStack_450 = (undefined1 *)lVar19;
  local_448 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_440 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3d9025830ce08b;
  local_598 = (code *)0x3c19f09;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_420;
  local_420 = (long *)0x0;
  local_438 = (undefined1 *)lVar11;
  puStack_430 = (undefined1 *)lVar19;
  local_428 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_420 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3d8f25830cded8;
  local_598 = (code *)0x3ca7675;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_400;
  local_400 = (long *)0x0;
  local_418 = (undefined1 *)lVar11;
  puStack_410 = (undefined1 *)lVar19;
  local_408 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_400 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x835294beeb6cbf87;
  local_598 = (code *)0x3c99b8a;
  local_590 = (code *)0x5;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_3e0;
  local_3e0 = (long *)0x0;
  local_3f8 = (undefined1 *)lVar11;
  puStack_3f0 = (undefined1 *)lVar19;
  local_3e8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_3e0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x12305f30c0f9a74d;
  local_598 = (code *)0x3ca0344;
  local_590 = (code *)0xd;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_3c0;
  local_3c0 = (long *)0x0;
  local_3d8 = (undefined1 *)lVar11;
  puStack_3d0 = (undefined1 *)lVar19;
  local_3c8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_3c0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3da425830d0287;
  local_598 = (code *)0x3c2f4b6;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_3a0;
  local_3a0 = (long *)0x0;
  local_3b8 = (undefined1 *)lVar11;
  local_3b0 = (undefined1 *)lVar19;
  local_3a8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_3a0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x6e3d8a25830cd659;
  local_598 = (code *)0x3bdc74b;
  local_590 = (code *)0x7;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_380;
  local_380 = (long *)0x0;
  local_398 = (undefined1 *)lVar11;
  local_390 = (undefined1 *)lVar19;
  local_388 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_380 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x4cd096f1cc805d81;
  local_598 = (code *)0x3c4a4a9;
  local_590 = (code *)0xa;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_360;
  local_360 = (long *)0x0;
  local_378 = (undefined1 *)lVar11;
  local_370 = (undefined1 *)lVar19;
  local_368 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_360 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x2e05ed5614259b6b;
  local_598 = (code *)0x3c64897;
  local_590 = (code *)0xb;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  puVar18 = (undefined1 *)*plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar11 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar19 = 0;
  }
  else {
    lVar19 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_340;
  local_340 = (long *)0x0;
  local_358 = puVar18;
  local_350 = (undefined1 *)lVar11;
  local_348 = lVar19;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_340 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x33924d55bf674bb1;
  local_598 = (code *)0x3c2827b;
  local_590 = (code *)0xc;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_320;
  local_320 = (long *)0x0;
  local_338 = (undefined1 *)lVar11;
  local_330 = (undefined1 *)lVar19;
  local_328 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_320 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xebc64218e514c2eb;
  local_598 = (code *)0x3ca767d;
  local_590 = (code *)0xc;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_300;
  local_300 = (long *)0x0;
  local_318 = (undefined1 *)lVar11;
  local_310 = (undefined1 *)lVar19;
  local_308 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_300 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x2de76808b4ec6341;
  local_598 = (code *)0x3c2f4be;
  local_590 = (code *)0x10;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_2e0;
  local_2e0 = (long *)0x0;
  local_2f8 = (undefined1 *)lVar11;
  local_2f0 = (undefined1 *)lVar19;
  local_2e8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_2e0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x29d783e3e2307f0f;
  local_598 = (code *)0x3be9a34;
  local_590 = (code *)0x10;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_2c0;
  local_2c0 = (long *)0x0;
  local_2d8 = (undefined1 *)lVar11;
  local_2d0 = (undefined1 *)lVar19;
  local_2c8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_2c0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x5fc0c0bdaf1bcfef;
  local_598 = (code *)0x3c51563;
  local_590 = (code *)0x8;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_2a0;
  local_2a0 = (long *)0x0;
  local_2b8 = (undefined1 *)lVar11;
  local_2b0 = (undefined1 *)lVar19;
  local_2a8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_2a0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x5f8312bdaee6fa27;
  local_598 = (code *)0x3c0be25;
  local_590 = (code *)0x8;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_280;
  local_280 = (long *)0x0;
  local_298 = (undefined1 *)lVar11;
  local_290 = (undefined1 *)lVar19;
  local_288 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_280 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x5f82f8bdaee6cdf9;
  local_598 = (code *)0x3c43c07;
  local_590 = (code *)0x8;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_260;
  local_260 = (long *)0x0;
  local_278 = (undefined1 *)lVar11;
  local_270 = (undefined1 *)lVar19;
  local_268 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_260 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xa25c2c45c814a00f;
  local_598 = (code *)0x3c35f7c;
  local_590 = (code *)0xa;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_240;
  local_240 = (long *)0x0;
  local_258 = (undefined1 *)lVar11;
  local_250 = (undefined1 *)lVar19;
  local_248 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_240 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x5f6becbdaed3dab4;
  local_598 = (code *)0x3c5156c;
  local_590 = (code *)0x8;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_220;
  local_220 = (long *)0x0;
  local_238 = (undefined1 *)lVar11;
  local_230 = (undefined1 *)lVar19;
  local_228 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_220 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x601079b194c3de9;
  local_598 = (code *)0x3ca0352;
  local_590 = (code *)0xb;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_200;
  local_200 = (long *)0x0;
  local_218 = (undefined1 *)lVar11;
  local_210 = (undefined1 *)lVar19;
  local_208 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_200 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xb8b5f7de957f5dbc;
  local_598 = (code *)0x3ca768a;
  local_590 = (code *)0xa;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_1e0;
  local_1e0 = (long *)0x0;
  local_1f8 = (undefined1 *)lVar11;
  local_1f0 = (undefined1 *)lVar19;
  local_1e8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_1e0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0xe388099805162a21;
  local_598 = (code *)0x3c3cb81;
  local_590 = (code *)0xa;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_1c0;
  local_1c0 = (long *)0x0;
  local_1d8 = (undefined1 *)lVar11;
  local_1d0 = (undefined1 *)lVar19;
  local_1c8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_1c0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)0x78d136d9007ea4a6;
  local_598 = (code *)0x3c12d3a;
  local_590 = (code *)0xf;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_1a0;
  local_1a0 = (long *)0x0;
  local_1b8 = (undefined1 *)lVar11;
  local_1b0 = (undefined1 *)lVar19;
  local_1a8 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_1a0 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_5a0 = (long *)&DAT_2445edbc3c49c2e0;
  local_598 = (code *)0x3c51575;
  local_590 = (code *)0xc;
  local_588 = (long *)0x0;
  FUN_0104b1dc(&local_178,&local_170,&local_5a0);
  plVar14 = local_178;
  plVar32 = plVar12;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 6;
  }
  lVar11 = *plVar32;
  plVar32 = plVar2;
  if (local_178 != (long *)0x0) {
    plVar32 = local_178 + 7;
  }
  lVar19 = *plVar32;
  if (local_178 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_178[8];
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar32 = local_180;
  local_180 = (long *)0x0;
  local_198 = (undefined1 *)lVar11;
  local_190 = (undefined1 *)lVar19;
  local_188 = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))();
  }
  local_180 = plVar14;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  FUN_0165e518(lVar35 + 0x380,&local_518);
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) {
    local_178 = (long *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5];
    local_178 = (long *)0x0;
    if (uVar17 != 0) {
      puVar30 = (uint *)((long)piVar3 + uVar17);
      local_178 = (long *)((long)puVar30 + (ulong)*puVar30);
    }
  }
  FUN_00ea0a7c(&local_5a0,&local_178);
  plVar32 = local_5a0;
  if (local_5a0 != (long *)0x0) {
    plVar12 = local_5a0 + 6;
  }
  lVar11 = *plVar12;
  if (local_5a0 != (long *)0x0) {
    plVar2 = local_5a0 + 7;
  }
  lVar19 = *plVar2;
  if (local_5a0 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_5a0[8];
    (**(code **)(*local_5a0 + 0x18))(local_5a0);
  }
  plVar2 = (long *)(lVar35 + 0xf0);
  lVar33 = nn::os::GetCurrentThread();
LAB_0214a010:
  if (*plVar2 == 0) goto code_r0x0214a018;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar35 + 0xf8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar35 + 0xf8));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar33;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_0214a020;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar33;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0214a020:
  *(long *)(lVar35 + 0x108) = lVar11;
  *(long *)(lVar35 + 0x110) = lVar19;
  *(long *)(lVar35 + 0x118) = lVar37;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  plVar14 = *(long **)(lVar35 + 0x120);
  *(long **)(lVar35 + 0x120) = plVar32;
  plVar12 = (long *)PTR_DAT_047d8b70;
  plVar2 = (long *)PTR_PTR_047d4508;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *(undefined8 *)(lVar35 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar35 + 0xf8));
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  if (local_5a0 != (long *)0x0) {
    (**(code **)(*local_5a0 + 0x20))();
  }
  local_580 = FUN_0104cf4c(lVar16 + 0x108,&local_5a0);
  local_5a0 = (long *)&LAB_0214ac90;
  local_598 = FUN_02b2d868;
  local_590 = FUN_02b2d86c;
  local_588 = (long *)&LAB_02b2d878;
  pcVar21 = *(code **)(lVar35 + 0x1e8);
  lStack_578 = lVar35;
  if (pcVar21 == (code *)0x0) {
LAB_0214a0c4:
    (*local_590)(&local_580,lVar35 + 0x200);
    *(long **)(lVar35 + 0x1f8) = local_588;
    *(undefined8 *)(lVar35 + 0x1e0) = local_5a0;
    *(code **)(lVar35 + 0x1e8) = local_598;
    *(code **)(lVar35 + 0x1f0) = local_590;
  }
  else {
    *(undefined8 *)(lVar35 + 0x1f0) = 0;
    *(undefined8 *)(lVar35 + 0x1f8) = 0;
    *(undefined8 *)(lVar35 + 0x1e0) = 0;
    *(undefined8 *)(lVar35 + 0x1e8) = 0;
    (*pcVar21)(lVar35 + 0x200);
    if (local_590 != (code *)0x0) goto LAB_0214a0c4;
  }
  pcVar21 = local_598;
  if (local_598 != (code *)0x0) {
    local_590 = (code *)0x0;
    local_588 = (long *)0x0;
    local_5a0 = (long *)0x0;
    local_598 = (code *)0x0;
    (*pcVar21)(&local_580);
  }
  if (((*PTR_DAT_047dd000 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  lVar11 = *(long *)PTR_DAT_047dd008;
  *(long *)PTR_DAT_047dd010 = lVar11;
  if (((*(long *)(lVar11 + 0x98) != 0) && ((*(byte *)(*(long *)(lVar11 + 0x98) + 0x1e8) & 1) != 0))
     && (puVar30 = (uint *)(**(code **)(**(long **)(lVar11 + 0x98) + 0x70))(),
        puVar30 != (uint *)0x0)) {
    piVar4 = (int *)((long)puVar30 + (ulong)*puVar30);
    if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar17 != 0)) {
      puVar30 = (uint *)((long)piVar4 + uVar17);
      puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30);
      uVar17 = (ulong)*puVar30;
      lVar11 = uVar17 * 4;
      if (uVar17 == 0) {
        puVar24 = puVar30 + 1;
LAB_0214a204:
        if (puVar24 != puVar30 + 1 + uVar17) {
          piVar4 = (int *)((long)puVar24 + (ulong)*puVar24);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar17 == 0)) {
            local_5a8 = 0;
          }
          else {
            puVar30 = (uint *)((long)piVar4 + uVar17);
            local_5a8 = (long)puVar30 + (ulong)*puVar30;
          }
          FUN_00ea0a7c(&local_178,&local_5a8);
          plVar32 = local_178;
          if (local_178 != (long *)0x0) {
            plVar2 = local_178 + 7;
            plVar12 = local_178 + 6;
          }
          local_5a0 = (long *)*plVar12;
          local_598 = (code *)*plVar2;
          if (local_178 == (long *)0x0) {
            local_590 = (code *)0x0;
          }
          else {
            local_590 = (code *)local_178[8];
          }
          local_588 = (long *)0x0;
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 0x18))(local_178);
          }
          local_588 = plVar32;
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x11) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[8], uVar17 == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined4 *)((long)piVar3 + uVar17);
          }
          FUN_0143a664(lVar35,&local_5a0,uVar15);
          if (local_588 != (long *)0x0) {
            (**(code **)(*local_588 + 0x20))();
          }
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 0x20))();
          }
        }
      }
      else if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
        lVar16 = 0;
        do {
          lVar19 = (long)puVar30 + lVar16;
          uVar23 = (ulong)*(uint *)(lVar19 + 4);
          lVar37 = lVar16 + (uVar23 - (long)*(int *)((long)puVar30 + lVar16 + uVar23 + 4));
          if (((*(ushort *)((long)puVar30 + lVar37 + 4) < 5) ||
              (uVar27 = (ulong)*(ushort *)((long)puVar30 + lVar37 + 8), uVar27 == 0)) ||
             (*(int *)((long)puVar30 + lVar16 + uVar23 + uVar27 + 4) == 0)) {
LAB_0214a200:
            puVar24 = (uint *)(lVar19 + 4);
            goto LAB_0214a204;
          }
          lVar16 = lVar16 + 4;
        } while (lVar11 != lVar16);
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6];
        if (uVar23 == 0) {
          lVar16 = 0;
          do {
            lVar19 = (long)puVar30 + lVar16;
            uVar23 = (ulong)*(uint *)(lVar19 + 4);
            lVar37 = lVar16 + (uVar23 - (long)*(int *)((long)puVar30 + lVar16 + uVar23 + 4));
            if (((*(ushort *)((long)puVar30 + lVar37 + 4) < 5) ||
                (uVar27 = (ulong)*(ushort *)((long)puVar30 + lVar37 + 8), uVar27 == 0)) ||
               (*(int *)((long)puVar30 + lVar16 + uVar23 + uVar27 + 4) == 0)) goto LAB_0214a200;
            lVar16 = lVar16 + 4;
          } while (lVar11 != lVar16);
        }
        else {
          lVar16 = 0;
          do {
            uVar27 = (ulong)*(uint *)((long)puVar30 + lVar16 + 4);
            lVar19 = lVar16 + (uVar27 - (long)*(int *)((long)puVar30 + lVar16 + uVar27 + 4));
            if ((*(ushort *)((long)puVar30 + lVar19 + 4) < 5) ||
               (uVar29 = (ulong)*(ushort *)((long)puVar30 + lVar19 + 8), uVar29 == 0)) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)((long)puVar30 + lVar16 + uVar27 + uVar29 + 4);
            }
            if (iVar10 == *(int *)((long)piVar3 + uVar23)) {
              puVar24 = (uint *)((long)puVar30 + lVar16 + 4);
              goto LAB_0214a204;
            }
            lVar16 = lVar16 + 4;
          } while (lVar11 != lVar16);
        }
      }
    }
  }
  fVar38 = 0.0;
  if ((0x12 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[9], uVar17 != 0)) {
    fVar38 = *(float *)((long)piVar3 + uVar17);
  }
  fVar39 = 10.0;
  if (0.0 < fVar38) {
    fVar39 = fVar38;
  }
  *(float *)(lVar35 + 0x72c) = fVar39;
  FUN_0165d758(&local_518);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  lVar11 = local_108;
  if (local_108 != 0) {
    lVar16 = local_100;
    if (local_100 == local_108) {
      lVar16 = local_108;
    }
    else {
      do {
        plVar32 = (long *)(lVar16 + -0x50);
        lVar16 = lVar16 + -0x68;
        if ((long *)*plVar32 != (long *)0x0) {
          (**(code **)(*(long *)*plVar32 + 0x20))();
        }
      } while (lVar11 != lVar16);
      lVar16 = local_108;
    }
    local_100 = lVar11;
    uVar17 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar17 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar16,local_f8 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plStack_f0,lVar16,local_f8 - lVar16,8);
    }
  }
  goto LAB_0214a388;
code_r0x0214a018:
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar9) {
    *plVar2 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0214a020;
  goto LAB_0214a010;
}


