/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0130640c; name: FUN_0130640c
 */


void FUN_0130640c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = *(long *)(param_1 + 0x198);
  if (lVar3 == 0) {
    local_18 = *(undefined8 *)(param_1 + 8);
    FUN_01306690(&local_50,local_18,&local_18);
    lVar3 = local_50;
    local_50 = 0;
    lVar2 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar3;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x1a8) = local_40;
      *(undefined8 *)(param_1 + 0x1b0) = local_38;
      *(undefined8 *)(param_1 + 0x1a0) = local_48;
      local_50 = 0;
    }
    else {
      FUN_018ded80(param_1 + 0x1a0);
      lVar3 = local_50;
      *(undefined8 *)(param_1 + 0x1a0) = local_48;
      *(undefined8 *)(param_1 + 0x1a8) = local_40;
      *(undefined8 *)(param_1 + 0x1b0) = local_38;
      local_50 = 0;
      if (lVar3 != 0) {
        FUN_018ded80(&local_48);
      }
    }
    lVar3 = *(long *)(param_1 + 0x198);
  }
  local_48 = FUN_01306558(lVar3 + 8,param_2);
  local_50 = 0;
  do {
    lVar3 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar3 == 0) {
      uVar4 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_0103b268(param_1 + 0xe8,&local_50);
      goto LAB_013064f4;
    }
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar3 + *(long *)(param_1 + 0x158) + -8;
    uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar5) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar5) &
         (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar4);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar4 * 0x10);
  *puVar1 = 0;
  puVar1[1] = local_48;
  if (*(ulong *)(param_1 + 400) <= uVar4) {
LAB_013064f4:
    *(ulong *)(param_1 + 400) = uVar4 + 1;
  }
  return;
}


