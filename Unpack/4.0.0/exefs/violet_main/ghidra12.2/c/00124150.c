/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00124150; name: FUN_00124150
 */


void FUN_00124150(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_00121a10();
  if (iVar1 != 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_00123a70(param_1,"stack overflow");
    return;
  }
  FUN_00123a70(param_1,"stack overflow (%s)",param_3);
  return;
}


