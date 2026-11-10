/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03270b40; name: FUN_03270b40
 */


void FUN_03270b40(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  
  uVar10 = *param_2;
  uVar15 = param_2[1];
  if (uVar15 == 0 && uVar10 == 0) {
    uVar15 = *param_3;
    uVar10 = param_3[1];
  }
  else {
    uVar1 = *param_3;
    uVar11 = param_3[1];
    if (uVar11 != 0 || uVar1 != 0) {
      iVar2 = (-(uint)uVar10 & (uint)uVar10) - 1;
      iVar3 = (-(uint)uVar15 & (uint)uVar15) - 1;
      iVar4 = (-(uint)uVar1 & (uint)uVar1) - 1;
      uVar12 = (uint)(uVar10 >> 0x20);
      iVar5 = (-uVar12 & uVar12) - 1;
      uVar12 = (uint)(uVar15 >> 0x20);
      iVar6 = (-uVar12 & uVar12) - 1;
      iVar7 = (-(uint)uVar11 & (uint)uVar11) - 1;
      uVar12 = (uint)(uVar1 >> 0x20);
      iVar8 = (-uVar12 & uVar12) - 1;
      uVar12 = (uint)(byte)(POPCOUNT((char)iVar2) + POPCOUNT((char)((uint)iVar2 >> 8)) +
                           POPCOUNT((char)((uint)iVar2 >> 0x10)) +
                           POPCOUNT((char)((uint)iVar2 >> 0x18)));
      if (0x1f < uVar12) {
        uVar12 = (byte)(POPCOUNT((char)iVar5) + POPCOUNT((char)((uint)iVar5 >> 8)) +
                       POPCOUNT((char)((uint)iVar5 >> 0x10)) + POPCOUNT((char)((uint)iVar5 >> 0x18))
                       ) + 0x20;
      }
      uVar16 = (uint)(byte)(POPCOUNT((char)iVar3) + POPCOUNT((char)((uint)iVar3 >> 8)) +
                           POPCOUNT((char)((uint)iVar3 >> 0x10)) +
                           POPCOUNT((char)((uint)iVar3 >> 0x18)));
      if (0x1f < uVar16) {
        uVar16 = (byte)(POPCOUNT((char)iVar6) + POPCOUNT((char)((uint)iVar6 >> 8)) +
                       POPCOUNT((char)((uint)iVar6 >> 0x10)) + POPCOUNT((char)((uint)iVar6 >> 0x18))
                       ) + 0x20;
      }
      uVar16 = uVar16 + uVar12;
      if (uVar12 != 0x40) {
        uVar16 = uVar12;
      }
      uVar12 = (uint)(uVar11 >> 0x20);
      iVar2 = (-uVar12 & uVar12) - 1;
      uVar12 = (uint)(byte)(POPCOUNT((char)iVar4) + POPCOUNT((char)((uint)iVar4 >> 8)) +
                           POPCOUNT((char)((uint)iVar4 >> 0x10)) +
                           POPCOUNT((char)((uint)iVar4 >> 0x18)));
      if (0x1f < uVar12) {
        uVar12 = (byte)(POPCOUNT((char)iVar8) + POPCOUNT((char)((uint)iVar8 >> 8)) +
                       POPCOUNT((char)((uint)iVar8 >> 0x10)) + POPCOUNT((char)((uint)iVar8 >> 0x18))
                       ) + 0x20;
      }
      uVar18 = (uint)(byte)(POPCOUNT((char)iVar7) + POPCOUNT((char)((uint)iVar7 >> 8)) +
                           POPCOUNT((char)((uint)iVar7 >> 0x10)) +
                           POPCOUNT((char)((uint)iVar7 >> 0x18)));
      if (0x1f < uVar18) {
        uVar18 = (byte)(POPCOUNT((char)iVar2) + POPCOUNT((char)((uint)iVar2 >> 8)) +
                       POPCOUNT((char)((uint)iVar2 >> 0x10)) + POPCOUNT((char)((uint)iVar2 >> 0x18))
                       ) + 0x20;
      }
      uVar18 = uVar18 + uVar12;
      if (uVar12 != 0x40) {
        uVar18 = uVar12;
      }
      uVar12 = uVar16;
      if (uVar18 <= uVar16) {
        uVar12 = uVar18;
      }
      uVar13 = (ulong)uVar12;
      if (uVar16 < 0x80) {
        if (uVar16 != 0) {
          uVar18 = uVar16 - 0x40;
          uVar14 = uVar15;
          if (uVar16 < 0x40) {
            uVar18 = uVar16;
            uVar14 = uVar10;
          }
          uVar10 = 0;
          if (uVar16 < 0x40) {
            uVar10 = uVar15;
          }
          uVar10 = uVar10 << ((ulong)-uVar18 & 0x3f) | uVar14 >> ((ulong)uVar18 & 0x3f);
        }
      }
      else {
        uVar10 = 0;
      }
      uVar15 = uVar15 >> ((ulong)uVar16 & 0x3f);
      uVar16 = uVar12 - 0x40;
      uVar14 = uVar11;
      if (uVar12 < 0x40) {
        uVar16 = uVar12;
        uVar14 = uVar1;
      }
      uVar17 = 0;
      if (uVar12 < 0x40) {
        uVar17 = uVar11;
      }
      if (uVar12 != 0) {
        uVar1 = uVar17 << ((ulong)-uVar16 & 0x3f) | uVar14 >> ((ulong)uVar16 & 0x3f);
      }
      uVar14 = 0;
      if (uVar12 < 0x80) {
        uVar14 = uVar1;
      }
      uVar11 = uVar11 >> (uVar13 & 0x3f);
      do {
        iVar2 = (-(uint)uVar14 & (uint)uVar14) - 1;
        uVar16 = (uint)(uVar14 >> 0x20);
        iVar3 = (-uVar16 & uVar16) - 1;
        iVar4 = (-(uint)uVar11 & (uint)uVar11) - 1;
        uVar16 = (uint)(uVar11 >> 0x20);
        iVar5 = (-uVar16 & uVar16) - 1;
        uVar16 = (uint)(byte)(POPCOUNT((char)iVar2) + POPCOUNT((char)((uint)iVar2 >> 8)) +
                             POPCOUNT((char)((uint)iVar2 >> 0x10)) +
                             POPCOUNT((char)((uint)iVar2 >> 0x18)));
        if (0x1f < uVar16) {
          uVar16 = (byte)(POPCOUNT((char)iVar3) + POPCOUNT((char)((uint)iVar3 >> 8)) +
                         POPCOUNT((char)((uint)iVar3 >> 0x10)) +
                         POPCOUNT((char)((uint)iVar3 >> 0x18))) + 0x20;
        }
        uVar18 = (uint)(byte)(POPCOUNT((char)iVar4) + POPCOUNT((char)((uint)iVar4 >> 8)) +
                             POPCOUNT((char)((uint)iVar4 >> 0x10)) +
                             POPCOUNT((char)((uint)iVar4 >> 0x18)));
        if (0x1f < uVar18) {
          uVar18 = (byte)(POPCOUNT((char)iVar5) + POPCOUNT((char)((uint)iVar5 >> 8)) +
                         POPCOUNT((char)((uint)iVar5 >> 0x10)) +
                         POPCOUNT((char)((uint)iVar5 >> 0x18))) + 0x20;
        }
        uVar18 = uVar18 + uVar16;
        if (uVar16 != 0x40) {
          uVar18 = uVar16;
        }
        uVar16 = uVar18 - 0x40;
        uVar1 = uVar11;
        if (uVar18 < 0x40) {
          uVar16 = uVar18;
          uVar1 = uVar14;
        }
        uVar17 = 0;
        if (uVar18 < 0x40) {
          uVar17 = uVar11;
        }
        if (uVar18 != 0) {
          uVar14 = uVar17 << ((ulong)-uVar16 & 0x3f) | uVar1 >> ((ulong)uVar16 & 0x3f);
        }
        uVar17 = uVar11 >> ((ulong)uVar18 & 0x3f);
        uVar1 = 0;
        if (uVar18 < 0x80) {
          uVar1 = uVar14;
        }
        uVar9 = uVar1 - uVar10;
        uVar19 = (uVar17 - uVar15) - (ulong)(uVar1 < uVar10);
        uVar11 = -uVar19;
        if (~uVar9 <= -uVar9) {
          uVar11 = ~uVar19;
        }
        uVar14 = -uVar9;
        if ((uVar19 & 0x8000000000000000) == 0) {
          uVar1 = uVar10;
          uVar11 = uVar19;
          uVar14 = uVar9;
        }
        else {
          uVar15 = uVar17;
        }
        uVar10 = uVar1;
      } while (uVar11 != 0 || uVar14 != 0);
      if (uVar12 < 0x40) {
        if (uVar12 != 0) {
          uVar15 = uVar1 >> ((ulong)-uVar12 & 0x3f) | uVar15 << (uVar13 & 0x3f);
        }
        uVar10 = uVar1 << (uVar13 & 0x3f);
      }
      else {
        uVar10 = 0;
        uVar15 = uVar1 << (uVar13 & 0x3f);
      }
      *param_1 = uVar10;
      param_1[1] = uVar15;
      return;
    }
    uVar15 = *param_2;
    uVar10 = param_2[1];
  }
  *param_1 = uVar15;
  param_1[1] = uVar10;
  return;
}


