/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e12f0; name: FUN_003e12f0
 */


undefined8 FUN_003e12f0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    if ((param_1[1] & 0xfffffeffU) != 10) {
      return 0xffffffffffffffff;
    }
    if (8 < *param_1) {
      return 0xffffffff;
    }
    iVar1 = FUN_003e0d70(&local_8,param_1,10);
    if (iVar1 == 0) {
      local_8 = 0xffffffffffffffff;
    }
    uVar2 = local_8;
  }
  return uVar2;
}


