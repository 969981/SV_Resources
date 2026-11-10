/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008931c4; name: FUN_008931c4
 */


void FUN_008931c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); param_1 != lVar1; lVar1 = *(long *)(lVar1 + 8)) {
    if (*(char *)(lVar1 + 0x98) != '\0') {
      FUN_028ba28c(*(undefined8 *)(lVar1 + 0x90),param_2,param_3);
    }
  }
  return;
}


