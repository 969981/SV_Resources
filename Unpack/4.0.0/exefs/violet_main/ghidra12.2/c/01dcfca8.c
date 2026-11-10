/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcfca8; name: FUN_01dcfca8
 */


void FUN_01dcfca8(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01084328(&local_40,param_1 + 0x130);
  FUN_0199332c(&local_40,s_FA639C23E06E0A341_045414b8);
  puVar6 = local_40;
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar6;
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
  pcVar8 = *(code **)(param_1 + 0x18a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    (*pcVar8)(param_1 + 0x18c0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x18c0);
    uVar9 = param_2[3];
    *(undefined8 *)(param_1 + 0x18a8) = param_2[1];
    *(undefined8 *)(param_1 + 0x18b8) = uVar9;
    uVar9 = *param_2;
    *(undefined8 *)(param_1 + 0x18b0) = param_2[2];
    *(undefined8 *)(param_1 + 0x18a0) = uVar9;
  }
  return;
}


