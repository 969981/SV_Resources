/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f640ec; name: FUN_02f640ec
 */


void FUN_02f640ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_031c34c8();
  plVar1 = param_1 + 5;
  FUN_031c34c8(plVar1);
  plVar2 = param_1 + 10;
  FUN_031c34c8(plVar2);
  plVar3 = param_1 + 0xf;
  FUN_031c34c8(plVar3);
  plVar4 = param_1 + 0x14;
  FUN_031c34c8(plVar4);
  FUN_031c34c8(param_1 + 0x1a);
  if (param_1[0x1a] != 0) {
    FUN_031c34c8(param_1 + 0x1a);
  }
  if (*plVar4 != 0) {
    FUN_031c34c8(plVar4);
  }
  if (*plVar3 != 0) {
    FUN_031c34c8(plVar3);
  }
  if (*plVar2 != 0) {
    FUN_031c34c8(plVar2);
  }
  if (*plVar1 != 0) {
    FUN_031c34c8(plVar1);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_031c34c8(param_1);
  return;
}


