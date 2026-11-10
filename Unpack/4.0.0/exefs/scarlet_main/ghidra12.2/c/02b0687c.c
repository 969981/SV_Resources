/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b0687c; name: FUN_02b0687c
 */


void FUN_02b0687c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  short *psVar15;
  ushort *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ushort *puVar20;
  ushort *puVar21;
  uint uVar22;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar6 = PTR_DAT_047d4bf0;
  puVar5 = PTR_DAT_047d4be8;
  plVar3 = *(long **)(lVar11 + 0x1c8);
  for (plVar2 = *(long **)(lVar11 + 0x1c0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar11 = *plVar2;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar6) goto LAB_02b06958;
    }
  }
  lVar11 = 0;
LAB_02b06958:
  iVar8 = 0;
  puVar16 = *(ushort **)(*param_1 + 0x30);
  uVar13 = 0x20;
  puVar14 = (ushort *)(lVar11 + 0x40);
  do {
    while( true ) {
      uVar4 = *puVar16;
      *puVar14 = uVar4;
      if (uVar4 == 0) goto LAB_02b06a74;
      if (uVar4 == 0x10) break;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
      iVar8 = iVar8 + 1;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_02b06a64;
    }
    puVar20 = puVar16 + 1;
    uVar4 = *puVar20;
    uVar1 = uVar4 + 2;
    bVar7 = uVar13 < uVar1;
    uVar13 = uVar13 - uVar1;
    if (bVar7 || uVar13 == 0) {
      *puVar14 = 0;
      goto LAB_02b06a74;
    }
    uVar18 = uVar4 + 1;
    uVar22 = uVar18 & 7;
    puVar14[1] = uVar4;
    puVar21 = puVar14 + 1;
    if (uVar22 != 0) {
      lVar17 = 0;
      do {
        lVar19 = lVar17;
        uVar18 = uVar18 - 1;
        uVar22 = uVar22 - 1;
        *(undefined2 *)((long)puVar14 + lVar19 + 4) = *(undefined2 *)((long)puVar16 + lVar19 + 4);
        lVar17 = lVar19 + 2;
      } while (uVar22 != 0);
      puVar14 = (ushort *)((long)puVar14 + lVar19 + 4);
      puVar16 = (ushort *)((long)puVar16 + lVar19 + 2);
      puVar20 = puVar16 + 1;
      puVar21 = puVar14;
    }
    if (6 < uVar4) {
      puVar14 = puVar21;
      do {
        puVar14[1] = puVar16[2];
        puVar14[2] = puVar20[2];
        puVar14[3] = puVar20[3];
        puVar14[4] = puVar20[4];
        puVar14[5] = puVar20[5];
        puVar14[6] = puVar20[6];
        puVar16 = puVar20 + 7;
        puVar14[7] = *puVar16;
        puVar20 = puVar20 + 8;
        uVar18 = uVar18 - 8;
        puVar14 = puVar14 + 8;
        *puVar14 = *puVar20;
      } while (uVar18 != 0);
    }
    puVar16 = puVar20;
    iVar8 = uVar1 + iVar8;
  } while (uVar13 != 0);
LAB_02b06a64:
  if (iVar8 != 0) {
    puVar14[-1] = 0;
  }
