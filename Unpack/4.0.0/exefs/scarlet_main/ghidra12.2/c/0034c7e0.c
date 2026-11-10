/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034c7e0; name: FUN_0034c7e0
 */


undefined4 FUN_0034c7e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_1 < 4)) {
    uVar1 = FUN_0034cc00(param_2);
    uVar1 = FUN_0034ccf0(param_1,uVar1);
    iVar2 = FUN_0034cc50(&local_14,uVar1,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = local_14;
    }
  }
  return uVar1;
}


