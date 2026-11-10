/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df4e28; name: FUN_01df4e28
 */


void FUN_01df4e28(long param_1,undefined8 param_2,uint param_3)

{
  if (2 < (param_3 & 0xff)) {
    param_3 = 3;
  }
  FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  return;
}


