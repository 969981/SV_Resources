/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cfc58; name: FUN_007cfc58
 */


void FUN_007cfc58(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5)

{
  int *piVar1;
  long *plVar2;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  if ((((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) || (param_2[0xb] != 0)) {
LAB_007cfca0:
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    plVar2 = param_2 + 0xc;
    if ((int)*plVar2 == 1) goto LAB_007cfca0;
    FUN_0078cac8(plVar2);
    (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x20))
              (local_50,*(long **)(*(long *)PTR_DAT_047d0a08 + 0x18),plVar2,param_4,param_5);
    if (local_50[0] == 0) {
      param_2[0xb] = param_3;
      FUN_0078cb14(param_3);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[8] = (long)"BrowseSessionJob::WaitSearchNetwork";
      param_2[6] = (long)PTR_LAB_047d1278;
      param_2[7] = 0;
      local_60[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_007cfcc4;
    }
  }
  piVar1 = local_50;
LAB_007cfcc4:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


