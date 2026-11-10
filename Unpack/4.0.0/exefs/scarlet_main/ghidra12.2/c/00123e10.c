/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123e10; name: FUN_00123e10
 */


void FUN_00123e10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_a8 [48];
  int local_78;
  undefined1 auStack_64 [68];
  
  iVar1 = FUN_00125280(param_1,param_2,auStack_a8);
  if (iVar1 != 0) {
    FUN_00125400(param_1,&DAT_03c95da5,auStack_a8);
    if (0 < local_78) {
      FUN_01b2cd10(param_1,"%s:%d: ",auStack_64);
      return;
    }
  }
  FUN_01b2cd10(param_1,&DAT_03c886bc);
  return;
}


