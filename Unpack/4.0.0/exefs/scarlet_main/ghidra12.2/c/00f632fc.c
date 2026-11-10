/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f632fc; name: FUN_00f632fc
 */


undefined8 FUN_00f632fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f63380(param_1,param_2,0);
  if (((((uVar1 & 1) == 0) || (uVar1 = FUN_00f63380(param_1,param_2,1), (uVar1 & 1) == 0)) ||
      (uVar1 = FUN_00f63380(param_1,param_2,2), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_00f63380(param_1,param_2,3), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_00f63380(param_1,param_2,4);
  return uVar2;
}


