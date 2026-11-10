/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018bb2dc; name: FUN_018bb2dc
 */


void FUN_018bb2dc(long param_1)

{
  ulong uVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  short *psVar10;
  short *psVar9;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar13 = *(long *)(param_1 + 0x70);
  uVar5 = *(long *)(param_1 + 0x78) - lVar13;
  if ((int)(uVar5 >> 3) < 1) {
    return;
  }
  uVar12 = uVar5 >> 3 & 0xffffffff;
  uVar14 = 1;
  uVar11 = 0;
  do {
    uVar1 = uVar11 + 1;
    if ((long)uVar1 < (long)(uVar5 * 0x20000000) >> 0x20) {
      lVar4 = *(long *)(lVar13 + uVar11 * 8);
      if (*(short **)(lVar4 + 0x1f0) != *(short **)(lVar4 + 0x1f8)) {
        uVar6 = uVar14;
        do {
          lVar7 = *(long *)(lVar13 + uVar6 * 8);
          psVar2 = *(short **)(lVar7 + 0x1f0);
          psVar3 = *(short **)(lVar7 + 0x1f8);
          if (psVar2 != psVar3) {
            psVar8 = *(short **)(lVar4 + 0x1f0);
LAB_018bb39c:
            psVar9 = psVar2;
LAB_018bb3a4:
            psVar10 = psVar9 + 1;
            if (*psVar8 != *psVar9) goto code_r0x018bb3b0;
            FUN_029b0e30(lVar4,uVar11 & 0xffffffff);
            uVar6 = uVar14;
            do {
              lVar4 = *(long *)(param_1 + 0x70);
              FUN_018bbe18(*(undefined8 *)(lVar13 + uVar11 * 8),*(long *)(lVar4 + uVar6 * 8) + 0x1f0
                           ,uVar6 & 0xffffffff);
              lVar4 = *(long *)(lVar4 + uVar6 * 8);
              uVar6 = uVar6 + 1;
              *(undefined8 *)(lVar4 + 0x1f8) = *(undefined8 *)(lVar4 + 0x1f0);
            } while (uVar12 != uVar6);
            lVar13 = *(long *)(lVar13 + uVar11 * 8);
            *(undefined8 *)(lVar13 + 0x1f8) = *(undefined8 *)(lVar13 + 0x1f0);
            break;
          }
LAB_018bb3c4:
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar12);
      }
    }
    if (uVar1 == uVar12) {
      return;
    }
    lVar13 = *(long *)(param_1 + 0x70);
    uVar14 = uVar14 + 1;
    uVar11 = uVar1;
  } while( true );
code_r0x018bb3b0:
  psVar9 = psVar10;
  if (psVar3 == psVar10) goto code_r0x018bb3b8;
  goto LAB_018bb3a4;
code_r0x018bb3b8:
  psVar8 = psVar8 + 1;
  if (psVar8 == *(short **)(lVar4 + 0x1f8)) goto LAB_018bb3c4;
  goto LAB_018bb39c;
}


