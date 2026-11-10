/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f6c78; name: FUN_007f6c78
 */


void FUN_007f6c78(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar3 = local_60;
  uVar2 = FUN_007e6080();
  if (((uVar2 & 1) == 0) && (*(char *)((long)param_2 + 0x52) == '\0')) {
    uVar5 = *(undefined8 *)PTR_DAT_047d0928;
    uVar1 = (**(code **)(*(long *)param_2[1] + 0x20))();
    FUN_0078f048(local_50,uVar5,uVar1);
    if (local_50[0] == 0) {
      FUN_007e9d34(local_60,param_2[0xf]);
      FUN_007ea320(param_2[0xf]);
      FUN_007e9d34(local_60,param_2[0x10]);
      FUN_007ea320(param_2[0x10]);
      FUN_007e9d34(local_60,param_2[0x11]);
      FUN_007ea320(param_2[0x11]);
      FUN_007e9d34(local_60,param_2[0x12]);
      FUN_007ea320(param_2[0x12]);
      FUN_007f7768(local_60,param_2[0xe]);
      FUN_018ff39c(local_50,local_60);
      plVar7 = *(long **)(param_2[0xe] + 0x10);
      lVar4 = *(long *)(param_2[0xe] + 0x20);
      plVar6 = (long *)param_2[8];
      uVar1 = (**(code **)(*plVar7 + 0x40))(plVar7);
      (**(code **)(*plVar6 + 0x58))(local_60,plVar6,param_3,lVar4 + 8,plVar7,uVar1);
      FUN_018ff39c(local_50,local_60);
      (**(code **)(*(long *)param_2[9] + 0x58))
                (local_60,(long *)param_2[9],param_3,*(long *)(param_2[0xe] + 0x18) + 8,
                 *(undefined8 *)(param_2[0xe] + 8),param_2[8]);
      FUN_018ff39c(local_50,local_60);
      FUN_007ec964(local_60,param_2 + 2,param_2[8],param_2[9]);
      FUN_018ff39c(local_50,local_60);
      if (param_2[0xd] != 0) {
        FUN_007f9918(local_60);
        FUN_018ff39c(local_50,local_60);
      }
      FUN_0078cd58(param_2[0xb],0);
      *(undefined4 *)((long)param_2 + 0xb4) = 0;
      param_2[0x14] = *param_2;
      *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(*(long *)(param_2[0xe] + 0x20) + 0x38);
      uVar1 = *(undefined4 *)(*(long *)(param_2[0xe] + 0x18) + 0x38);
      *(undefined2 *)((long)param_2 + 0x52) = 1;
      *(undefined4 *)((long)param_2 + 0xbc) = uVar1;
      local_60[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_007f6ccc;
    }
  }
  else {
    local_50[0] = 0x10408;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  piVar3 = local_50;
LAB_007f6ccc:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


