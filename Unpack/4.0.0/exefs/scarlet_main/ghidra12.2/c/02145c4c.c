/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02145c4c; name: FUN_02145c4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_02145c4c(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *extraout_x8;
  undefined1 *extraout_x9;
  undefined8 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong extraout_x10;
  undefined1 *puVar25;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long *plVar28;
  uint *puVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long local_240;
  long local_228;
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
  char *pcStack_1b8;
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
  
  puVar29 = (uint *)*param_4;
  plVar28 = (long *)*param_3;
  uVar6 = *puVar29;
  lVar15 = FUN_0104b474(*param_2 + 0x108,&local_d0);
  if (lVar15 == 0) {
    return plVar28;
  }
  piVar2 = (int *)((long)puVar29 + (ulong)uVar6);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    return plVar28;
  }
  if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
    return plVar28;
  }
  plVar30 = *(long **)(lVar15 + 0x170);
  if (plVar30 == (long *)0x0) {
    FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
  }
  else {
    lVar15 = plVar30[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02146a04;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar18;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_02146a24;
    FUN_0104c208(&local_d0,plVar30[199] + 0x48);
    lVar15 = plVar30[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar30 + 0x50))(plVar30);
    }
    else if (sVar5 == 0) goto LAB_02146a4c;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar20 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar29 = (uint *)((long)piVar2 + uVar20);
    lVar15 = (long)puVar29 + (ulong)*puVar29;
  }
  bVar7 = *(byte *)(lVar15 + 4);
  puVar21 = &DAT_cbf29ce484222645;
  if (bVar7 != 0) {
    puVar21 = &DAT_cbf29ce484222645;
    pbVar23 = (byte *)(lVar15 + 5);
    do {
      puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (bVar7 != 0);
  }
  if (local_c8 != (undefined1 *)0x0) {
    uVar20 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      uVar20 = (ulong)puVar21 / (ulong)local_c8;
    }
    uVar24 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      puVar26 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar21);
    }
    else {
      puVar26 = puVar21;
      if (local_c8 <= puVar21) {
        puVar26 = puVar21 + -(uVar20 * (long)local_c8);
      }
    }
    plVar30 = *(long **)(local_d0 + (long)puVar26 * 8);
    if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
      puVar25 = local_c8 + -1;
      if (uVar24 < 2) {
        do {
          if ((undefined1 *)plVar30[1] == puVar21) {
            if ((undefined1 *)plVar30[2] == puVar21) goto LAB_02145e9c;
          }
          else if ((undefined1 *)((ulong)plVar30[1] & (ulong)puVar25) != puVar26) break;
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
      else {
        do {
          puVar27 = (undefined1 *)plVar30[1];
          if (puVar27 == puVar21) {
            if ((undefined1 *)plVar30[2] == puVar21) {
LAB_02145e9c:
              puVar26 = local_c8;
              lVar15 = local_d0;
              if (uVar24 < 2) goto LAB_02145f0c;
              puVar27 = puVar21;
              if (local_c8 <= puVar21) {
                puVar27 = puVar21 + -(uVar20 * (long)local_c8);
              }
              do {
                plVar30 = *(long **)(lVar15 + (long)puVar27 * 8);
                if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)
                   ) {
                  if (uVar24 < 2) {
                    do {
                      if ((undefined1 *)plVar30[1] == puVar21) {
                        if ((undefined1 *)plVar30[2] == puVar21) goto LAB_02145f40;
                      }
                      else if ((undefined1 *)((ulong)plVar30[1] & (ulong)puVar25) != puVar27) break;
                      plVar30 = (long *)*plVar30;
                    } while (plVar30 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar25 = (undefined1 *)plVar30[1];
                      if (puVar25 == puVar21) {
                        if ((undefined1 *)plVar30[2] == puVar21) goto LAB_02145f40;
                      }
                      else {
                        if (puVar26 <= puVar25) {
                          uVar20 = 0;
                          if (puVar26 != (undefined1 *)0x0) {
                            uVar20 = (ulong)puVar25 / (ulong)puVar26;
                          }
                          puVar25 = puVar25 + -(uVar20 * (long)puVar26);
                        }
                        if (puVar25 != puVar27) break;
                      }
                      plVar30 = (long *)*plVar30;
                    } while (plVar30 != (long *)0x0);
                  }
                }
                FUN_02143970();
                puVar21 = extraout_x8;
                puVar26 = extraout_x9;
                uVar24 = extraout_x10;
                puVar25 = extraout_x11;
                lVar15 = extraout_x13;
LAB_02145f0c:
                puVar27 = (undefined1 *)((ulong)puVar25 & (ulong)puVar21);
              } while( true );
            }
          }
          else {
            if (local_c8 <= puVar27) {
              uVar11 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar27 / (ulong)local_c8;
              }
              puVar27 = puVar27 + -(uVar11 * (long)local_c8);
            }
            if (puVar27 != puVar26) break;
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
    }
  }
  goto LAB_02146608;
