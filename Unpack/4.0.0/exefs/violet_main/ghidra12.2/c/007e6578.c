/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6578; name: FUN_007e6578
 */


void FUN_007e6578(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_2 + 0xa0))(local_38,param_2,param_4);
  if (local_38[0] == 0) {
    plVar1 = (long *)FUN_007ec544(param_2);
    (**(code **)(*plVar1 + 0x80))(local_48,plVar1,param_3);
    FUN_018ff39c(local_38,local_48);
    if (local_38[0] == 0) {
      uVar2 = FUN_007efbd8(param_2[0xe],param_3);
      if ((uVar2 & 1) == 0) {
        local_48[0] = 0x10407;
      }
      else {
        local_48[0] = 0;
      }
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar3 = local_48;
      goto LAB_007e65e0;
    }
  }
  piVar3 = local_38;
LAB_007e65e0:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


