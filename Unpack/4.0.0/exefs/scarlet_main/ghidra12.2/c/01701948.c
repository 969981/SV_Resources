/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01701948; name: FUN_01701948
 */


void FUN_01701948(undefined8 param_1)

{
  int iVar1;
  
  FUN_00cf6cd0(param_1,0,1);
  iVar1 = FUN_00d34380(param_1,0xfff0b9d8);
  *(int *)PTR_DAT_047dcd98 = iVar1;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)iVar1);
  return;
}


