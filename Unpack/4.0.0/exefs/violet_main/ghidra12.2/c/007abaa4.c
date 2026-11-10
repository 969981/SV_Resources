/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007abaa4; name: FUN_007abaa4
 */


void FUN_007abaa4(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(**(long **)(param_2[0xd] + 0x180) + 0x50))
            (local_38,*(long **)(param_2[0xd] + 0x180),param_2[0xc]);
  if (local_38[0] == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xb] = param_3;
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_2[0xb]);
    FUN_0078cd58(*(undefined8 *)(param_2[0xd] + 0x180),1);
    param_2[8] = (long)"NetSearchNetworkJob::WaitSearchNetwork";
    param_2[6] = (long)PTR_FUN_047d0cb8;
    param_2[7] = 0;
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


