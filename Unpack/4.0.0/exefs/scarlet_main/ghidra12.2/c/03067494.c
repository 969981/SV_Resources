/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03067494; name: FUN_03067494
 */


void FUN_03067494(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar7 = *param_2;
  if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
    (**(code **)(lVar7 + 0x18))("ProcessFace",0xb,*(undefined8 *)(lVar7 + 0x28));
  }
  puVar5 = (undefined8 *)param_2[2];
  uVar2 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "YtProcessFace";
  }
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)param_2[2];
    uVar2 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  FUN_03066bec(param_1 + 0x18,param_2);
  lVar7 = *param_2;
  if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
    (**(code **)(lVar7 + 0x18))("FindMcps",8,*(undefined8 *)(lVar7 + 0x28));
  }
  puVar5 = (undefined8 *)param_2[2];
  uVar2 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "YtFindMcps";
  }
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)param_2[2];
    uVar2 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)param_2[2];
    uVar2 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "MimaxTpqSwaps";
      *(float *)(puVar5 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)param_2[2];
    uVar2 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar2 <= (ulong)param_2[3]) && (param_2[2] = uVar2, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "MimaxLoopBreakingSteps";
      *(float *)(puVar5 + 1) = (float)uVar1;
    }
  }
  lVar7 = *param_2;
  if (((*(byte *)(lVar7 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03067694:
    puVar3 = (undefined8 *)param_2[2];
    puVar4 = (undefined8 *)param_2[3];
  }
  else {
    puVar5 = (undefined8 *)param_2[2];
    puVar4 = (undefined8 *)param_2[3];
    puVar3 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar3) goto LAB_03067694;
    param_2[2] = (long)puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_03067694;
    }
  }
  puVar5 = (undefined8 *)((long)puVar3 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (param_2[2] = (long)puVar5, puVar3 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x68);
    *puVar3 = &DAT_03c65669;
    puVar3[1] = uVar6;
  }
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
  }
  FUN_03066f08(param_1 + 0x78,param_2);
  lVar7 = *param_2;
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)param_2[2];
    puVar4 = (undefined8 *)param_2[3];
    puVar3 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 <= puVar4) {
      param_2[2] = (long)puVar3;
      if (puVar5 == (undefined8 *)0x0) goto LAB_03067734;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar3 = (undefined8 *)param_2[2];
  puVar4 = (undefined8 *)param_2[3];
LAB_03067734:
  puVar5 = (undefined8 *)((long)puVar3 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (param_2[2] = (long)puVar5, puVar3 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar3 = &DAT_03c65669;
    puVar3[1] = uVar6;
  }
  if (*(code **)(lVar7 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0306777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
  return;
}


