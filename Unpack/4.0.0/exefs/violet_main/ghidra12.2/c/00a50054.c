/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a50054; name: FUN_00a50054
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a50054(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  byte bVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar23 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar23;
  puVar13 = PTR_DAT_047d4bd0;
  puVar12 = PTR_DAT_047d4bc8;
  plVar7 = *(long **)(lVar23 + 0x1c0);
  plVar8 = *(long **)(lVar23 + 0x1c8);
  for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
    lVar21 = *plVar7;
    plVar15 = (long *)(*(code *)**(undefined8 **)(lVar21 + 0x28))((undefined8 *)(lVar21 + 0x28));
    if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
      uVar16 = FUN_01b3fb0c();
      *(undefined8 *)puVar13 = uVar16;
      __cxa_guard_release(puVar12);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar13) goto LAB_00a50124;
    }
  }
  lVar21 = 0;
LAB_00a50124:
  puVar13 = PTR_DAT_047d4b10;
  puVar12 = PTR_DAT_047d4b08;
  plVar7 = *(long **)(lVar23 + 0x1c0);
  plVar8 = *(long **)(lVar23 + 0x1c8);
  do {
    if (plVar7 == plVar8) {
      return;
    }
    lVar23 = *plVar7;
    puVar22 = (undefined8 *)(lVar23 + 0x28);
    plVar15 = (long *)(**(code **)*puVar22)(puVar22);
    if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
      uVar16 = FUN_01b3fb0c();
      *(undefined8 *)puVar13 = uVar16;
      __cxa_guard_release(puVar12);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar13) {
        if (lVar21 == 0) {
          return;
        }
        lVar18 = 0;
        do {
          lVar20 = lVar21 + lVar18 * 0x18;
          uVar6 = *(uint *)(lVar20 + 0x44);
          bVar19 = *(byte *)(lVar20 + 0x48);
          uVar10 = *(ushort *)(lVar20 + 0x4a);
          if (((*(int *)(lVar20 + 0x40) == 0 && uVar6 != 0) && bVar19 != 0) && uVar10 != 0) {
            cVar9 = *(char *)(lVar20 + 0x4c);
            lVar20 = lVar23 + lVar18 * 0x20;
            uVar17 = 0;
            puVar1 = (uint *)(lVar20 + 0x40);
            puVar2 = (uint *)(lVar20 + 0x44);
            puVar3 = (uint *)(lVar20 + 0x48);
            do {
              uVar11 = 1 << (ulong)(uVar17 & 0x1f);
              if ((uVar11 & uVar6) != 0) {
                *puVar1 = *puVar1 | uVar11;
                *puVar2 = *puVar2 | uVar11;
                *puVar3 = *puVar3 | uVar11;
              }
              uVar11 = 1 << (ulong)(uVar17 + 1 & 0x1f);
              if ((uVar11 & uVar6) != 0) {
                *puVar1 = *puVar1 | uVar11;
                *puVar2 = *puVar2 | uVar11;
                *puVar3 = *puVar3 | uVar11;
              }
              uVar17 = uVar17 + 2;
            } while (uVar17 != 0x20);
            pbVar4 = (byte *)(lVar20 + 0x52);
            if ((bVar19 & 1) != 0) {
              *pbVar4 = *pbVar4 | 1;
            }
            if ((bVar19 >> 1 & 1) != 0) {
              *pbVar4 = *pbVar4 | 2;
            }
            if ((bVar19 >> 2 & 1) != 0) {
              *pbVar4 = *pbVar4 | 4;
            }
            puVar5 = (ushort *)(lVar20 + 0x50);
            if ((uVar10 & 1) != 0) {
              *puVar5 = *puVar5 | 1;
            }
            if ((uVar10 >> 1 & 1) != 0) {
              *puVar5 = *puVar5 | 2;
            }
            if ((uVar10 >> 2 & 1) != 0) {
              *puVar5 = *puVar5 | 4;
            }
            if ((uVar10 >> 3 & 1) != 0) {
              *puVar5 = *puVar5 | 8;
            }
            if ((uVar10 >> 4 & 1) != 0) {
              *puVar5 = *puVar5 | 0x10;
            }
            if ((uVar10 >> 5 & 1) != 0) {
              *puVar5 = *puVar5 | 0x20;
            }
            if ((uVar10 >> 6 & 1) != 0) {
              *puVar5 = *puVar5 | 0x40;
            }
            if ((uVar10 >> 7 & 1) != 0) {
              *puVar5 = *puVar5 | 0x80;
            }
            if ((uVar10 >> 8 & 1) != 0) {
              *puVar5 = *puVar5 | 0x100;
            }
            bVar19 = 3;
            if (cVar9 == '\0') {
              bVar19 = 1;
            }
            *(byte *)(lVar20 + 0x53) = bVar19 | *(byte *)(lVar20 + 0x53);
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x402);
        return;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


