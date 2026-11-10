/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013e3d0; name: FUN_0013e3d0
 */


void FUN_0013e3d0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x10);
  plVar9 = (long *)(lVar11 + -0x20);
  uVar7 = (ulong)*(byte *)(lVar11 + -0x18) & 0xf;
  iVar6 = (int)uVar7;
  if (iVar6 == 7) {
    lVar3 = *(long *)(*plVar9 + 0x18);
    lVar8 = *(long *)(param_1 + 0x18);
joined_r0x0013e424:
    if (lVar3 != 0) goto LAB_0013e428;
LAB_0013e458:
    puVar4 = (undefined8 *)(lVar8 + 0x50);
    bVar1 = *(byte *)(lVar8 + 0x58);
  }
  else {
    if (iVar6 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8 + 0x1e0);
      lVar8 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e424;
    }
    lVar3 = *(long *)(*plVar9 + 0x28);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e458;
LAB_0013e428:
    puVar4 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar8 + 0x1c8));
    bVar1 = *(byte *)(puVar4 + 1);
  }
  if ((bVar1 & 0xf) != 0) goto LAB_0013e4bc;
  uVar7 = (ulong)*(byte *)(lVar11 + -8) & 0xf;
  plVar10 = (long *)(lVar11 + -0x10);
  iVar6 = (int)uVar7;
  if (iVar6 == 7) {
    lVar3 = *(long *)(*plVar10 + 0x18);
    lVar8 = *(long *)(param_1 + 0x18);
joined_r0x0013e4a4:
    if (lVar3 == 0) goto LAB_0013e578;
LAB_0013e4a8:
    puVar4 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar8 + 0x1c8));
    bVar1 = *(byte *)(puVar4 + 1);
  }
  else {
    if (iVar6 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8 + 0x1e0);
      lVar8 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e4a4;
    }
    lVar3 = *(long *)(*plVar10 + 0x28);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) goto LAB_0013e4a8;
LAB_0013e578:
    puVar4 = (undefined8 *)(lVar8 + 0x50);
    bVar1 = *(byte *)(lVar8 + 0x58);
  }
  if ((bVar1 & 0xf) == 0) {
    FUN_001260a0(param_1,plVar9,plVar10);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x13e598);
    (*pcVar2)();
  }
LAB_0013e4bc:
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x30);
  *puVar5 = *puVar4;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar5[2] = *(undefined8 *)(lVar11 + -0x20);
  *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(lVar11 + -0x18);
  puVar5[4] = *(undefined8 *)(lVar11 + -0x10);
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(lVar11 + -8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
    FUN_00127d10(param_1,puVar5,1);
  }
  else {
    FUN_00127da0();
  }
  puVar4 = (undefined8 *)((long)plVar9 + (*(long *)(param_1 + 0x30) - lVar3));
  lVar11 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar11 + -0x10;
  *puVar4 = *(undefined8 *)(lVar11 + -0x10);
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(lVar11 + -8);
  return;
}


