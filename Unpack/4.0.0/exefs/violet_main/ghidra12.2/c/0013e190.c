/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013e190; name: FUN_0013e190
 */


void FUN_0013e190(long param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  iVar7 = (int)((ulong)*(byte *)(param_2 + 1) & 0xf);
  if (iVar7 == 7) {
    lVar3 = *(long *)(*param_2 + 0x18);
    lVar8 = *(long *)(param_1 + 0x18);
joined_r0x0013e1f0:
    if (lVar3 != 0) goto LAB_0013e1f4;
LAB_0013e228:
    puVar5 = (undefined8 *)(lVar8 + 0x50);
    bVar1 = *(byte *)(lVar8 + 0x58);
  }
  else {
    if (iVar7 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_2 + 1) & 0xf) * 8 +
                       0x1e0);
      lVar8 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e1f0;
    }
    lVar3 = *(long *)(*param_2 + 0x28);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e228;
LAB_0013e1f4:
    puVar5 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar8 + (ulong)param_5 * 8 + 0x118));
    bVar1 = *(byte *)(puVar5 + 1);
  }
  if ((bVar1 & 0xf) != 0) goto LAB_0013e28c;
  iVar7 = (int)((ulong)*(byte *)(param_3 + 1) & 0xf);
  if (iVar7 == 7) {
    lVar3 = *(long *)(*param_3 + 0x18);
    lVar8 = *(long *)(param_1 + 0x18);
joined_r0x0013e270:
    if (lVar3 != 0) goto LAB_0013e274;
LAB_0013e34c:
    puVar5 = (undefined8 *)(lVar8 + 0x50);
    bVar1 = *(byte *)(lVar8 + 0x58);
  }
  else {
    if (iVar7 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_3 + 1) & 0xf) * 8 +
                       0x1e0);
      lVar8 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e270;
    }
    lVar3 = *(long *)(*param_3 + 0x28);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e34c;
LAB_0013e274:
    puVar5 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar8 + (ulong)param_5 * 8 + 0x118));
    bVar1 = *(byte *)(puVar5 + 1);
  }
  if ((bVar1 & 0xf) != 0) {
LAB_0013e28c:
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x30);
    *puVar6 = *puVar5;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar6[2] = *param_2;
    *(char *)(puVar6 + 3) = (char)param_2[1];
    puVar6[4] = *param_3;
    *(char *)(puVar6 + 5) = (char)param_3[1];
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
      FUN_00127d10(param_1,puVar6,1);
    }
    else {
      FUN_00127da0();
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (param_4 - lVar3));
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + -0x10;
    *puVar5 = *(undefined8 *)(lVar3 + -0x10);
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar3 + -8);
    return;
  }
  if (4 < param_5 - 0xd) goto LAB_0013e3b0;
  do {
    if (((*(byte *)(param_2 + 1) & 0xf) == 3) && ((*(byte *)(param_3 + 1) & 0xf) == 3)) {
      FUN_001260f0(param_1,param_2,param_3);
    }
    FUN_001260d0(param_1,param_2,param_3,"perform bitwise operation on");
LAB_0013e3b0:
  } while (param_5 == 0x13);
  lVar3 = FUN_001260d0(param_1,param_2,param_3,"perform arithmetic on");
  lVar8 = *(long *)(lVar3 + 0x10);
  plVar11 = (long *)(lVar8 + -0x20);
  uVar9 = (ulong)*(byte *)(lVar8 + -0x18) & 0xf;
  iVar7 = (int)uVar9;
  if (iVar7 == 7) {
    lVar4 = *(long *)(*plVar11 + 0x18);
    lVar10 = *(long *)(lVar3 + 0x18);
joined_r0x0013e424:
    if (lVar4 != 0) goto LAB_0013e428;
LAB_0013e458:
    puVar5 = (undefined8 *)(lVar10 + 0x50);
    bVar1 = *(byte *)(lVar10 + 0x58);
  }
  else {
    if (iVar7 != 5) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + uVar9 * 8 + 0x1e0);
      lVar10 = *(long *)(lVar3 + 0x18);
      goto joined_r0x0013e424;
    }
    lVar4 = *(long *)(*plVar11 + 0x28);
    lVar10 = *(long *)(lVar3 + 0x18);
    if (lVar4 == 0) goto LAB_0013e458;
LAB_0013e428:
    puVar5 = (undefined8 *)FUN_0013d2c0(lVar4,*(undefined8 *)(lVar10 + 0x1c8));
    bVar1 = *(byte *)(puVar5 + 1);
  }
  if ((bVar1 & 0xf) != 0) goto LAB_0013e4bc;
  uVar9 = (ulong)*(byte *)(lVar8 + -8) & 0xf;
  plVar12 = (long *)(lVar8 + -0x10);
  iVar7 = (int)uVar9;
  if (iVar7 == 7) {
    lVar4 = *(long *)(*plVar12 + 0x18);
    lVar10 = *(long *)(lVar3 + 0x18);
joined_r0x0013e4a4:
    if (lVar4 == 0) goto LAB_0013e578;
LAB_0013e4a8:
    puVar5 = (undefined8 *)FUN_0013d2c0(lVar4,*(undefined8 *)(lVar10 + 0x1c8));
    bVar1 = *(byte *)(puVar5 + 1);
  }
  else {
    if (iVar7 != 5) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + uVar9 * 8 + 0x1e0);
      lVar10 = *(long *)(lVar3 + 0x18);
      goto joined_r0x0013e4a4;
    }
    lVar4 = *(long *)(*plVar12 + 0x28);
    lVar10 = *(long *)(lVar3 + 0x18);
    if (lVar4 != 0) goto LAB_0013e4a8;
LAB_0013e578:
    puVar5 = (undefined8 *)(lVar10 + 0x50);
    bVar1 = *(byte *)(lVar10 + 0x58);
  }
  if ((bVar1 & 0xf) == 0) {
    FUN_001260a0(lVar3,plVar11,plVar12);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x13e598);
    (*pcVar2)();
  }
LAB_0013e4bc:
  puVar6 = *(undefined8 **)(lVar3 + 0x10);
  lVar4 = *(long *)(lVar3 + 0x30);
  *puVar6 = *puVar5;
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar6[2] = *(undefined8 *)(lVar8 + -0x20);
  *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(lVar8 + -0x18);
  puVar6[4] = *(undefined8 *)(lVar8 + -0x10);
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(lVar8 + -8);
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 0x30;
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x3e) & 10) == 0) {
    FUN_00127d10(lVar3,puVar6,1);
  }
  else {
    FUN_00127da0();
  }
  puVar5 = (undefined8 *)((long)plVar11 + (*(long *)(lVar3 + 0x30) - lVar4));
  lVar8 = *(long *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x10) = lVar8 + -0x10;
  *puVar5 = *(undefined8 *)(lVar8 + -0x10);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar8 + -8);
  return;
}


