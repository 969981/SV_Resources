/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6d978; name: FUN_02f6d978
 */


void FUN_02f6d978(long param_1,long *param_2)

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
    (**(code **)(lVar9 + 0x18))("CvxCvx",6,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar7 = (ulong *)(param_2 + 2);
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  puVar8 = (ulong *)(param_2 + 3);
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = &DAT_03ca8247;
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
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MimaxRotationExceeded";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x34);
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
LAB_02f6db8c:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6db8c;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6db8c;
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
  if (*(int *)(param_1 + 0x48) != 0) {
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
    uVar1 = *(uint *)(param_1 + 0x50);
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
LAB_02f6dcfc:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6dcfc;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6dcfc;
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
  if (*(int *)(param_1 + 0xe0) != 0) {
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
    uVar1 = *(uint *)(param_1 + 0xe8);
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*puVar7;
      uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "MirerunGskBecauseOfNormal";
        *(float *)(puVar2 + 1) = (float)uVar1;
      }
    }
    uVar1 = *(uint *)(param_1 + 0xec);
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
LAB_02f6df3c:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6df3c;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6df3c;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xe0);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f6dfd4:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6dfd4;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6dfd4;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xb0);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  if (*(int *)(param_1 + 200) != 0) {
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
LAB_02f6e108:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6e108;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6e108;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 200);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
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
LAB_02f6e23c:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6e23c;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6e23c;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x68);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x80) != 0) {
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
LAB_02f6e370:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6e370;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6e370;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x80);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
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
LAB_02f6e4a4:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6e4a4;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6e4a4;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x98);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    lVar9 = *param_2;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("BuildJacobians",0xe,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtBuildJacobians";
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
LAB_02f6e5d8:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6e5d8;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6e5d8;
      }
    }
    puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x108);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *puVar7 = (ulong)puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_02f6e678;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)*puVar7;
  puVar4 = (undefined8 *)*puVar8;
LAB_02f6e678:
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
                    /* WARNING: Could not recover jumptable at 0x02f6e6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  return;
}


