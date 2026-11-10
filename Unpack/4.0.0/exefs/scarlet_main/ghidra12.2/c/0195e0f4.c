/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


