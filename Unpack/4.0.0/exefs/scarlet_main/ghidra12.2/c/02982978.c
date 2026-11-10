/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02982978; name: FUN_02982978
 */


undefined8 FUN_02982978(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar2 & 1) == 0) {
    FUN_01582534(param_1);
    uVar3 = FUN_014813e4();
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar3 = FUN_01481400(uVar3,uVar1);
    return uVar3;
  }
  return 0;
}


