/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c78ac; name: FUN_008c78ac
 */


void FUN_008c78ac(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ushort local_28;
  undefined2 local_26;
  
  local_50 = 0;
  uStack_48 = 0;
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x1c0);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*plVar1 + 0x20))(&local_90,plVar1);
  FUN_00c6b824(&local_70);
  local_78 = 0;
  local_70 = 0;
  uVar3 = NEON_ucvtf((uint)local_90 >> 0x10);
  uVar2 = NEON_ucvtf((uint)local_90 & 0xffff);
  local_68 = CONCAT44(uVar3,uVar2);
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  (**(code **)(*plVar1 + 0x20))(&local_28,plVar1);
  FUN_00c6b810(&local_90);
  local_90 = 0;
  local_88 = (ulong)CONCAT24(local_26,(uint)local_28);
  FUN_008f0d9c((short)*(undefined4 *)(param_1 + 0x140),(short)*(undefined4 *)(param_1 + 0x144),
               *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),param_3,plVar1 + 8,
               0);
  *(long **)(param_2 + 0xf8) = plVar1 + 8;
  *(undefined8 *)(param_2 + 0x100) = local_70;
  *(undefined8 *)(param_2 + 0x118) = uStack_58;
  *(undefined8 *)(param_2 + 0x120) = local_50;
  *(undefined8 *)(param_2 + 0x128) = uStack_48;
  *(undefined8 *)(param_2 + 0x108) = local_68;
  *(undefined8 *)(param_2 + 0x110) = local_60;
  *(undefined8 *)(param_2 + 0x130) = local_90;
  *(undefined8 *)(param_2 + 0x148) = local_78;
  *(long *)(param_2 + 0x150) = param_1 + 0x178;
  *(ulong *)(param_2 + 0x138) = local_88;
  *(undefined8 *)(param_2 + 0x140) = local_80;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    *(long *)(param_2 + 0x160) = *(long *)(param_1 + 0x1c8);
  }
  FUN_00892e3c(param_2,param_3);
  return;
}


