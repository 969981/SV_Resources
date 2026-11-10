/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f755c8; name: FUN_01f755c8
 */


void FUN_01f755c8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [72];
  undefined8 local_18;
  
  if (((*(long **)(param_2 + 0x70) == (long *)0x0) ||
      (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) != 0)) &&
     (param_3 != 0)) {
    FUN_01f756e4(auStack_78,param_3);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    FUN_01f75720(auStack_90,param_2 + 0x48,auStack_78);
    FUN_01f74e90(&local_80,uVar6,auStack_90);
    local_18 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(&local_18);
    uVar6 = local_80;
    local_80 = 0;
    *(undefined8 *)(param_2 + 0x70) = uVar6;
    FUN_01d00ad8(&local_80);
    if (local_88 != (long *)0x0) {
      plVar1 = local_88 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01f717cc(auStack_90);
      FUN_01f74f54(param_1,auStack_90);
      FUN_01d0fcc8(auStack_90);
    }
    FUN_01f75ad4(auStack_78);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