LAB_02b06a74:
  uVar12 = 0;
  do {
    uVar13 = 0;
    psVar15 = (short *)(lVar11 + uVar12 * 0x40 + 0x90);
    do {
      if (*psVar15 == 0) {
        if (uVar13 == 0) {
          lVar17 = lVar11 + (uVar12 & 0xffffffff) * 0x40 + 0x90;
          goto LAB_02b06dec;
        }
        break;
      }
      if (*psVar15 == 0x10) {
        lVar17 = (ulong)(ushort)psVar15[1] + 2;
        psVar15 = psVar15 + lVar17;
      }
      else {
        psVar15 = psVar15 + 1;
        lVar17 = 1;
      }
      uVar13 = (int)lVar17 + uVar13;
    } while (uVar13 < 0x800);
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x32) {
      FUN_02b3d8c0(lVar11 + 0x90,lVar11 + 0xd0);
      FUN_02b3d8c0(lVar11 + 0xd0,lVar11 + 0x110);
      FUN_02b3d8c0(lVar11 + 0x110,lVar11 + 0x150);
      FUN_02b3d8c0(lVar11 + 0x150,lVar11 + 400);
      FUN_02b3d8c0(lVar11 + 400,lVar11 + 0x1d0);
      FUN_02b3d8c0(lVar11 + 0x1d0,lVar11 + 0x210);
      FUN_02b3d8c0(lVar11 + 0x210,lVar11 + 0x250);
      FUN_02b3d8c0(lVar11 + 0x250,lVar11 + 0x290);
      FUN_02b3d8c0(lVar11 + 0x290,lVar11 + 0x2d0);
      FUN_02b3d8c0(lVar11 + 0x2d0,lVar11 + 0x310);
      FUN_02b3d8c0(lVar11 + 0x310,lVar11 + 0x350);
      FUN_02b3d8c0(lVar11 + 0x350,lVar11 + 0x390);
      FUN_02b3d8c0(lVar11 + 0x390,lVar11 + 0x3d0);
      FUN_02b3d8c0(lVar11 + 0x3d0,lVar11 + 0x410);
      FUN_02b3d8c0(lVar11 + 0x410,lVar11 + 0x450);
      FUN_02b3d8c0(lVar11 + 0x450,lVar11 + 0x490);
      FUN_02b3d8c0(lVar11 + 0x490,lVar11 + 0x4d0);
      FUN_02b3d8c0(lVar11 + 0x4d0,lVar11 + 0x510);
      FUN_02b3d8c0(lVar11 + 0x510,lVar11 + 0x550);
      FUN_02b3d8c0(lVar11 + 0x550,lVar11 + 0x590);
      FUN_02b3d8c0(lVar11 + 0x590,lVar11 + 0x5d0);
      FUN_02b3d8c0(lVar11 + 0x5d0,lVar11 + 0x610);
      FUN_02b3d8c0(lVar11 + 0x610,lVar11 + 0x650);
      FUN_02b3d8c0(lVar11 + 0x650,lVar11 + 0x690);
      FUN_02b3d8c0(lVar11 + 0x690,lVar11 + 0x6d0);
      FUN_02b3d8c0(lVar11 + 0x6d0,lVar11 + 0x710);
      FUN_02b3d8c0(lVar11 + 0x710,lVar11 + 0x750);
      FUN_02b3d8c0(lVar11 + 0x750,lVar11 + 0x790);
      FUN_02b3d8c0(lVar11 + 0x790,lVar11 + 2000);
      FUN_02b3d8c0(lVar11 + 2000,lVar11 + 0x810);
      FUN_02b3d8c0(lVar11 + 0x810,lVar11 + 0x850);
      FUN_02b3d8c0(lVar11 + 0x850,lVar11 + 0x890);
      FUN_02b3d8c0(lVar11 + 0x890,lVar11 + 0x8d0);
      FUN_02b3d8c0(lVar11 + 0x8d0,lVar11 + 0x910);
      FUN_02b3d8c0(lVar11 + 0x910,lVar11 + 0x950);
      FUN_02b3d8c0(lVar11 + 0x950,lVar11 + 0x990);
      FUN_02b3d8c0(lVar11 + 0x990,lVar11 + 0x9d0);
      FUN_02b3d8c0(lVar11 + 0x9d0,lVar11 + 0xa10);
      FUN_02b3d8c0(lVar11 + 0xa10,lVar11 + 0xa50);
      FUN_02b3d8c0(lVar11 + 0xa50,lVar11 + 0xa90);
      FUN_02b3d8c0(lVar11 + 0xa90,lVar11 + 0xad0);
      FUN_02b3d8c0(lVar11 + 0xad0,lVar11 + 0xb10);
      FUN_02b3d8c0(lVar11 + 0xb10,lVar11 + 0xb50);
      FUN_02b3d8c0(lVar11 + 0xb50,lVar11 + 0xb90);
      FUN_02b3d8c0(lVar11 + 0xb90,lVar11 + 0xbd0);
      FUN_02b3d8c0(lVar11 + 0xbd0,lVar11 + 0xc10);
      FUN_02b3d8c0(lVar11 + 0xc10,lVar11 + 0xc50);
      FUN_02b3d8c0(lVar11 + 0xc50,lVar11 + 0xc90);
      lVar17 = lVar11 + 0xcd0;
      FUN_02b3d8c0(lVar11 + 0xc90,lVar17);
LAB_02b06dec:
      FUN_02b3d8c0(lVar17,(ushort *)(lVar11 + 0x40));
      return;
    }
  } while( true );
}


