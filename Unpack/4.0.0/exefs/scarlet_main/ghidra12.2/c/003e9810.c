/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e9810; name: FUN_003e9810
 */


long FUN_003e9810(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return param_2;
  }
  lVar1 = param_1;
  do {
    lVar2 = lVar1;
    lVar1 = *(long *)(lVar2 + 0x40);
  } while (*(long *)(lVar2 + 0x40) != 0);
  *(long *)(lVar2 + 0x40) = param_2;
  if (param_2 != 0) {
    *(long *)(param_2 + 0x48) = lVar2;
  }
  FUN_003e9560(param_1,6,0);
  return param_1;
}


