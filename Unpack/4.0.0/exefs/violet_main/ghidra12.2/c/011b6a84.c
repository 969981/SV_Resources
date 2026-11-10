/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b6a84; name: thunk_FUN_011b6a88
 */


void thunk_FUN_011b6a88(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  ushort *puVar17;
  
  FUN_011b6d00(*(undefined8 *)(param_1 + 0x40),param_3,param_4,param_5,param_6);
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar8 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar8;
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    bVar6 = 1 < param_3;
    if (*(int *)(lVar8 + 0x2b0) != 3) {
      bVar6 = param_3 != 1;
    }
    uVar3 = 0x40000;
    if (!bVar6) {
      uVar3 = 0;
    }
    puVar4 = &LAB_00220000;
    if (param_3 != 0) {
      puVar4 = (undefined1 *)0x20000;
    }
    uVar9 = (ulong)param_2;
    lVar8 = uVar9 * 2 + (ulong)param_2;
    lVar12 = *(long *)(param_1 + 0x40);
    *(ulong *)(*(long *)(param_1 + 0x60) + lVar8 * 8 + 8) = uVar3 | (ulong)puVar4;
    lVar10 = *(long *)(param_1 + 0x60);
    lVar8 = *(long *)(lVar10 + lVar8 * 8);
    if (*(char *)(lVar8 + 0x54) != '\0') {
      uVar11 = (uint)*(ushort *)(lVar8 + 0x50);
      if (*(ushort *)(lVar8 + 0x50) == 0) {
        iVar7 = 0;
      }
      else {
        puVar15 = *(ushort **)(lVar12 + 0x30);
        iVar7 = 0;
        puVar13 = *(ushort **)(lVar8 + 0x30);
        do {
          uVar5 = *puVar15;
          *puVar13 = uVar5;
          if (uVar5 == 0) goto LAB_011b6c80;
          if (uVar5 == 0x10) {
            puVar17 = puVar15 + 1;
            uVar5 = *puVar17;
            uVar1 = uVar5 + 2;
            bVar6 = uVar11 < uVar1;
            uVar11 = uVar11 - uVar1;
            if (bVar6 || uVar11 == 0) {
              *puVar13 = 0;
              goto LAB_011b6c80;
            }
            uVar16 = uVar5 + 1;
            uVar2 = uVar16 & 7;
            puVar14 = puVar13 + 1;
            *puVar14 = uVar5;
            if (uVar2 != 0) {
              lVar10 = 0;
              do {
                lVar12 = lVar10;
                uVar16 = uVar16 - 1;
                uVar2 = uVar2 - 1;
                *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                     *(undefined2 *)((long)puVar15 + lVar12 + 4);
                lVar10 = lVar12 + 2;
              } while (uVar2 != 0);
              puVar13 = (ushort *)((long)puVar13 + lVar12 + 4);
              puVar15 = (ushort *)((long)puVar15 + lVar12 + 2);
              puVar17 = puVar15 + 1;
              puVar14 = puVar13;
            }
            if (6 < uVar5) {
              do {
                puVar14[1] = puVar15[2];
                puVar14[2] = puVar17[2];
                puVar14[3] = puVar17[3];
                puVar14[4] = puVar17[4];
                puVar14[5] = puVar17[5];
                puVar14[6] = puVar17[6];
                puVar15 = puVar17 + 7;
                puVar14[7] = *puVar15;
                puVar17 = puVar17 + 8;
                uVar16 = uVar16 - 8;
                puVar14 = puVar14 + 8;
                *puVar14 = *puVar17;
                puVar13 = puVar14;
              } while (uVar16 != 0);
            }
            puVar15 = puVar17;
            iVar7 = uVar1 + iVar7;
          }
          else {
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
            iVar7 = iVar7 + 1;
            uVar11 = uVar11 - 1;
          }
        } while (uVar11 != 0);
        if (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          puVar13[-1] = 0;
        }
      }
LAB_011b6c80:
      *(short *)(lVar8 + 0x52) = (short)iVar7;
      lVar10 = *(long *)(param_1 + 0x60);
    }
    *(undefined2 *)(lVar10 + uVar9 * 0x18 + 0x10) = 0;
    lVar8 = *(long *)(param_1 + 0x60) + uVar9 * 0x18;
    *(ushort *)(lVar8 + 0x12) = *(ushort *)(lVar8 + 0x12) & 0xfffe;
  }
  return;
}


