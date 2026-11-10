/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c237c; name: FUN_008c237c
 */


void FUN_008c237c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar2 = 0;
    lVar3 = 8;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + lVar3) + 0x18))();
      (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x58) + lVar3))();
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 < *(int *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x98);
  while (param_1 + 0x90 != lVar2) {
    plVar1 = (long *)(lVar2 + -8);
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)*plVar1)(plVar1);
  }
  return;
}


