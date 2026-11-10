/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03066f08; name: FUN_03066f08
 */


void FUN_03066f08(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar8 = *param_2;
  if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
    (**(code **)(lVar8 + 0x18))("CalculateClearances",0x13,*(undefined8 *)(lVar8 + 0x28));
  }
  puVar7 = (ulong *)(param_2 + 2);
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCalculateClearances";
  }
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MisimpleTransitiveHits";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MiincidentMcpHits";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MicomplexTransitiveHits";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MifullCalculations";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  lVar8 = *param_2;
  if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
    (**(code **)(lVar8 + 0x18))("PartitionBoundaryEdges",0x16,*(undefined8 *)(lVar8 + 0x28));
  }
  puVar2 = (undefined8 *)param_2[2];
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtPartitionBoundaryEdges";
  }
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar8 = *param_2;
  if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_0306716c:
    puVar4 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
  }
  else {
    puVar2 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
    puVar4 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar5 < puVar4) goto LAB_0306716c;
    *puVar7 = (ulong)puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_0306716c;
    }
  }
  puVar2 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar5) && (*puVar7 = (ulong)puVar2, puVar4 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x28);
    *puVar4 = &DAT_03c65669;
    puVar4[1] = uVar6;
  }
  if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
    (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *param_2;
  if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
    (**(code **)(lVar8 + 0x18))("PairClearance",0xd,*(undefined8 *)(lVar8 + 0x28));
  }
  puVar2 = (undefined8 *)param_2[2];
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtPairClearance";
  }
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar8 = *param_2;
  if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03067288:
    puVar4 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
  }
  else {
    puVar2 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
    puVar4 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar5 < puVar4) goto LAB_03067288;
    *puVar7 = (ulong)puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_03067288;
    }
  }
  puVar2 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar5) && (*puVar7 = (ulong)puVar2, puVar4 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x40);
    *puVar4 = &DAT_03c65669;
    puVar4[1] = uVar6;
  }
  if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
    (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *param_2;
  if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
    (**(code **)(lVar8 + 0x18))("OpenClearance",0xd,*(undefined8 *)(lVar8 + 0x28));
  }
  puVar2 = (undefined8 *)param_2[2];
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtOpenClearance";
  }
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_2[3]) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar8 = *param_2;
  if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_030673a4:
    puVar4 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
  }
  else {
    puVar2 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
    puVar4 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar5 < puVar4) goto LAB_030673a4;
    *puVar7 = (ulong)puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_030673a4;
    }
  }
  puVar2 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar5) && (*puVar7 = (ulong)puVar2, puVar4 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x58);
    *puVar4 = &DAT_03c65669;
    puVar4[1] = uVar6;
  }
  if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
    (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *param_2;
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    puVar5 = (undefined8 *)param_2[3];
    puVar4 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 <= puVar5) {
      *puVar7 = (ulong)puVar4;
      if (puVar2 == (undefined8 *)0x0) goto LAB_03067438;
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar4 = (undefined8 *)param_2[2];
  puVar5 = (undefined8 *)param_2[3];
LAB_03067438:
  puVar2 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar5) && (*puVar7 = (ulong)puVar2, puVar4 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar4 = &DAT_03c65669;
    puVar4[1] = uVar6;
  }
  if (*(code **)(lVar8 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03067480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
  return;
}


