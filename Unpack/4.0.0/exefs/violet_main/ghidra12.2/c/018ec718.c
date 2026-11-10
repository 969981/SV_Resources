/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ec718; name: FUN_018ec718
 */


void FUN_018ec718(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 auStack_70 [8];
  long *local_68;
  long *local_48;
  
  if (((*PTR_DAT_047d8ce0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8ce0), iVar10 != 0)) {
    FUN_00100190(&LAB_00a30af4,PTR_DAT_047d8ce8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ce0);
  }
  lVar11 = FUN_018ecb94(auStack_70,param_1,param_2);
  puVar8 = PTR_DAT_047d8ce8;
  puVar15 = *(undefined8 **)PTR_DAT_047d8ce8;
  *(long *)PTR_DAT_047d8ce8 = lVar11;
  if (puVar15 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar15[1];
    uVar4 = puVar15[2];
    uVar6 = *(undefined2 *)(puVar15 + 3);
    uVar7 = *(undefined2 *)((long)puVar15 + 0x1a);
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    (**(code **)*puVar15)(puVar15);
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar4,uVar6,uVar7);
    }
    else {
      FUN_00c48fe8(plVar13,uVar4,uVar6,uVar7);
    }
    lVar11 = FUN_00c4e600();
    iVar10 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar13;
        plVar3 = plVar13;
        if (plVar13[600] != 0) {
          plVar3 = plVar13 + plVar13[600] * 3;
        }
        if (plVar3 == plVar13) {
          uVar16 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
            plVar14 = (long *)*plVar13;
          }
          plVar1 = plVar13 + 3;
          if (plVar3 == plVar1) {
            uVar16 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar9 = (long *)*plVar1 != plVar14;
            if (bVar9) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
              plVar14 = (long *)plVar13[3];
            }
            uVar16 = (ulong)bVar9;
            plVar1 = plVar13 + 6;
            if (plVar3 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 6);
                plVar14 = (long *)plVar13[6];
                uVar16 = 2;
              }
              plVar1 = plVar13 + 9;
              if (plVar3 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 9);
                  plVar14 = (long *)plVar13[9];
                  uVar16 = 3;
                }
                plVar1 = plVar13 + 0xc;
                if (plVar3 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xc);
                    plVar14 = (long *)plVar13[0xc];
                    uVar16 = 4;
                  }
                  plVar1 = plVar13 + 0xf;
                  if (plVar3 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xf);
                      plVar14 = (long *)plVar13[0xf];
                      uVar16 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar13 + 0x12; plVar3 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar16 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + uVar12 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
    lVar11 = *(long *)puVar8;
  }
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = lVar11 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar2;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


