/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369cb0; name: FUN_00369cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00369cb0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 extraout_w1;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  
  puVar6 = PTR_DAT_047cc650;
  if ((DAT_047f07e0 & 1) == 0) {
    FUN_0038e500(1);
    *(undefined4 *)puVar6 = extraout_w1;
  }
  uVar3 = _UNK_03cab378;
  uVar2 = _DAT_03cab370;
  lVar19 = 0;
  do {
    FUN_0038db00(&DAT_047f07e8 + lVar19);
    *(undefined8 *)((long)&DAT_047f0818 + lVar19) = uVar3;
    *(undefined8 *)((long)&DAT_047f0810 + lVar19) = uVar2;
    uVar9 = FUN_0038c7b0(0x40);
    lVar20 = lVar19 + 0x38;
    *(undefined8 *)((long)&DAT_047f0808 + lVar19) = uVar9;
    uVar4 = _UNK_03cabce8;
    uVar9 = _DAT_03cabce0;
    lVar19 = lVar20;
  } while (lVar20 != 0x700);
  lVar19 = 0;
  do {
    lVar20 = lVar19 + 0x80;
    *(undefined8 *)(lVar19 + 0x47efa64) = uVar4;
    *(undefined8 *)(&DAT_047efa5c + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efa74) = uVar4;
    *(undefined8 *)(&DAT_047efa6c + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efa84) = uVar4;
    *(undefined8 *)(&DAT_047efa7c + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efa94) = uVar4;
    *(undefined8 *)(&DAT_047efa8c + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efaa4) = uVar4;
    *(undefined8 *)(&DAT_047efa9c + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efab4) = uVar4;
    *(undefined8 *)(&DAT_047efaac + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efac4) = uVar4;
    *(undefined8 *)(&DAT_047efabc + lVar19) = uVar9;
    *(undefined8 *)(lVar19 + 0x47efad4) = uVar4;
    *(undefined8 *)(&DAT_047efacc + lVar19) = uVar9;
    puVar5 = PTR_DAT_047cc648;
    lVar19 = lVar20;
  } while (lVar20 != 0xd80);
  lVar20 = *(long *)PTR_DAT_047cc628;
  lVar19 = 0;
  DAT_047f07e4 = 0;
  do {
    plVar1 = (long *)(lVar20 + lVar19 * 0x20);
    lVar11 = (long)plVar1 + 9;
    if (*plVar1 != 0) {
      lVar11 = plVar1[2];
    }
    uVar14 = plVar1[1] & 0xff;
    if (*plVar1 != 0) {
      uVar14 = plVar1[1];
    }
    uVar8 = FUN_0038cbd0(lVar11,uVar14,*(undefined4 *)puVar6);
    uVar13 = (ulong)uVar8;
    uVar10 = 0;
    uVar14 = uVar13 + 2;
    uVar16 = 2;
    lVar11 = (ulong)uVar8 * 8 + 0x47efa70;
    uVar15 = uVar13 + 1;
    *(uint *)(puVar5 + lVar19 * 4) = uVar8;
    uVar17 = uVar13;
    do {
      if (*(int *)(lVar11 + (uVar17 / 0x1b0) * -0xd80 + -0x10) == 0x6c) {
        puVar12 = (undefined4 *)(lVar11 + (uVar17 / 0x1b0) * -0xd80 + -0x10);
        uVar14 = (uVar10 + uVar13) % 0x1b0;
LAB_00369eb8:
        *(uint *)(&DAT_047efa5c + uVar14 * 8) = uVar8;
        *puVar12 = (int)lVar19;
        if (DAT_047f07e4 < uVar10) {
          DAT_047f07e4 = (uint)uVar10;
        }
        break;
      }
      if (*(int *)(lVar11 + (uVar15 / 0x1b0) * -0xd80 + -8) == 0x6c) {
        uVar10 = uVar10 + 1;
        puVar12 = (undefined4 *)(lVar11 + (uVar15 / 0x1b0) * -0xd80 + -8);
        uVar14 = (uVar10 + uVar13) % 0x1b0;
        goto LAB_00369eb8;
      }
      uVar18 = uVar14 / 0x1b0;
      if (*(int *)(lVar11 + uVar18 * -0xd80) == 0x6c) {
        uVar14 = uVar13 + uVar18 * -0x1b0 + uVar16;
        puVar12 = (undefined4 *)(lVar11 + uVar18 * -0xd80);
        uVar10 = uVar16;
        goto LAB_00369eb8;
      }
      uVar16 = uVar16 + 3;
      uVar10 = uVar10 + 3;
      uVar14 = uVar14 + 3;
      lVar11 = lVar11 + 0x18;
      uVar15 = uVar15 + 3;
      uVar17 = uVar17 + 3;
    } while (uVar16 != 0x1b2);
    puVar7 = PTR_DAT_047ccb88;
    lVar19 = lVar19 + 1;
    if (lVar19 == 0x6c) {
      lVar19 = 0;
      lVar20 = 0x55;
      do {
        FUN_00375bf4(*(long *)puVar7 + lVar19);
        lVar20 = lVar20 + -1;
        lVar19 = lVar19 + 0x50;
      } while (lVar20 != 0);
      return;
    }
  } while( true );
}


