/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c20630; name: FUN_01c20630
 */


void FUN_01c20630(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01c1b770(&local_48);
  FUN_01e61628(param_1,&local_48);
  puVar6 = local_48;
  if (local_48 != (undefined8 *)0x0) {
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
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar7 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
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
  *param_1 = &DAT_045517e8;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[4] = &PTR_LAB_04551880;
  param_1[5] = &PTR_LAB_045518d0;
  memset(param_1 + 0x1b,0,0x2520);
  *(undefined1 *)(param_1 + 0x13f) = 0;
  *(undefined4 *)((long)param_1 + 0x9f4) = 0xffffffff;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  memset((void *)((long)param_1 + 0x123c),0,0x100);
  *(undefined4 *)((long)param_1 + 0x133c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x268) = 0;
  param_1[0x269] = 0;
  *(undefined1 *)(param_1 + 0x26b) = 0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  memset((void *)((long)param_1 + 0x1b84),0,0x100);
  *(undefined4 *)((long)param_1 + 0x1c84) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x391) = 0;
  param_1[0x392] = 0;
  *(undefined1 *)(param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x397) = 0;
  memset((void *)((long)param_1 + 0x24cc),0,0x100);
  *(undefined4 *)((long)param_1 + 0x25cc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4ba) = 0;
  param_1[0x4bb] = 0;
  *(undefined1 *)(param_1 + 0x4bd) = 0;
  *(undefined1 *)(param_1 + 0x4bf) = 0;
  param_1[0x4c0] = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  return;
}


