/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037f5d0; name: FUN_0037f5d0
 */


uint FUN_0037f5d0(long param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  
  lVar16 = *(long *)(param_1 + 0x60);
  uVar19 = *(uint *)(param_1 + 0xac);
  pcVar2 = (char *)(lVar16 + (ulong)uVar19);
  uVar18 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  uVar9 = *(int *)(param_1 + 0x50) - 0x106;
  uVar7 = *(uint *)(param_1 + 0xb4);
  uVar6 = 0;
  if (uVar9 <= uVar19) {
    uVar6 = uVar19 - uVar9;
  }
  uVar19 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= *(uint *)(param_1 + 0xb8)) {
    uVar19 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  iVar10 = (int)pcVar2 + 0x102;
  uVar9 = uVar7;
  if (*(uint *)(param_1 + 0xd0) <= uVar7) {
    uVar9 = *(uint *)(param_1 + 0xd0);
  }
  cVar12 = (pcVar2 + uVar18)[-1];
  cVar13 = pcVar2[uVar18];
  do {
    pcVar3 = (char *)(lVar16 + (param_2 & 0xffffffff));
    iVar17 = (int)uVar18;
    if ((((pcVar3[iVar17] == cVar13) && (pcVar3[(long)iVar17 + -1] == cVar12)) &&
        (*pcVar3 == *pcVar2)) && (pcVar3[1] == pcVar2[1])) {
      lVar14 = 0;
      lVar4 = lVar16 + 5 + (param_2 & 0xffffffff);
      do {
        pcVar3 = pcVar2 + lVar14;
        lVar5 = lVar4 + lVar14;
        iVar15 = (int)pcVar3;
        if (pcVar3[3] != *(char *)(lVar5 + -2)) {
          iVar15 = (iVar15 + 3) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[4] != *(char *)(lVar5 + -1)) {
          iVar15 = (iVar15 + 4) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[5] != *(char *)(lVar4 + lVar14)) {
          iVar15 = (iVar15 + 5) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[6] != *(char *)(lVar5 + 1)) {
          iVar15 = (iVar15 + 6) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[7] != *(char *)(lVar5 + 2)) {
          iVar15 = (iVar15 + 7) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[8] != *(char *)(lVar5 + 3)) {
          iVar15 = (iVar15 + 8) - iVar10;
          goto joined_r0x0037f75c;
        }
        if (pcVar3[9] != *(char *)(lVar5 + 4)) {
          iVar15 = (iVar15 + 9) - iVar10;
          goto joined_r0x0037f75c;
        }
        uVar1 = lVar14 + 2;
        lVar14 = lVar14 + 8;
      } while ((uVar1 < 0xfa) && (pcVar3[10] == *(char *)(lVar5 + 5)));
      iVar15 = ((int)pcVar2 + (int)lVar14 + 2) - iVar10;
joined_r0x0037f75c:
      uVar11 = iVar15 + 0x102;
      if (iVar17 < (int)uVar11) {
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar9 <= (int)uVar11) {
          if (uVar11 <= uVar7) {
            uVar7 = uVar11;
          }
          return uVar7;
        }
        cVar12 = pcVar2[iVar15 + 0x101];
        cVar13 = pcVar2[(int)uVar11];
        uVar18 = (ulong)uVar11;
      }
    }
    uVar8 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar8;
    if ((uVar8 <= uVar6) || (uVar19 = uVar19 - 1, uVar19 == 0)) {
      if ((uint)uVar18 <= uVar7) {
        uVar7 = (uint)uVar18;
      }
      return uVar7;
    }
  } while( true );
}


