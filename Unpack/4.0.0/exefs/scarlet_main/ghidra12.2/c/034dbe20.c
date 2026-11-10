/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dbe20; name: FUN_034dbe20
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_034dbe20(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  
  puVar4 = PTR_DAT_047e2fd0;
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar8;
  if ((int)param_1[1] != 0) {
    do {
      lVar10 = puVar8[1];
      if (*(long *)(lVar10 + 0x10) != 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        (**(code **)(puVar4 + 0x30))(0);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined4 *)(lVar10 + 0x1c) = 0;
      }
      *(undefined8 *)(lVar10 + 8) = 0;
      (**(code **)(puVar4 + 0x30))(2,lVar10);
      uVar6 = *(uint *)(param_1 + 1);
      if (1 < uVar6) {
        lVar10 = *param_1 + (ulong)uVar6 * 0x10;
        uVar2 = *(undefined8 *)(lVar10 + -8);
        *puVar8 = *(undefined8 *)(lVar10 + -0x10);
        puVar8[1] = uVar2;
        uVar6 = *(uint *)(param_1 + 1);
      }
      puVar7 = (undefined8 *)*param_1;
      *(uint *)(param_1 + 1) = uVar6 - 1;
    } while (puVar7 + (ulong)(uVar6 - 1) * 2 != puVar8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar4 + 0x30))(0,puVar7);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  plVar5 = (long *)param_1[2];
  while (plVar5 != (long *)0x0) {
    param_1[2] = *plVar5;
    if ((long *)param_1[3] == plVar5) {
      param_1[3] = 0;
    }
    if ((plVar5 < (long *)param_1[5]) ||
       ((long *)param_1[5] + (ulong)*(uint *)(param_1 + 6) * 3 <= plVar5)) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    else {
      *plVar5 = param_1[4];
      param_1[4] = (long)plVar5;
    }
    plVar5 = (long *)param_1[2];
    *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
  }
  puVar3 = (ulong *)param_1[4];
  while (puVar3 != (ulong *)0x0) {
    puVar12 = (ulong *)*puVar3;
    if ((puVar3 < (ulong)param_1[5]) ||
       (bVar1 = param_1[5] + (ulong)*(uint *)(param_1 + 6) * 0x18 <= puVar3, puVar3 = puVar12, bVar1
       )) {
      (**(code **)(puVar4 + 0x30))(0);
      puVar3 = puVar12;
    }
  }
  if (param_1[5] != 0) {
    (**(code **)(puVar4 + 0x30))(0);
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar5 = (long *)param_1[8];
  while (plVar5 != (long *)0x0) {
    param_1[8] = *plVar5;
    if ((long *)param_1[9] == plVar5) {
      param_1[9] = 0;
    }
    if ((plVar5 < (long *)param_1[0xb]) ||
       ((long *)param_1[0xb] + (ulong)*(uint *)(param_1 + 0xc) * 4 <= plVar5)) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    else {
      *plVar5 = param_1[10];
      param_1[10] = (long)plVar5;
    }
    plVar5 = (long *)param_1[8];
    *(int *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + -1;
  }
  puVar3 = (ulong *)param_1[10];
  while (puVar3 != (ulong *)0x0) {
    puVar12 = (ulong *)*puVar3;
    if ((puVar3 < (ulong)param_1[0xb]) ||
       (bVar1 = param_1[0xb] + (ulong)*(uint *)(param_1 + 0xc) * 0x20 <= puVar3, puVar3 = puVar12,
       bVar1)) {
      (**(code **)(puVar4 + 0x30))(0);
      puVar3 = puVar12;
    }
  }
  if (param_1[0xb] != 0) {
    (**(code **)(puVar4 + 0x30))(0);
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar5 = (long *)param_1[0x12];
  if (plVar5 == (long *)0x0) {
LAB_034dc0fc:
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    plVar5 = (long *)param_1[0x14];
    if (plVar5 == (long *)0x0) {
LAB_034dc174:
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      return;
    }
    plVar9 = plVar5;
    do {
      plVar11 = (long *)*plVar9;
      param_1[0x14] = (long)plVar11;
      if ((long *)param_1[0x13] == plVar5) {
        param_1[0x13] = 0;
      }
      plVar5[4] = 0;
      plVar5[5] = 0;
      if (plVar5[1] != 0) {
        *(undefined4 *)(plVar5 + 2) = 0;
        (**(code **)(puVar4 + 0x30))(0);
        plVar5[1] = 0;
        *(undefined4 *)((long)plVar5 + 0x14) = 0;
      }
      (**(code **)(puVar4 + 0x30))(2,plVar9);
      if (plVar11 == (long *)0x0) goto LAB_034dc174;
      plVar5 = (long *)param_1[0x14];
      plVar9 = plVar11;
    } while (plVar5 == plVar11);
  }
  else {
    plVar9 = plVar5;
    do {
      plVar11 = (long *)*plVar9;
      param_1[0x12] = (long)plVar11;
      if ((long *)param_1[0x11] == plVar5) {
        param_1[0x11] = 0;
      }
      plVar5[4] = 0;
      plVar5[5] = 0;
      if (plVar5[1] != 0) {
        *(undefined4 *)(plVar5 + 2) = 0;
        (**(code **)(puVar4 + 0x30))(0);
        plVar5[1] = 0;
        *(undefined4 *)((long)plVar5 + 0x14) = 0;
      }
      (**(code **)(puVar4 + 0x30))(2,plVar9);
      if (plVar11 == (long *)0x0) goto LAB_034dc0fc;
      plVar5 = (long *)param_1[0x12];
      plVar9 = plVar11;
    } while (plVar5 == plVar11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


