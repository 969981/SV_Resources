/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0187708c; name: FUN_0187708c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0187708c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  int *piVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = param_1[0x22];
  uStack_50 = param_1[0x23];
  local_48 = param_1[0x24];
  plVar15 = (long *)param_1[0x25];
  local_40 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_38,param_1 + 6,&local_58);
    plVar15 = local_40;
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00d0a71c(&local_68,&local_38);
  lVar9 = FUN_01180e7c(param_1,&local_68);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      piVar11 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar2 == 0) goto LAB_01877208;
  }
  puVar7 = local_38;
  uVar6 = _UNK_03caa988;
  uVar5 = _DAT_03caa980;
  if (lVar9 != 0) {
    piVar11 = (int *)*param_1;
    if (((0x16 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
        (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0xb], uVar13 != 0)) &&
       (puVar12 = (uint *)((long)piVar11 + uVar13),
       piVar11 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar11 != 0)) {
      puVar12 = (uint *)(piVar11 + 1);
      piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar12 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
      piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar13 == 0)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)((long)piVar11 + uVar13);
      }
      *(undefined1 *)(lVar9 + 0xe0) = 1;
      *(ulong *)(lVar9 + 0xb8) =
           CONCAT44(fVar10 * (float)((ulong)uVar6 >> 0x20),fVar10 * (float)uVar6);
      *(ulong *)(lVar9 + 0xb0) =
           CONCAT44(fVar10 * (float)((ulong)uVar5 >> 0x20),fVar10 * (float)uVar5);
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      piVar11 = (int *)((long)local_38 + 0x1c);
      do {
        iVar8 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar2 == 0) {
LAB_01877208:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


