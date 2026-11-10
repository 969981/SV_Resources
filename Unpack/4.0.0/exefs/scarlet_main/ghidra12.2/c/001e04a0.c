/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e04a0; name: FUN_001e04a0
 */


long FUN_001e04a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = 0;
    do {
      lVar1 = FUN_001e0430(lVar2,*param_1);
      if (lVar1 == 0) {
        FUN_001e04f0(lVar2);
        return 0;
      }
      param_1 = (undefined8 *)param_1[1];
      lVar2 = lVar1;
    } while (param_1 != (undefined8 *)0x0);
  }
  return lVar1;
}


