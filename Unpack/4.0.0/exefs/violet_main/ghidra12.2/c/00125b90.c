/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00125b90; name: FUN_00125b90
 */


void FUN_00125b90(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  int *piVar24;
  undefined1 auStack_88 [24];
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  uVar12 = FUN_0012e090(param_1,param_2,auStack_88 + 0x18);
  if ((*(byte *)((long)puVar4 + 0x3e) >> 1 & 1) != 0) goto LAB_00125da4;
  lVar21 = *(long *)(*(long *)*puVar4 + 0x18);
  lVar14 = *(long *)(lVar21 + 0x70);
  lVar15 = *(long *)(lVar21 + 0x58);
  if (lVar15 == 0) {
    iVar19 = -1;
  }
  else {
    uVar5 = *(uint *)(lVar21 + 0x28);
    iVar19 = (int)((ulong)(puVar4[4] - *(long *)(lVar21 + 0x40)) >> 2);
    uVar8 = iVar19 - 1;
    if ((uVar5 == 0) || (piVar18 = *(int **)(lVar21 + 0x60), iVar19 <= *piVar18)) {
      iVar20 = -1;
      iVar19 = *(int *)(lVar21 + 0x2c);
      if (-1 < (int)uVar8) goto LAB_00125cd4;
    }
    else {
      uVar7 = uVar8 >> 7;
      if ((int)uVar5 <= (int)uVar7) {
        uVar5 = uVar7;
      }
      piVar24 = piVar18 + (ulong)uVar7 * 2;
      do {
        uVar22 = uVar7;
        uVar10 = uVar5;
        if (uVar5 == uVar22) break;
        iVar20 = *piVar24;
        piVar24 = piVar24 + 2;
        uVar7 = uVar22 + 1;
        uVar10 = uVar22;
      } while (iVar20 < iVar19);
      iVar20 = piVar18[(long)(int)(uVar10 - 1) * 2];
      iVar19 = (piVar18 + (long)(int)(uVar10 - 1) * 2)[1];
      if (iVar20 < (int)uVar8) {
LAB_00125cd4:
        uVar13 = (ulong)iVar20;
        uVar17 = ~uVar13;
        if ((uVar8 - iVar20 & 3) != 0) {
          lVar21 = -((ulong)(uVar8 - iVar20) & 3);
          uVar23 = uVar13;
          do {
            uVar13 = uVar23 + 1;
            iVar19 = iVar19 + *(char *)(lVar15 + 1 + uVar23);
            bVar11 = lVar21 != -1;
            lVar21 = lVar21 + 1;
            uVar23 = uVar13;
          } while (bVar11);
        }
        if (2 < uVar17 + (long)(int)uVar8) {
          lVar21 = uVar13 - (long)(int)uVar8;
          pcVar16 = (char *)(uVar13 + lVar15 + 2);
          do {
            pbVar3 = (byte *)(pcVar16 + -1);
            cVar6 = *pcVar16;
            pcVar1 = pcVar16 + 1;
            pcVar2 = pcVar16 + 2;
            pcVar16 = pcVar16 + 4;
            iVar19 = iVar19 + (uint)*pbVar3 + (int)cVar6 + (int)*pcVar1 + (int)*pcVar2;
            lVar21 = lVar21 + 4;
          } while (lVar21 != 0);
        }
      }
    }
  }
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 8) == '\x04') {
      uVar13 = (ulong)*(byte *)(lVar14 + 0xb);
    }
    else {
      uVar13 = *(ulong *)(lVar14 + 0x10);
    }
    FUN_0012e8d0(auStack_88 + 0x18,lVar14 + 0x18,uVar13);
  }
  FUN_0012e860(param_1,"%s:%d: %s",auStack_88 + 0x18,iVar19,uVar12);
LAB_00125da4:
  FUN_00126240(param_1);
                    /* WARNING: Does not return */
  pcVar9 = (code *)UndefinedInstructionException(0,0x125dac);
  (*pcVar9)();
}


