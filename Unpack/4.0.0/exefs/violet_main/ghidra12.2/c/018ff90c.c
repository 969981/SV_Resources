/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff90c; name: FUN_018ff90c
 */


void FUN_018ff90c(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar6 = local_60;
  if (param_2[0xe] == 0) {
    *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)(*(long *)PTR_DAT_047d0860 + 0x50);
    uVar4 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xb8,uVar4);
    if (lVar5 != 0) {
      FUN_007e69f0(lVar5);
    }
    param_2[0xe] = lVar5;
    uVar1 = *(undefined2 *)((long)param_2 + 0x5a);
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    FUN_007e6bb4(local_50,lVar5,param_3,param_4,uVar1,uVar3);
    if (local_50[0] == 0) {
      param_2[0xc] = 0xfffffff;
      puVar2 = PTR_DAT_047d0868;
      local_60[0] = 0;
      *(short *)(PTR_DAT_047d0868 + 0x39e) = (short)param_3;
      *(short *)(puVar2 + 0x3a0) = (short)param_4;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
    }
    else {
      puVar7 = (undefined8 *)param_2[0xe];
      *(undefined2 *)((long)param_2 + 0x5a) = 0;
      param_2[0xc] = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        FUN_007bfaa0(puVar7);
        param_2[0xe] = 0;
      }
      piVar6 = local_50;
    }
  }
  else {
    local_50[0] = 0x10402;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    piVar6 = local_50;
  }
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


