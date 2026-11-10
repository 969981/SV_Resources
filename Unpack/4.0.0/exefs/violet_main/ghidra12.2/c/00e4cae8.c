/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4cae8; name: FUN_00e4cae8
 */


void FUN_00e4cae8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *local_78;
  long *local_70;
  long *local_68;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar11 = *(long **)(param_2 + 0x60);
  lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1d0,8);
  if (lVar6 == 0) {
    plVar11 = (long *)0x0;
    lVar16 = 0;
    lVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    FUN_00e4d79c(lVar6,param_2);
    lVar15 = 8;
    lVar16 = 0x1d0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar7 = *param_1;
  *param_1 = lVar6;
  if (lVar7 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    FUN_00e4cfc4(lVar7);
    plVar9 = (long *)param_1[1];
    lVar6 = param_1[2];
    lVar12 = param_1[3];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar6,lVar12);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar6,lVar12);
    }
    lVar6 = FUN_00c4e600();
    iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_70 = plVar9 + plVar9[600] * 3;
        local_68 = plVar9;
        FUN_00c4ea30(&local_68,&local_70);
        plVar13 = (long *)*plVar9;
        plVar2 = plVar9;
        if (plVar9[600] != 0) {
          plVar2 = plVar9 + plVar9[600] * 3;
        }
        if (plVar2 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar13;
            if (bVar4) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar4;
            plVar1 = plVar9 + 6;
            if (plVar2 == plVar1) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar2 == plVar1) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar2 == plVar1) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (local_78 = plVar9 + 0x12; plVar2 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,local_78);
                        plVar13 = (long *)*local_78;
                        uVar14 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  param_1[1] = (long)plVar11;
  param_1[2] = lVar16;
  param_1[3] = lVar15;
  return;
}


