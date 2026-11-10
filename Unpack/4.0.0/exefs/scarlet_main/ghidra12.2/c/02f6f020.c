/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6f020; name: FUN_02f6f020
 */


void FUN_02f6f020(long param_1,long *param_2)

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
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("getData",7,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar7 = (ulong *)(param_2 + 2);
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  puVar8 = (ulong *)(param_2 + 3);
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtgetData";
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
LAB_02f6f128:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6f128;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6f128;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x30);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("getLeafShapes",0xd,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtgetLeafShapes";
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
LAB_02f6f254:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6f254;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6f254;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x48);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("createNewCache",0xe,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtcreateNewCache";
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
LAB_02f6f380:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6f380;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6f380;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x60);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("FaceClipGenerator",0x11,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtFaceClipGenerator";
  }
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))(&DAT_03bdd3a4,3,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03bdd3a2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    uVar1 = *(uint *)(param_1 + 0xf8);
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "MirerunGskBecauseOfNormal";
        *(float *)(puVar2 + 1) = (float)uVar1;
      }
    }
    uVar1 = *(uint *)(param_1 + 0xfc);
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "MiskippedSinceNoPredictedHit";
        *(float *)(puVar2 + 1) = (float)uVar1;
      }
    }
    lVar9 = *param_2;
    if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f6f5c0:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6f5c0;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6f5c0;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xf0);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f6f658:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6f658;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6f658;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xc0);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("FullCastGenerator",0x11,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtFullCastGenerator";
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
LAB_02f6f78c:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6f78c;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6f78c;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xd8);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("CvxVsPlaneGenerator",0x13,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtCvxVsPlaneGenerator";
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
LAB_02f6f8c0:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6f8c0;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6f8c0;
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
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("DebrisGenerator",0xf,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtDebrisGenerator";
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
LAB_02f6f9f4:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6f9f4;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6f9f4;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x90);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("CapsCapsGenerator",0x11,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtCapsCapsGenerator";
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
LAB_02f6fb28:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6fb28;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6fb28;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xa8);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("weldingModifier",0xf,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtweldingModifier";
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
LAB_02f6fc5c:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6fc5c;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6fc5c;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x130);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    return;
  }
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("processModifiers",0x10,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtprocessModifiers";
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
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *puVar7 = (ulong)puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_02f6fd98;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)*puVar7;
  puVar4 = (undefined8 *)*puVar8;
LAB_02f6fd98:
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x148);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f6fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  return;
}


