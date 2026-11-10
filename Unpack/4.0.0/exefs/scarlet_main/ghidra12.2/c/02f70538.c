/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f70538; name: FUN_02f70538
 */


void FUN_02f70538(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("CompositeVsComposite",0x14,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar7 = (ulong *)(param_2 + 2);
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  puVar8 = (ulong *)(param_2 + 3);
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCompositeVsComposite";
  }
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("CheckAndQueryAabb",0x11,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCheckAndQueryAabb";
  }
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("QueryAabb",9,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtQueryAabb";
  }
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MinumHits";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))(&DAT_03bd6533,4,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03bd6531;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    lVar9 = *param_2;
    if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70848:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f70848;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f70848;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x58);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f708e0:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f708e0;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f708e0;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x40);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70978:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f70978;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f70978;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x28);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("ReuseContactCache",0x11,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtReuseContactCache";
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x1f8);
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "MicompositeNumCachesReused";
        *(float *)(puVar2 + 1) = (float)uVar1;
      }
    }
    lVar9 = *param_2;
    if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70ae8:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f70ae8;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f70ae8;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x1f0);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("CheckContactCache",0x11,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCheckContactCache";
  }
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MimaxRotationExceeded";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MimaxPositionExceeded";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70c8c:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f70c8c;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f70c8c;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x78);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  FUN_02f6f020(param_1 + 0x88,param_2);
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *puVar7 = (ulong)puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_02f70d38;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)*puVar7;
  puVar4 = (undefined8 *)*puVar8;
LAB_02f70d38:
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f70d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  return;
}


