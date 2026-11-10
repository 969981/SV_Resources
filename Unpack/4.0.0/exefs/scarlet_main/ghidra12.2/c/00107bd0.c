/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00107bd0; name: FUN_00107bd0
 */


long FUN_00107bd0(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_48;
  
  uVar3 = *param_1;
  lVar2 = 0;
  do {
    if (param_3 == 0) {
      return lVar2;
    }
    local_48 = 0;
    uVar1 = param_3;
    if (param_3 >> 0x1d != 0) {
      uVar1 = 0x20000000;
    }
    nn::fs::ReadFile(&local_48,uVar3,param_1[1],param_2,uVar1);
    param_3 = param_3 - local_48;
    param_2 = param_2 + local_48;
    lVar2 = local_48 + lVar2;
    param_1[1] = param_1[1] + local_48;
  } while (local_48 == uVar1);
  return lVar2;
}


