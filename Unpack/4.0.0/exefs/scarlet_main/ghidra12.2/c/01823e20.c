/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01823e20; name: FUN_01823e20
 */


void FUN_01823e20(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_40;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_40,uVar10,0);
  if ((local_40 != (undefined8 *)0x0) &&
     (puVar11 = (undefined8 *)local_40[1], puVar11 != (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)PTR_DAT_047dcea0;
    if (((*PTR_DAT_047dce98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047dce98), puVar13 = (undefined8 *)PTR_DAT_047dcea0,
       iVar9 != 0)) {
      uVar10 = FUN_019caf50();
      *(undefined8 *)PTR_DAT_047dcea0 = uVar10;
      __cxa_guard_release(PTR_DAT_047dce98);
      puVar13 = (undefined8 *)PTR_DAT_047dcea0;
    }
LAB_01823f34:
    if (puVar11 != puVar13) goto code_r0x01823f3c;
    puVar11 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar11 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_38 = *puVar11;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_01823eec;
    }
    puVar11 = local_40;
    local_40 = (undefined8 *)0x0;
    *param_1 = (long)puVar11;
    goto LAB_01823e84;
  }
LAB_01823e78:
  puVar11 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_38 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_01823eec;
  }
LAB_01823e84:
  puVar11 = local_40;
  param_1[1] = 0;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_38 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_01823eec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01823f3c:
  puVar11 = (undefined8 *)*puVar11;
  if (puVar11 == (undefined8 *)0x0) goto LAB_01823e78;
  goto LAB_01823f34;
}


