/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014358d4; name: FUN_014358d4
 */


void FUN_014358d4(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_18;
  
  puVar6 = PTR_DAT_047d3910;
  lVar12 = param_1[1];
  lVar11 = param_1[2];
  while (lVar11 != lVar12) {
    param_1[2] = lVar11 + -0x30;
    puVar10 = *(undefined8 **)(lVar11 + -0x28);
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
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
        piVar2 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)puVar6;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_18 = *puVar10;
          FUN_00c44438(lVar11 + 0x8040,&local_18);
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
    lVar11 = param_1[2];
  }
  lVar12 = *param_1;
  if (lVar12 == 0) {
    return;
  }
  lVar11 = param_1[3];
  plVar13 = *(long **)param_1[4];
  uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
  if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x014359cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,lVar11 - lVar12,8);
    return;
  }
  FUN_00c48fe8(plVar13,lVar12,lVar11 - lVar12,8);
  return;
}


