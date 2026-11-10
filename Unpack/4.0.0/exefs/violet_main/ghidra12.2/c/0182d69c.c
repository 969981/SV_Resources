/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182d69c; name: FUN_0182d69c
 */


void FUN_0182d69c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0182d6ec(param_2 + 0x120);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0182e62c(param_1,param_2 + 0x120);
  return;
}


