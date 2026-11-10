/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f9364; name: FUN_007f9364
 */


void FUN_007f9364(undefined8 param_1,long *param_2,undefined8 param_3,void *param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  void *__dest;
  undefined **ppuVar3;
  undefined *local_80 [2];
  undefined1 auStack_6c [4];
  undefined *local_68 [2];
  undefined *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  
  ppuVar3 = local_80;
  if (*(char *)((long)param_2 + 0x5a) == '\0') {
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
    local_68[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_68);
    ppuVar3 = &local_58;
  }
  else {
    plVar1 = param_2 + 0xd;
    FUN_00797134(plVar1);
    local_48 = 0;
    local_58 = PTR_DAT_047d14f0 + 0x10;
    local_50 = 0xf;
    local_4e = (short)param_5;
    local_4c = (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = FUN_0079720c(plVar1,0x10);
    if (lVar2 == 0) {
      local_68[0]._0_4_ = 0;
      local_80[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_80);
      ppuVar3 = local_68;
    }
    else {
      FUN_007ed6f4(local_68,&local_58,lVar2,auStack_34,0x10);
      __dest = (void *)FUN_0079720c(plVar1,param_5);
      *(undefined4 *)((long)__dest + (ulong)((param_5 >> 2) - 1) * 4) = 0;
      memcpy(__dest,param_4,(ulong)param_5);
      FUN_00796d24(plVar1);
      FUN_007929a0(local_68,param_2[0xc],param_2 + 0x13,(int)param_2[0xcc],param_3,auStack_6c);
      local_80[0]._0_4_ = 0;
      local_38 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)&local_38);
    }
  }
  FUN_00cbd7c0(param_1,ppuVar3);
  return;
}


