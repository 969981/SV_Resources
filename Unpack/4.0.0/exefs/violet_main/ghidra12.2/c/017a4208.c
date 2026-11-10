/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a4208; name: FUN_017a4208
 */


long FUN_017a4208(long param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    uVar3 = 0;
LAB_017a4310:
    local_38._4_4_ = 0;
LAB_017a4314:
    local_38 = (ulong)local_38._4_4_ << 0x20;
  }
  else {
    if ((ulong)puVar2[2] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_017a4310;
    if ((ulong)puVar2[3] == 0) {
      local_38._4_4_ = 0;
    }
    else {
      local_38._4_4_ = *(uint *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (uVar1 < 9) goto LAB_017a4314;
    if ((ulong)puVar2[4] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)param_2 + (ulong)puVar2[4]);
    }
    local_38 = CONCAT44(local_38._4_4_,uVar4);
    if (10 < uVar1) {
      local_28 = 0;
      uVar4 = 0;
      if ((ulong)puVar2[5] != 0) {
        uVar4 = *(undefined4 *)((long)param_2 + (ulong)puVar2[5]);
      }
      local_30 = CONCAT44(uVar4,uVar3);
      if ((0xc < uVar1) && ((ulong)puVar2[6] != 0)) {
        local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[6]);
      }
      goto LAB_017a42cc;
    }
  }
  local_30 = (ulong)uVar3;
  local_28 = 0;
LAB_017a42cc:
  FUN_017a4324(param_1,*(undefined8 *)(param_1 + 8),&local_38);
  return param_1;
}


