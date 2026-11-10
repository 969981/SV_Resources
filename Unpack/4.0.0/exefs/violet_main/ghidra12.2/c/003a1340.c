/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a1340; name: FUN_003a1340
 */


undefined4 FUN_003a1340(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long local_30;
  long local_28;
  
  if ((*(long *)(*(long *)(param_1 + 0xb0) + 0x1f8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0xb0) + 0x200) == 0)) {
    return 0;
  }
  FUN_0049e3f0(&local_30);
  lVar6 = *(long *)(param_1 + 0xb0);
  lVar7 = *(long *)(lVar6 + 0x1f8) - local_30;
  if (local_30 <= *(long *)(lVar6 + 0x1f8)) {
    if (lVar7 == 0) {
      lVar9 = *(long *)(lVar6 + 0x200);
      if (lVar9 <= local_28) goto LAB_003a13e0;
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x200);
    }
    lVar9 = lVar9 - local_28;
    lVar7 = lVar7 + (lVar9 >> 0x3f);
    lVar1 = lVar9 + 1000000;
    if (-1 < lVar9) {
      lVar1 = lVar9;
    }
    if (14999 < lVar1 || lVar7 != 0) {
      if (0 < lVar7) {
        return 0;
      }
      if (0 < lVar1) {
        return 0;
      }
    }
  }
LAB_003a13e0:
  if (*(code **)(lVar6 + 0x210) == (code *)0x0) {
    uVar3 = *(int *)(lVar6 + 0x208) << 1;
    if (59999999 < uVar3) {
      uVar3 = 60000000;
    }
    *(uint *)(lVar6 + 0x208) = uVar3;
    lVar7 = *(long *)(param_1 + 0xb0);
  }
  else {
    uVar2 = (**(code **)(lVar6 + 0x210))(param_1);
    lVar7 = *(long *)(param_1 + 0xb0);
    *(undefined4 *)(lVar7 + 0x208) = uVar2;
  }
  uVar3 = *(int *)(lVar7 + 0x1f0) + 1;
  *(uint *)(lVar7 + 0x1f0) = uVar3;
  if (2 < uVar3) {
    uVar3 = FUN_003b5740(param_1);
    if ((uVar3 >> 0xc & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0xb0);
      uVar3 = *(uint *)(lVar7 + 0x1f0);
      goto joined_r0x003a14a8;
    }
    uVar4 = FUN_003b35e0(param_1);
    uVar5 = FUN_003e9560(uVar4,0x2f,0,0);
    lVar7 = *(long *)(param_1 + 0xb0);
    if (uVar5 < *(ulong *)(lVar7 + 0x130)) {
      *(ulong *)(lVar7 + 0x130) = uVar5;
    }
  }
  uVar3 = *(uint *)(lVar7 + 0x1f0);
joined_r0x003a14a8:
  if (uVar3 < 0xd) {
    iVar8 = 1;
    if (*(int *)(lVar7 + 0x1e8) + 1U < 3) {
      iVar8 = *(int *)(lVar7 + 0x1e8) + 1;
    }
    *(int *)(lVar7 + 0x1e8) = iVar8;
    FUN_003a1500(param_1);
    uVar2 = FUN_003ca8b0(param_1);
  }
  else {
    uVar2 = 0xffffffff;
    FUN_003c3950(param_1,0xffffffff,0x13e,0x138,"external/openssl/ssl/d1_lib.c",0x182);
  }
  return uVar2;
}


