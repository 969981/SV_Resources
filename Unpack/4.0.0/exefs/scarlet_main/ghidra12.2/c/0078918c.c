/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078918c; name: FUN_0078918c
 */


void FUN_0078918c(undefined8 param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                 uint param_5,undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  int local_58 [4];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38 [2];
  int local_30 [4];
  
  if (param_5 < *(uint *)(param_2 + 0xd)) {
    local_46 = (undefined1)(param_5 >> 0x18);
    local_45 = (undefined1)(param_5 >> 0x10);
    local_44 = (undefined1)(param_5 >> 8);
    local_42 = (undefined1)((ulong)param_4 >> 0x38);
    local_41 = (undefined1)((ulong)param_4 >> 0x30);
    local_40 = (undefined1)((ulong)param_4 >> 0x28);
    local_3f = (undefined1)((ulong)param_4 >> 0x20);
    local_3e = (undefined1)((ulong)param_4 >> 0x18);
    local_3d = (undefined1)((ulong)param_4 >> 0x10);
    local_3c = (undefined1)((ulong)param_4 >> 8);
    local_43 = (undefined1)param_5;
    local_3b = (undefined1)param_4;
    local_30[0] = 0;
    local_58[0] = 0;
    local_48 = param_3;
    local_47 = param_6;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
    FUN_00cbd7c0(local_58,local_30);
    FUN_0078940c(local_30,param_2,&local_48,0xe);
    if (local_30[0] == 0) {
      local_60 = 0;
      local_5c = 0;
      local_5a = 0;
      plVar1 = (long *)FUN_007ec544(param_2);
      local_58[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,local_58,0xe,&local_60);
      if (lVar2 != 0) {
        FUN_007eba90(param_1,plVar1,&local_48);
        return;
      }
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
      goto LAB_007892e0;
    }
  }
  else {
    local_30[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
  }
  piVar3 = local_30;
LAB_007892e0:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