LAB_02145f40:
  FUN_0104c68c(&local_108,plVar30 + 6);
  lVar15 = local_108;
  lVar19 = (long)*piVar2;
  uVar8 = *(ushort *)((long)piVar2 - lVar19);
  if (uVar8 < 9) {
    iVar14 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)piVar2 - lVar19))[4];
    iVar14 = 0;
    if (uVar20 != 0) {
      iVar14 = *(int *)((long)piVar2 + uVar20);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar22 = (undefined8 *)(local_108 + (long)iVar14 * 0x68);
  local_170 = *puVar22;
  local_168 = puVar22[1];
  local_160 = puVar22[2];
  local_158 = (long *)puVar22[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
    lVar19 = (long)*piVar2;
    uVar8 = *(ushort *)((long)piVar2 - lVar19);
  }
  memcpy(local_150,(void *)(lVar15 + (long)iVar14 * 0x68 + 0x20),0x48);
  param_1 = (long *)*param_1;
  if (uVar8 < 5) {
    local_210 = 0;
  }
  else {
    uVar20 = (ulong)*(ushort *)((long)piVar2 + (4 - lVar19));
    local_210 = 0;
    if (uVar20 != 0) {
      puVar29 = (uint *)((long)piVar2 + uVar20);
      local_210 = (long)puVar29 + (ulong)*puVar29;
    }
  }
  FUN_00ea0a7c(&local_1e8,&local_210);
  plVar16 = local_1e8;
  plVar30 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  local_190 = (long *)PTR_DAT_047d8b70;
  if (local_1e8 != (long *)0x0) {
    local_190 = local_1e8 + 6;
  }
  local_190 = (long *)*local_190;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (local_1e8 != (long *)0x0) {
    plVar3 = local_1e8 + 7;
  }
  local_188 = (undefined *)*plVar3;
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
  local_178 = plVar16;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_1;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x280,0x10);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar16,0,0x280);
  FUN_0104c068(plVar16);
  puVar12 = PTR_DAT_047dd038;
  plVar16[0x42] = (long)&DAT_cbf29ce484222645;
  plVar16[0x23] = 0;
  plVar16[0x24] = 0;
  plVar16[0x44] = 0;
  plVar16[0x2f] = 0;
  plVar16[0x30] = 0;
  plVar16[0x45] = 0;
  *(undefined2 *)(plVar16 + 0x46) = 0;
  plVar16[0x47] = (long)&DAT_cbf29ce484222645;
  plVar16[0x49] = 0;
  plVar16[0x4a] = 0;
  plVar16[2] = (long)plVar16;
  plVar16[4] = (long)(puVar12 + 0x180);
  plVar16[5] = (long)(puVar12 + 0x1d0);
  plVar16[0x43] = (long)&DAT_03c886bc;
  plVar16[0x48] = (long)&DAT_03c886bc;
  plVar16[0x21] = (long)&DAT_cbf29ce484222645;
  plVar16[0x22] = (long)&DAT_03c886bc;
  plVar16[0x25] = (long)&DAT_cbf29ce484222645;
  plVar16[0x26] = (long)&DAT_03c886bc;
  plVar16[0x29] = (long)&DAT_cbf29ce484222645;
  plVar16[0x2a] = (long)&DAT_03c886bc;
  plVar16[0x2d] = (long)&DAT_cbf29ce484222645;
  plVar16[0x2e] = (long)&DAT_03c886bc;
  *(undefined2 *)(plVar16 + 0x4e) = 1;
  *(undefined4 *)(plVar16 + 3) = 0x100280;
  plVar16[0x27] = 0;
  plVar16[0x28] = 0;
  plVar16[0x2b] = 0;
  plVar16[0x2c] = 0;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  plVar16[0x32] = 0;
  plVar16[0x33] = 0;
  *plVar16 = (long)(puVar12 + 0x10);
  plVar16[1] = (long)param_1;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  lVar15 = plVar16[6];
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_02146a04:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar5 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar5 == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
    *(undefined8 *)(lVar15 + 8) = uVar18;
    *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
  }
  else if (sVar5 == -1) {
LAB_02146a24:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar3 = local_178;
  plVar16[8] = (long)local_190;
  plVar16[9] = (long)local_188;
  plVar16[10] = local_180;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar17 = (long *)plVar16[0xb];
  plVar16[0xb] = (long)plVar3;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))();
  }
  local_1c0 = plVar16;
  (**(code **)(*plVar28 + 0x120))(plVar28,&local_1c0);
  if (local_1c0 != (long *)0x0) {
    lVar15 = local_1c0[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_1c0 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02146a4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar28 + 0x80))(plVar28,&local_190);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x20))();
  }
  FUN_00faae34(&local_190,*(undefined8 *)(local_150[0] + 0x18));
  plVar3 = local_190;
  plVar28 = plVar30;
  if (local_190 != (long *)0x0) {
    plVar28 = local_190 + 6;
  }
  lVar15 = *plVar28;
  plVar28 = plVar4;
  if (local_190 != (long *)0x0) {
    plVar28 = local_190 + 7;
  }
  lVar19 = *plVar28;
  if (local_190 == (long *)0x0) {
    lVar31 = 0;
  }
  else {
    lVar31 = local_190[8];
    (**(code **)(*local_190 + 0x18))(local_190);
  }
  FUN_00faae34(&local_1c0,*(undefined8 *)(local_150[0] + 0x18));
  plVar28 = local_1c0;
  if (local_1c0 != (long *)0x0) {
    plVar30 = local_1c0 + 6;
  }
  lVar33 = *plVar30;
  plVar30 = plVar4;
  if (local_1c0 != (long *)0x0) {
    plVar30 = local_1c0 + 7;
  }
  lVar35 = *plVar30;
  if (local_1c0 == (long *)0x0) {
    lVar37 = 0;
  }
  else {
    lVar37 = local_1c0[8];
    (**(code **)(*local_1c0 + 0x18))(local_1c0);
  }
  plVar16[0x11] = lVar15;
  plVar16[0x12] = lVar19;
  plVar16[0x13] = lVar31;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar30 = (long *)plVar16[0x14];
  plVar16[0x14] = (long)plVar3;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  plVar16[0x15] = lVar33;
  plVar16[0x16] = lVar35;
  plVar16[0x17] = lVar37;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar17 = (long *)plVar16[0x18];
  plVar16[0x18] = (long)plVar28;
  plVar30 = (long *)PTR_DAT_047d8b70;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))();
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  local_190 = (long *)0x96c8fca4137de60b;
  local_188 = &DAT_03c2826c;
  local_180 = 4;
  local_178 = (long *)0x0;
  FUN_0104b1dc(&local_198,&local_170,&local_190);
  plVar3 = local_198;
  plVar28 = plVar30;
  if (local_198 != (long *)0x0) {
    plVar28 = local_198 + 6;
  }
  lVar15 = *plVar28;
  plVar28 = plVar4;
  if (local_198 != (long *)0x0) {
    plVar28 = local_198 + 7;
  }
  lVar19 = *plVar28;
  if (local_198 == (long *)0x0) {
    local_228 = 0;
  }
  else {
    local_228 = local_198[8];
    (**(code **)(*local_198 + 0x18))(local_198);
  }
  local_1c0 = (long *)0x970bb77e41328381;
  pcStack_1b8 = "decide";
  local_1b0 = 6;
  uStack_1a8 = 0;
  FUN_0104b1dc(&local_1a0,&local_170,&local_1c0);
  plVar17 = local_1a0;
  plVar28 = plVar30;
  if (local_1a0 != (long *)0x0) {
    plVar28 = local_1a0 + 6;
  }
  lVar31 = *plVar28;
  plVar28 = plVar4;
  if (local_1a0 != (long *)0x0) {
    plVar28 = local_1a0 + 7;
  }
  lVar33 = *plVar28;
  if (local_1a0 == (long *)0x0) {
    local_240 = 0;
  }
  else {
    local_240 = local_1a0[8];
    (**(code **)(*local_1a0 + 0x18))(local_1a0);
  }
  local_1e8 = (long *)0xe5583797befa0b92;
  pcStack_1e0 = "normal";
  local_1d8 = 6;
  uStack_1d0 = 0;
  FUN_0104b1dc(&local_1c8,&local_170,&local_1e8);
  plVar13 = local_1c8;
  plVar28 = plVar30;
  if (local_1c8 != (long *)0x0) {
    plVar28 = local_1c8 + 6;
  }
  lVar35 = *plVar28;
  plVar28 = plVar4;
  if (local_1c8 != (long *)0x0) {
    plVar28 = local_1c8 + 7;
  }
  lVar37 = *plVar28;
  if (local_1c8 == (long *)0x0) {
    lVar32 = 0;
  }
  else {
    lVar32 = local_1c8[8];
    (**(code **)(*local_1c8 + 0x18))(local_1c8);
  }
  local_210 = 0x94883a2c5d26f0c;
  pcStack_208 = "catch";
  local_200 = 5;
  uStack_1f8 = 0;
  FUN_0104b1dc(&local_1f0,&local_170,&local_210);
  plVar28 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar30 = local_1f0 + 6;
  }
  lVar34 = *plVar30;
  if (local_1f0 != (long *)0x0) {
    plVar4 = local_1f0 + 7;
  }
  lVar36 = *plVar4;
  if (local_1f0 == (long *)0x0) {
    lVar38 = 0;
  }
  else {
    lVar38 = local_1f0[8];
    (**(code **)(*local_1f0 + 0x18))(local_1f0);
    if (local_1f0 != (long *)0x0) {
      (**(code **)(*local_1f0 + 0x20))();
    }
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
  plVar16[0x21] = lVar15;
  plVar16[0x22] = lVar19;
  plVar16[0x23] = local_228;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar30 = (long *)plVar16[0x24];
  plVar16[0x24] = (long)plVar3;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  plVar16[0x25] = lVar31;
  plVar16[0x26] = lVar33;
  plVar16[0x27] = local_240;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar30 = (long *)plVar16[0x28];
  plVar16[0x28] = (long)plVar17;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  plVar16[0x29] = lVar35;
  plVar16[0x2a] = lVar37;
  plVar16[0x2b] = lVar32;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar30 = (long *)plVar16[0x2c];
  plVar16[0x2c] = (long)plVar13;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  plVar16[0x2d] = lVar34;
  plVar16[0x2e] = lVar36;
  plVar16[0x2f] = lVar38;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar30 = (long *)plVar16[0x30];
  plVar16[0x30] = (long)plVar28;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  lVar15 = local_108;
  if (local_108 != 0) {
    lVar19 = local_100;
    if (local_100 == local_108) {
      lVar19 = local_108;
    }
    else {
      do {
        plVar28 = (long *)(lVar19 + -0x50);
        lVar19 = lVar19 + -0x68;
        if ((long *)*plVar28 != (long *)0x0) {
          (**(code **)(*(long *)*plVar28 + 0x20))();
        }
      } while (lVar15 != lVar19);
      lVar19 = local_108;
    }
    local_100 = lVar15;
    uVar20 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar20 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar19,local_f8 - lVar19,8);
    }
    else {
      FUN_00c48fe8(plStack_f0,lVar19,local_f8 - lVar19,8);
    }
  }
  plVar28 = plVar16;
LAB_02146608:
  FUN_0104b710(&local_d0,local_a0);
  lVar15 = local_d0;
  local_d0 = 0;
  if (lVar15 != 0) {
    uVar20 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
    if (((uVar20 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar15,(long)local_c8 << 3,8);
    }
    else {
      FUN_00c48fe8(plStack_c0,lVar15,(long)local_c8 << 3,8);
    }
  }
  return plVar28;
}


