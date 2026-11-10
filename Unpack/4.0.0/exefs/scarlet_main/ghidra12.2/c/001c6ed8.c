/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6ed8; name: FUN_001c6ed8
 */


undefined8 FUN_001c6ed8(long *param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_a0 [128];
  
  if (*(long *)(*param_1 + 0xe8) != 0) {
    FUN_001dc298(*param_1,5,2);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001c6f48(param_1,acStack_a0);
    sVar1 = strlen(acStack_a0);
    uVar2 = FUN_001c8b08(param_2,acStack_a0,sVar1);
  }
  return uVar2;
}


