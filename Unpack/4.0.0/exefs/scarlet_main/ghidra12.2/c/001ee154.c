/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee154; name: FUN_001ee154
 */


void FUN_001ee154(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x88);
    FUN_001f9168(lVar1,param_2);
    FUN_001f45b0(param_2,lVar1);
    lVar1 = lVar2;
  }
  return;
}


