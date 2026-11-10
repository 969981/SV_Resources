/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebb9b0; name: FUN_01ebb9b0
 */


undefined1  [16] FUN_01ebb9b0(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar10;
  undefined8 extraout_var_01;
  undefined1 auVar9 [16];
  undefined8 extraout_var_02;
  undefined8 uVar11;
  char local_d0 [136];
  undefined8 *local_48;
  undefined8 local_28;
  
  FUN_00f01a84(local_d0);
  if (local_d0[0] == '\0') {
    FUN_01ebbb04(param_2);
    uVar8 = extraout_s0_00;
    uVar10 = extraout_var_00;
    uVar11 = extraout_var_02;
  }
  else {
    FUN_016951d4(param_1,param_2);
    uVar8 = extraout_s0;
    uVar10 = extraout_var;
    uVar11 = extraout_var_01;
  }
  if ((local_d0[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
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
        local_28 = *local_48;
        FUN_00c44438(lVar7 + 0x8040,&local_28);
        uVar10 = 0;
        uVar11 = 0;
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
  auVar9._4_4_ = uVar10;
  auVar9._0_4_ = uVar8;
  auVar9._8_8_ = uVar11;
  return auVar9;
}


