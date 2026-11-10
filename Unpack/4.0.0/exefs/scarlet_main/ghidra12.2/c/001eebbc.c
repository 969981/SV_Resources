/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eebbc; name: FUN_001eebbc
 */


undefined8 FUN_001eebbc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001f9f00(param_2);
  if ((iVar1 == 0) || (uVar2 = FUN_001f9b50(param_2), (int)uVar2 == 0)) {
    FUN_001f90d0(param_1,*(undefined4 *)(param_2 + 0xb8));
    FUN_001f9640(param_2);
    FUN_001f45b0(param_1 + 0x890,param_2);
    uVar2 = 0;
  }
  return uVar2;
}


