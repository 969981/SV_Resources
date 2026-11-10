/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b6a64; name: FUN_015b6a64
 */


undefined8 FUN_015b6a64(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_18;
  
  uVar7 = FUN_015b6bf4();
  puVar9 = *(undefined8 **)(param_2 + 0x40);
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
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
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar9;
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
  if (*(long **)(param_2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x38) + 0x20))();
  }
  plVar11 = *(long **)(param_1 + 0x10);
  uVar8 = FUN_00c4e564(plVar11);
  if ((uVar8 & 1) == 0) {
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2,0x50,8);
  }
  else {
    FUN_00c48fe8(plVar11,param_2,0x50,8);
  }
  return uVar7;
}


