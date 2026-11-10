/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131c5f8; name: FUN_0131c5f8
 */


void FUN_0131c5f8(long *param_1,uint param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  ushort *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *local_48;
  
  lVar14 = param_1[8];
  uVar23 = (ulong)param_2;
  if (*(char *)(lVar14 + 0x54) != '\0') {
    uVar16 = (uint)*(ushort *)(lVar14 + 0x50);
    if (*(ushort *)(lVar14 + 0x50) == 0) {
      iVar11 = 0;
    }
    else {
      puVar20 = *(ushort **)(param_3 + 0x30);
      iVar11 = 0;
      puVar18 = *(ushort **)(lVar14 + 0x30);
      do {
        uVar4 = *puVar20;
        *puVar18 = uVar4;
        if (uVar4 == 0) goto LAB_0131c758;
        if (uVar4 == 0x10) {
          puVar22 = puVar20 + 1;
          uVar4 = *puVar22;
          uVar1 = uVar4 + 2;
          bVar9 = uVar16 < uVar1;
          uVar16 = uVar16 - uVar1;
          if (bVar9 || uVar16 == 0) {
            *puVar18 = 0;
            goto LAB_0131c758;
          }
          uVar21 = uVar4 + 1;
          uVar3 = uVar21 & 7;
          puVar19 = puVar18 + 1;
          *puVar19 = uVar4;
          if (uVar3 != 0) {
            lVar24 = 0;
            do {
              lVar17 = lVar24;
              uVar21 = uVar21 - 1;
              uVar3 = uVar3 - 1;
              *(undefined2 *)((long)puVar18 + lVar17 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar17 + 4);
              lVar24 = lVar17 + 2;
            } while (uVar3 != 0);
            puVar18 = (ushort *)((long)puVar18 + lVar17 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar17 + 2);
            puVar22 = puVar20 + 1;
            puVar19 = puVar18;
          }
          if (6 < uVar4) {
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar22[2];
              puVar19[3] = puVar22[3];
              puVar19[4] = puVar22[4];
              puVar19[5] = puVar22[5];
              puVar19[6] = puVar22[6];
              puVar20 = puVar22 + 7;
              puVar19[7] = *puVar20;
              puVar22 = puVar22 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar22;
              puVar18 = puVar19;
            } while (uVar21 != 0);
          }
          puVar20 = puVar22;
          iVar11 = uVar1 + iVar11;
        }
        else {
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
          iVar11 = iVar11 + 1;
          uVar16 = uVar16 - 1;
        }
      } while (uVar16 != 0);
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar18[-1] = 0;
      }
    }
