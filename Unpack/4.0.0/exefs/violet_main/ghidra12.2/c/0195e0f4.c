/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195e0f4; name: FUN_0195e0f4
 */


void FUN_0195e0f4(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x2600) != '\x02') {
    return;
  }
  uVar1 = FUN_0292c43c();
  if ((uVar1 & 1) == 0) {
    FUN_0292c638(param_1);
    return;
  }
  FUN_0292c498(param_1);
  return;
}


