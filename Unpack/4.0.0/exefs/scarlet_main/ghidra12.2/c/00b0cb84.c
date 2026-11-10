/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0cb84; name: FUN_00b0cb84
 */


void FUN_00b0cb84(void)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  long *local_68 [3];
  long *local_48;
  
  if (((DAT_04839420 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04839420), iVar7 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  DAT_04839408 = DAT_04839410;
  if (DAT_04839410 == (undefined8 *)0x0) {
    if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8cc8);
    }
    lVar10 = *(long *)PTR_DAT_047d8cd0;
    *(long *)PTR_DAT_047d8cd8 = lVar10;
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x50), lVar10 != 0)) {
      if (((DAT_04839420 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04839420), iVar7 != 0)) {
        FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04839420);
      }
      lVar10 = FUN_00b12a20(auStack_70,lVar10);
      puVar6 = DAT_04839410;
      if (DAT_04839410 != (undefined8 *)0x0) {
        plVar9 = (long *)DAT_04839410[1];
        uVar2 = DAT_04839410[2];
        uVar4 = *(undefined2 *)(DAT_04839410 + 3);
        uVar5 = *(undefined2 *)((long)DAT_04839410 + 0x1a);
        DAT_04839410 = (undefined8 *)lVar10;
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar3 = *(int *)(lVar10 + 0x12c8);
        iVar7 = iVar3 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar7;
        if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
          *(int *)(lVar10 + 0x12cc) = iVar7;
        }
        (**(code **)*puVar6)(puVar6);
        uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar4,uVar5);
        }
        else {
          FUN_00c48fe8(plVar9,uVar2,uVar4,uVar5);
        }
        lVar10 = FUN_00c4e600();
        iVar7 = *(int *)(lVar10 + 0x12c8) + -1;
        *(int *)(lVar10 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_68[0] = plVar9 + plVar9[600] * 3;
            local_48 = plVar9;
            FUN_00c4ea30(&local_48,local_68);
            plVar11 = (long *)*plVar9;
            plVar1 = plVar9;
            if (plVar9[600] != 0) {
              plVar1 = plVar9 + plVar9[600] * 3;
            }
            if (plVar1 == plVar9) {
              lVar14 = 0;
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              lVar14 = 0;
              plVar12 = plVar9;
              do {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + lVar14 * 3,plVar12);
                  plVar11 = (long *)*plVar12;
                  lVar14 = lVar13;
                }
                plVar12 = plVar12 + 3;
                lVar13 = lVar13 + 1;
              } while (plVar1 != plVar12);
            }
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + lVar14 * 3,plVar9 + lVar13 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar10 + 0x12cc) = 0;
        }
        lVar10 = (long)DAT_04839410;
      }
      DAT_04839410 = (undefined8 *)lVar10;
      if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
        FUN_01dace90();
      }
      lVar10 = 0;
      if (DAT_04839410 != (undefined8 *)0x0) {
        lVar10 = (long)DAT_04839410 + 0x20;
      }
      *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar10;
      DAT_04865a18 = DAT_04865a18 + 1;
      return;
    }
  }
  return;
}


