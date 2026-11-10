/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c7584; name: FUN_001c7584
 */


void FUN_001c7584(long param_1)

{
  long *plVar1;
  long lVar2;
  
  while( true ) {
    plVar1 = (long *)FUN_001c75f4(param_1);
    lVar2 = *(long *)(param_1 + 0x50);
    if (plVar1 == (long *)0x0) break;
    *plVar1 = lVar2;
    FUN_001c6c60(plVar1,1);
    FUN_001e4c44(*(undefined8 *)(param_1 + 0x50),plVar1,0);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_001c9724(lVar2,*(undefined8 *)(lVar2 + 200));
  FUN_001e4720(*(undefined8 *)(param_1 + 0x50));
  return;
}