LAB_0131c758:
    *(short *)(lVar14 + 0x52) = (short)iVar11;
  }
  puVar8 = PTR_DAT_047d8ca8;
  puVar7 = PTR_DAT_047d8ca0;
  puVar6 = PTR_DAT_047d8c98;
  if (param_4 == 0) {
    uVar25 = 0;
  }
  else if (param_4 == 1) {
    uVar25 = 1;
  }
  else {
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar25 = (ulong)(*(int *)(lVar14 + 0x2b0) == 5) << 1;
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar10 = *(undefined4 *)(lVar14 + 0x2b0);
  plVar15 = (long *)param_1[10];
  local_48 = plVar15;
  if (plVar15 == (long *)0x0) {
    FUN_0131cc8c(&local_48,param_1[8],param_5,uVar10);
  }
  else {
    plVar2 = plVar15 + 5;
    do {
      lVar14 = *plVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) goto LAB_0131cbc4;
    FUN_0131cc8c(&local_48,param_1[8],param_5,uVar10);
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 5;
      do {
        lVar14 = *plVar2;
        iVar11 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      else if ((int)lVar14 == 0) goto LAB_0131cab0;
    }
  }
  lVar14 = param_1[10];
  plVar15 = (long *)param_1[8];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 5;
    do {
      lVar24 = *plVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)lVar24 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar24 == -1) {
LAB_0131cbc4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar24 = param_1[0x1d];
  uVar10 = (**(code **)(*param_1 + 0x80))(param_1);
  uVar12 = (**(code **)(*param_1 + 0x78))(param_1,lVar24,uVar10);
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar24 = *(long *)puVar7;
  *(long *)puVar8 = lVar24;
  if (*(int *)(lVar24 + 0x2b0) - 2U < 5) {
    if ((*(char *)((long)plVar15 + 0x54) == '\0') ||
       (uVar13 = FUN_0131cbf0(plVar15[6],*(undefined8 *)(param_1[0x1d] + 0x30)), (uVar13 & 1) == 0))
    {
      uVar25 = uVar25 | 0x200;
    }
    else {
      uVar25 = uVar12 & 0x1f;
    }
  }
  if (param_2 < *(uint *)(param_1 + 0xb)) {
    lVar24 = uVar23 * 2 + (ulong)param_2;
    *(ulong *)(param_1[0xc] + lVar24 * 8 + 8) = uVar25;
    lVar17 = param_1[0xc];
    lVar24 = *(long *)(lVar17 + lVar24 * 8);
    if (*(char *)(lVar24 + 0x54) != '\0') {
      uVar16 = (uint)*(ushort *)(lVar24 + 0x50);
      if (*(ushort *)(lVar24 + 0x50) == 0) {
        iVar11 = 0;
      }
      else {
        puVar20 = *(ushort **)(lVar14 + 0x30);
        iVar11 = 0;
        puVar18 = *(ushort **)(lVar24 + 0x30);
        do {
          uVar4 = *puVar20;
          *puVar18 = uVar4;
          if (uVar4 == 0) goto LAB_0131ca4c;
          if (uVar4 == 0x10) {
            puVar22 = puVar20 + 1;
            uVar4 = *puVar22;
            uVar1 = uVar4 + 2;
            bVar9 = uVar16 < uVar1;
            uVar16 = uVar16 - uVar1;
            if (bVar9 || uVar16 == 0) {
              *puVar18 = 0;
              goto LAB_0131ca4c;
            }
            uVar21 = uVar4 + 1;
            uVar3 = uVar21 & 7;
            puVar19 = puVar18 + 1;
            *puVar19 = uVar4;
            if (uVar3 != 0) {
              lVar14 = 0;
              do {
                lVar17 = lVar14;
                uVar21 = uVar21 - 1;
                uVar3 = uVar3 - 1;
                *(undefined2 *)((long)puVar18 + lVar17 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar17 + 4);
                lVar14 = lVar17 + 2;
              } while (uVar3 != 0);
              puVar18 = (ushort *)((long)puVar18 + lVar17 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar17 + 2);
              puVar22 = puVar20 + 1;
              puVar19 = puVar18;
            }
            if (6 < uVar4) {
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar22[2];
                puVar19[3] = puVar22[3];
                puVar19[4] = puVar22[4];
                puVar19[5] = puVar22[5];
                puVar19[6] = puVar22[6];
                puVar20 = puVar22 + 7;
                puVar19[7] = *puVar20;
                puVar22 = puVar22 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar22;
                puVar18 = puVar19;
              } while (uVar21 != 0);
            }
            puVar20 = puVar22;
            iVar11 = uVar1 + iVar11;
          }
          else {
            puVar18 = puVar18 + 1;
            puVar20 = puVar20 + 1;
            iVar11 = iVar11 + 1;
            uVar16 = uVar16 - 1;
          }
        } while (uVar16 != 0);
        if (iVar11 != 0) {
          iVar11 = iVar11 + -1;
          puVar18[-1] = 0;
        }
      }
LAB_0131ca4c:
      *(short *)(lVar24 + 0x52) = (short)iVar11;
      lVar17 = param_1[0xc];
    }
    *(undefined2 *)(lVar17 + uVar23 * 0x18 + 0x10) = 0;
    lVar14 = param_1[0xc] + uVar23 * 0x18;
    *(ushort *)(lVar14 + 0x12) = *(ushort *)(lVar14 + 0x12) & 0xfffe;
  }
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 5;
    do {
      lVar14 = *plVar2;
      iVar11 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0131cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x10))(plVar15);
      return;
    }
    if ((int)lVar14 == 0) {
LAB_0131cab0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


