/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264ac9c; name: FUN_0264ac9c
 */


void FUN_0264ac9c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0264acec(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x40;
  }
  else {
    FUN_0264adf8(param_1,param_2);
  }
  return;
}


