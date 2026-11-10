/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da4b88; name: FUN_00da4b88
 */


long FUN_00da4b88(size_t param_1,byte *param_2,byte *param_3,size_t param_4)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  char *pcVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  short sVar17;
  long *plVar18;
  undefined1 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long *local_118 [4];
  long *local_f8;
  undefined1 *local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long *local_d0;
  
  puVar8 = (undefined8 *)FUN_00da5204();
  plVar20 = (long *)*puVar8;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar21 = (long *)puVar8[4];
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  puVar8 = (undefined8 *)PTR_DAT_047d3e30;
  pbVar14 = PTR_DAT_047d3e28;
  if (*(ushort *)(param_3 + -(long)*(int *)param_3) < 5) goto LAB_00da4ec4;
  uVar23 = (ulong)*(ushort *)((long)(param_3 + -(long)*(int *)param_3) + 4);
  if (uVar23 == 0) goto LAB_00da4ec4;
  puVar12 = (uint *)(param_3 + uVar23);
  uVar22 = (ulong)*puVar12;
  pcVar10 = (char *)((long)puVar12 + uVar22 + 4);
  puVar24 = &DAT_cbf29ce484222645;
  local_d8 = strlen(pcVar10);
  bVar2 = *(byte *)((long)puVar12 + uVar22 + 4);
  if (bVar2 != 0) {
    pbVar14 = param_3 + uVar22 + uVar23 + 5;
    do {
      puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar2 != 0);
  }
  local_d0 = (long *)0x0;
  puVar8 = (undefined8 *)PTR_DAT_047d3e30;
  pbVar14 = PTR_DAT_047d3e28;
  local_e8 = puVar24;
  pbStack_e0 = (byte *)pcVar10;
LAB_00da4cb4:
  piVar9 = (int *)FUN_00da5470(param_4,&local_e8);
  do {
    if (piVar9 == (int *)0x0) {
      if (*(ushort *)(param_3 + -(long)*(int *)param_3) < 7) {
LAB_00da4f98:
        pcVar10 = (char *)0x0;
      }
      else {
        uVar23 = (ulong)*(ushort *)((long)(param_3 + -(long)*(int *)param_3) + 6);
        pcVar10 = (char *)0x0;
        if (uVar23 != 0) {
          puVar12 = (uint *)(param_3 + uVar23);
LAB_00da4ce8:
          pcVar10 = (char *)((long)puVar12 + (ulong)*puVar12);
        }
      }
    }
    else {
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 7) goto LAB_00da4f98;
      uVar23 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
      pcVar10 = (char *)0x0;
      if (uVar23 != 0) {
        puVar12 = (uint *)((long)piVar9 + uVar23);
        goto LAB_00da4ce8;
      }
    }
    snprintf((char *)&local_e8,0x80,"%s/%s.trabt",*(char **)(param_1 + 0x28),pcVar10 + 4);
    FUN_00da52ec(local_118,&local_e8);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    plVar20 = local_118[0];
    local_118[0] = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    plVar21 = local_f8;
    plVar18 = (long *)PTR_PTR_047d4508;
    if (plVar20 != (long *)0x0) {
      plVar18 = plVar20 + 7;
    }
    pcVar10 = strrchr((char *)*plVar18,0x2f);
    if (pcVar10 == (char *)0x0) {
      if (((*pbVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar24 = (undefined1 *)*puVar8;
      param_3 = (byte *)puVar8[1];
      param_4 = puVar8[2];
      plVar18 = (long *)puVar8[3];
      local_e8 = puVar24;
      pbStack_e0 = param_3;
      local_d8 = param_4;
      local_d0 = plVar18;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    else {
      param_3 = (byte *)(pcVar10 + 1);
      puVar24 = &DAT_cbf29ce484222645;
      param_4 = strlen((char *)param_3);
      bVar2 = *param_3;
      if (bVar2 != 0) {
        pbVar16 = (byte *)(pcVar10 + 2);
        do {
          puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar2 != 0);
      }
      local_d0 = (long *)0x0;
      local_e8 = puVar24;
      pbStack_e0 = param_3;
      local_d8 = param_4;
      plVar18 = local_d0;
    }
    if (param_2 != (byte *)0x0) {
      *(undefined1 **)param_2 = puVar24;
      *(byte **)(param_2 + 8) = param_3;
      *(size_t *)(param_2 + 0x10) = param_4;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      plVar11 = *(long **)(param_2 + 0x18);
      *(long **)(param_2 + 0x18) = plVar18;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    lVar13 = *(long *)(param_1 + 0x80);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar17 = *(short *)(lVar13 + 0x1a);
LAB_00da5010:
      sVar3 = *psVar1;
      if (sVar3 == sVar17) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00da5038;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00da5038:
        bVar5 = false;
      }
      param_4 = param_1;
      if (!bVar5) break;
      param_3 = *(byte **)(lVar13 + 0x10);
      if (param_3 != (byte *)0x0) {
        param_2 = param_3 + -0x28;
        FUN_029ef0c8(local_118,param_2,param_1);
        lVar13 = *(long *)(param_3 + 8);
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*(long *)param_2 + 0x50))(param_2);
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_00da4d84;
      }
    }
LAB_00da4d80:
    local_118[0] = (long *)0x0;
LAB_00da4d84:
    if (local_118[0] != (long *)0x0) {
      plVar18 = (long *)FUN_00da5ff8(local_118[0] + 0x23,&local_e8);
      lVar13 = *plVar18;
      if (local_118[0] != (long *)0x0) {
        plVar18 = local_118[0] + 5;
        do {
          lVar6 = *plVar18;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      goto LAB_00da4e14;
    }
    puVar24 = *(undefined1 **)(param_1 + 0x140);
    if (puVar24 != (undefined1 *)0x0) {
      uVar23 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        puVar15 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)local_e8);
      }
      else if (local_e8 < puVar24) {
        puVar15 = local_e8;
      }
      else {
        uVar22 = 0;
        if (puVar24 != (undefined1 *)0x0) {
          uVar22 = (ulong)local_e8 / (ulong)puVar24;
        }
        puVar15 = local_e8 + -(uVar22 * (long)puVar24);
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x138) + (long)puVar15 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if ((undefined1 *)plVar18[1] == local_e8) {
              if ((undefined1 *)plVar18[2] == local_e8) goto LAB_00da4e10;
            }
            else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar24 + -1)) != puVar15) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar18[1];
            if (puVar19 == local_e8) {
              if ((undefined1 *)plVar18[2] == local_e8) goto LAB_00da4e10;
            }
            else {
              if (puVar24 <= puVar19) {
                uVar23 = 0;
                if (puVar24 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar19 / (ulong)puVar24;
                }
                puVar19 = puVar19 + -(uVar23 * (long)puVar24);
              }
              if (puVar19 != puVar15) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    FUN_029ef390();
LAB_00da4ec4:
    if (((*pbVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_e8 = (undefined1 *)*puVar8;
    pbStack_e0 = (byte *)puVar8[1];
    local_d8 = puVar8[2];
    plVar18 = (long *)puVar8[3];
    local_d0 = plVar18;
    if (plVar18 == (long *)0x0) goto LAB_00da4cb4;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    piVar9 = (int *)FUN_00da5470(param_4,&local_e8);
    (**(code **)(*plVar18 + 0x20))(plVar18);
  } while( true );
  sVar17 = sVar3;
  if (sVar3 == 0) goto LAB_00da4d80;
  goto LAB_00da5010;
LAB_00da4e10:
  lVar13 = plVar18[6];
LAB_00da4e14:
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  return lVar13;
}


