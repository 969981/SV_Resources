/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03067790; name: FUN_03067790
 */


void FUN_03067790(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_03066bec(param_1 + 0x18);
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))("FindThresholdedInterpolants",0x1b,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = "YtFindThresholdedInterpolants";
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03067888:
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 < puVar2) goto LAB_03067888;
    param_2[2] = (long)puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_03067888;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x68);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
    (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  }
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))("PartitionBoundaryEdges",0x16,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = "YtPartitionBoundaryEdges";
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_030679a4:
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 < puVar2) goto LAB_030679a4;
    param_2[2] = (long)puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_030679a4;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x80);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
    (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  }
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))("PairClearance",0xd,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = "YtPairClearance";
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03067ac0:
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 < puVar2) goto LAB_03067ac0;
    param_2[2] = (long)puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_03067ac0;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x98);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
    (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  }
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))("OpenClearance",0xd,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = "YtOpenClearance";
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03067bdc:
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 < puVar2) goto LAB_03067bdc;
    param_2[2] = (long)puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_03067bdc;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xb0);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
    (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar3) {
      param_2[2] = (long)puVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_03067c70;
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = (undefined8 *)param_2[3];
LAB_03067c70:
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03067cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  return;
}


