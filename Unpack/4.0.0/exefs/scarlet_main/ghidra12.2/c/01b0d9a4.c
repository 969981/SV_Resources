/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0d9a4; name: FUN_01b0d9a4
 */


undefined1 FUN_01b0d9a4(long param_1,byte param_2,byte param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if ((param_2 < 5) && (param_3 < 6)) {
    if (*(short *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x14) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x18);
    }
  }
  return uVar1;
}


