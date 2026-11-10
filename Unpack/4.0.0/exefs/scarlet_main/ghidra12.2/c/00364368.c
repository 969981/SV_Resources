/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00364368; name: FUN_00364368
 */


void FUN_00364368(long param_1,uint param_2)

{
  if (param_2 < 0x80) {
    FUN_002cdcec(param_1 + 200,param_2);
    return;
  }
  if (param_2 < 0x800) {
    FUN_002cdcec(param_1 + 200,param_2 >> 6 | 0xffffffc0);
    FUN_002cdcec(param_1 + 200,param_2 & 0x3f | 0xffffff80);
    return;
  }
  if (param_2 >> 0x10 == 0) {
    FUN_002cdcec(param_1 + 200,param_2 >> 0xc | 0xffffffe0);
  }
  else {
    if (param_2 >> 0x15 != 0) {
      return;
    }
    FUN_002cdcec(param_1 + 200,param_2 >> 0x12 | 0xfffffff0);
    FUN_002cdcec(param_1 + 200,param_2 >> 0xc & 0x3f | 0xffffff80);
  }
  FUN_002cdcec(param_1 + 200,param_2 >> 6 & 0x3f | 0xffffff80);
  FUN_002cdcec(param_1 + 200,param_2 & 0x3f | 0xffffff80);
  return;
}


