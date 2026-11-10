/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01442390; name: FUN_01442390
 */


void FUN_01442390(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x1b8);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x38), plVar2 != (long *)0x0)) {
    if ((*(int *)(lVar1 + 0x30) == 0) || (*(int *)(lVar1 + 0x2c) == *(int *)(lVar1 + 0x30))) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
    else {
      FUN_014425f4();
    }
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_01442410();
  }
  if (*(int *)(param_1 + 0x284) == 3) {
    FUN_01443484(param_1);
    return;
  }
  return;
}


