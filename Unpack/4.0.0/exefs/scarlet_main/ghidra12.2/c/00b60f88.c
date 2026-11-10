/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b60f88; name: FUN_00b60f88
 */


void FUN_00b60f88(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  long *local_68;
  long *local_48;
  
  if (((DAT_0483a3b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0483a3b8), iVar7 != 0)) {
    FUN_00100190(&LAB_00b651c8,&DAT_0483a3a8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a3b8);
  }
  lVar8 = FUN_00b65398(auStack_70,param_1);
  puVar6 = DAT_0483a3a8;
  if (DAT_0483a3a8 != (undefined8 *)0x0) {
    plVar10 = (long *)DAT_0483a3a8[1];
    uVar2 = DAT_0483a3a8[2];
    uVar4 = *(undefined2 *)(DAT_0483a3a8 + 3);
    uVar5 = *(undefined2 *)((long)DAT_0483a3a8 + 0x1a);
    DAT_0483a3a8 = (undefined8 *)lVar8;
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar3 = *(int *)(lVar8 + 0x12c8);
    iVar7 = iVar3 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar7;
    if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
      *(int *)(lVar8 + 0x12cc) = iVar7;
    }
    (**(code **)*puVar6)(puVar6);
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar2,uVar4,uVar5);
    }
    else {
      FUN_00c48fe8(plVar10,uVar2,uVar4,uVar5);
    }
    lVar8 = FUN_00c4e600();
    iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar11 = (long *)*plVar10;
        plVar1 = plVar10;
        if (plVar10[600] != 0) {
          plVar1 = plVar10 + plVar10[600] * 3;
        }
        if (plVar1 == plVar10) {
          lVar14 = 0;
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          lVar14 = 0;
          plVar12 = plVar10;
          do {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + lVar14 * 3,plVar12);
              plVar11 = (long *)*plVar12;
              lVar14 = lVar13;
            }
            plVar12 = plVar12 + 3;
            lVar13 = lVar13 + 1;
          } while (plVar1 != plVar12);
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + lVar14 * 3,plVar10 + lVar13 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
    lVar8 = (long)DAT_0483a3a8;
  }
  DAT_0483a3a8 = (undefined8 *)lVar8;
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar8 = 0;
  if (DAT_0483a3a8 != (undefined8 *)0x0) {
    lVar8 = (long)DAT_0483a3a8 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar8;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


