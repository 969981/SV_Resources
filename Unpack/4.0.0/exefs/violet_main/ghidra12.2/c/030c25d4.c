/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c25d4; name: FUN_030c25d4
 */


bool FUN_030c25d4(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0 [2];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **local_180 [8];
  long local_140;
  undefined4 local_138;
  uint local_134;
  long local_130;
  long local_128;
  long local_120;
  long local_108;
  undefined4 local_100;
  uint local_fc;
  long *local_c0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_50 = 0;
  uStack_48 = 0;
  local_70 = param_10;
  uStack_68 = param_11;
  local_5c = 0;
  local_60 = param_12;
  local_40 = 0;
  FUN_030c2b8c(local_180,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               &local_70);
  local_1da = 0;
  local_1b0[0] = 0x102ffffffff;
  uStack_198 = param_5[1];
  local_1a0 = *param_5;
  local_1dc = 0x202;
  local_1e0 = *(undefined4 *)(param_3 + 8);
  uStack_1c8 = param_6[1];
  local_1d0 = *param_6;
  uStack_1c0 = local_1d0;
  uStack_1b8 = uStack_1c8;
  uStack_190 = local_1a0;
  uStack_188 = uStack_198;
  FUN_030c494c(local_180,local_1b0,&local_1e0);
  if (*local_c0 == 0) {
    bVar3 = *(int *)((long)local_c0 + 0x14) < (int)local_c0[2];
  }
  else {
    bVar3 = true;
  }
  puVar2 = (undefined8 *)local_c0[1];
  if ((puVar2 != (undefined8 *)0x0) && (*(int *)((long)local_c0 + 0x14) < (int)local_c0[2])) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[4] = 0xffffffff80000000;
    *puVar2 = 0;
    puVar2[1] = 0;
    local_c0[1] = local_c0[1] + 0x30;
    *(int *)((long)local_c0 + 0x14) = *(int *)((long)local_c0 + 0x14) + 1;
  }
  local_180[0] = &PTR_LAB_0464d978;
  local_100 = 0;
  if ((-1 < (int)local_fc) && (local_108 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_108,(ulong)local_fc * 0x30);
  }
  local_fc = 0x80000000;
  local_108 = 0;
  if (local_128 == local_140) {
    local_138 = 0;
  }
  if (local_130 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_030c27fc;
  }
  uVar1 = local_120 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_130 + 0x28) < uVar1) || (*(long *)(local_130 + 0x38) != uVar1 + local_128))
  {
    if (local_128 == 0) goto LAB_030c27fc;
    if (*(ulong *)(local_130 + 0x28) < uVar1 + 0x40) {
      *(int *)(*(long *)(local_130 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_130 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_130 + 0x10) + 0x18))
                (*(long **)(local_130 + 0x10),local_128 - *(int *)(local_128 + -4),uVar1 + 0x44);
      goto LAB_030c27fc;
    }
    if (*(long *)(local_130 + 0x38) != uVar1 + local_128) {
      FUN_031cf778();
      goto LAB_030c27fc;
    }
    *(long *)(local_130 + 0x38) = local_128;
  }
  else {
    *(long *)(local_130 + 0x38) = local_128;
    if (*(long *)(local_130 + 0x48) != local_128) goto LAB_030c27fc;
  }
  FUN_031cf578();
LAB_030c27fc:
  local_138 = 0;
  if ((-1 < (int)local_134) && (local_140 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_140,(ulong)local_134 << 7);
  }
  return bVar3;
}


