/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030684b8; name: FUN_030684b8
 */


void FUN_030684b8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar8 = *param_2;
  if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
    (**(code **)(lVar8 + 0x18))("Traversability",0xe,*(undefined8 *)(lVar8 + 0x28));
  }
  puVar6 = (ulong *)(param_2 + 2);
  puVar1 = (undefined8 *)*puVar6;
  uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
  puVar7 = (ulong *)(param_2 + 3);
  if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = "YtTraversability";
  }
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar8 = *param_2;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("PointPoint",10,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtPointPoint";
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar8 = *param_2;
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Uncacheable",0xb,*(undefined8 *)(lVar8 + 0x28));
      }
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "YtUncacheable";
      }
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
        puVar1 = (undefined8 *)*puVar6;
        uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(param_2[6] + 8);
        }
      }
      FUN_03067790(param_1 + 0x30,param_2);
    }
    lVar8 = *param_2;
    if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_0306870c:
      puVar1 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
      puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar1) goto LAB_0306870c;
      *puVar6 = (ulong)puVar1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_0306870c;
      }
    }
    puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x28);
      *puVar1 = &DAT_03c65669;
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  FUN_03067ccc(param_1 + 0xe8,param_2);
  FUN_03067f70(param_1 + 0x358,param_2);
  FUN_03068214(param_1 + 0x5c8,param_2);
  if (*(int *)(param_1 + 0x848) != 0) {
    lVar8 = *param_2;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("EdgeEdge",8,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtEdgeEdge";
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    FUN_03067494(param_1 + 0x850,param_2);
    if (*(int *)(param_1 + 0x948) != 0) {
      lVar8 = *param_2;
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Uncached",8,*(undefined8 *)(lVar8 + 0x28));
      }
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "YtUncached";
      }
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
        puVar1 = (undefined8 *)*puVar6;
        uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(param_2[6] + 8);
        }
      }
      FUN_03067790(param_1 + 0x938,param_2);
    }
    lVar8 = *param_2;
    if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03068918:
      puVar1 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
      puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar1) goto LAB_03068918;
      *puVar6 = (ulong)puVar1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_03068918;
      }
    }
    puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x840);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x848);
      *puVar1 = &DAT_03c65669;
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0xa00) != 0) {
    lVar8 = *param_2;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("EdgeEdges",9,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtEdgeEdges";
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    FUN_03067494(param_1 + 0xa08,param_2);
    if (*(int *)(param_1 + 0xb00) != 0) {
      lVar8 = *param_2;
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Uncached",8,*(undefined8 *)(lVar8 + 0x28));
      }
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "YtUncached";
      }
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
        puVar1 = (undefined8 *)*puVar6;
        uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(param_2[6] + 8);
        }
      }
      FUN_03067790(param_1 + 0xaf0,param_2);
    }
    lVar8 = *param_2;
    if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03068b00:
      puVar1 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
      puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar1) goto LAB_03068b00;
      *puVar6 = (ulong)puVar1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_03068b00;
      }
    }
    puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x9f8);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0xa00);
      *puVar1 = &DAT_03c65669;
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  if (*(int *)(param_1 + 3000) != 0) {
    lVar8 = *param_2;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("Vertex",6,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtVertex";
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    FUN_03067494(param_1 + 0xbc0,param_2);
    lVar8 = *param_2;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("Uncached",8,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)*puVar6;
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtUncached";
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar1 = (undefined8 *)*puVar6;
      uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar2 <= *puVar7) && (*puVar6 = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    lVar8 = *param_2;
    if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03068cd4:
      puVar1 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
      puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar1) goto LAB_03068cd4;
      *puVar6 = (ulong)puVar1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_03068cd4;
      }
    }
    puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0xcb0);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0xcb8);
      *puVar1 = &DAT_03c65669;
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
    lVar8 = *param_2;
    if (((*(byte *)(lVar8 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_03068d6c:
      puVar1 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar3 = (undefined8 *)*puVar7;
      puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar1) goto LAB_03068d6c;
      *puVar6 = (ulong)puVar1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_03068d6c;
      }
    }
    puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0xbb0);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 3000);
      *puVar1 = &DAT_03c65669;
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar8 = *param_2;
  if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)*puVar6;
    puVar3 = (undefined8 *)*puVar7;
    puVar1 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar1 <= puVar3) {
      *puVar6 = (ulong)puVar1;
      if (puVar4 == (undefined8 *)0x0) goto LAB_03068e0c;
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar1 = (undefined8 *)*puVar6;
  puVar3 = (undefined8 *)*puVar7;
LAB_03068e0c:
  puVar4 = (undefined8 *)((long)puVar1 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (*puVar6 = (ulong)puVar4, puVar1 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar1 = &DAT_03c65669;
    puVar1[1] = uVar5;
  }
  if (*(code **)(lVar8 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03068e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
  return;
}


