/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0d934; name: FUN_01b0d934
 */


undefined2 FUN_01b0d934(long param_1,byte param_2,byte param_3)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 5) && (param_3 < 6)) {
    if (*(short *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x14) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x16);
    }
  }
  return uVar1;
}


