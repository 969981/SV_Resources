/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc7ce0; name: FUN_01dc7ce0
 */


undefined8 FUN_01dc7ce0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_014e61a4();
  if (((((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x56e) & 1) == 0)) &&
      ((uVar1 = FUN_014e61a4(param_1,param_2,param_3,1), (uVar1 & 1) == 0 ||
       ((*(byte *)(param_1 + 0x56e) >> 1 & 1) == 0)))) &&
     ((((uVar1 = FUN_014e61a4(param_1,param_2,param_3,2), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56e) >> 2 & 1) == 0)) &&
       ((uVar1 = FUN_014e61a4(param_1,param_2,param_3,3), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56e) >> 3 & 1) == 0)))) &&
      (((uVar1 = FUN_014e61a4(param_1,param_2,param_3,4), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56e) >> 4 & 1) == 0)) &&
       ((uVar1 = FUN_014e61a4(param_1,param_2,param_3,5), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56e) >> 5 & 1) == 0)))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


