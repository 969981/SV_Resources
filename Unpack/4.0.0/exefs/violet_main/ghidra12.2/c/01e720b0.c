/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e720b0; name: FUN_01e720b0
 */


undefined8 FUN_01e720b0(long *param_1,ulong param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  short *psVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  undefined8 uVar17;
  short *local_78;
  int local_70 [16];
  int local_14;
  
  lVar4 = FUN_0168bd44();
  if ((lVar4 == 0) || (*param_1 == 0)) {
    return 0;
  }
  FUN_019205c0(*(undefined8 *)(lVar4 + 0x28));
  lVar4 = *param_1;
  uVar5 = FUN_01920760(*(undefined8 *)(lVar4 + 0x30),*(undefined2 *)(lVar4 + 0x52),
                       param_2 & 0xffffffff);
  if ((uVar5 & 1) != 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar7 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar7;
    uVar6 = (uint)*(byte *)(lVar7 + 0x2c);
    uVar9 = uVar6 - 1;
    if ((uVar9 < 10 && uVar6 != 0) && uVar9 != 5) {
      local_78 = *(short **)(lVar4 + 0x30);
      uVar6 = 0;
      psVar8 = local_78;
      do {
        if (*psVar8 == 0) {
          if (uVar6 == 0) goto LAB_01e72410;
          break;
        }
        if (*psVar8 == 0x10) {
          lVar4 = (ulong)(ushort)psVar8[1] + 2;
          psVar8 = psVar8 + lVar4;
        }
        else {
          psVar8 = psVar8 + 1;
          lVar4 = 1;
        }
        uVar6 = (int)lVar4 + uVar6;
      } while (uVar6 < 0x800);
      local_14 = 0;
      iVar3 = (**(code **)(*DAT_0483b098 + 0x28))
                        (DAT_0483b098,local_70,*(undefined4 *)(&DAT_03d317dc + (ulong)uVar9 * 4),
                         &local_78,1);
      if ((iVar3 != 0) || (local_70[0] == 0)) {
LAB_01e72410:
        uVar17 = 1;
        goto LAB_01e72460;
      }
      uVar17 = 1;
      local_14 = 1;
      FUN_019a5cf0(&local_14,&local_78);
      if (local_14 < 1) goto LAB_01e72460;
    }
  }
  lVar4 = *param_1;
  if (((uint)param_2 & 0xff) < 0xb) {
    if (*(char *)(lVar4 + 0x54) == '\0') {
LAB_01e72444:
      uVar17 = 0;
      goto LAB_01e72460;
    }
    uVar9 = (uint)*(ushort *)(lVar4 + 0x50);
    if (*(ushort *)(lVar4 + 0x50) != 0) {
      puVar11 = (ushort *)(&PTR_DAT_04550d00)[param_2 & 0xff];
      puVar10 = *(ushort **)(lVar4 + 0x30);
      iVar3 = 0;
      do {
        while( true ) {
          uVar1 = *puVar11;
          *puVar10 = uVar1;
          if (uVar1 == 0) goto LAB_01e72458;
          if (uVar1 == 0x10) break;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + 1;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_01e72268;
        }
        puVar14 = puVar11 + 1;
        uVar1 = *puVar14;
        uVar6 = uVar1 + 2;
        bVar2 = uVar9 < uVar6;
        uVar9 = uVar9 - uVar6;
        if (bVar2 || uVar9 == 0) goto LAB_01e7244c;
        uVar12 = uVar1 + 1;
        uVar16 = uVar12 & 7;
        puVar10[1] = uVar1;
        puVar15 = puVar10 + 1;
        if (uVar16 != 0) {
          lVar7 = 0;
          do {
            lVar13 = lVar7;
            uVar12 = uVar12 - 1;
            uVar16 = uVar16 - 1;
            *(undefined2 *)((long)puVar10 + lVar13 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar13 + 4);
            lVar7 = lVar13 + 2;
          } while (uVar16 != 0);
          puVar10 = (ushort *)((long)puVar10 + lVar13 + 4);
          puVar11 = (ushort *)((long)puVar11 + lVar13 + 2);
          puVar14 = puVar11 + 1;
          puVar15 = puVar10;
        }
        if (6 < uVar1) {
          puVar10 = puVar15;
          do {
            puVar10[1] = puVar11[2];
            puVar10[2] = puVar14[2];
            puVar10[3] = puVar14[3];
            puVar10[4] = puVar14[4];
            puVar10[5] = puVar14[5];
            puVar10[6] = puVar14[6];
            puVar11 = puVar14 + 7;
            puVar10[7] = *puVar11;
            puVar14 = puVar14 + 8;
            uVar12 = uVar12 - 8;
            puVar10 = puVar10 + 8;
            *puVar10 = *puVar14;
          } while (uVar12 != 0);
        }
        puVar11 = puVar14;
        iVar3 = uVar6 + iVar3;
      } while (uVar9 != 0);
      goto LAB_01e72268;
    }
LAB_01e72454:
    iVar3 = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x54) == '\0') goto LAB_01e72444;
    uVar9 = (uint)*(ushort *)(lVar4 + 0x50);
    if (*(ushort *)(lVar4 + 0x50) == 0) goto LAB_01e72454;
    puVar10 = *(ushort **)(lVar4 + 0x30);
    iVar3 = 0;
    puVar11 = &DAT_03d316a2;
    do {
      uVar1 = *puVar11;
      *puVar10 = uVar1;
      if (uVar1 == 0) goto LAB_01e72458;
      if (uVar1 == 0x10) {
        puVar14 = puVar11 + 1;
        uVar1 = *puVar14;
        uVar6 = uVar1 + 2;
        bVar2 = uVar9 < uVar6;
        uVar9 = uVar9 - uVar6;
        if (bVar2 || uVar9 == 0) goto LAB_01e7244c;
        uVar12 = uVar1 + 1;
        uVar16 = uVar12 & 7;
        puVar10[1] = uVar1;
        puVar15 = puVar10 + 1;
        if (uVar16 != 0) {
          lVar7 = 0;
          do {
            lVar13 = lVar7;
            uVar12 = uVar12 - 1;
            uVar16 = uVar16 - 1;
            *(undefined2 *)((long)puVar10 + lVar13 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar13 + 4);
            lVar7 = lVar13 + 2;
          } while (uVar16 != 0);
          puVar10 = (ushort *)((long)puVar10 + lVar13 + 4);
          puVar11 = (ushort *)((long)puVar11 + lVar13 + 2);
          puVar14 = puVar11 + 1;
          puVar15 = puVar10;
        }
        if (6 < uVar1) {
          puVar10 = puVar15;
          do {
            puVar10[1] = puVar11[2];
            puVar10[2] = puVar14[2];
            puVar10[3] = puVar14[3];
            puVar10[4] = puVar14[4];
            puVar10[5] = puVar14[5];
            puVar10[6] = puVar14[6];
            puVar11 = puVar14 + 7;
            puVar10[7] = *puVar11;
            puVar14 = puVar14 + 8;
            uVar12 = uVar12 - 8;
            puVar10 = puVar10 + 8;
            *puVar10 = *puVar14;
          } while (uVar12 != 0);
        }
        puVar11 = puVar14;
        iVar3 = uVar6 + iVar3;
      }
      else {
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        iVar3 = iVar3 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
LAB_01e72268:
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      puVar10[-1] = 0;
    }
  }
LAB_01e72458:
  uVar17 = 0;
  *(short *)(lVar4 + 0x52) = (short)iVar3;
LAB_01e72460:
  FUN_01920670();
  return uVar17;
LAB_01e7244c:
  *puVar10 = 0;
  goto LAB_01e72458;
}


