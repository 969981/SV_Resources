/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e04f0; name: FUN_003e04f0
 */


undefined8
FUN_003e04f0(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
            undefined8 param_5,long param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  if (((param_3 < 0) || (uVar1 = FUN_003e1030(*param_1,param_3), (int)uVar1 != 0)) &&
     (uVar1 = FUN_003e55c0(param_1[1],param_2,param_4,param_5), (int)uVar1 != 0)) {
    if (param_6 != 0) {
      FUN_003df340(param_1[2],param_6,param_7);
    }
    uVar1 = 1;
  }
  return uVar1;
}


