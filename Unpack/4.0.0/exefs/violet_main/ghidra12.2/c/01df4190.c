/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df4190; name: FUN_01df4190
 */


void FUN_01df4190(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_50 [2];
  undefined8 *local_40 [3];
  undefined8 local_28;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if (((*PTR_DAT_047d4c80 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c80), iVar9 != 0)) {
      FUN_00100190(&LAB_02acf048,PTR_DAT_047d4c88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c80);
    }
    *(undefined8 *)PTR_DAT_047d4c90 = *(undefined8 *)PTR_DAT_047d4c88;
    uVar10 = FUN_0157f5f4();
    if ((uVar10 & 1) == 0) {
      return;
    }
    uVar11 = 1;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x40) = 1;
    uVar10 = FUN_01a62708();
    if ((uVar10 & 1) == 0) {
      FUN_019e23b4(local_40);
      if (local_40[0] == (undefined8 *)0x0) {
        bVar8 = true;
      }
      else {
        bVar8 = *(short *)((long)local_40[0] + 0x1a) == 0;
      }
      FUN_01cf4410();
      if (local_40[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_40[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_40[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_50[0] = (undefined8 *)*local_40[0];
            FUN_00c44438(lVar13 + 0x8040,local_50);
          }
        }
        else if (sVar3 == 0) goto LAB_01df437c;
      }
      if (bVar8) {
        return;
      }
    }
    else {
      FUN_011722d4(1);
      FUN_01df4538(local_50,local_40);
      puVar7 = local_50[0];
      if (local_50[0] == (undefined8 *)0x0) {
        FUN_00d8e444(local_40);
        return;
      }
      sVar3 = *(short *)((long)local_50[0] + 0x1a);
      if (local_50[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50[0] + 3);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_50[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_28 = *puVar7;
            FUN_00c44438(lVar13 + 0x8040,&local_28);
          }
        }
        else if (sVar4 == 0) {
LAB_01df437c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      FUN_00d8e444(local_40);
      if (sVar3 == 0) {
        return;
      }
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x60) != 0)) {
      FUN_01df4578();
    }
    uVar11 = 2;
    break;
  case 2:
    uVar10 = FUN_01a62708();
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_01c9bd00();
    }
    else {
      uVar10 = FUN_01c5ba70();
    }
    if ((uVar10 & 1) != 0) {
      return;
    }
    lVar13 = *(long *)(param_1 + 0x30);
    if ((*(long *)(lVar13 + 0x1c8) != 0) &&
       (lVar12 = *(long *)(*(long *)(lVar13 + 0x1c8) + 0x60), lVar12 != 0)) {
      uVar10 = FUN_01df4590(lVar12);
      if ((uVar10 & 1) != 0) {
        return;
      }
      lVar13 = *(long *)(param_1 + 0x30);
    }
    FUN_01dda3e0(lVar13);
    uVar11 = 3;
    break;
  case 3:
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ac) == '\0') {
      return;
    }
    uVar11 = 4;
    break;
  case 4:
    lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x1b8);
    if (lVar13 != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x170) = 1;
      *(undefined4 *)(lVar13 + 0x30) = 1;
    }
  default:
    goto switchD_01df41c4_default;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar11;
switchD_01df41c4_default:
  return;
}


