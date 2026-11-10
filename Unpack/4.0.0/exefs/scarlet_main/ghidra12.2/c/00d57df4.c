/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d57df4; name: FUN_00d57df4
 */


void FUN_00d57df4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  puVar5 = PTR_DAT_047e1cf0;
  uVar8 = (**(code **)PTR_DAT_047e1cf0)(param_3);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x78) = 1;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,0x30,8);
  if (lVar9 == 0) {
    param_2 = (long *)0x0;
    uVar15 = 0;
    uVar8 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = 8;
    uVar15 = 0x30;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar9;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    plVar12 = *(long **)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,uVar3,uVar13);
    }
    else {
      FUN_00c48fe8(plVar12,lVar10,uVar3,uVar13);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar12;
        plVar2 = plVar12;
        if (plVar12[600] != 0) {
          plVar2 = plVar12 + plVar12[600] * 3;
        }
        if (plVar2 == plVar12) {
          local_80 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar1 = plVar12 + 3;
          if (plVar2 == plVar1) {
            local_80 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar6 = (long *)*plVar1 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            local_80 = (ulong)bVar6;
            plVar1 = plVar12 + 6;
            if (plVar2 == plVar1) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                local_80 = 2;
              }
              plVar1 = plVar12 + 9;
              if (plVar2 == plVar1) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  local_80 = 3;
                }
                plVar1 = plVar12 + 0xc;
                if (plVar2 == plVar1) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    local_80 = 4;
                  }
                  plVar1 = plVar12 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      local_80 = 5;
                    }
                    local_88 = plVar12 + 0x12;
                    uVar11 = 6;
                    if (plVar2 != local_88) {
                      do {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,local_88);
                          plVar14 = (long *)*local_88;
                          local_80 = uVar11;
                        }
                        local_88 = local_88 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar2 != local_88);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + uVar11 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  uVar8 = (**(code **)puVar5)(param_3);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  (**(code **)PTR_DAT_047e1cf8)(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}


