/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02944800; name: FUN_02944800
 */


uint FUN_02944800(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = FUN_0293d610();
  local_28 = 1;
  uVar2 = FUN_029422f0(param_1,&local_30);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_02942e80(param_1,param_2);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


