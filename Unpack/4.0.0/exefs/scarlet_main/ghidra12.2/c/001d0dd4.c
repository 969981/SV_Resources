/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d0dd4; name: FUN_001d0dd4
 */


long FUN_001d0dd4(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  lVar2 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0xbab1e) && ((char)param_1[0x3c] == '\0')) {
      param_1 = param_1 + 4;
      lVar3 = FUN_001cb6d0(param_1);
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = *(long *)*param_1;
        FUN_001cb600(param_1,(long *)*param_1,0);
        FUN_001cb6d0(param_1);
        uVar1 = FUN_001ec184();
        *param_2 = uVar1;
        lVar2 = lVar2 + 0x18;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


