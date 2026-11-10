/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6da84; name: FUN_00f6da84
 */


void FUN_00f6da84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_00f6e144(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 3;
    return;
  }
  FUN_00f6ddc4(param_1,param_2);
  return;
}


