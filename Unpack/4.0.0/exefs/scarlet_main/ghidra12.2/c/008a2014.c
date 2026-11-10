/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a2014; name: FUN_008a2014
 */


void FUN_008a2014(long param_1,undefined8 param_2)

{
  FUN_008a1520();
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_008a1e98(param_1,param_2);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 0x49) >> 5 & 1) != 0) {
    FUN_00896e98(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


