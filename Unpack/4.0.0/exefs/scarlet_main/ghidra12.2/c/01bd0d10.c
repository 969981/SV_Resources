/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd0d10; name: FUN_01bd0d10
 */


void FUN_01bd0d10(undefined1 *param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined4 local_d0 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 *local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long *local_48;
  undefined8 local_38;
  
  if (((*param_2 == '\0') || (*param_2 == '\x01')) && (*(long *)(param_2 + 8) != 0)) {
    FUN_01bd0f60(local_d0);
    *param_1 = 0;
    puVar2 = PTR_DAT_047d5400;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x10) = local_d0[0];
    puVar1 = PTR_DAT_047d53f0 + 0x10;
    *(undefined8 *)(param_1 + 0x30) = local_b0;
    *(undefined8 *)(param_1 + 0x38) = uStack_a8;
    *(undefined **)(param_1 + 0x20) = puVar2 + 0x10;
    *(undefined **)(param_1 + 0x40) = puVar1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00d0a71c(param_1 + 0x48,local_98);
    puVar2 = PTR_DAT_047d53f8 + 0x10;
    *(undefined8 *)(param_1 + 0x60) = local_80;
    *(undefined8 *)(param_1 + 0x68) = uStack_78;
    *(undefined **)(param_1 + 0x70) = puVar2;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_00d0a71c(param_1 + 0x78,auStack_68);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_00c6c994(param_1 + 0x88,auStack_58);
    *(long **)(param_1 + 0x98) = local_48;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
    *param_1 = 1;
    FUN_01bb6044(auStack_70);
    if (local_98[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_98[0] + 3);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_a0 = puVar1;
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_98[0] + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *local_98[0];
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}


