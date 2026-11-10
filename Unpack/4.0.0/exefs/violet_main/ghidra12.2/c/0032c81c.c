/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032c81c; name: FUN_0032c81c
 */


void FUN_0032c81c(long param_1,ulong param_2)

{
  undefined1 auStack_18 [8];
  
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(code **)(param_1 + 0x1a8) = FUN_0032c868;
  *(long *)(param_1 + 0x1b0) = param_1;
  if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  FUN_0035351c(auStack_18,param_1 + 0x1a0,param_2);
  return;
}


