/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164117c; name: FUN_0164117c
 */


void FUN_0164117c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_016476d4(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 8;
  }
  else {
    FUN_01655260(param_1,param_2);
  }
  return;
}


