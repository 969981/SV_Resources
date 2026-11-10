/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293c93c; name: FUN_0293c93c
 */


void FUN_0293c93c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  ulong uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = &PTR_FUN_045f1138;
  puVar13 = param_1 + 0x81;
  do {
    puVar14 = puVar13 + -4;
    puVar10 = (undefined8 *)*puVar14;
    *puVar14 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar10)(puVar10);
      plVar9 = (long *)puVar13[-3];
      uVar4 = puVar13[-2];
      uVar11 = puVar13[-1];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar4,uVar11);
      }
      else {
        FUN_00c48fe8(plVar9,puVar10,uVar4,uVar11);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          local_68 = plVar9;
          FUN_00c4ea30(&local_68,&local_70);
          plVar12 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            uVar15 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
              plVar12 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              uVar15 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar12;
              if (bVar6) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
                plVar12 = (long *)plVar9[3];
              }
              uVar15 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 6);
                  plVar12 = (long *)plVar9[6];
                  uVar15 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 9);
                    plVar12 = (long *)plVar9[9];
                    uVar15 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 0xc);
                      plVar12 = (long *)plVar9[0xc];
                      uVar15 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 0xf);
                        plVar12 = (long *)plVar9[0xf];
                        uVar15 = 5;
                      }
                      local_78 = plVar9 + 0x12;
                      if (plVar3 == local_78) {
                        uVar8 = 6;
                      }
                      else {
                        uVar8 = 6;
                        do {
                          (**(code **)(*(long *)*local_78 + 0xd0))();
                          if ((long *)*local_78 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,local_78);
                            plVar12 = (long *)*local_78;
                            uVar15 = uVar8;
                          }
                          local_78 = local_78 + 3;
                          uVar8 = uVar8 + 1;
                        } while (plVar3 != local_78);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    puVar13 = puVar14;
  } while (puVar14 != param_1 + 1);
  return;
}


