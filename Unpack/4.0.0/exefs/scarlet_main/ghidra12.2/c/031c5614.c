/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c5614; name: FUN_031c5614
 */


void FUN_031c5614(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    bVar1 = iVar2 < param_3 * 2;
    iVar2 = iVar2 << 1;
  } while (bVar1);
  FUN_02ef5fd4();
  return;
}


