/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec3120; name: FUN_01ec3120
 */


long FUN_01ec3120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_01ec31a4();
  lVar2 = FUN_01ec31a4(param_1 + 0x10);
  lVar3 = FUN_01ec31a4(param_1 + 0x20);
  lVar4 = FUN_01ec31a4(param_1 + 0x30);
  lVar5 = FUN_01ec31a4(param_1 + 0x40);
  lVar6 = FUN_01ec31a4(param_1 + 0x50);
  return lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + 0xe;
}


