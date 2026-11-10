/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0ad4; name: FUN_001e0ad4
 */


void FUN_001e0ad4(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    bVar2 = *param_2;
    bVar1 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      bVar1 = bVar2;
    }
    *param_1 = bVar1;
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}


