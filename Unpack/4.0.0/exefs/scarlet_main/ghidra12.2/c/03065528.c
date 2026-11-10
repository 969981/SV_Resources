/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03065528; name: FUN_03065528
 */


uint FUN_03065528(long param_1,ulong param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long local_c0;
  float *pfStack_b8;
  undefined4 *local_b0;
  undefined1 local_a8;
  float local_a0 [2];
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_60;
  long local_58;
  long lStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_20;
  undefined8 uStack_18;
  
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 == (long *)0x0) {
    uVar2 = 1;
    goto LAB_0306563c;
  }
  local_c0 = *(long *)(param_1 + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(local_c0 + 0x38) + (param_2 >> 0x16 & 0x3ff) * 0x100) + 0x20
                   );
  iVar1 = *(int *)(lVar4 + 0x60);
  local_60 = (uint)param_2;
  uVar2 = local_60 & 0x3fffff;
  uVar5 = uVar2 - *(int *)(lVar4 + 0x30);
  if ((int)uVar2 < *(int *)(lVar4 + 0x30)) {
    if (*(int *)(lVar4 + 0x78) == 0) {
      uVar5 = uVar2;
LAB_030655c4:
      lStack_50 = *(long *)(lVar4 + 0x130) + (long)(int)(uVar5 * iVar1) * 4;
      local_58 = *(long *)(lVar4 + 0xc0);
      goto LAB_030655d4;
    }
    uVar5 = *(uint *)(*(long *)(lVar4 + 0x70) + (ulong)uVar2 * 4);
    if (uVar5 != 0xffffffff) goto LAB_030655c4;
    lStack_50 = *(long *)(lVar4 + 0x58) + (long)(int)(iVar1 * uVar2) * 4;
    local_58 = *(long *)(lVar4 + 0x28) + (ulong)uVar2 * 0x14;
    local_48 = lStack_50 + (long)iVar1 * 4;
  }
  else {
    lStack_50 = *(long *)(lVar4 + 0x150) + (long)(int)(iVar1 * uVar5) * 4;
    local_58 = *(long *)(lVar4 + 0xe0);
LAB_030655d4:
    local_48 = lStack_50 + (long)iVar1 * 4;
    local_58 = local_58 + (long)(int)uVar5 * 0x14;
  }
  local_90[0] = 0xffffffff;
  local_78 = 0;
  local_38 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_20 = 0;
  uStack_18 = 0;
  uStack_40 = 0;
  local_a0[0] = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  local_98 = *(undefined8 *)(param_1 + 0x48);
  pfStack_b8 = local_a0;
  local_b0 = local_90;
  local_a8 = param_3;
  uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_c0);
LAB_0306563c:
  return uVar2 & 1;
}


