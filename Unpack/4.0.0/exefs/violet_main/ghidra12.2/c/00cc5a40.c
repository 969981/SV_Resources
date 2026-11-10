/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc5a40; name: FUN_00cc5a40
 */


void FUN_00cc5a40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_00cc5a98();
  uVar3 = FUN_00cc69e0(param_1,param_2);
  FUN_00cc6638(plVar2,uVar3);
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = *plVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


