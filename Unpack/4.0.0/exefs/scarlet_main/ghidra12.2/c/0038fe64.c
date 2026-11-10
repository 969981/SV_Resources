/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038fe64; name: FUN_0038fe64
 */


uint FUN_0038fe64(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) == 0x14) {
    *param_4 = (int)param_1;
    return 1;
  }
  uVar1 = FUN_0038fea0(param_1,param_2,param_3);
  return uVar1 & 1;
}


