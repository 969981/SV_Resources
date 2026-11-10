/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023af50c; name: FUN_023af50c
 */


void FUN_023af50c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_023af614(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x80;
  }
  else {
    FUN_023af714(param_1,param_2);
  }
  return;
}


