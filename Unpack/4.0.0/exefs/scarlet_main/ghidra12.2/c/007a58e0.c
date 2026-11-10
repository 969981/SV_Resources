/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a58e0; name: FUN_007a58e0
 */


void FUN_007a58e0(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  FUN_007a71d0(local_40,*(undefined8 *)(param_2[0x15] + 0x180),param_2 + 0xc);
  if (local_40[0] == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    local_28[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    FUN_018ff39c((long)param_2 + 0x94,local_50);
    param_2[0xb] = param_3;
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_2[0xb]);
    FUN_0078cd58(*(undefined8 *)(param_2[0x15] + 0x180),1);
    param_2[6] = (long)PTR_FUN_047d0b90;
    param_2[7] = 0;
    param_2[8] = (long)"NetNetworkStateJob::WaitInquireNetworkState";
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar1 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


