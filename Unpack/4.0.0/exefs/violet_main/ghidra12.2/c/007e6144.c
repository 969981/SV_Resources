/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6144; name: FUN_007e6144
 */


void FUN_007e6144(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_90 [4];
  int local_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar4 = local_90;
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  uStack_58 = param_3[3];
  FUN_007ec3c4(local_50,param_2,&local_70);
  if (local_50[0] == 0) {
    if (*(long **)(param_2 + 0x70) == (long *)0x0) {
      local_80[0] = 0x1040c;
      local_90[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
      piVar4 = local_80;
    }
    else {
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 100) = 0;
      (**(code **)(**(long **)(param_2 + 0x70) + 0x18))(local_80);
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      uVar1 = FUN_007ec544(param_2);
      uVar2 = FUN_007ec554(param_2);
      uVar3 = FUN_007ec4a8(param_2);
      FUN_007ef51c(uVar5,uVar1,uVar2,uVar3,*(undefined1 *)param_3);
      local_90[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_38);
    }
  }
  else {
    piVar4 = local_50;
  }
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


