/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03319100; name: FUN_03319100
 */


void FUN_03319100(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  ulong local_a0;
  undefined1 auStack_88 [16];
  ulong local_78;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_60 = 0;
  local_58 = -0x8000000000000000;
  FUN_03326adc(&local_50,&local_60);
  if (0 < (int)local_58) {
    lVar8 = 0;
    do {
      uVar7 = *(undefined8 *)(local_60 + lVar8 * 8);
      FUN_03325b88(auStack_88,param_1,uVar7);
      FUN_03325b88(auStack_b0,param_2,uVar7);
      local_28 = auStack_b0;
      FUN_0331deb8(&local_28,local_a8,auStack_88);
      if ((local_a0 & 1) != 0) {
        plVar5 = (long *)(local_a0 & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      if ((local_78 & 1) != 0) {
        plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)local_58);
  }
  lVar8 = local_58;
  uVar6 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_60 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_60,uVar6 << 3);
  }
  return;
}


