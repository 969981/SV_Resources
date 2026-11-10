/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3c920; name: FUN_00a3c920
 */


void FUN_00a3c920(void)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_60;
  long *plStack_58;
  
  puVar4 = DAT_04836468;
  DAT_04836468 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar4)(puVar4);
    uVar6 = DAT_04836480;
    uVar5 = DAT_04836478;
    plVar9 = DAT_04836470;
    uVar8 = (**(code **)(*DAT_04836470 + 0xf8))(DAT_04836470);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar4,uVar5,uVar6);
    }
    else {
      FUN_00c48fe8(plVar9,puVar4,uVar5,uVar6);
    }
    lVar7 = FUN_00c4e600();
    iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_60 = plVar9 + plVar9[600] * 3;
        plStack_58 = plVar9;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar10 = (long *)*plVar9;
        plVar2 = plVar9;
        if (plVar9[600] != 0) {
          plVar2 = plVar9 + plVar9[600] * 3;
        }
        if (plVar2 == plVar9) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar9;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar10) {
              (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + lVar13 * 3,plVar11);
              plVar10 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + lVar13 * 3,plVar9 + lVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  return;
}


