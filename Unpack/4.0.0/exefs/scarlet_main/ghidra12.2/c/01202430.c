/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01202430; name: FUN_01202430
 */


void FUN_01202430(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  short sVar7;
  char cVar8;
  string sVar9;
  undefined7 uVar10;
  string sVar11;
  undefined7 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  uint *puVar19;
  long lVar20;
  code *pcVar21;
  undefined8 *puVar22;
  ushort *puVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 *puVar27;
  short sVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
  int iVar35;
  string local_e0;
  undefined7 uStack_df;
  string local_d8;
  undefined4 uStack_d7;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  void *local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  char *pcStack_90;
  size_t local_88;
  long *local_80;
  undefined1 *local_78;
  char *pcStack_70;
  size_t local_68;
  long *local_60;
  undefined8 *local_58;
  
  if (*(char *)(param_1 + 0x311) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x748) == '\0') {
    return;
  }
  piVar18 = (int *)*param_2;
  puVar23 = (ushort *)((long)piVar18 - (long)*piVar18);
  if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
    puVar19 = (uint *)0x0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  }
  uVar26 = (ulong)*puVar19;
  if (*puVar19 != 0) {
    uVar29 = 0;
    do {
      piVar4 = (int *)((long)(puVar19 + uVar29 + 1) + (ulong)puVar19[uVar29 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar20 = 0;
      }
      else {
        uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar20 = 0;
        if (uVar31 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar31);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      bVar6 = *(byte *)(lVar20 + 4);
      if (bVar6 != 0) {
        puVar33 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar20 + 5);
        do {
          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
        if (puVar33 == (undefined1 *)0xa5d87c9ff14c683c) {
          uVar26 = uVar29 & 0xffffffff;
          break;
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar26);
  }
  puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                    uVar26 * 4 + (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
  piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar19 = (uint *)((long)piVar18 + (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18)));
  piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
  if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
     (uVar26 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar26 == 0)) {
    lVar20 = 0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + uVar26);
    lVar20 = (long)puVar19 + (ulong)*puVar19;
  }
  pcVar1 = (char *)(lVar20 + 4);
  local_68 = strlen(pcVar1);
  bVar6 = *(byte *)(lVar20 + 4);
  local_78 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    local_78 = &DAT_cbf29ce484222645;
    pbVar24 = (byte *)(lVar20 + 5);
    do {
      local_78 = (undefined1 *)(((ulong)local_78 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (bVar6 != 0);
  }
  local_60 = (long *)0x0;
  if (*(char *)(param_1 + 0x590) != '\0') {
    return;
  }
  pcStack_70 = pcVar1;
  if (((*(char *)(param_1 + 0x591) != '\0') && (lVar20 = *(long *)(param_1 + 0x418), lVar20 != 0))
     && (*(short *)(lVar20 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar20 + 0x1a);
    sVar28 = *(short *)(lVar20 + 0x1a);
LAB_01203010:
    sVar7 = *psVar2;
    if (sVar7 == sVar28) {
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar28 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_01203034;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01203034:
      bVar13 = false;
    }
    if (!bVar13) goto code_r0x0120303c;
    lVar20 = *(long *)(lVar20 + 0x10);
    if (lVar20 != 0) {
      plVar17 = *(long **)(lVar20 + 0xf8);
      plVar30 = (long *)(lVar20 + -0x28);
      if (plVar17 != (long *)0x0) {
        plVar3 = plVar17 + 5;
        do {
          lVar20 = *plVar3;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = (int)lVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar20 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        do {
          iVar35 = (int)*plVar3;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = iVar35 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((char)plVar17[0x42] == '\0') {
          if (iVar35 == 1) {
            (**(code **)(*plVar17 + 0x10))();
          }
          else if (iVar35 == 0) goto LAB_01203144;
          pcVar21 = *(code **)(*plVar30 + 0x60);
          goto LAB_01202ca0;
        }
        if (iVar35 == 1) {
          (**(code **)(*plVar17 + 0x10))();
        }
        else if (iVar35 == 0) {
LAB_01203144:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
  }
LAB_012025fc:
  piVar18 = (int *)*param_2;
  puVar23 = (ushort *)((long)piVar18 - (long)*piVar18);
  if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
    puVar19 = (uint *)0x0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  }
  if (*puVar19 != 0) {
    uVar26 = 0;
    do {
      piVar4 = (int *)((long)(puVar19 + uVar26 + 1) + (ulong)puVar19[uVar26 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar20 = 0;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar20 = 0;
        if (uVar29 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar29);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      bVar6 = *(byte *)(lVar20 + 4);
      if (bVar6 != 0) {
        puVar33 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar20 + 5);
        do {
          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
        if (puVar33 == (undefined1 *)0xd014a4a47c51e835) {
          puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                            (uVar26 & 0xffffffff) * 4 +
                            (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
          piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
          puVar19 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
          piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
          if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
              (uVar26 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar26 != 0)) &&
             ((*(char *)((long)piVar4 + uVar26) != '\0' && ((param_3 & 1) == 0))))
          goto LAB_0120271c;
          break;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != *puVar19);
  }
  if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
    puVar19 = (uint *)0x0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  }
  if (*puVar19 != 0) {
    uVar26 = 0;
    do {
      piVar4 = (int *)((long)(puVar19 + uVar26 + 1) + (ulong)puVar19[uVar26 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar20 = 0;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar20 = 0;
        if (uVar29 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar29);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      bVar6 = *(byte *)(lVar20 + 4);
      if (bVar6 != 0) {
        puVar33 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar20 + 5);
        do {
          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
        if (puVar33 == (undefined1 *)0x1d2b568e64793f5c) {
          puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                            (uVar26 & 0xffffffff) * 4 +
                            (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
          piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
          puVar19 = (uint *)((long)piVar18 +
                            (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18)));
          piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
             (uVar26 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar26 == 0)) {
            iVar35 = 0;
          }
          else {
            iVar35 = *(int *)((long)piVar18 + uVar26);
            if (99 < iVar35) break;
          }
          if (((DAT_0486ac10 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_0486ac10), iVar14 != 0)) {
            local_e0 = (string)0x18;
            uStack_d7 = 0x6d6f646e;
            uStack_d3 = 0;
            uStack_df = s__dev_urandom_03c1765b._0_7_;
            local_d8 = s__dev_urandom_03c1765b[7];
            std::random_device::random_device((random_device *)&DAT_0486a248,&local_e0);
            if (((byte)local_e0 & 1) != 0) {
              operator_delete(local_d0);
            }
            FUN_00100190(PTR__random_device_047dcb28,&DAT_0486a248,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_0486ac10);
          }
          if (((DAT_0486ac20 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_0486ac20), iVar14 != 0)) {
            uVar15 = std::random_device::operator()((random_device *)&DAT_0486a248);
            iVar14 = (int)((ulong)uVar15 * 2 + (ulong)uVar15 >> 0x20);
            DAT_0486ac18 = uVar15 + (iVar14 + (uVar15 - iVar14 >> 1) >> 0x1e) * -0x7fffffff;
            if (DAT_0486ac18 == 0) {
              DAT_0486ac18 = 1;
            }
            __cxa_guard_release(&DAT_0486ac20);
          }
          local_e0 = (string)0x1;
          uStack_df = 0x64000000;
          iVar14 = FUN_010d96e0(&local_e0,&DAT_0486ac18,&local_e0);
          if (iVar35 < iVar14) goto LAB_0120271c;
          break;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != *puVar19);
  }
  uVar12 = uStack_df;
  sVar11 = local_e0;
  local_e0 = SUB81(param_1,0);
  sVar9 = local_e0;
  uStack_df = (undefined7)((ulong)param_1 >> 8);
  uVar10 = uStack_df;
  if (*(code **)(param_1 + 0x5c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x5c0))(param_1 + 0x5e0,&local_e0);
    sVar11 = local_e0;
    uVar12 = uStack_df;
  }
  uStack_df = uVar12;
  local_e0 = sVar11;
  if (*(code **)(param_1 + 0x640) != (code *)0x0) {
    local_e0 = sVar9;
    uStack_df = uVar10;
    (**(code **)(param_1 + 0x640))(param_1 + 0x660,&local_e0,param_2);
  }
  if (((param_4 & 1) != 0) &&
     (puVar33 = *(undefined1 **)(param_1 + 0x530), puVar33 != (undefined1 *)0x0)) {
    uVar26 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      puVar27 = (undefined1 *)((ulong)(puVar33 + -1) & (ulong)local_78);
    }
    else {
      puVar27 = local_78;
      if (puVar33 <= local_78) {
        uVar29 = 0;
        if (puVar33 != (undefined1 *)0x0) {
          uVar29 = (ulong)local_78 / (ulong)puVar33;
        }
        puVar27 = local_78 + -(uVar29 * (long)puVar33);
      }
    }
    lVar20 = *(long *)(param_1 + 0x528);
    plVar30 = *(long **)(lVar20 + (long)puVar27 * 8);
    if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
      if (uVar26 < 2) {
        do {
          if ((undefined1 *)plVar30[1] == local_78) {
            if ((undefined1 *)plVar30[2] == local_78) goto LAB_01203184;
          }
          else if ((undefined1 *)((ulong)plVar30[1] & (ulong)(puVar33 + -1)) != puVar27) break;
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
      else {
        do {
          puVar32 = (undefined1 *)plVar30[1];
          if (puVar32 == local_78) {
            if ((undefined1 *)plVar30[2] == local_78) goto LAB_01203184;
          }
          else {
            if (puVar33 <= puVar32) {
              uVar29 = 0;
              if (puVar33 != (undefined1 *)0x0) {
                uVar29 = (ulong)puVar32 / (ulong)puVar33;
              }
              puVar32 = puVar32 + -(uVar29 * (long)puVar33);
            }
            if (puVar32 != puVar27) break;
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
    }
  }
  piVar18 = (int *)*param_2;
  puVar23 = (ushort *)((long)piVar18 - (long)*piVar18);
  if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
    puVar19 = (uint *)0x0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  }
  uVar26 = (ulong)*puVar19;
  if (*puVar19 != 0) {
    uVar29 = 0;
    do {
      piVar4 = (int *)((long)(puVar19 + uVar29 + 1) + (ulong)puVar19[uVar29 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar20 = 0;
      }
      else {
        uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar20 = 0;
        if (uVar31 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar31);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      bVar6 = *(byte *)(lVar20 + 4);
      if (bVar6 != 0) {
        puVar33 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar20 + 5);
        do {
          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
        if (puVar33 == (undefined1 *)0x352b79c017918034) {
          uVar26 = uVar29 & 0xffffffff;
          break;
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar26);
  }
  puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                    uVar26 * 4 + (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
  piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar19 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
  piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar26 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar26 == 0)) {
    lVar20 = 0;
  }
  else {
    puVar19 = (uint *)((long)piVar4 + uVar26);
    lVar20 = (long)puVar19 + (ulong)*puVar19;
  }
  pcVar1 = (char *)(lVar20 + 4);
  local_88 = strlen(pcVar1);
  bVar6 = *(byte *)(lVar20 + 4);
  local_98 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    local_98 = &DAT_cbf29ce484222645;
    pbVar24 = (byte *)(lVar20 + 5);
    do {
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (bVar6 != 0);
  }
  local_9c = 100;
  local_80 = (long *)0x0;
  puVar23 = (ushort *)((long)piVar18 - (long)*piVar18);
  if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
    puVar19 = (uint *)0x0;
  }
  else {
    puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  }
  if (*puVar19 != 0) {
    uVar26 = 0;
    do {
      piVar4 = (int *)((long)(puVar19 + uVar26 + 1) + (ulong)puVar19[uVar26 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar20 = 0;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar20 = 0;
        if (uVar29 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar29);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      bVar6 = *(byte *)(lVar20 + 4);
      if (bVar6 != 0) {
        puVar33 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar20 + 5);
        do {
          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
        if (puVar33 == (undefined1 *)0x1d7288a2dd6119c9) {
          puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                            (uVar26 & 0xffffffff) * 4 +
                            (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
          piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
          puVar19 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
          piVar4 = (int *)((long)puVar19 + (ulong)*puVar19);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
             (uVar26 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar26 == 0)) {
            local_9c = 0;
          }
          else {
            local_9c = *(undefined4 *)((long)piVar4 + uVar26);
          }
          break;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != *puVar19);
  }
  pcStack_90 = pcVar1;
  if (*pcVar1 == '\0') {
    FUN_012054d8(param_1,&local_78,100);
    if ((param_4 & 1) != 0) {
      plStack_c8 = *(long **)(param_1 + 8);
      local_b0 = 0;
      local_e0 = (string)0x0;
      uStack_df = 0;
      local_d8 = (string)0x0;
      uStack_d7 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      local_c0 = 0x1fffffffffffffff;
      uStack_b8 = 0;
      local_d0 = (void *)0x0;
      local_58 = param_2;
      FUN_01204880(&local_e0,&local_58);
      FUN_01204c7c(param_1 + 0x528,&local_78,&local_e0);
      plVar30 = plStack_c8;
      lVar20 = CONCAT71(uStack_df,local_e0);
      if (lVar20 != 0) {
        local_d8 = local_e0;
        uStack_d7 = (undefined4)uStack_df;
        uStack_d3 = (undefined1)((uint7)uStack_df >> 0x20);
        uStack_d2 = (undefined2)((uint7)uStack_df >> 0x28);
        lVar34 = (long)local_d0 - lVar20;
        uVar26 = (**(code **)(*plStack_c8 + 0xf8))(plStack_c8);
        if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,lVar20,lVar34,8);
        }
        else {
          FUN_00c48fe8(plVar30,lVar20,lVar34,8);
        }
      }
    }
  }
  else {
    if ((*puVar23 < 0xd) || ((ulong)puVar23[6] == 0)) {
      puVar19 = (uint *)0x0;
    }
    else {
      puVar19 = (uint *)((long)piVar18 + (ulong)puVar23[6]);
      puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
    }
    uVar26 = (ulong)*puVar19;
    if (*puVar19 != 0) {
      uVar29 = 0;
      do {
        piVar4 = (int *)((long)(puVar19 + uVar29 + 1) + (ulong)puVar19[uVar29 + 1]);
        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
          lVar20 = 0;
        }
        else {
          uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
          lVar20 = 0;
          if (uVar31 != 0) {
            puVar5 = (uint *)((long)piVar4 + uVar31);
            lVar20 = (long)puVar5 + (ulong)*puVar5;
          }
        }
        bVar6 = *(byte *)(lVar20 + 4);
        if (bVar6 != 0) {
          puVar33 = &DAT_cbf29ce484222645;
          pbVar24 = (byte *)(lVar20 + 5);
          do {
            puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar24;
            pbVar24 = pbVar24 + 1;
          } while (bVar6 != 0);
          if (puVar33 == (undefined1 *)0x6bfdff25f365b50) {
            uVar26 = uVar29 & 0xffffffff;
            break;
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar26);
    }
    puVar19 = (uint *)((long)((long)piVar18 + (ulong)puVar23[6]) +
                      uVar26 * 4 + (ulong)*(uint *)((long)piVar18 + (ulong)puVar23[6]) + 4);
    piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
    puVar19 = (uint *)((long)piVar18 + (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18)));
    piVar18 = (int *)((long)puVar19 + (ulong)*puVar19);
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar26 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar26 == 0)) {
      bVar13 = false;
    }
    else {
      bVar13 = *(char *)((long)piVar18 + uVar26) != '\0';
    }
    local_a8 = FUN_012037cc(param_1,&local_98,bVar13);
    if (local_a8 != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x508));
      FUN_01203268(param_1 + 0x4d0,&local_78,&local_a8,&local_9c);
      if ((param_4 & 1) != 0) {
        plStack_c8 = *(long **)(param_1 + 8);
        local_b0 = 0;
        local_e0 = (string)0x0;
        uStack_df = 0;
        local_d8 = (string)0x0;
        uStack_d7 = 0;
        uStack_d3 = 0;
        uStack_d2 = 0;
        local_c0 = 0x1fffffffffffffff;
        uStack_b8 = 0;
        local_d0 = (void *)0x0;
        local_58 = param_2;
        FUN_01204880(&local_e0,&local_58);
        FUN_01204c7c(param_1 + 0x528,&local_78,&local_e0);
        plVar30 = plStack_c8;
        lVar20 = CONCAT71(uStack_df,local_e0);
        if (lVar20 != 0) {
          local_d8 = local_e0;
          uStack_d7 = (undefined4)uStack_df;
          uStack_d3 = (undefined1)((uint7)uStack_df >> 0x20);
          uStack_d2 = (undefined2)((uint7)uStack_df >> 0x28);
          lVar34 = (long)local_d0 - lVar20;
          uVar26 = (**(code **)(*plStack_c8 + 0xf8))(plStack_c8);
          if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
            (**(code **)(*plVar30 + 0x18))(plVar30,lVar20,lVar34,8);
          }
          else {
            FUN_00c48fe8(plVar30,lVar20,lVar34,8);
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x508));
    }
  }
  if (local_80 != (long *)0x0) {
    pcVar21 = *(code **)(*local_80 + 0x20);
    plVar30 = local_80;
LAB_01202ca0:
    (*pcVar21)(plVar30);
  }
LAB_0120271c:
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
code_r0x0120303c:
  sVar28 = sVar7;
  if (sVar7 == 0) goto LAB_012025fc;
  goto LAB_01203010;
LAB_01203184:
  if (uVar26 < 2) {
    plVar30 = *(long **)(lVar20 + ((ulong)(puVar33 + -1) & (ulong)local_78) * 8);
    do {
      do {
        plVar30 = (long *)*plVar30;
      } while ((undefined1 *)plVar30[1] != local_78);
    } while ((undefined1 *)plVar30[2] != local_78);
  }
  else {
    puVar27 = local_78;
    if (puVar33 <= local_78) {
      uVar26 = 0;
      if (puVar33 != (undefined1 *)0x0) {
        uVar26 = (ulong)local_78 / (ulong)puVar33;
      }
      puVar27 = local_78 + -(uVar26 * (long)puVar33);
    }
    plVar30 = *(long **)(lVar20 + (long)puVar27 * 8);
    do {
      do {
        plVar30 = (long *)*plVar30;
      } while ((undefined1 *)plVar30[1] != local_78);
    } while ((undefined1 *)plVar30[2] != local_78);
  }
  puVar25 = *(undefined8 **)((long)plVar30 + 0x18);
  puVar22 = *(undefined8 **)((long)plVar30 + 0x20);
  if ((puVar25 != puVar22) && ((undefined8 *)*puVar25 != param_2)) {
    do {
      puVar25 = puVar25 + 1;
      if (puVar22 == puVar25) {
        puVar25 = puVar22;
        goto LAB_01203204;
      }
    } while ((undefined8 *)*puVar25 != param_2);
  }
LAB_01203204:
  if (puVar22 == puVar25) {
    local_e0 = SUB81(param_2,0);
    uStack_df = (undefined7)((ulong)param_2 >> 8);
    FUN_01205134((undefined8 *)((long)plVar30 + 0x18),&local_e0);
  }
  goto LAB_0120271c;
}


