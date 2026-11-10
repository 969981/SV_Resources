/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a76490; name: FUN_01a76490
 */


void FUN_01a76490(undefined8 param_1,void *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_110 [40];
  undefined2 local_e8;
  undefined2 local_e6;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [56];
  undefined8 *local_98;
  undefined8 uStack_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char local_60 [8];
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  memcpy(auStack_110,param_2,0x28);
  local_e8 = *(undefined2 *)((long)param_2 + 0x28);
  local_e6 = *(undefined2 *)((long)param_2 + 0x2a);
  local_e4 = *(undefined1 *)((long)param_2 + 0x2c);
  local_e3 = *(undefined1 *)((long)param_2 + 0x2d);
  local_e2 = *(undefined1 *)((long)param_2 + 0x2e);
  local_e0 = *(undefined4 *)((long)param_2 + 0x30);
  uStack_dc = *(undefined4 *)((long)param_2 + 0x34);
  local_d8 = *(undefined4 *)((long)param_2 + 0x38);
  memcpy(auStack_d0,(void *)((long)param_2 + 0x40),0x32);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00ca1a48(&local_98,(long)param_2 + 0x78);
  FUN_00f021fc(&local_80,auStack_110);
  local_58 = local_80;
  uStack_50 = uStack_78;
  local_80 = 0;
  local_60[0] = '\x01';
  local_48 = local_70;
  uStack_40 = uStack_68;
  FUN_00f01e20(param_1,local_60);
  lVar8 = local_58;
  if (local_60[0] == '\x01') {
    local_58 = 0;
    if (lVar8 != 0) {
      FUN_0117fe80(&uStack_50);
    }
  }
  puVar6 = local_98;
  local_80 = 0;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
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
      piVar2 = (int *)((long)local_98 + 0x1c);
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


