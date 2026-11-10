/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dc318; name: FUN_001dc318
 */


undefined8 FUN_001dc318(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_001ec308(*param_1);
  *param_1 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_001ec328(param_2);
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    else {
      uVar2 = 0;
      *param_1 = lVar1;
    }
  }
  return uVar2;
}


