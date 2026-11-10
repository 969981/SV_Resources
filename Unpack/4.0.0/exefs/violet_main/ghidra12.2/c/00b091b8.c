/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b091b8; name: FUN_00b091b8
 */


void FUN_00b091b8(void)

{
  long *plVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
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
  
  if (((DAT_04839380 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04839380), iVar6 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  DAT_04839368 = DAT_04839370;
  if (DAT_04839370 != (undefined8 *)0x0) {
    return;
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar10 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar10;
  if (lVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar10 + 0x50);
  }
  if (((DAT_04839380 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04839380), iVar6 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar10 = FUN_00b0aa7c(auStack_70,uVar7);
  puVar5 = DAT_04839370;
  if (DAT_04839370 != (undefined8 *)0x0) {
    plVar9 = (long *)DAT_04839370[1];
    uVar7 = DAT_04839370[2];
    uVar3 = *(undefined2 *)(DAT_04839370 + 3);
    uVar4 = *(undefined2 *)((long)DAT_04839370 + 0x1a);
    DAT_04839370 = (undefined8 *)lVar10;
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar6 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar6;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar6;
    }
    (**(code **)*puVar5)(puVar5);
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar7,uVar3,uVar4);
    }
    else {
      FUN_00c48fe8(plVar9,uVar7,uVar3,uVar4);
    }
    lVar10 = FUN_00c4e600();
    iVar6 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
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
    lVar10 = (long)DAT_04839370;
  }
  DAT_04839370 = (undefined8 *)lVar10;
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar10 = 0;
  if (DAT_04839370 != (undefined8 *)0x0) {
    lVar10 = (long)DAT_04839370 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar10;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


