/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152ac9c; name: FUN_0152ac9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0152ac9c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined1 *extraout_x8;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  undefined1 *extraout_x9;
  undefined8 *puVar32;
  ulong uVar33;
  ulong extraout_x10;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined1 *puVar37;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar38;
  undefined1 *puVar39;
  uint *puVar40;
  long *plVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long local_318;
  long local_300;
  long local_2e8;
  long local_2d0;
  long local_2b8;
  long local_2a0;
  undefined8 local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  long *local_268;
  undefined8 local_260;
  char *pcStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  long *local_240;
  undefined8 local_238;
  char *pcStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  long *local_218;
  long local_210;
  char *pcStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  long *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  long *local_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  long *local_198;
  long *local_190;
  undefined *local_188;
  long local_180;
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
  
  puVar40 = (uint *)*param_4;
  param_3 = (long *)*param_3;
  uVar5 = *puVar40;
  lVar16 = FUN_0104b474(*param_2 + 0x108,&local_d0);
  if (lVar16 == 0) {
    return param_3;
  }
  piVar2 = (int *)((long)puVar40 + (ulong)uVar5);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    return param_3;
  }
  if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
    return param_3;
  }
  plVar41 = *(long **)(lVar16 + 0x170);
  if (plVar41 == (long *)0x0) {
    FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
  }
  else {
    lVar16 = plVar41[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0152bd00;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 0) {
      uVar21 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar21;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0152bd20;
    FUN_0104c208(&local_d0,plVar41[199] + 0x48);
    lVar16 = plVar41[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar41 + 0x50))(plVar41);
    }
    else if (sVar4 == 0) goto LAB_0152bd48;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar24 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar24 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar40 = (uint *)((long)piVar2 + uVar24);
    lVar16 = (long)puVar40 + (ulong)*puVar40;
  }
  bVar6 = *(byte *)(lVar16 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    pbVar31 = (byte *)(lVar16 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar31;
      pbVar31 = pbVar31 + 1;
    } while (bVar6 != 0);
  }
  if (local_c8 != (undefined1 *)0x0) {
    uVar24 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      uVar24 = (ulong)puVar25 / (ulong)local_c8;
    }
    uVar33 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      puVar38 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar25);
    }
    else {
      puVar38 = puVar25;
      if (local_c8 <= puVar25) {
        puVar38 = puVar25 + -(uVar24 * (long)local_c8);
      }
    }
    plVar41 = *(long **)(local_d0 + (long)puVar38 * 8);
    if ((plVar41 != (long *)0x0) && (plVar41 = (long *)*plVar41, plVar41 != (long *)0x0)) {
      puVar37 = local_c8 + -1;
      if (uVar33 < 2) {
        do {
          if ((undefined1 *)plVar41[1] == puVar25) {
            if ((undefined1 *)plVar41[2] == puVar25) goto LAB_0152aee4;
          }
          else if ((undefined1 *)((ulong)plVar41[1] & (ulong)puVar37) != puVar38) break;
          plVar41 = (long *)*plVar41;
        } while (plVar41 != (long *)0x0);
      }
      else {
        do {
          puVar39 = (undefined1 *)plVar41[1];
          if (puVar39 == puVar25) {
            if ((undefined1 *)plVar41[2] == puVar25) {
LAB_0152aee4:
              puVar38 = local_c8;
              lVar16 = local_d0;
              if (uVar33 < 2) goto LAB_0152af54;
              puVar39 = puVar25;
              if (local_c8 <= puVar25) {
                puVar39 = puVar25 + -(uVar24 * (long)local_c8);
              }
              do {
                plVar41 = *(long **)(lVar16 + (long)puVar39 * 8);
                if ((plVar41 != (long *)0x0) && (plVar41 = (long *)*plVar41, plVar41 != (long *)0x0)
                   ) {
                  if (uVar33 < 2) {
                    do {
                      if ((undefined1 *)plVar41[1] == puVar25) {
                        if ((undefined1 *)plVar41[2] == puVar25) goto LAB_0152af88;
                      }
                      else if ((undefined1 *)((ulong)plVar41[1] & (ulong)puVar37) != puVar39) break;
                      plVar41 = (long *)*plVar41;
                    } while (plVar41 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar37 = (undefined1 *)plVar41[1];
                      if (puVar37 == puVar25) {
                        if ((undefined1 *)plVar41[2] == puVar25) goto LAB_0152af88;
                      }
                      else {
                        if (puVar38 <= puVar37) {
                          uVar24 = 0;
                          if (puVar38 != (undefined1 *)0x0) {
                            uVar24 = (ulong)puVar37 / (ulong)puVar38;
                          }
                          puVar37 = puVar37 + -(uVar24 * (long)puVar38);
                        }
                        if (puVar37 != puVar39) break;
                      }
                      plVar41 = (long *)*plVar41;
                    } while (plVar41 != (long *)0x0);
                  }
                }
                FUN_02143970();
                puVar25 = extraout_x8;
                puVar38 = extraout_x9;
                uVar33 = extraout_x10;
                puVar37 = extraout_x11;
                lVar16 = extraout_x13;
LAB_0152af54:
                puVar39 = (undefined1 *)((ulong)puVar37 & (ulong)puVar25);
              } while( true );
            }
          }
          else {
            if (local_c8 <= puVar39) {
              uVar10 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar39 / (ulong)local_c8;
              }
              puVar39 = puVar39 + -(uVar10 * (long)local_c8);
            }
            if (puVar39 != puVar38) break;
          }
          plVar41 = (long *)*plVar41;
        } while (plVar41 != (long *)0x0);
      }
    }
  }
  goto LAB_0152b80c;
