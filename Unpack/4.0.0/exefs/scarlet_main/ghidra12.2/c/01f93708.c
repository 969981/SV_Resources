/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f93708; name: FUN_01f93708
 */


undefined1  [16] FUN_01f93708(char *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  char local_d0 [16];
  int local_c0 [12];
  undefined *local_90;
  undefined8 *local_88;
  undefined1 auStack_60 [56];
  undefined8 local_28;
  
  auVar9._8_8_ = uStack_d8;
  auVar9._0_8_ = local_e0;
  local_d0[0] = '\0';
  if ((*param_1 != '\0') && (FUN_01a77b64(local_d0,param_1 + 0x10), local_d0[0] != '\0')) {
    if (local_c0[0] == 3) {
      bVar6 = true;
    }
    else {
      auVar9 = FUN_01f8c150(local_c0);
      if (local_d0[0] == '\0') {
        return auVar9;
      }
      bVar6 = false;
    }
    local_e0 = auVar9._0_8_;
    FUN_01bb6044(auStack_60);
    local_90 = PTR_DAT_047d53f0 + 0x10;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
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
        piVar2 = (int *)((long)local_88 + 0x1c);
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
             (iVar7 = __cxa_guard_acquire(local_e0,PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *local_88;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.",local_e0);
      }
    }
    if (!bVar6) {
      return auVar9;
    }
  }
  if (param_2 == 0) {
    auVar9 = ZEXT816(0);
  }
  else {
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x120);
  }
  return auVar9;
}


