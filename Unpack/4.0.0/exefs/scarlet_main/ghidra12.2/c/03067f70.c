/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03067f70; name: FUN_03067f70
 */


void FUN_03067f70(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))("PointEdges",10,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar5 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "YtPointEdges";
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  FUN_03067494(param_1 + 0x18,param_2);
  if (*(int *)(param_1 + 0x110) != 0) {
    lVar6 = *param_2;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("Cached",6,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar5 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "YtCached";
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar5 = (undefined8 *)param_2[2];
      uVar1 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    FUN_03067790(param_1 + 0x100,param_2);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    lVar6 = *param_2;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("Uncached",8,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar5 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "YtUncached";
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar5 = (undefined8 *)param_2[2];
      uVar1 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    FUN_03067790(param_1 + 0x1b8,param_2);
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar5 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar3) {
      param_2[2] = (long)puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_030681b8;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = (undefined8 *)param_2[3];
LAB_030681b8:
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar3) && (param_2[2] = (long)puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar4;
  }
  if (*(code **)(lVar6 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03068200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  return;
}


