/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02144990; name: FUN_02144990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_02144990(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *extraout_x8;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 *extraout_x9;
  undefined8 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong extraout_x10;
  undefined1 *puVar30;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long *plVar33;
  long *plVar34;
  uint *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long local_2d8;
  long local_2c0;
  long local_2a8;
  long local_290;
  long local_278;
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
  undefined *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  long *local_1e8;
  undefined *puStack_1e0;
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
  
  puVar35 = (uint *)*param_4;
  plVar33 = (long *)*param_3;
  uVar5 = *puVar35;
  lVar16 = FUN_0104b474(*param_2 + 0x108,&local_d0);
  if (lVar16 == 0) {
    return plVar33;
  }
  piVar2 = (int *)((long)puVar35 + (ulong)uVar5);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    return plVar33;
  }
  if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
    return plVar33;
  }
  plVar34 = *(long **)(lVar16 + 0x170);
  if (plVar34 == (long *)0x0) {
    FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
  }
  else {
    lVar16 = plVar34[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02145980;
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
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar19;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_021459a0;
    FUN_0104c208(&local_d0,plVar34[199] + 0x48);
    lVar16 = plVar34[6];
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
      (**(code **)(*plVar34 + 0x50))(plVar34);
    }
    else if (sVar4 == 0) goto LAB_021459c8;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar21 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar35 = (uint *)((long)piVar2 + uVar21);
    lVar16 = (long)puVar35 + (ulong)*puVar35;
  }
  bVar6 = *(byte *)(lVar16 + 4);
  puVar22 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar22 = &DAT_cbf29ce484222645;
    pbVar28 = (byte *)(lVar16 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (bVar6 != 0);
  }
  if (local_c8 != (undefined1 *)0x0) {
    uVar21 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      uVar21 = (ulong)puVar22 / (ulong)local_c8;
    }
    uVar29 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      puVar31 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar22);
    }
    else {
      puVar31 = puVar22;
      if (local_c8 <= puVar22) {
        puVar31 = puVar22 + -(uVar21 * (long)local_c8);
      }
    }
    plVar34 = *(long **)(local_d0 + (long)puVar31 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      puVar30 = local_c8 + -1;
      if (uVar29 < 2) {
        do {
          if ((undefined1 *)plVar34[1] == puVar22) {
            if ((undefined1 *)plVar34[2] == puVar22) goto LAB_02144c08;
          }
          else if ((undefined1 *)((ulong)plVar34[1] & (ulong)puVar30) != puVar31) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          puVar32 = (undefined1 *)plVar34[1];
          if (puVar32 == puVar22) {
            if ((undefined1 *)plVar34[2] == puVar22) {
LAB_02144c08:
              puVar31 = local_c8;
              lVar16 = local_d0;
              if (uVar29 < 2) goto LAB_02144c78;
              puVar32 = puVar22;
              if (local_c8 <= puVar22) {
                puVar32 = puVar22 + -(uVar21 * (long)local_c8);
              }
              do {
                plVar34 = *(long **)(lVar16 + (long)puVar32 * 8);
                if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)
                   ) {
                  if (uVar29 < 2) {
                    do {
                      if ((undefined1 *)plVar34[1] == puVar22) {
                        if ((undefined1 *)plVar34[2] == puVar22) goto LAB_02144cac;
                      }
                      else if ((undefined1 *)((ulong)plVar34[1] & (ulong)puVar30) != puVar32) break;
                      plVar34 = (long *)*plVar34;
                    } while (plVar34 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar30 = (undefined1 *)plVar34[1];
                      if (puVar30 == puVar22) {
                        if ((undefined1 *)plVar34[2] == puVar22) goto LAB_02144cac;
                      }
                      else {
                        if (puVar31 <= puVar30) {
                          uVar21 = 0;
                          if (puVar31 != (undefined1 *)0x0) {
                            uVar21 = (ulong)puVar30 / (ulong)puVar31;
                          }
                          puVar30 = puVar30 + -(uVar21 * (long)puVar31);
                        }
                        if (puVar30 != puVar32) break;
                      }
                      plVar34 = (long *)*plVar34;
                    } while (plVar34 != (long *)0x0);
                  }
                }
                FUN_02143970();
                puVar22 = extraout_x8;
                puVar31 = extraout_x9;
                uVar29 = extraout_x10;
                puVar30 = extraout_x11;
                lVar16 = extraout_x13;
LAB_02144c78:
                puVar32 = (undefined1 *)((ulong)puVar30 & (ulong)puVar22);
              } while( true );
            }
          }
          else {
            if (local_c8 <= puVar32) {
              uVar10 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar32 / (ulong)local_c8;
              }
              puVar32 = puVar32 + -(uVar10 * (long)local_c8);
            }
            if (puVar32 != puVar31) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
  goto LAB_021454f8;
LAB_02144cac:
  FUN_0104c68c(&local_108,plVar34 + 6);
  lVar16 = local_108;
  lVar20 = (long)*piVar2;
  uVar7 = *(ushort *)((long)piVar2 - lVar20);
  if (uVar7 < 9) {
    iVar15 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - lVar20))[4];
    iVar15 = 0;
    if (uVar21 != 0) {
      iVar15 = *(int *)((long)piVar2 + uVar21);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar15) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar27 = (undefined8 *)(local_108 + (long)iVar15 * 0x68);
  local_170 = *puVar27;
  local_168 = puVar27[1];
  local_160 = puVar27[2];
  local_158 = (long *)puVar27[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
    lVar20 = (long)*piVar2;
    uVar7 = *(ushort *)((long)piVar2 - lVar20);
  }
  memcpy(local_150,(void *)(lVar16 + (long)iVar15 * 0x68 + 0x20),0x48);
  param_1 = (long *)*param_1;
  if (uVar7 < 5) {
    local_210 = 0;
  }
  else {
    uVar21 = (ulong)*(ushort *)((long)piVar2 + (4 - lVar20));
    local_210 = 0;
    if (uVar21 != 0) {
      puVar35 = (uint *)((long)piVar2 + uVar21);
      local_210 = (long)puVar35 + (ulong)*puVar35;
    }
  }
  FUN_00ea0a7c(&local_1e8,&local_210);
  plVar17 = local_1e8;
  plVar34 = (long *)PTR_DAT_047d8b70;
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
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_1;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  plVar17 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x210,8);
  if (plVar17 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar17,0,0x210);
  FUN_0104c068(plVar17);
  puVar11 = PTR_DAT_047dd030;
  *(undefined4 *)(plVar17 + 0x39) = 0;
  plVar17[0x23] = 0;
  plVar17[0x24] = 0;
  plVar17[0x27] = 0;
  plVar17[0x28] = 0;
  *plVar17 = (long)(puVar11 + 0x10);
  plVar17[0x21] = (long)&DAT_cbf29ce484222645;
  plVar17[0x22] = (long)&DAT_03c886bc;
  plVar17[0x25] = (long)&DAT_cbf29ce484222645;
  plVar17[0x26] = (long)&DAT_03c886bc;
  plVar17[0x29] = (long)&DAT_cbf29ce484222645;
  plVar17[0x2a] = (long)&DAT_03c886bc;
  plVar17[4] = (long)(puVar11 + 0x150);
  plVar17[5] = (long)(puVar11 + 0x1a0);
  plVar17[0x2b] = 0;
  plVar17[0x2c] = 0;
  plVar17[0x2d] = (long)&DAT_cbf29ce484222645;
  plVar17[0x2e] = (long)&DAT_03c886bc;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  plVar17[0x31] = (long)&DAT_cbf29ce484222645;
  plVar17[0x32] = (long)&DAT_03c886bc;
  plVar17[0x33] = 0;
  plVar17[0x34] = 0;
  plVar17[0x35] = (long)&DAT_cbf29ce484222645;
  plVar17[0x36] = (long)&DAT_03c886bc;
  plVar17[0x37] = 0;
  plVar17[0x38] = 0;
  FUN_02145a2c(plVar17 + 0x3a);
  FUN_02145b3c(plVar17 + 0x3e);
  *(undefined4 *)(plVar17 + 3) = 0x80210;
  plVar17[1] = (long)param_1;
  plVar17[2] = (long)plVar17;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  lVar16 = plVar17[6];
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_02145980:
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
    uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    *(undefined8 *)(lVar16 + 8) = uVar19;
    *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
