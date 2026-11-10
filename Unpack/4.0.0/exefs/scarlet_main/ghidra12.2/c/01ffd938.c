/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ffd938; name: FUN_01ffd938
 */


ulong FUN_01ffd938(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_2 + 0x1f8);
  if (lVar2 == 0) {
    local_38 = *(undefined8 *)(param_2 + 8);
    FUN_0103caf0(&local_60,local_38,&local_38);
    lVar2 = local_60;
    local_60 = 0;
    lVar3 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_48;
      *(undefined8 *)(param_2 + 0x208) = local_50;
      *(undefined8 *)(param_2 + 0x200) = local_58;
      local_60 = 0;
    }
    else {
      FUN_0103e9d8(param_2 + 0x200);
      lVar2 = local_60;
      *(undefined8 *)(param_2 + 0x210) = local_48;
      *(undefined8 *)(param_2 + 0x208) = local_50;
      *(undefined8 *)(param_2 + 0x200) = local_58;
      local_60 = 0;
      if (lVar2 != 0) {
        FUN_0103e9d8(&local_58);
      }
    }
    lVar2 = *(long *)(param_2 + 0x1f8);
  }
  local_58 = FUN_01ffdafc(param_1,lVar2,param_3,param_4);
  local_60 = 3;
  do {
    lVar2 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
    if (lVar2 == 0) {
      uVar5 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4;
      FUN_01002624(param_2 + 0xe8,&local_60);
      goto LAB_01ffd9f0;
    }
    uVar5 = *(ulong *)(*(long *)(param_2 + 0x160) + -8);
    *(long *)(param_2 + 0x160) = lVar2 + *(long *)(param_2 + 0x158) + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x120) + uVar4) =
         *(ulong *)(*(long *)(param_2 + 0x120) + uVar4) &
         (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4) <= uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0xe8) + uVar5 * 0x10);
  *puVar1 = 3;
  puVar1[1] = local_58;
  if (*(ulong *)(param_2 + 400) <= uVar5) {
LAB_01ffd9f0:
    *(ulong *)(param_2 + 400) = uVar5 + 1;
  }
  return uVar5;
}


