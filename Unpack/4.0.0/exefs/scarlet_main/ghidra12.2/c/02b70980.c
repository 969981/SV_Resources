/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b70980; name: FUN_02b70980
 */


undefined4 FUN_02b70980(long param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    return 1;
  }
  if (*(short *)(param_1 + 0x14) == 0) {
    return 2;
  }
  uVar1 = 3;
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


