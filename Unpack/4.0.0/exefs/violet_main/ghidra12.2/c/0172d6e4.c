/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172d6e4; name: FUN_0172d6e4
 */


void FUN_0172d6e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_00cf9178(param_1 + 200);
  lVar3 = *(long *)(param_1 + 200);
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(lVar3 + 0x70);
  *(long **)(lVar3 + 0x70) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(lVar3 + 0x90);
  *(long **)(lVar3 + 0x90) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(param_1 + 0x98);
  FUN_00d0185c(param_1,2);
  return;
}


