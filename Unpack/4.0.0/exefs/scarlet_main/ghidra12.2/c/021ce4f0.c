/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ce4f0; name: FUN_021ce4f0
 */


ulong FUN_021ce4f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_2 + 0x1d8);
  if (lVar2 == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_021c45a0(&local_50,local_58,&local_58);
    lVar2 = local_50;
    local_50 = 0;
    lVar3 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_2 + 0x1e8) = local_40;
      *(undefined8 *)(param_2 + 0x1f0) = local_38;
      *(undefined8 *)(param_2 + 0x1e0) = local_48;
      local_50 = 0;
    }
    else {
      FUN_021c46b4(param_2 + 0x1e0);
      lVar2 = local_50;
      *(undefined8 *)(param_2 + 0x1e0) = local_48;
      *(undefined8 *)(param_2 + 0x1e8) = local_40;
      *(undefined8 *)(param_2 + 0x1f0) = local_38;
      local_50 = 0;
      if (lVar2 != 0) {
        FUN_021c46b4(&local_48);
      }
    }
    lVar2 = *(long *)(param_2 + 0x1d8);
  }
  local_48 = FUN_021ce67c(param_1,lVar2,param_3);
  local_50 = 2;
  do {
    lVar2 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
    if (lVar2 == 0) {
      uVar5 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4;
      FUN_021cdd38(param_2 + 0xe8,&local_50);
      goto LAB_021ce5a0;
    }
    uVar5 = *(ulong *)(*(long *)(param_2 + 0x160) + -8);
    *(long *)(param_2 + 0x160) = lVar2 + *(long *)(param_2 + 0x158) + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x120) + uVar4) =
         *(ulong *)(*(long *)(param_2 + 0x120) + uVar4) &
         (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4) <= uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0xe8) + uVar5 * 0x10);
  *puVar1 = 2;
  puVar1[1] = local_48;
  if (*(ulong *)(param_2 + 400) <= uVar5) {
LAB_021ce5a0:
    *(ulong *)(param_2 + 400) = uVar5 + 1;
  }
  return uVar5;
}


