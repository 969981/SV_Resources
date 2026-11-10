/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01231c18; name: FUN_01231c18
 */


void FUN_01231c18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_00892f70(param_1 + 0x80);
  FUN_008b379c(param_1 + 0x90,param_2);
  FUN_008afa00(param_1 + 0xa0,param_2);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
      FUN_00e5c07c(*(long *)(lVar1 + 0x48),param_2);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


