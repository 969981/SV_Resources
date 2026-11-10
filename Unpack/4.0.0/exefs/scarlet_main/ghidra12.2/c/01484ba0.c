/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01484ba0; name: FUN_01484ba0
 */


bool FUN_01484ba0(ulong param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  if (((DAT_0483b210 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0483b210), iVar8 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  DAT_0483b218 = DAT_0483b200;
  plVar10 = (long *)(DAT_0483b200 + 0x30);
  plVar12 = (long *)*plVar10;
  if (plVar12 != (long *)0x0) {
    plVar13 = (long *)plVar12[(ulong)plVar12[4] < param_1];
    plVar9 = plVar10;
    if ((ulong)plVar12[4] >= param_1) {
      plVar9 = plVar12;
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[(ulong)plVar13[4] < param_1]) {
      if ((ulong)plVar13[4] >= param_1) {
        plVar9 = plVar13;
      }
    }
    if ((plVar9 != plVar10) && ((ulong)plVar9[4] <= param_1)) {
      if (*(long *)(plVar9[5] + 0x28) != 0) {
        if (*(short *)(*(long *)(plVar9[5] + 0x28) + 0x1a) != 0) {
          local_30 = (undefined8 *)0x0;
          uStack_28 = 0;
          FUN_00ca1a48(&local_30,plVar9[5] + 0x28);
          puVar6 = local_30;
          if (local_30 == (undefined8 *)0x0) {
            return false;
          }
          bVar7 = *(short *)((long)local_30 + 0x1a) != 0;
          if (local_30 == (undefined8 *)0x0) {
            return bVar7;
          }
          psVar1 = (short *)(local_30 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 != 1) {
            if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
            return bVar7;
          }
          piVar2 = (int *)((long)local_30 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) {
            return bVar7;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_8 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_8);
          return bVar7;
        }
        plVar12 = (long *)*plVar10;
      }
      if (plVar12 != (long *)0x0) {
        bVar7 = param_1 <= (ulong)plVar12[4];
        plVar9 = plVar10;
        if (bVar7) {
          plVar9 = plVar12;
        }
        while (plVar12 = (long *)plVar12[!bVar7], plVar12 != (long *)0x0) {
          bVar7 = param_1 <= (ulong)plVar12[4];
          if (bVar7) {
            plVar9 = plVar12;
          }
        }
        if ((plVar9 != plVar10) && ((ulong)plVar9[4] <= param_1)) {
          FUN_01484e2c(DAT_0483b200 + 0x28);
        }
      }
    }
  }
  return false;
}


