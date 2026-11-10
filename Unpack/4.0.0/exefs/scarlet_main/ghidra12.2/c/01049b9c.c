/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01049b9c; name: FUN_01049b9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_01049b9c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *extraout_x8;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 *extraout_x9;
  code *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong extraout_x10;
  undefined1 *puVar21;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined8 uVar25;
  char *pcVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long local_380;
  long *local_378;
  uint *local_370;
  uint *puStack_368;
  long *local_360;
  code *local_358;
  code *local_350;
  long *local_348;
  undefined8 local_340;
  long lStack_338;
  undefined1 *local_2e0;
  char *pcStack_2d8;
  long local_2d0;
  uint *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined8 local_2b0;
  uint *local_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined8 local_290;
  uint *local_288;
  undefined1 *local_280;
  undefined1 *puStack_278;
  undefined8 local_270;
  uint *local_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined8 local_250;
  uint *local_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined8 local_230;
  uint *local_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined8 local_210;
  uint *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined8 local_1f0;
  uint *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined8 local_1d0;
  uint *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined8 local_1b0;
  uint *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  uint *local_188;
  uint *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  long *local_160;
  long local_158 [9];
  long local_110;
  long local_108;
  long local_100;
  long *plStack_f8;
  long local_d8;
  undefined1 *local_d0;
  long *plStack_c8;
  undefined8 local_a8;
  int *local_70 [2];
  
  lVar14 = *param_2;
  lVar24 = *param_3;
  piVar2 = (int *)((long)*param_4 + (ulong)*(uint *)*param_4);
  local_70[0] = piVar2;
  lVar10 = FUN_0104b474(lVar14 + 0x108,&local_2e0);
  if (lVar10 == 0) {
    return lVar24;
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    return lVar24;
  }
  if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
    return lVar24;
  }
  plVar27 = *(long **)(lVar10 + 0x170);
  if (plVar27 == (long *)0x0) {
    FUN_0104c208(&local_d8,_DAT_00000638 + 0x48);
  }
  else {
    lVar10 = plVar27[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar25 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar25;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_0104c208(&local_d8,plVar27[199] + 0x48);
    lVar10 = plVar27[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar27 + 0x50))(plVar27);
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((*(ushort *)((long)local_70[0] - (long)*local_70[0]) < 7) ||
     (uVar17 = (ulong)((ushort *)((long)local_70[0] - (long)*local_70[0]))[3], uVar17 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar13 = (uint *)((long)local_70[0] + uVar17);
    lVar10 = (long)puVar13 + (ulong)*puVar13;
  }
  bVar5 = *(byte *)(lVar10 + 4);
  puVar15 = &DAT_cbf29ce484222645;
  if (bVar5 != 0) {
    puVar15 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar10 + 5);
    do {
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar5 != 0);
  }
  if (local_d0 != (undefined1 *)0x0) {
    uVar17 = 0;
    if (local_d0 != (undefined1 *)0x0) {
      uVar17 = (ulong)puVar15 / (ulong)local_d0;
    }
    uVar20 = (long)local_d0 - ((ulong)local_d0 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      puVar22 = (undefined1 *)((ulong)(local_d0 + -1) & (ulong)puVar15);
    }
    else {
      puVar22 = puVar15;
      if (local_d0 <= puVar15) {
        puVar22 = puVar15 + -(uVar17 * (long)local_d0);
      }
    }
    plVar27 = *(long **)(local_d8 + (long)puVar22 * 8);
    if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
      puVar21 = local_d0 + -1;
      if (uVar20 < 2) {
        do {
          if ((undefined1 *)plVar27[1] == puVar15) {
            if ((undefined1 *)plVar27[2] == puVar15) goto LAB_01049df8;
          }
          else if ((undefined1 *)((ulong)plVar27[1] & (ulong)puVar21) != puVar22) break;
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          puVar23 = (undefined1 *)plVar27[1];
          if (puVar23 == puVar15) {
            if ((undefined1 *)plVar27[2] == puVar15) {
LAB_01049df8:
              puVar22 = local_d0;
              lVar10 = local_d8;
              if (uVar20 < 2) goto LAB_01049e68;
              puVar23 = puVar15;
              if (local_d0 <= puVar15) {
                puVar23 = puVar15 + -(uVar17 * (long)local_d0);
              }
              do {
                plVar27 = *(long **)(lVar10 + (long)puVar23 * 8);
                if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)
                   ) {
                  if (uVar20 < 2) {
                    do {
                      if ((undefined1 *)plVar27[1] == puVar15) {
                        if ((undefined1 *)plVar27[2] == puVar15) goto LAB_01049e9c;
                      }
                      else if ((undefined1 *)((ulong)plVar27[1] & (ulong)puVar21) != puVar23) break;
                      plVar27 = (long *)*plVar27;
                    } while (plVar27 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar21 = (undefined1 *)plVar27[1];
                      if (puVar21 == puVar15) {
                        if ((undefined1 *)plVar27[2] == puVar15) goto LAB_01049e9c;
                      }
                      else {
                        if (puVar22 <= puVar21) {
                          uVar17 = 0;
                          if (puVar22 != (undefined1 *)0x0) {
                            uVar17 = (ulong)puVar21 / (ulong)puVar22;
                          }
                          puVar21 = puVar21 + -(uVar17 * (long)puVar22);
                        }
                        if (puVar21 != puVar23) break;
                      }
                      plVar27 = (long *)*plVar27;
                    } while (plVar27 != (long *)0x0);
                  }
                }
                FUN_02143970();
                puVar15 = extraout_x8;
                puVar22 = extraout_x9;
                uVar20 = extraout_x10;
                puVar21 = extraout_x11;
                lVar10 = extraout_x13;
LAB_01049e68:
                puVar23 = (undefined1 *)((ulong)puVar21 & (ulong)puVar15);
              } while( true );
            }
          }
          else {
            if (local_d0 <= puVar23) {
              uVar7 = 0;
              if (local_d0 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar23 / (ulong)local_d0;
              }
              puVar23 = puVar23 + -(uVar7 * (long)local_d0);
            }
            if (puVar23 != puVar22) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
    }
  }
  goto LAB_0104aa14;
code_r0x0104a824:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar30,0x10);
  if (bVar8) {
    *plVar30 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0104a82c;
  goto LAB_0104a81c;
LAB_01049e9c:
  FUN_0104c68c(&local_110,plVar27 + 6);
  lVar10 = local_110;
  if (*(ushort *)((long)local_70[0] - (long)*local_70[0]) < 9) {
    iVar9 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)local_70[0] - (long)*local_70[0]))[4];
    iVar9 = 0;
    if (uVar17 != 0) {
      iVar9 = *(int *)((long)local_70[0] + uVar17);
    }
  }
  if ((ulong)((local_108 - local_110 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar16 = (undefined8 *)(local_110 + (long)iVar9 * 0x68);
  local_178 = *puVar16;
  local_170 = puVar16[1];
  local_168 = puVar16[2];
  local_160 = (long *)puVar16[3];
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x18))();
  }
  piVar2 = local_70[0];
  memcpy(local_158,(void *)(lVar10 + (long)iVar9 * 0x68 + 0x20),0x48);
  uVar25 = *param_1;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    local_180 = (uint *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    local_180 = (uint *)0x0;
    if (uVar17 != 0) {
      local_180 = (uint *)((long)piVar2 + uVar17);
      local_180 = (uint *)((long)local_180 + (ulong)*local_180);
    }
  }
  FUN_00ea0a7c(&local_360,&local_180);
  plVar11 = local_360;
  plVar30 = (long *)PTR_DAT_047d8b70;
  plVar32 = (long *)PTR_PTR_047d4508;
  plVar27 = (long *)PTR_DAT_047d8b70;
  if (local_360 != (long *)0x0) {
    plVar27 = local_360 + 6;
  }
  local_2e0 = (undefined1 *)*plVar27;
  plVar27 = (long *)PTR_PTR_047d4508;
  if (local_360 != (long *)0x0) {
    plVar27 = local_360 + 7;
  }
  pcStack_2d8 = (char *)*plVar27;
  if (local_360 == (long *)0x0) {
    local_2d0 = 0;
  }
  else {
    local_2d0 = local_360[8];
  }
  local_2c8 = (uint *)0x0;
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x18))(local_360);
  }
  local_2c8 = (uint *)plVar11;
  lVar24 = FUN_0104b884(lVar24,uVar25,&local_2e0);
  if (local_2c8 != (uint *)0x0) {
    (**(code **)(*(long *)local_2c8 + 0x20))();
  }
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  FUN_00faae34(&local_360,*(undefined8 *)(local_158[0] + 0x18));
  plVar27 = local_360;
  if (local_360 != (long *)0x0) {
    plVar30 = local_360 + 6;
  }
  lVar10 = *plVar30;
  if (local_360 != (long *)0x0) {
    plVar32 = local_360 + 7;
  }
  lVar31 = *plVar32;
  if (local_360 == (long *)0x0) {
    lVar33 = 0;
  }
  else {
    lVar33 = local_360[8];
    (**(code **)(*local_360 + 0x18))(local_360);
  }
  local_2e0 = (undefined1 *)0xd0fc8ebf2d208b0d;
  pcStack_2d8 = "bounding";
  local_2d0 = 8;
  local_2c8 = (uint *)0x0;
  FUN_012804b0(&local_180,&local_178,&local_2e0);
  puVar3 = local_180;
  puVar13 = (uint *)PTR_DAT_047d8b70;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)PTR_PTR_047d4508;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  *(long *)(lVar24 + 0x88) = lVar10;
  *(long *)(lVar24 + 0x90) = lVar31;
  *(long *)(lVar24 + 0x98) = lVar33;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x18))(plVar27);
  }
  plVar11 = *(long **)(lVar24 + 0xa0);
  *(long **)(lVar24 + 0xa0) = plVar27;
  plVar30 = (long *)PTR_DAT_047d8b70;
  plVar32 = (long *)PTR_PTR_047d4508;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined8 *)(lVar24 + 0xa8) = uVar25;
  *(undefined8 *)(lVar24 + 0xb0) = uVar28;
  *(undefined8 *)(lVar24 + 0xb8) = uVar29;
  if (puVar3 != (uint *)0x0) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  }
  plVar11 = *(long **)(lVar24 + 0xc0);
  *(uint **)(lVar24 + 0xc0) = puVar3;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  if (puVar3 != (uint *)0x0) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  local_2e0 = &DAT_cbf29ce484222645;
  pcStack_2d8 = "";
  local_2c0 = &DAT_cbf29ce484222645;
  puStack_2b8 = &DAT_03c886bc;
  local_2a0 = &DAT_cbf29ce484222645;
  puStack_298 = &DAT_03c886bc;
  local_280 = &DAT_cbf29ce484222645;
  puStack_278 = &DAT_03c886bc;
  local_260 = &DAT_cbf29ce484222645;
  puStack_258 = &DAT_03c886bc;
  local_240 = &DAT_cbf29ce484222645;
  puStack_238 = &DAT_03c886bc;
  local_220 = &DAT_cbf29ce484222645;
  puStack_218 = &DAT_03c886bc;
  local_200 = &DAT_cbf29ce484222645;
  puStack_1f8 = &DAT_03c886bc;
  local_1e0 = &DAT_cbf29ce484222645;
  puStack_1d8 = &DAT_03c886bc;
  local_1c0 = &DAT_cbf29ce484222645;
  puStack_1b8 = &DAT_03c886bc;
  local_1a0 = &DAT_cbf29ce484222645;
  puStack_198 = &DAT_03c886bc;
  local_360 = (long *)0xcc3064c67bc74131;
  local_358 = (code *)0x3ca766a;
  local_350 = (code *)0xa;
  local_348 = (long *)0x0;
  local_2d0 = 0;
  local_2c8 = (uint *)0x0;
  local_2b0 = 0;
  local_2a8 = (uint *)0x0;
  local_290 = 0;
  local_288 = (uint *)0x0;
  local_270 = 0;
  local_268 = (uint *)0x0;
  local_250 = 0;
  local_248 = (uint *)0x0;
  local_230 = 0;
  local_228 = (uint *)0x0;
  local_210 = 0;
  local_208 = (uint *)0x0;
  local_1f0 = 0;
  local_1e8 = (uint *)0x0;
  local_1d0 = 0;
  local_1c8 = (uint *)0x0;
  local_1b0 = 0;
  local_1a8 = (uint *)0x0;
  local_190 = 0;
  local_188 = (uint *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_268;
  local_268 = (uint *)0x0;
  local_280 = (undefined1 *)uVar25;
  puStack_278 = (undefined1 *)uVar28;
  local_270 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_268 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)&DAT_ed253ec5e968258f;
  local_358 = (code *)0x3bf0673;
  local_350 = (code *)0x6;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_248;
  local_248 = (uint *)0x0;
  local_260 = (undefined1 *)uVar25;
  puStack_258 = (undefined1 *)uVar28;
  local_250 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_248 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0xc3728266f1a1ccde;
  local_358 = (code *)0x3c12d12;
  local_350 = (code *)0x7;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_228;
  local_228 = (uint *)0x0;
  local_240 = (undefined1 *)uVar25;
  puStack_238 = (undefined1 *)uVar28;
  local_230 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_228 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x9b9fd5c1d3870a2d;
  local_358 = (code *)0x3c8f55c;
  local_350 = (code *)0x6;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_208;
  local_208 = (uint *)0x0;
  local_220 = (undefined1 *)uVar25;
  puStack_218 = (undefined1 *)uVar28;
  local_210 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_208 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x1a42cb434f6081a2;
  local_358 = (code *)0x3c19ef8;
  local_350 = (code *)0x8;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_1e8;
  local_1e8 = (uint *)0x0;
  local_200 = (undefined1 *)uVar25;
  puStack_1f8 = (undefined1 *)uVar28;
  local_1f0 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_1e8 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x1dd494cdfcbdea68;
  local_358 = (code *)&DAT_03c049f3;
  local_350 = (code *)0x4;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_188;
  local_188 = (uint *)0x0;
  local_1a0 = (undefined1 *)uVar25;
  puStack_198 = (undefined1 *)uVar28;
  local_190 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_188 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x8507958ed6b29318;
  local_358 = (code *)0x3c35f67;
  local_350 = (code *)0x5;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  puVar15 = *(undefined1 **)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar25 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_2c8;
  local_2c8 = (uint *)0x0;
  local_2e0 = puVar15;
  pcStack_2d8 = (char *)uVar25;
  local_2d0 = uVar28;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_2c8 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x782c20d530b6cc9e;
  local_358 = (code *)0x3c19f01;
  local_350 = (code *)0x7;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_2a8;
  local_2a8 = (uint *)0x0;
  local_2c0 = (undefined1 *)uVar25;
  puStack_2b8 = (undefined1 *)uVar28;
  local_2b0 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_2a8 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0xd18f2edd95ba265b;
  local_358 = (code *)0x3c6191a;
  local_350 = (code *)0x6;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_288;
  local_288 = (uint *)0x0;
  local_2a0 = (undefined1 *)uVar25;
  puStack_298 = (undefined1 *)uVar28;
  local_290 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_288 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)0x81c6118e87465ea3;
  local_358 = (code *)0x3c5e0f0;
  local_350 = (code *)0xe;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_1c8;
  local_1c8 = (uint *)0x0;
  local_1e0 = (undefined1 *)uVar25;
  puStack_1d8 = (undefined1 *)uVar28;
  local_1d0 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_1c8 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  local_360 = (long *)&DAT_4452438364be6f8c;
  local_358 = (code *)0x3c2f4a5;
  local_350 = (code *)0x10;
  local_348 = (long *)0x0;
  FUN_0104b1dc(&local_180,&local_178,&local_360);
  puVar3 = local_180;
  puVar13 = (uint *)plVar30;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xc;
  }
  uVar25 = *(undefined8 *)puVar13;
  puVar13 = (uint *)plVar32;
  if (local_180 != (uint *)0x0) {
    puVar13 = local_180 + 0xe;
  }
  uVar28 = *(undefined8 *)puVar13;
  if (local_180 == (uint *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(local_180 + 0x10);
    (**(code **)(*(long *)local_180 + 0x18))(local_180);
  }
  puVar13 = local_1a8;
  local_1a8 = (uint *)0x0;
  local_1c0 = (undefined1 *)uVar25;
  puStack_1b8 = (undefined1 *)uVar28;
  local_1b0 = uVar29;
  if (puVar13 != (uint *)0x0) {
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  local_1a8 = puVar3;
  if (local_180 != (uint *)0x0) {
    (**(code **)(*(long *)local_180 + 0x20))();
  }
  FUN_0104cbdc(lVar24 + 0x130,&local_2e0);
  if ((10 < *(ushort *)((long)local_70[0] - (long)*local_70[0])) &&
     (uVar17 = (ulong)((ushort *)((long)local_70[0] - (long)*local_70[0]))[5], uVar17 != 0)) {
    puVar13 = (uint *)((long)local_70[0] + uVar17);
    pcVar26 = (char *)((long)puVar13 + (ulong)*puVar13 + 4);
    if (*pcVar26 == '\0') {
      plVar27 = (long *)FUN_00d44228();
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x18))(plVar27);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar25 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar25;
      FUN_00cf9884(&local_360,uVar25,pcVar26);
      plVar27 = local_360;
    }
    if (plVar27 != (long *)0x0) {
      plVar30 = plVar27 + 6;
    }
    lVar10 = *plVar30;
    if (plVar27 != (long *)0x0) {
      plVar32 = plVar27 + 7;
    }
    lVar31 = *plVar32;
    if (plVar27 == (long *)0x0) {
      lVar33 = 0;
    }
    else {
      lVar33 = plVar27[8];
      (**(code **)(*plVar27 + 0x18))(plVar27);
    }
    plVar30 = (long *)(lVar24 + 0xf0);
    lVar12 = nn::os::GetCurrentThread();
LAB_0104a81c:
    if (*plVar30 == 0) goto code_r0x0104a824;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0xf8));
    do {
      if (*plVar30 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0xf8));
          while (*plVar30 == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar8) {
              *plVar30 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0104a82c;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar8) {
        *plVar30 = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0104a82c:
    *(long *)(lVar24 + 0x108) = lVar10;
    *(long *)(lVar24 + 0x110) = lVar31;
    *(long *)(lVar24 + 0x118) = lVar33;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x18))(plVar27);
    }
    plVar11 = *(long **)(lVar24 + 0x120);
    *(long **)(lVar24 + 0x120) = plVar27;
    plVar30 = (long *)PTR_DAT_047d8b70;
    plVar32 = (long *)PTR_PTR_047d4508;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    *(undefined8 *)(lVar24 + 0xf0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0xf8));
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x20))(plVar27);
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  local_340 = FUN_0104cf4c(lVar14 + 0x108,&local_360);
  local_360 = (long *)&LAB_01513154;
  local_358 = FUN_02b2d690;
  local_350 = FUN_02b2d694;
  local_348 = (long *)&LAB_02b2d6a0;
  pcVar18 = *(code **)(lVar24 + 0x428);
  lStack_338 = lVar24;
  if (pcVar18 == (code *)0x0) {
LAB_0104a8c8:
    (*local_350)(&local_340,lVar24 + 0x440);
    *(long **)(lVar24 + 0x438) = local_348;
    *(undefined8 *)(lVar24 + 0x420) = local_360;
    *(code **)(lVar24 + 0x428) = local_358;
    *(code **)(lVar24 + 0x430) = local_350;
  }
  else {
    *(undefined8 *)(lVar24 + 0x430) = 0;
    *(undefined8 *)(lVar24 + 0x438) = 0;
    *(undefined8 *)(lVar24 + 0x420) = 0;
    *(undefined8 *)(lVar24 + 0x428) = 0;
    (*pcVar18)(lVar24 + 0x440);
    if (local_350 != (code *)0x0) goto LAB_0104a8c8;
  }
  pcVar18 = local_358;
  if (local_358 != (code *)0x0) {
    local_350 = (code *)0x0;
    local_348 = (long *)0x0;
    local_360 = (long *)0x0;
    local_358 = (code *)0x0;
    (*pcVar18)(&local_340);
  }
  if (((0xc < *(ushort *)((long)local_70[0] - (long)*local_70[0])) &&
      (uVar17 = (ulong)((ushort *)((long)local_70[0] - (long)*local_70[0]))[6], uVar17 != 0)) &&
     (*(int *)((long)local_70[0] + uVar17) != 0)) {
    if (((*PTR_DAT_047dd000 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
    lVar10 = *(long *)PTR_DAT_047dd008;
    *(long *)PTR_DAT_047dd010 = lVar10;
    if (((*(long *)(lVar10 + 0x98) != 0) && ((*(byte *)(*(long *)(lVar10 + 0x98) + 0x1e8) & 1) != 0)
        ) && (puVar13 = (uint *)(**(code **)(**(long **)(lVar10 + 0x98) + 0x70))(),
             puVar13 != (uint *)0x0)) {
      piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
      if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar17 != 0)) {
        puVar3 = (uint *)((long)piVar2 + uVar17);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        puVar13 = puVar3 + 1;
        local_370 = puVar13 + *puVar3;
        puStack_368 = puVar13;
        FUN_0104d1a0(&local_180,&puStack_368,&local_370,local_70);
        if (local_180 != puVar13 + *puVar3) {
          piVar2 = (int *)((long)local_180 + (ulong)*local_180);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar17 == 0)) {
            local_380 = 0;
          }
          else {
            puVar13 = (uint *)((long)piVar2 + uVar17);
            local_380 = (long)puVar13 + (ulong)*puVar13;
          }
          FUN_00ea0a7c(&local_378,&local_380);
          plVar27 = local_378;
          if (local_378 != (long *)0x0) {
            plVar32 = local_378 + 7;
            plVar30 = local_378 + 6;
          }
          local_360 = (long *)*plVar30;
          local_358 = (code *)*plVar32;
          if (local_378 == (long *)0x0) {
            local_350 = (code *)0x0;
          }
          else {
            local_350 = (code *)local_378[8];
          }
          local_348 = (long *)0x0;
          if (local_378 != (long *)0x0) {
            (**(code **)(*local_378 + 0x18))(local_378);
          }
          local_348 = plVar27;
          if ((*(ushort *)((long)local_70[0] - (long)*local_70[0]) < 0xf) ||
             (uVar17 = (ulong)((ushort *)((long)local_70[0] - (long)*local_70[0]))[7], uVar17 == 0))
          {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)((long)local_70[0] + uVar17) != '\0';
          }
          FUN_0214397c(lVar24,&local_360,bVar8);
          if (local_348 != (long *)0x0) {
            (**(code **)(*local_348 + 0x20))();
          }
          if (local_378 != (long *)0x0) {
            (**(code **)(*local_378 + 0x20))();
          }
        }
      }
    }
  }
  if (local_188 != (uint *)0x0) {
    (**(code **)(*(long *)local_188 + 0x20))();
  }
  if (local_1a8 != (uint *)0x0) {
    (**(code **)(*(long *)local_1a8 + 0x20))();
  }
  if (local_1c8 != (uint *)0x0) {
    (**(code **)(*(long *)local_1c8 + 0x20))();
  }
  if (local_1e8 != (uint *)0x0) {
    (**(code **)(*(long *)local_1e8 + 0x20))();
  }
  if (local_208 != (uint *)0x0) {
    (**(code **)(*(long *)local_208 + 0x20))();
  }
  if (local_228 != (uint *)0x0) {
    (**(code **)(*(long *)local_228 + 0x20))();
  }
  if (local_248 != (uint *)0x0) {
    (**(code **)(*(long *)local_248 + 0x20))();
  }
  if (local_268 != (uint *)0x0) {
    (**(code **)(*(long *)local_268 + 0x20))();
  }
  if (local_288 != (uint *)0x0) {
    (**(code **)(*(long *)local_288 + 0x20))();
  }
  if (local_2a8 != (uint *)0x0) {
    (**(code **)(*(long *)local_2a8 + 0x20))();
  }
  if (local_2c8 != (uint *)0x0) {
    (**(code **)(*(long *)local_2c8 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  lVar10 = local_110;
  if (local_110 != 0) {
    lVar14 = local_108;
    if (local_108 == local_110) {
      lVar14 = local_110;
    }
    else {
      do {
        plVar27 = (long *)(lVar14 + -0x50);
        lVar14 = lVar14 + -0x68;
        if ((long *)*plVar27 != (long *)0x0) {
          (**(code **)(*(long *)*plVar27 + 0x20))();
        }
      } while (lVar10 != lVar14);
      lVar14 = local_110;
    }
    local_108 = lVar10;
    uVar17 = (**(code **)(*plStack_f8 + 0xf8))(plStack_f8);
    if (((uVar17 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f8 + 0x18))(plStack_f8,lVar14,local_100 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plStack_f8,lVar14,local_100 - lVar14,8);
    }
  }
LAB_0104aa14:
  FUN_0104b710(&local_d8,local_a8);
  lVar10 = local_d8;
  local_d8 = 0;
  if (lVar10 != 0) {
    uVar17 = (**(code **)(*plStack_c8 + 0xf8))(plStack_c8);
    if (((uVar17 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plStack_c8 + 0x18))(plStack_c8,lVar10,(long)local_d0 << 3,8);
    }
    else {
      FUN_00c48fe8(plStack_c8,lVar10,(long)local_d0 << 3,8);
    }
  }
  return lVar24;
}


