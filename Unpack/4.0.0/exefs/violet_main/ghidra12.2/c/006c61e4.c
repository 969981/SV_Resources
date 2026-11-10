/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c61e4; name: FUN_006c61e4
 */


void FUN_006c61e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  FUN_006c4288(param_2 + 0x40);
  plVar7 = *(long **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined8 *)(param_2 + 0xb0) = 0;
  uVar4 = FUN_006c53ec(*(undefined8 *)(param_2 + 0x10),param_2 + 0x20);
  if ((uVar4 & 1) == 0) {
    uVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 8))();
    *(undefined8 *)(param_2 + 0xb0) = uVar5;
    FUN_006c5f60(param_1,param_2);
    return;
  }
  FUN_006c5e68(param_1,param_2);
  return;
}


