/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bb494; name: FUN_015bb494
 */


long FUN_015bb494(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_01ea9c60(param_2 + 0x40,*(undefined8 *)(param_1 + 8),param_2);
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x40;
    FUN_01946c30(lVar2);
  }
  *(long *)(param_1 + 8) = lVar1;
  return param_2;
}


