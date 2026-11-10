/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014dedac; name: FUN_014dedac
 */


void FUN_014dedac(undefined8 *param_1,long param_2,Uid *param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_c0;
  char *local_b8;
  long *local_a8;
  undefined4 local_a0;
  char local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  uint local_34;
  
  if ((*(long *)(param_2 + 0x38) == 0) && (*(int *)(param_2 + 4) < *(int *)(param_2 + 8))) {
    FUN_017b301c(param_1);
    return;
  }
  uVar2 = FUN_014def78(param_2);
  local_c0 = 0;
  local_34 = uVar2;
  FUN_017b3094(&local_90,uVar2,param_2 + 0x70,&local_c0,param_3);
  uVar3 = nn::fs::IsSaveDataExisting(param_3);
  if ((uVar3 & 1) == 0) {
    uVar4 = 3;
  }
  else {
    FUN_014def50(&local_c0,&local_90);
    local_98 = nn::fs::MountSaveData(local_b8,param_3);
    local_a0 = 7;
    local_9c = '\x01';
    bVar1 = false;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))(local_a8);
      bVar1 = local_9c == '\0';
    }
    if ((bVar1) || (local_98 != 0)) {
      FUN_014df7c0(param_2,&local_34);
      FUN_017b301c(param_1);
      FUN_014def3c(param_1,&local_a0);
      if (local_58 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_58 + 0x20))();
      return;
    }
    FUN_014def3c(&local_90,&local_a0);
    uVar4 = 2;
  }
  *(undefined4 *)(param_2 + (long)(int)uVar2 * 4 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 3) = local_78;
  param_1[6] = local_60;
  param_1[7] = local_58;
  param_1[2] = local_80;
  *param_1 = local_90;
  param_1[1] = uStack_88;
  param_1[10] = local_40;
  param_1[4] = local_70;
  param_1[5] = uStack_68;
  param_1[8] = local_50;
  param_1[9] = uStack_48;
  return;
}


