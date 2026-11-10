/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a6de4; name: FUN_008a6de4
 */


void FUN_008a6de4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[3];
  while (param_1 + 2 != plVar1) {
    plVar4 = (long *)plVar1[1];
    if (param_1 + 2 != plVar1) {
      lVar2 = *plVar4;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar4 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    FUN_008a8e5c(plVar1);
    FUN_00896e98(plVar1);
    plVar1 = plVar4;
  }
  param_1[0x18] = 0;
  puVar3 = (undefined8 *)param_1[0x1a];
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00896e98(puVar3);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1[0xf] != 0) {
    FUN_00896e98();
  }
  param_1[0xf] = 0;
  FUN_008be0a0(param_1 + 0x14);
  return;
}


