/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270fef4; name: FUN_0270fef4
 */


void FUN_0270fef4(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *local_60;
  long *aplStack_58 [3];
  
  if (((*PTR_DAT_047e0d80 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  puVar13 = *(undefined8 **)PTR_DAT_047e0d88;
  *(undefined8 *)PTR_DAT_047e0d88 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar13[1];
    uVar3 = puVar13[2];
    uVar5 = *(undefined2 *)(puVar13 + 3);
    uVar6 = *(undefined2 *)((long)puVar13 + 0x1a);
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar8;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar8;
    }
    (**(code **)*puVar13)(puVar13);
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar3,uVar5,uVar6);
    }
    else {
      FUN_00c48fe8(plVar11,uVar3,uVar5,uVar6);
    }
    lVar9 = FUN_00c4e600();
    iVar8 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_60 = plVar11 + plVar11[600] * 3;
        aplStack_58[0] = plVar11;
        FUN_00c4ea30(aplStack_58,&local_60);
        plVar12 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          uVar14 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
            plVar12 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar12;
            if (bVar7) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
              plVar12 = (long *)plVar11[3];
            }
            uVar14 = (ulong)bVar7;
            plVar1 = plVar11 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 6);
                plVar12 = (long *)plVar11[6];
                uVar14 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 9);
                  plVar12 = (long *)plVar11[9];
                  uVar14 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 0xc);
                    plVar12 = (long *)plVar11[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 0xf);
                      plVar12 = (long *)plVar11[0xf];
                      uVar14 = 5;
                    }
                    uVar10 = 6;
                    for (plVar1 = plVar11 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar1);
                        plVar12 = (long *)*plVar1;
                        uVar14 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return;
}


