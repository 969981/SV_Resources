/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00132670; name: FUN_00132670
 */


undefined8 FUN_00132670(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  byte bVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  lVar10 = *(long *)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x58);
  uVar2 = FUN_001334a0(lVar10);
  iVar11 = *(int *)(lVar14 + 0x28);
  lVar3 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar14 + 0x20),iVar11,
                       lVar14 + 0x2c,0x18,0x7fff,"labels/gotos");
  lVar9 = (long)iVar11;
  lVar5 = (lVar9 + (long)iVar11 * 2) * 8;
  *(long *)(lVar14 + 0x20) = lVar3;
  *(undefined8 *)(lVar3 + lVar5) = param_2;
  *(undefined4 *)(*(long *)(lVar14 + 0x20) + lVar5 + 0xc) = param_3;
  *(undefined1 *)(*(long *)(lVar14 + 0x20) + lVar5 + 0x10) =
       *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x42);
  *(undefined1 *)(*(long *)(lVar14 + 0x20) + lVar5 + 0x11) = 0;
  *(undefined4 *)(*(long *)(lVar14 + 0x20) + lVar5 + 8) = uVar2;
  *(int *)(lVar14 + 0x28) = iVar11 + 1;
  if (param_4 != 0) {
    *(undefined1 *)(*(long *)(lVar14 + 0x20) + lVar9 * 0x18 + 0x10) =
         *(undefined1 *)(*(long *)(lVar10 + 0x18) + 0x10);
  }
  lVar3 = *(long *)(param_1 + 0x58);
  iVar11 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0xc);
  iVar4 = *(int *)(lVar3 + 0x18);
  if (iVar11 < iVar4) {
    plVar13 = (long *)(*(long *)(lVar14 + 0x20) + lVar9 * 0x18);
    bVar12 = 0;
    do {
      while (*(long *)(*(long *)(lVar3 + 0x10) + (long)iVar11 * 0x18) != *plVar13) {
        iVar11 = iVar11 + 1;
        if (iVar4 <= iVar11) goto LAB_00132854;
      }
      lVar15 = *(long *)(param_1 + 0x58);
      lVar5 = (long)iVar11;
      lVar9 = lVar5 * 0x18;
      lVar14 = *(long *)(lVar15 + 0x10);
      if (*(byte *)(lVar14 + lVar9 + 0x10) < *(byte *)(plVar13 + 2)) {
        puVar7 = (undefined8 *)(lVar14 + lVar5 * 0x18);
        FUN_00132990(param_1,*puVar7,*(undefined4 *)((long)puVar7 + 0xc));
                    /* WARNING: Does not return */
        pcVar1 = (code *)UndefinedInstructionException(0,0x13290c);
        (*pcVar1)();
      }
      bVar12 = bVar12 | *(byte *)(*(long *)(lVar3 + 0x10) + lVar9 + 0x11);
      FUN_001334b0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(lVar14 + lVar5 * 0x18 + 8),
                   (int)plVar13[1]);
      uVar8 = *(int *)(lVar15 + 0x18) - 1;
      uVar6 = (ulong)uVar8;
      if (iVar11 < (int)uVar8) {
        do {
          puVar7 = (undefined8 *)(*(long *)(lVar15 + 0x10) + lVar9);
          lVar5 = lVar5 + 1;
          lVar9 = lVar9 + 0x18;
          *puVar7 = puVar7[3];
          puVar7[1] = puVar7[4];
          puVar7[2] = puVar7[5];
          uVar6 = (long)*(int *)(lVar15 + 0x18) - 1;
        } while (lVar5 < (long)uVar6);
      }
      *(int *)(lVar15 + 0x18) = (int)uVar6;
      iVar4 = *(int *)(lVar3 + 0x18);
    } while (iVar11 < iVar4);
LAB_00132854:
    if (bVar12 != 0) {
      uVar8 = (uint)*(byte *)(lVar10 + 0x42);
      do {
        if ((int)uVar8 < 1) {
          iVar11 = 0;
          goto LAB_001328b8;
        }
        iVar11 = uVar8 + *(int *)(lVar10 + 0x38) + -1;
        lVar3 = **(long **)(*(long *)(lVar10 + 0x10) + 0x58);
        uVar8 = uVar8 - 1;
      } while (*(char *)(lVar3 + (long)iVar11 * 0x18 + 9) == '\x03');
      iVar11 = *(byte *)(lVar3 + (long)iVar11 * 0x18 + 10) + 1;
LAB_001328b8:
      FUN_00133250(lVar10,0x36,iVar11,0,0,0);
      return 1;
    }
  }
  return 0;
}