LAB_021459a0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar3 = local_178;
  plVar17[8] = (long)local_190;
  plVar17[9] = (long)local_188;
  plVar17[10] = local_180;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x18))(local_178);
  }
  plVar18 = (long *)plVar17[0xb];
  plVar17[0xb] = (long)plVar3;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  local_1c0 = plVar17;
  (**(code **)(*plVar33 + 0x120))(plVar33,&local_1c0);
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
LAB_021459c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar33 + 0x80))(plVar33,&local_190);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x20))();
  }
  FUN_00faae34(&local_190,*(undefined8 *)(local_150[0] + 0x18));
  plVar3 = local_190;
  plVar33 = plVar34;
  if (local_190 != (long *)0x0) {
    plVar33 = local_190 + 6;
  }
  lVar16 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_190 != (long *)0x0) {
    plVar33 = local_190 + 7;
  }
  lVar20 = *plVar33;
  if (local_190 == (long *)0x0) {
    lVar36 = 0;
  }
  else {
    lVar36 = local_190[8];
    (**(code **)(*local_190 + 0x18))(local_190);
  }
  FUN_00faae34(&local_1c0,*(undefined8 *)(local_150[0] + 0x18));
  plVar18 = local_1c0;
  plVar33 = plVar34;
  if (local_1c0 != (long *)0x0) {
    plVar33 = local_1c0 + 6;
  }
  lVar37 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_1c0 != (long *)0x0) {
    plVar33 = local_1c0 + 7;
  }
  lVar38 = *plVar33;
  if (local_1c0 == (long *)0x0) {
    lVar40 = 0;
  }
  else {
    lVar40 = local_1c0[8];
    (**(code **)(*local_1c0 + 0x18))(local_1c0);
  }
  plVar17[0x11] = lVar16;
  plVar17[0x12] = lVar20;
  plVar17[0x13] = lVar36;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar33 = (long *)plVar17[0x14];
  plVar17[0x14] = (long)plVar3;
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x20))();
  }
  plVar17[0x15] = lVar37;
  plVar17[0x16] = lVar38;
  plVar17[0x17] = lVar40;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar33 = (long *)plVar17[0x18];
  plVar17[0x18] = (long)plVar18;
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x20))();
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
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
  local_190 = (long *)0x127c3807bda8f4de;
  local_188 = &DAT_03c88729;
  local_180 = 2;
  local_178 = (long *)0x0;
  FUN_0104b1dc(&local_198,&local_170,&local_190);
  plVar3 = local_198;
  plVar33 = plVar34;
  if (local_198 != (long *)0x0) {
    plVar33 = local_198 + 6;
  }
  lVar16 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_198 != (long *)0x0) {
    plVar33 = local_198 + 7;
  }
  lVar20 = *plVar33;
  if (local_198 == (long *)0x0) {
    local_278 = 0;
  }
  else {
    local_278 = local_198[8];
    (**(code **)(*local_198 + 0x18))(local_198);
  }
  local_1c0 = (long *)0x607b273c00779f;
  puStack_1b8 = &DAT_03be9a30;
  local_1b0 = 3;
  uStack_1a8 = 0;
  FUN_0104b1dc(&local_1a0,&local_170,&local_1c0);
  plVar18 = local_1a0;
  plVar33 = plVar34;
  if (local_1a0 != (long *)0x0) {
    plVar33 = local_1a0 + 6;
  }
  lVar36 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_1a0 != (long *)0x0) {
    plVar33 = local_1a0 + 7;
  }
  lVar37 = *plVar33;
  if (local_1a0 == (long *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = local_1a0[8];
    (**(code **)(*local_1a0 + 0x18))(local_1a0);
  }
  local_1e8 = (long *)0x1dd494cdfcbdea68;
  puStack_1e0 = &DAT_03c049f3;
  local_1d8 = 4;
  uStack_1d0 = 0;
  FUN_0104b1dc(&local_1c8,&local_170,&local_1e8);
  plVar14 = local_1c8;
  plVar33 = plVar34;
  if (local_1c8 != (long *)0x0) {
    plVar33 = local_1c8 + 6;
  }
  lVar38 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_1c8 != (long *)0x0) {
    plVar33 = local_1c8 + 7;
  }
  lVar40 = *plVar33;
  if (local_1c8 == (long *)0x0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = local_1c8[8];
    (**(code **)(*local_1c8 + 0x18))(local_1c8);
  }
  local_210 = 0x2fa69a6ffc90a31d;
  puStack_208 = &DAT_03bd42c6;
  local_200 = 4;
  uStack_1f8 = 0;
  FUN_0104b1dc(&local_1f0,&local_170,&local_210);
  plVar13 = local_1f0;
  plVar33 = plVar34;
  if (local_1f0 != (long *)0x0) {
    plVar33 = local_1f0 + 6;
  }
  lVar23 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_1f0 != (long *)0x0) {
    plVar33 = local_1f0 + 7;
  }
  lVar24 = *plVar33;
  if (local_1f0 == (long *)0x0) {
    local_2c0 = 0;
  }
  else {
    local_2c0 = local_1f0[8];
    (**(code **)(*local_1f0 + 0x18))(local_1f0);
  }
  local_238 = 0x9778194a3162a086;
  pcStack_230 = "f_out";
  local_228 = 5;
  uStack_220 = 0;
  FUN_0104b1dc(&local_218,&local_170,&local_238);
  plVar12 = local_218;
  plVar33 = plVar34;
  if (local_218 != (long *)0x0) {
    plVar33 = local_218 + 6;
  }
  lVar25 = *plVar33;
  plVar33 = (long *)PTR_PTR_047d4508;
  if (local_218 != (long *)0x0) {
    plVar33 = local_218 + 7;
  }
  lVar26 = *plVar33;
  if (local_218 == (long *)0x0) {
    local_2d8 = 0;
  }
  else {
    local_2d8 = local_218[8];
    (**(code **)(*local_218 + 0x18))(local_218);
  }
  local_260 = 0x9cfce35496706ddb;
  pcStack_258 = "f_in_keep";
  local_250 = 9;
  uStack_248 = 0;
  FUN_0104b1dc(&local_240,&local_170,&local_260);
  plVar33 = local_240;
  if (local_240 != (long *)0x0) {
    plVar34 = local_240 + 6;
  }
  lVar39 = *plVar34;
  plVar34 = (long *)PTR_PTR_047d4508;
  if (local_240 != (long *)0x0) {
    plVar34 = local_240 + 7;
  }
  lVar41 = *plVar34;
  if (local_240 == (long *)0x0) {
    lVar42 = 0;
  }
  else {
    lVar42 = local_240[8];
    (**(code **)(*local_240 + 0x18))(local_240);
    if (local_240 != (long *)0x0) {
      (**(code **)(*local_240 + 0x20))();
    }
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
  plVar17[0x22] = lVar20;
  plVar17[0x23] = local_278;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar34 = (long *)plVar17[0x24];
  plVar17[0x24] = (long)plVar3;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  plVar17[0x25] = lVar36;
  plVar17[0x26] = lVar37;
  plVar17[0x27] = local_290;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar34 = (long *)plVar17[0x28];
  plVar17[0x28] = (long)plVar18;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  plVar17[0x29] = lVar38;
  plVar17[0x2a] = lVar40;
  plVar17[0x2b] = local_2a8;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar34 = (long *)plVar17[0x2c];
  plVar17[0x2c] = (long)plVar14;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  plVar17[0x2d] = lVar23;
  plVar17[0x2e] = lVar24;
  plVar17[0x2f] = local_2c0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar34 = (long *)plVar17[0x30];
  plVar17[0x30] = (long)plVar13;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  plVar17[0x31] = lVar25;
  plVar17[0x32] = lVar26;
  plVar17[0x33] = local_2d8;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar34 = (long *)plVar17[0x34];
  plVar17[0x34] = (long)plVar12;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  plVar17[0x35] = lVar39;
  plVar17[0x36] = lVar41;
  plVar17[0x37] = lVar42;
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x18))(plVar33);
  }
  plVar34 = (long *)plVar17[0x38];
  plVar17[0x38] = (long)plVar33;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x20))(plVar33);
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
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  lVar16 = local_108;
  if (local_108 != 0) {
    lVar20 = local_100;
    if (local_100 == local_108) {
      lVar20 = local_108;
    }
    else {
      do {
        plVar33 = (long *)(lVar20 + -0x50);
        lVar20 = lVar20 + -0x68;
        if ((long *)*plVar33 != (long *)0x0) {
          (**(code **)(*(long *)*plVar33 + 0x20))();
        }
      } while (lVar16 != lVar20);
      lVar20 = local_108;
    }
    local_100 = lVar16;
    uVar21 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar21 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar20,local_f8 - lVar20,8);
    }
    else {
      FUN_00c48fe8(plStack_f0,lVar20,local_f8 - lVar20,8);
    }
  }
  plVar33 = plVar17;
LAB_021454f8:
  FUN_0104b710(&local_d0,local_a0);
  lVar16 = local_d0;
  local_d0 = 0;
  if (lVar16 != 0) {
    uVar21 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
    if (((uVar21 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar16,(long)local_c8 << 3,8);
    }
    else {
      FUN_00c48fe8(plStack_c0,lVar16,(long)local_c8 << 3,8);
    }
  }
  return plVar33;
}