LAB_0152af88:
  FUN_0104c68c(&local_108,plVar41 + 6);
  lVar16 = local_108;
  lVar22 = (long)*piVar2;
  uVar7 = *(ushort *)((long)piVar2 - lVar22);
  if (uVar7 < 9) {
    iVar15 = 0;
  }
  else {
    uVar24 = (ulong)((ushort *)((long)piVar2 - lVar22))[4];
    iVar15 = 0;
    if (uVar24 != 0) {
      iVar15 = *(int *)((long)piVar2 + uVar24);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar15) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar32 = (undefined8 *)(local_108 + (long)iVar15 * 0x68);
  local_170 = *puVar32;
  local_168 = puVar32[1];
  local_160 = puVar32[2];
  local_158 = (long *)puVar32[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
    lVar22 = (long)*piVar2;
    uVar7 = *(ushort *)((long)piVar2 - lVar22);
  }
  memcpy(local_150,(void *)(lVar16 + (long)iVar15 * 0x68 + 0x20),0x48);
  plVar41 = (long *)*param_1;
  if (uVar7 < 5) {
    local_210 = 0;
  }
  else {
    uVar24 = (ulong)*(ushort *)((long)piVar2 + (4 - lVar22));
    local_210 = 0;
    if (uVar24 != 0) {
      puVar40 = (uint *)((long)piVar2 + uVar24);
      local_210 = (long)puVar40 + (ulong)*puVar40;
    }
  }
  FUN_00ea0a7c(&local_1e8,&local_210);
  plVar17 = local_1e8;
  plVar19 = (long *)PTR_DAT_047d8b70;
  local_190 = (long *)PTR_DAT_047d8b70;
  if (local_1e8 != (long *)0x0) {
    local_190 = local_1e8 + 6;
  }
  local_190 = (long *)*local_190;
  plVar18 = (long *)PTR_PTR_047d4508;
  if (local_1e8 != (long *)0x0) {
    plVar18 = local_1e8 + 7;
  }
  local_188 = (undefined *)*plVar18;
  if (local_1e8 == (long *)0x0) {
    local_180 = 0;
  }
  else {
    local_180 = local_1e8[8];
  }
  local_178 = (long *)0x0;
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x18))(local_1e8);
  }
  local_178 = plVar17;
  if (((DAT_04865a38 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar41;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  plVar17 = (long *)(**(code **)(*plVar41 + 0x10))(plVar41,0x220,8);
  if (plVar17 == (long *)0x0) {
    (**(code **)(*plVar41 + 0xe8))(plVar41);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0152bdac();
  *(undefined4 *)(plVar17 + 3) = 0x80220;
  plVar17[1] = (long)plVar41;
  plVar17[2] = (long)plVar17;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  lVar16 = plVar17[6];
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_0152bd00:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar4 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar4 == 0) {
    uVar21 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    *(undefined8 *)(lVar16 + 8) = uVar21;
    *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
LAB_0152bd20:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar41 = local_178;
  plVar17[8] = (long)local_190;
  plVar17[9] = (long)local_188;
  plVar17[10] = local_180;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar18 = (long *)plVar17[0xb];
  plVar17[0xb] = (long)plVar41;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  local_1c0 = plVar17;
  (**(code **)(*param_3 + 0x120))(param_3,&local_1c0);
  if (local_1c0 != (long *)0x0) {
    lVar16 = local_1c0[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_1c0 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_0152bd48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_3 + 0x80))(param_3,&local_190);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x20))();
  }
  FUN_00faae34(&local_190,*(undefined8 *)(local_150[0] + 0x18));
  plVar18 = local_190;
  plVar41 = plVar19;
  if (local_190 != (long *)0x0) {
    plVar41 = local_190 + 6;
  }
  lVar16 = *plVar41;
  plVar41 = (long *)PTR_PTR_047d4508;
  if (local_190 != (long *)0x0) {
    plVar41 = local_190 + 7;
  }
  lVar22 = *plVar41;
  if (local_190 == (long *)0x0) {
    lVar42 = 0;
  }
  else {
    lVar42 = local_190[8];
    (**(code **)(*local_190 + 0x18))(local_190);
  }
  FUN_00faae34(&local_1c0,*(undefined8 *)(local_150[0] + 0x18));
  plVar41 = local_1c0;
  if (local_1c0 != (long *)0x0) {
    plVar19 = local_1c0 + 6;
  }
  lVar43 = *plVar19;
  plVar19 = (long *)PTR_PTR_047d4508;
  if (local_1c0 != (long *)0x0) {
    plVar19 = local_1c0 + 7;
  }
  lVar44 = *plVar19;
  if (local_1c0 == (long *)0x0) {
    lVar45 = 0;
  }
  else {
    lVar45 = local_1c0[8];
    (**(code **)(*local_1c0 + 0x18))(local_1c0);
  }
  plVar17[0x11] = lVar16;
  plVar17[0x12] = lVar22;
  plVar17[0x13] = lVar42;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar19 = (long *)plVar17[0x14];
  plVar17[0x14] = (long)plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x15] = lVar43;
  plVar17[0x16] = lVar44;
  plVar17[0x17] = lVar45;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x18))(plVar41);
  }
  plVar20 = (long *)plVar17[0x18];
  plVar17[0x18] = (long)plVar41;
  plVar3 = (long *)PTR_DAT_047d8b70;
  plVar19 = (long *)PTR_PTR_047d4508;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x20))(plVar41);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  local_190 = (long *)0xcd587b271f5ccf44;
  local_188 = &DAT_03c1e091;
  local_180 = 3;
  local_178 = (long *)0x0;
  FUN_012804b0(&local_198,&local_170,&local_190);
  plVar18 = local_198;
  plVar41 = plVar3;
  if (local_198 != (long *)0x0) {
    plVar41 = local_198 + 6;
  }
  lVar16 = *plVar41;
  plVar41 = plVar19;
  if (local_198 != (long *)0x0) {
    plVar41 = local_198 + 7;
  }
  lVar22 = *plVar41;
  if (local_198 == (long *)0x0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = local_198[8];
    (**(code **)(*local_198 + 0x18))(local_198);
  }
  local_1c0 = (long *)0x92c4ff92669024b5;
  puStack_1b8 = &DAT_03c4f67d;
  local_1b0 = 4;
  uStack_1a8 = 0;
  FUN_012804b0(&local_1a0,&local_170,&local_1c0);
  plVar20 = local_1a0;
  plVar41 = plVar3;
  if (local_1a0 != (long *)0x0) {
    plVar41 = local_1a0 + 6;
  }
  lVar42 = *plVar41;
  plVar41 = plVar19;
  if (local_1a0 != (long *)0x0) {
    plVar41 = local_1a0 + 7;
  }
  lVar43 = *plVar41;
  if (local_1a0 == (long *)0x0) {
    local_2b8 = 0;
  }
  else {
    local_2b8 = local_1a0[8];
    (**(code **)(*local_1a0 + 0x18))(local_1a0);
  }
  local_1e8 = (long *)0x9d89840be789400;
  pcStack_1e0 = "number";
  local_1d8 = 6;
  uStack_1d0 = 0;
  FUN_012804b0(&local_1c8,&local_170,&local_1e8);
  plVar14 = local_1c8;
  plVar41 = plVar3;
  if (local_1c8 != (long *)0x0) {
    plVar41 = local_1c8 + 6;
  }
  lVar44 = *plVar41;
  plVar41 = plVar19;
  if (local_1c8 != (long *)0x0) {
    plVar41 = local_1c8 + 7;
  }
  lVar45 = *plVar41;
  if (local_1c8 == (long *)0x0) {
    local_2d0 = 0;
  }
  else {
    local_2d0 = local_1c8[8];
    (**(code **)(*local_1c8 + 0x18))(local_1c8);
  }
  local_210 = -0x488aa1313ae35310;
  pcStack_208 = "gauge";
  local_200 = 5;
  uStack_1f8 = 0;
  FUN_0104b1dc(&local_1f0,&local_170,&local_210);
  plVar13 = local_1f0;
  plVar41 = plVar3;
  if (local_1f0 != (long *)0x0) {
    plVar41 = local_1f0 + 6;
  }
  lVar34 = *plVar41;
  plVar41 = plVar19;
  if (local_1f0 != (long *)0x0) {
    plVar41 = local_1f0 + 7;
  }
  lVar26 = *plVar41;
  if (local_1f0 == (long *)0x0) {
    local_2e8 = 0;
  }
  else {
    local_2e8 = local_1f0[8];
    (**(code **)(*local_1f0 + 0x18))(local_1f0);
  }
  local_238 = 0x5c2a883adfa9c35c;
  pcStack_230 = "green";
  local_228 = 5;
  uStack_220 = 0;
  FUN_0104b1dc(&local_218,&local_170,&local_238);
  plVar12 = local_218;
  plVar41 = plVar3;
  if (local_218 != (long *)0x0) {
    plVar41 = local_218 + 6;
  }
  lVar35 = *plVar41;
  plVar41 = plVar19;
  if (local_218 != (long *)0x0) {
    plVar41 = local_218 + 7;
  }
  lVar27 = *plVar41;
  if (local_218 == (long *)0x0) {
    local_300 = 0;
  }
  else {
    local_300 = local_218[8];
    (**(code **)(*local_218 + 0x18))(local_218);
  }
  local_260 = 0x5e0a6b2a8d75bac9;
  pcStack_258 = "yellow";
  local_250 = 6;
  uStack_248 = 0;
  FUN_0104b1dc(&local_240,&local_170,&local_260);
  plVar11 = local_240;
  plVar41 = plVar3;
  if (local_240 != (long *)0x0) {
    plVar41 = local_240 + 6;
  }
  lVar36 = *plVar41;
  if (local_240 != (long *)0x0) {
    plVar19 = local_240 + 7;
  }
  lVar28 = *plVar19;
  if (local_240 == (long *)0x0) {
    local_318 = 0;
  }
  else {
    local_318 = local_240[8];
    (**(code **)(*local_240 + 0x18))(local_240);
  }
  local_288 = 0x70519e277b37b6bc;
  puStack_280 = &DAT_03c57c76;
  local_278 = 3;
  uStack_270 = 0;
  FUN_0104b1dc(&local_268,&local_170,&local_288);
  plVar41 = local_268;
  if (local_268 != (long *)0x0) {
    plVar3 = local_268 + 6;
  }
  lVar29 = *plVar3;
  plVar19 = (long *)PTR_PTR_047d4508;
  if (local_268 != (long *)0x0) {
    plVar19 = local_268 + 7;
  }
  lVar30 = *plVar19;
  if (local_268 == (long *)0x0) {
    lVar46 = 0;
  }
  else {
    lVar46 = local_268[8];
    (**(code **)(*local_268 + 0x18))(local_268);
    if (local_268 != (long *)0x0) {
      (**(code **)(*local_268 + 0x20))();
    }
  }
  if (local_240 != (long *)0x0) {
    (**(code **)(*local_240 + 0x20))();
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  if (local_1f0 != (long *)0x0) {
    (**(code **)(*local_1f0 + 0x20))();
  }
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  plVar17[0x21] = lVar16;
  plVar17[0x22] = lVar22;
  plVar17[0x23] = local_2a0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar19 = (long *)plVar17[0x24];
  plVar17[0x24] = (long)plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x25] = lVar42;
  plVar17[0x26] = lVar43;
  plVar17[0x27] = local_2b8;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar19 = (long *)plVar17[0x28];
  plVar17[0x28] = (long)plVar20;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x29] = lVar44;
  plVar17[0x2a] = lVar45;
  plVar17[0x2b] = local_2d0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar19 = (long *)plVar17[0x2c];
  plVar17[0x2c] = (long)plVar14;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x2d] = lVar34;
  plVar17[0x2e] = lVar26;
  plVar17[0x2f] = local_2e8;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar19 = (long *)plVar17[0x30];
  plVar17[0x30] = (long)plVar13;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x31] = lVar35;
  plVar17[0x32] = lVar27;
  plVar17[0x33] = local_300;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar19 = (long *)plVar17[0x34];
  plVar17[0x34] = (long)plVar12;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x35] = lVar36;
  plVar17[0x36] = lVar28;
  plVar17[0x37] = local_318;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar19 = (long *)plVar17[0x38];
  plVar17[0x38] = (long)plVar11;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar17[0x3b] = lVar46;
  plVar17[0x39] = lVar29;
  plVar17[0x3a] = lVar30;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x18))(plVar41);
  }
  plVar19 = (long *)plVar17[0x3c];
  plVar17[0x3c] = (long)plVar41;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
    uVar23 = 0;
  }
  else {
    uVar24 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar24);
    }
  }
  *(undefined4 *)(plVar17 + 0x3d) = uVar23;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x20))(plVar41);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  lVar16 = local_108;
  if (local_108 != 0) {
    lVar22 = local_100;
    if (local_100 == local_108) {
      lVar22 = local_108;
    }
    else {
      do {
        plVar41 = (long *)(lVar22 + -0x50);
        lVar22 = lVar22 + -0x68;
        if ((long *)*plVar41 != (long *)0x0) {
          (**(code **)(*(long *)*plVar41 + 0x20))();
        }
      } while (lVar16 != lVar22);
      lVar22 = local_108;
    }
    local_100 = lVar16;
    uVar24 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar24 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar22,local_f8 - lVar22,8);
    }
    else {
      FUN_00c48fe8(plStack_f0,lVar22,local_f8 - lVar22,8);
    }
  }
  param_3 = plVar17;
LAB_0152b80c:
  FUN_0104b710(&local_d0,local_a0);
  lVar16 = local_d0;
  local_d0 = 0;
  if (lVar16 != 0) {
    uVar24 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
    if (((uVar24 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar16,(long)local_c8 << 3,8);
    }
    else {
      FUN_00c48fe8(plStack_c0,lVar16,(long)local_c8 << 3,8);
    }
  }
  return param_3;
}


