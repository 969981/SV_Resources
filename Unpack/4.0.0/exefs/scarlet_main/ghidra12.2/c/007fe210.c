/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe210; name: FUN_007fe210
 */


void FUN_007fe210(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x58))(local_38,param_2);
    if (local_38[0] == 0) {
      (**(code **)(*param_2 + 0x10))(param_2,0);
      param_2[0x67a] = param_3;
      FUN_0078cac8(param_3);
      FUN_0078cb14(param_2[0x67a]);
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar2 = local_48;
      goto LAB_007fe2bc;
    }
  }
  else {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar2 = local_38;
LAB_007fe2bc:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


