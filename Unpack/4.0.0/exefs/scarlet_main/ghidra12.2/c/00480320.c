/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00480320; name: FUN_00480320
 */


undefined8 FUN_00480320(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long *plVar10;
  char *__s;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar2 = FUN_0047e650(&DAT_047f3ba8,&LAB_004805b0);
  uVar4 = 0;
  if ((iVar2 != 0) && (DAT_047f3bac != 0)) {
    FUN_0047e5e0(DAT_047f3bc0);
    if (DAT_044b77a0 != 0) {
      plVar10 = &DAT_044b77a0;
      do {
        FUN_004515c0(DAT_047f3bc8,plVar10);
        plVar10 = plVar10 + 2;
      } while (*plVar10 != 0);
    }
    FUN_0047e600(DAT_047f3bc0);
    FUN_0047e5e0(DAT_047f3bc0);
    if (DAT_044b75c0 != 0) {
      plVar10 = &DAT_044b75c0;
      do {
        FUN_004515c0(DAT_047f3bc8,plVar10);
        plVar10 = plVar10 + 2;
      } while (*plVar10 != 0);
    }
    FUN_0047e600(DAT_047f3bc0);
    if (DAT_044b7440 != 0) {
      uVar7 = DAT_044b7440;
      puVar9 = &DAT_044b7450;
      do {
        puVar9[-2] = uVar7 | 0x2000000;
        uVar7 = *puVar9;
        puVar9 = puVar9 + 2;
      } while (uVar7 != 0);
    }
    FUN_0047e5e0(DAT_047f3bc0);
    if (DAT_044b7440 != 0) {
      plVar10 = (long *)&DAT_044b7440;
      do {
        FUN_004515c0(DAT_047f3bc8,plVar10);
        plVar10 = plVar10 + 2;
      } while (*plVar10 != 0);
    }
    FUN_0047e600(DAT_047f3bc0);
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    FUN_0047e5e0(DAT_047f3bc0);
    if ((DAT_047f3ba4 & 1) == 0) {
      lVar13 = 0;
      uVar11 = 0;
      uVar7 = 1;
      __s = &DAT_047f1b9c;
      do {
        plVar10 = &DAT_047f3bc8 + uVar7 * 2;
        lVar8 = *plVar10;
        (&DAT_047f3bc0)[uVar7 * 2] = uVar7 & 0xffffffff | 0x2000000;
        if ((uVar11 >> 0xd == 0) && (lVar8 == 0)) {
          iVar3 = FUN_0045b0d0(uVar7 & 0xffffffff,__s,0x2000 - uVar11);
          if (iVar3 != 0) {
            sVar6 = strlen(__s);
            *plVar10 = (long)__s;
            lVar8 = sVar6 + uVar11;
            lVar12 = sVar6 + lVar13;
            lVar13 = lVar12;
            if (0 < lVar12) {
              do {
                iVar3 = FUN_003f6e20((&DAT_047f1b9b)[lVar13],8);
                lVar12 = lVar13;
                if (iVar3 == 0) break;
                lVar8 = lVar8 + -1;
                lVar12 = lVar13 + -1;
                bVar1 = 0 < lVar13;
                lVar13 = lVar12;
              } while (lVar12 != 0 && bVar1);
            }
            lVar13 = lVar12 + 1;
            uVar11 = lVar8 + 1;
            (&DAT_047f1b9c)[lVar12] = 0;
          }
          lVar8 = *plVar10;
        }
        if (lVar8 == 0) {
          *plVar10 = (long)"unknown";
        }
        uVar7 = uVar7 + 1;
        __s = &DAT_047f1b9c + lVar13;
      } while (uVar7 != 0x80);
      DAT_047f3ba4 = 1;
      FUN_0047e600(DAT_047f3bc0);
      piVar5 = __errno_location();
      *piVar5 = iVar2;
      FUN_0047e5e0(DAT_047f3bc0);
      if (DAT_047f3bd0 != 0) {
        plVar10 = &DAT_047f3bd0;
        do {
          FUN_004515c0(DAT_047f3bc8,plVar10);
          plVar10 = plVar10 + 2;
        } while (*plVar10 != 0);
      }
    }
    FUN_0047e600(DAT_047f3bc0);
    uVar4 = 1;
  }
  return uVar4;
}


