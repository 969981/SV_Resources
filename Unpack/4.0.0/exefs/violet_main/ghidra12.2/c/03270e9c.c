/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03270e9c; name: FUN_03270e9c
 */


void FUN_03270e9c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar3 = param_2[1];
  uVar1 = (long)uVar3 >> 0x3f;
  uVar4 = param_3[1];
  uVar8 = (long)uVar4 >> 0x3f;
  uVar16 = (*param_2 ^ uVar1) - uVar1;
  uVar12 = (*param_3 ^ uVar8) - uVar8;
  uVar14 = ((uVar4 ^ uVar8) - uVar8) - (ulong)((*param_3 ^ uVar8) < uVar8);
  uVar11 = ((uVar3 ^ uVar1) - uVar1) - (ulong)((*param_2 ^ uVar1) < uVar1);
  uVar15 = uVar16 >> 0x20;
  uVar16 = uVar16 & 0xffffffff;
  uVar18 = uVar12 >> 0x20;
  uVar12 = uVar12 & 0xffffffff;
  uVar5 = uVar14 >> 0x20;
  uVar14 = uVar14 & 0xffffffff;
  uVar9 = uVar12 * uVar15 + (uVar12 * uVar16 >> 0x20);
  uVar10 = uVar14 * uVar15 + (uVar14 * uVar16 >> 0x20);
  uVar1 = uVar18 * uVar16 + (uVar9 & 0xffffffff);
  uVar8 = uVar5 * uVar16 + (uVar10 & 0xffffffff);
  uVar9 = uVar18 * uVar15 + (uVar9 >> 0x20) + (uVar1 >> 0x20);
  uVar7 = uVar12 * uVar16 & 0xffffffff | uVar1 << 0x20;
  uVar10 = uVar5 * uVar15 + (uVar10 >> 0x20) + (uVar8 >> 0x20);
  uVar1 = uVar14 * uVar16 & 0xffffffff | uVar8 << 0x20;
  uVar17 = uVar11 >> 0x20;
  uVar11 = uVar11 & 0xffffffff;
  uVar16 = uVar1 + uVar9;
  uVar6 = (ulong)CARRY8(uVar1,uVar9);
  uVar9 = uVar14 * uVar17 + (uVar14 * uVar11 >> 0x20);
  uVar1 = uVar5 * uVar11 + (uVar9 & 0xffffffff);
  uVar2 = uVar14 * uVar11 & 0xffffffff | uVar1 << 0x20;
  uVar14 = uVar2 + uVar10;
  uVar15 = uVar14 + uVar6;
  uVar13 = uVar12 * uVar17 + (uVar12 * uVar11 >> 0x20);
  uVar8 = uVar18 * uVar11 + (uVar13 & 0xffffffff);
  uVar11 = uVar12 * uVar11 & 0xffffffff | uVar8 << 0x20;
  uVar12 = uVar16 + uVar11;
  uVar11 = (ulong)CARRY8(uVar16,uVar11);
  uVar8 = uVar18 * uVar17 + (uVar13 >> 0x20) + (uVar8 >> 0x20);
  uVar16 = uVar15 + uVar8;
  uVar13 = uVar16 + uVar11;
  uVar1 = uVar5 * uVar17 + (uVar9 >> 0x20) + (uVar1 >> 0x20) +
          (ulong)(CARRY8(uVar2,uVar10) || CARRY8(uVar14,uVar6)) +
          (ulong)(CARRY8(uVar15,uVar8) || CARRY8(uVar16,uVar11));
  uVar8 = uVar1;
  if ((long)(uVar4 ^ uVar3) < 0) {
    uVar8 = ~uVar7;
    uVar7 = -uVar7;
    uVar9 = ~uVar12;
    uVar12 = uVar9 + (uVar7 < uVar8);
    uVar9 = (ulong)CARRY8(uVar9,(ulong)(uVar7 < uVar8));
    uVar10 = ~uVar13;
    uVar8 = -uVar1;
    uVar13 = uVar10 + uVar9;
    if (!CARRY8(uVar10,uVar9)) {
      uVar8 = ~uVar1;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar12;
  param_1[2] = uVar13;
  param_1[3] = uVar8;
  return;
}


