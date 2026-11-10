/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a77404; name: FUN_01a77404
 */


void FUN_01a77404(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,void *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined1 auStack_e0 [40];
  undefined2 local_b8;
  undefined2 local_b6;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 auStack_a0 [56];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined2 local_48 [4];
  undefined8 local_28;
  
  uVar4 = *param_2;
  uVar5 = *param_3;
  memcpy(auStack_e0,param_4,0x28);
  local_b8 = *(undefined2 *)((long)param_4 + 0x28);
  local_b6 = *(undefined2 *)((long)param_4 + 0x2a);
  local_b4 = *(undefined1 *)((long)param_4 + 0x2c);
  local_b3 = *(undefined1 *)((long)param_4 + 0x2d);
  local_b2 = *(undefined1 *)((long)param_4 + 0x2e);
  local_b0 = *(undefined4 *)((long)param_4 + 0x30);
  uStack_ac = *(undefined4 *)((long)param_4 + 0x34);
  local_a8 = *(undefined4 *)((long)param_4 + 0x38);
  memcpy(auStack_a0,(void *)((long)param_4 + 0x40),0x32);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00ca1a48(&local_68,(long)param_4 + 0x78);
  local_28 = CONCAT62(local_28._2_6_,uVar4);
  local_48[0] = uVar5;
  FUN_01a775bc(param_1,&local_28,local_48,auStack_e0);
  puVar8 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
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
  return;
}


