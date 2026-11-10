/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e74350; name: FUN_01e74350
 */


undefined8 FUN_01e74350(long param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  if ((*(int *)(param_1 + 0x50) == 9 || *(int *)(param_1 + 0x50) == 0) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    if (4 < param_2) {
      return 0;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
    FUN_01e7450c(local_40,lVar7 + -0x28,(&PTR_s_rental_team_0_04552058)[(char)param_2]);
    FUN_01e745a8((long *)(param_1 + 0x58),local_40);
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
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
        piVar2 = (int *)((long)local_40[0] + 0x1c);
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
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_18 = *local_40[0];
          FUN_00c44438(lVar7 + 0x8040,&local_18);
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
    lVar7 = *(long *)(param_1 + 0x58);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      FUN_01e74300(param_1,6);
      *(byte *)(param_1 + 0x2a02) = param_2;
      return 1;
    }
  }
  return 0;
}


