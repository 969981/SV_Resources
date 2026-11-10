/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00788fd8; name: FUN_00788fd8
 */


void FUN_00788fd8(undefined8 param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  int local_60 [4];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_6 < *(uint *)(param_2 + 0xd)) {
    local_4e = (undefined1)(param_6 >> 0x18);
    local_4d = (undefined1)(param_6 >> 0x10);
    local_4c = (undefined1)(param_6 >> 8);
    local_4a = (undefined1)((ulong)param_5 >> 0x38);
    local_49 = (undefined1)((ulong)param_5 >> 0x30);
    local_48 = (undefined1)((ulong)param_5 >> 0x28);
    local_47 = (undefined1)((ulong)param_5 >> 0x20);
    local_46 = (undefined1)((ulong)param_5 >> 0x18);
    local_45 = (undefined1)((ulong)param_5 >> 0x10);
    local_44 = (undefined1)((ulong)param_5 >> 8);
    local_4b = (undefined1)param_6;
    local_43 = (undefined1)param_5;
    local_40[0] = 0;
    local_60[0] = 0;
    local_50 = param_3;
    local_4f = param_7;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
    FUN_00cbd7c0(local_60,local_40);
    FUN_0078940c(local_40,param_2,&local_50,0xe);
    if (local_40[0] == 0) {
      plVar1 = (long *)FUN_007ec544(param_2);
      (**(code **)(*plVar1 + 0x80))(local_60,plVar1,param_4);
      FUN_018ff39c(local_40,local_60);
      if (local_40[0] == 0) {
        local_68 = 0;
        local_64 = 0;
        local_62 = 0;
        local_60[0] = (**(code **)(*param_2 + 0x18))(param_2);
        lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,local_60,param_4,0xe,&local_68);
        if (lVar2 != 0) {
          FUN_007eba90(param_1,plVar1,&local_50);
          return;
        }
        local_60[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
        piVar3 = local_60;
        goto LAB_00789154;
      }
    }
  }
  else {
    local_40[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
  }
  piVar3 = local_40;
LAB_00789154:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


