/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110a2d0; name: FUN_0110a2d0
 */


void FUN_0110a2d0(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  char local_170 [16];
  undefined1 auStack_160 [40];
  undefined4 local_138;
  undefined1 local_134;
  undefined2 local_133;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 auStack_120 [56];
  undefined8 *local_e8 [3];
  undefined8 local_d0 [5];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 auStack_90 [56];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  
  (*(code *)*param_2)(local_170,param_3);
  if (local_170[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    memcpy(local_d0,auStack_160,0x28);
    local_a8 = local_138;
    local_a4 = local_134;
    local_a3 = local_133;
    local_a0 = local_130;
    local_98 = local_128;
    memcpy(auStack_90,auStack_120,0x32);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00ca1a48(&local_58,local_e8);
    FUN_00f02060(param_1,local_d0);
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
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
        piVar2 = (int *)((long)local_58 + 0x1c);
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
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_38 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_0110a3ec;
    }
  }
  if ((local_170[0] != '\0') && (local_e8[0] != (undefined8 *)0x0)) {
    psVar1 = (short *)(local_e8[0] + 3);
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
      piVar2 = (int *)((long)local_e8[0] + 0x1c);
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
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_d0[0] = *local_e8[0];
        FUN_00c44438(lVar8 + 0x8040,local_d0);
      }
    }
    else if (sVar3 == 0) {
LAB_0110a3ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


