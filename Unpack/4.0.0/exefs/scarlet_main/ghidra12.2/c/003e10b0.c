/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e10b0; name: FUN_003e10b0
 */


undefined8 FUN_003e10b0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_003e0d70(&local_8,param_1,2);
    if (iVar1 == 0) {
      local_8 = 0xffffffffffffffff;
    }
    uVar2 = local_8;
  }
  return uVar2;
}


