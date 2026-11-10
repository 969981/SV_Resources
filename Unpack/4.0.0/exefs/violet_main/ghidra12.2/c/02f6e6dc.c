/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f6e6dc; name: FUN_02f6e6dc
 */


void FUN_02f6e6dc(long param_1,long *param_2)

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
    (**(code **)(lVar9 + 0x18))("Debris",6,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar7 = (ulong *)(param_2 + 2);
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  puVar8 = (ulong *)(param_2 + 3);
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtDebris";
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
    (**(code **)(lVar9 + 0x18))("GetClosestPoint",0xf,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtGetClosestPoint";
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
LAB_02f6e878:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6e878;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6e878;
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
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("CollideDebrisWithHits",0x15,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCollideDebrisWithHits";
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
LAB_02f6e9a4:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6e9a4;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6e9a4;
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
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))("CollideDebrisWithHitsCollide",0x1c,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCollideDebrisWithHitsCollide";
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
LAB_02f6ead0:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6ead0;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6ead0;
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
  lVar9 = *param_2;
  if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
    (**(code **)(lVar9 + 0x18))
              ("CollideDebrisWithHitsCollideProject",0x23,*(undefined8 *)(lVar9 + 0x28));
  }
  puVar2 = (undefined8 *)*puVar7;
  uVar3 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCollideDebrisWithHitsCollideProject";
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
LAB_02f6ebfc:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6ebfc;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6ebfc;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x70);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
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
  uVar1 = *(uint *)(param_1 + 0x90);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    uVar3 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *puVar8) && (*puVar7 = uVar3, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MimaxRotationExceeded";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x94);
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
LAB_02f6eda0:
    puVar2 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
  }
  else {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar4 < puVar2) goto LAB_02f6eda0;
    *puVar7 = (ulong)puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f6eda0;
    }
  }
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*puVar7 = (ulong)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x88);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar6;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
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
    uVar1 = *(uint *)(param_1 + 0xb0);
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
LAB_02f6ef10:
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)*puVar8;
      puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_02f6ef10;
      *puVar7 = (ulong)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f6ef10;
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
  FUN_02f6f020(param_1 + 0xb8,param_2);
  lVar9 = *param_2;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)*puVar7;
    puVar4 = (undefined8 *)*puVar8;
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *puVar7 = (ulong)puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_02f6efbc;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)*puVar7;
  puVar4 = (undefined8 *)*puVar8;
LAB_02f6efbc:
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
                    /* WARNING: Could not recover jumptable at 0x02f6f008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  return;
}


