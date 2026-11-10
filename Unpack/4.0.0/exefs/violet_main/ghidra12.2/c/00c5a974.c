/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5a974; name: FUN_00c5a974
 */


void FUN_00c5a974(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  local_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_48 = *(undefined8 *)(param_1 + 0x128);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  uStack_38 = *(undefined8 *)(param_1 + 0x138);
  uStack_40 = *(undefined8 *)(param_1 + 0x130);
  local_80 = *param_2;
  uStack_78 = param_2[1];
  uVar1 = (**(code **)(param_1 + 0x30))(param_1 + 0x50,&local_80);
  if ((uVar1 & 1) != 0) {
    FUN_00c5aa9c(param_1,param_2);
    if ((ulong)(long)(int)param_2[1] < *(long *)(*(long *)(param_1 + 0xb0) + 0x90) - 1U) {
      local_80 = (ulong)(uint)((int)*param_2 << 1) | (ulong)*(uint *)((long)param_2 + 4) << 0x21;
      uStack_78 = (ulong)((int)param_2[1] + 1);
      FUN_00c5a974(param_1,&local_80);
      local_80 = (ulong)((int)*param_2 << 1 | 1) | (ulong)*(uint *)((long)param_2 + 4) << 0x21;
      uStack_78 = (ulong)((int)param_2[1] + 1);
      FUN_00c5a974(param_1,&local_80);
      local_80 = CONCAT44(*(int *)((long)param_2 + 4) << 1,(int)*param_2 << 1) | 0x100000000;
      uStack_78 = (ulong)((int)param_2[1] + 1);
      FUN_00c5a974(param_1,&local_80);
      local_80 = CONCAT44(*(int *)((long)param_2 + 4) << 1,(int)*param_2 << 1) | 0x100000001;
      uStack_78 = (ulong)((int)param_2[1] + 1);
      FUN_00c5a974(param_1,&local_80);
    }
  }
  return;
}


