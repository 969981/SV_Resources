/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300a508; name: FUN_0300a508
 */


void FUN_0300a508(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = -0x8000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = -0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = -0x8000000000000000;
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 0x15d8);
  if (iVar1 < 1) {
    iVar4 = 0;
  }
  else {
    FUN_0300b194(param_1 + 3,iVar1);
    iVar4 = (int)param_1[4];
  }
  if (iVar4 < iVar1) {
    lVar2 = (long)iVar1 * 0x28 + (long)iVar4 * -0x28;
    *(int *)(param_1 + 4) = iVar1;
    puVar5 = (undefined1 *)(param_1[3] + (long)iVar4 * 0x28 + 0x26);
    do {
      *(undefined2 *)(puVar5 + -2) = 0;
      lVar2 = lVar2 + -0x28;
      puVar5[-0x12] = 0;
      *(undefined8 *)(puVar5 + -0xe) = 0xffffffff00ffffff;
      *puVar5 = 0;
      puVar5 = puVar5 + 0x28;
    } while (lVar2 != 0);
  }
  else if (iVar1 < iVar4) {
    *(int *)(param_1 + 4) = iVar1;
  }
  iVar1 = *(int *)(*param_1 + 0x15d8);
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) < iVar1) {
    FUN_0300b33c(param_1 + 5,(long)iVar1);
  }
  if ((int)param_1[6] != iVar1) {
    *(int *)(param_1 + 6) = iVar1;
  }
  lVar2 = *param_3;
  iVar1 = *(int *)(*param_1 + 0x15d8);
  param_1[1] = lVar2;
  param_1[2] = lVar2 + (long)iVar1 * 0x20;
  if (*(char *)(*param_1 + 0x15de) != '\0') {
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < iVar1) {
      FUN_0300b474(param_1 + 7,PTR_PTR_047d1a50,(long)iVar1);
    }
    if ((int)param_1[8] != iVar1) {
      *(int *)(param_1 + 8) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < iVar1) {
      FUN_0300b564(param_1 + 9,(long)iVar1);
    }
    iVar4 = (int)param_1[10];
    if (iVar4 < iVar1) {
      lVar2 = param_1[9];
      puVar3 = (undefined4 *)(lVar2 + (long)iVar4 * 0x3c);
      *(int *)(param_1 + 10) = iVar1;
      do {
        *puVar3 = 0xffffff;
        *(undefined8 *)(puVar3 + 1) = 0x5f7ffff000000000;
        puVar3[3] = 0xffffff;
        *(undefined8 *)(puVar3 + 4) = 0x5f7ffff000000000;
        puVar3[6] = 0xffffff;
        *(undefined8 *)(puVar3 + 7) = 0x5f7ffff000000000;
        puVar3[9] = 0xffffff;
        *(undefined8 *)(puVar3 + 10) = 0x5f7ffff000000000;
        puVar3[0xc] = 0xffffff;
        *(undefined8 *)(puVar3 + 0xd) = 0x5f7ffff000000000;
        puVar3 = puVar3 + 0xf;
      } while (puVar3 != (undefined4 *)(lVar2 + (long)iVar1 * 0x3c));
    }
    else if (iVar1 < iVar4) {
      *(int *)(param_1 + 10) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 100) & 0x7fffffff) < iVar1) {
      FUN_0300b194(param_1 + 0xb,(long)iVar1);
    }
    iVar4 = (int)param_1[0xc];
    if (iVar4 < iVar1) {
      *(int *)(param_1 + 0xc) = iVar1;
      lVar2 = (long)iVar1 * 0x28 + (long)iVar4 * -0x28;
      puVar5 = (undefined1 *)(param_1[0xb] + (long)iVar4 * 0x28 + 0x26);
      do {
        *(undefined2 *)(puVar5 + -2) = 0;
        lVar2 = lVar2 + -0x28;
        puVar5[-0x12] = 0;
        *(undefined8 *)(puVar5 + -0xe) = 0xffffffff00ffffff;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x28;
      } while (lVar2 != 0);
    }
    else if (iVar1 < iVar4) {
      *(int *)(param_1 + 0xc) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) < iVar1) {
      FUN_0300b33c(param_1 + 0xd,(long)iVar1);
    }
    if (((int)param_1[0xe] < iVar1) || (iVar1 < (int)param_1[0xe])) {
      *(int *)(param_1 + 0xe) = iVar1;
    }
  }
  return;
}


