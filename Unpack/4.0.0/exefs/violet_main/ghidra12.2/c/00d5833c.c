/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5833c; name: FUN_00d5833c
 */


void FUN_00d5833c(long param_1,undefined8 *param_2,undefined4 param_3,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *local_100;
  undefined1 auStack_f0 [128];
  long *local_70;
  long *plStack_68;
  
  uVar10 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    uVar10 = *(ulong *)(param_1 + 0x68) / (param_4 & 0xffffffff);
  }
  *(ulong *)(param_1 + 0x68) = uVar10;
  (**(code **)PTR_DAT_047e1d00)(auStack_f0);
  (**(code **)PTR_DAT_047e1d08)(auStack_f0,param_2[2]);
  (**(code **)PTR_DAT_047e1d10)(auStack_f0,10);
  (**(code **)PTR_DAT_047e1d18)(auStack_f0,param_3);
  (**(code **)PTR_DAT_047e1d20)(auStack_f0,*(undefined4 *)(param_1 + 0x68));
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  }
  (**(code **)PTR_DAT_047e1d28)(auStack_f0,uVar7,*(undefined8 *)(param_1 + 0x10));
  plVar12 = (long *)*param_2;
  lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar8 == 0) {
    plVar12 = (long *)0x0;
    uVar16 = 0;
    uVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = 8;
    uVar16 = 0x80;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
  }
  lVar9 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar8;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar4 = *(int *)(lVar8 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
      *(int *)(lVar8 + 0x12cc) = iVar6;
    }
    plVar11 = *(long **)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,uVar3,uVar14);
    }
    else {
      FUN_00c48fe8(plVar11,lVar9,uVar3,uVar14);
    }
    lVar8 = FUN_00c4e600();
    iVar6 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70 = plVar11 + plVar11[600] * 3;
        plStack_68 = plVar11;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11);
            plVar13 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar2 == plVar1) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11 + 3);
              plVar13 = (long *)plVar11[3];
            }
            uVar15 = (ulong)bVar5;
            plVar1 = plVar11 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,plVar11 + 6);
                plVar13 = (long *)plVar11[6];
                uVar15 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,plVar11 + 9);
                  plVar13 = (long *)plVar11[9];
                  uVar15 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,plVar11 + 0xc);
                    plVar13 = (long *)plVar11[0xc];
                    uVar15 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,plVar11 + 0xf);
                      plVar13 = (long *)plVar11[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (local_100 = plVar11 + 0x12; plVar2 != local_100; local_100 = local_100 + 3)
                    {
                      (**(code **)(*(long *)*local_100 + 0xd0))();
                      if ((long *)*local_100 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,local_100);
                        plVar13 = (long *)*local_100;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar15 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x40);
  }
  *(long **)(param_1 + 0x48) = plVar12;
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = param_5;
  (**(code **)PTR_DAT_047e1d30)(lVar8,auStack_f0);
  *(undefined1 *)(param_1 + 0x91) = 1;
  return;
}


