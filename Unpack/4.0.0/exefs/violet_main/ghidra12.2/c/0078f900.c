/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f900; name: FUN_0078f900
 */


void FUN_0078f900(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0078fa50(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0078fa2c(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  return;
}


