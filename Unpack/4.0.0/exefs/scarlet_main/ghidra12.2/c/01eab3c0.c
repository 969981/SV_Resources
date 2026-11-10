/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eab3c0; name: FUN_01eab3c0
 */


void FUN_01eab3c0(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 local_38;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar10 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar10;
  if (lVar10 != 0) {
    FUN_01e9418c(lVar10,param_1 + 0x28);
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if (lVar10 != 0) {
    local_40 = 0;
    if (param_1 != 0) {
      local_40 = param_1 + 0x38;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    local_38 = 1;
    FUN_01ea2bf8(lVar10,&local_50);
    puVar8 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_18 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_01eab6ec(param_1);
  FUN_01172ab0(param_1);
  lVar10 = *(long *)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x60);
  while (lVar4 != lVar10) {
    if (*(char *)(lVar4 + -0x160) != '\0') {
      *(char *)(lVar4 + -0x160) = '\0';
    }
    lVar13 = lVar4 + -0x188;
    pcVar12 = (char *)(lVar4 + -0x178);
    lVar4 = lVar13;
    if (*pcVar12 != '\0') {
      *pcVar12 = '\0';
    }
  }
  lVar4 = *(long *)(param_1 + 0x100);
  lVar13 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x60) = lVar10;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  while (lVar13 != lVar4) {
    lVar13 = lVar13 + -0x48;
    FUN_01eab838(lVar13);
  }
  *(long *)(param_1 + 0x108) = lVar4;
  pcVar5 = *(char **)(param_1 + 0xd0);
  for (pcVar12 = *(char **)(param_1 + 200); pcVar12 != pcVar5; pcVar12 = pcVar12 + 0x68) {
    if (*(long *)(pcVar12 + 0x18) != 0) {
      FUN_01898184();
    }
    if (*pcVar12 != '\0') {
      *pcVar12 = '\0';
    }
  }
  return;
}


