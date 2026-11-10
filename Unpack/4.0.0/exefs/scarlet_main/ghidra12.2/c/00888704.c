/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00888704; name: FUN_00888704
 */


undefined8 FUN_00888704(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  uVar1 = FUN_00888360(param_1,&local_14,param_4,param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00888fbc(param_1 + 0x30,param_2,param_3,local_14);
  return uVar2;
}


