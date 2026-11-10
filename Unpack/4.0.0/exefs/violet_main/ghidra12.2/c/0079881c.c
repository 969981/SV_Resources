/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079881c; name: FUN_0079881c
 */


void FUN_0079881c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((char)param_2[1] == '\0') {
    plVar1 = (long *)param_2[3];
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)(**(code **)(*param_2 + 0x200))(param_2);
      param_2[3] = (long)plVar1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    PTR_DAT_047d0868[0x181] = *(undefined1 *)(param_3 + 8);
    (**(code **)(*param_2 + 0x1e0))(local_38,param_2,param_3);
    if (local_38[0] == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar2 = local_48;
    }
    else {
      piVar2 = local_38;
    }
  }
  else {
    local_38[0] = 0x10402;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar2 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


