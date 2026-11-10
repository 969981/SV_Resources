/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117f914; name: FUN_0117f914
 */


void FUN_0117f914(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *local_b8;
  undefined1 auStack_b0 [64];
  long *local_70;
  long *plStack_68;
  
  (**(code **)PTR_DAT_047e1cd8)(auStack_b0);
  (**(code **)PTR_DAT_047e1ce0)(auStack_b0,param_2[2]);
  lVar7 = (**(code **)PTR_DAT_047e1da8)(*(undefined8 *)(param_1 + 0x40));
  lVar7 = *(long *)(param_1 + 0x70) * lVar7 * *(long *)(param_1 + 0x78);
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  }
  (**(code **)PTR_DAT_047e1ce8)(auStack_b0,uVar8,*(undefined8 *)(param_1 + 0x10),lVar7);
  *(long *)(param_1 + 0x80) = lVar7;
  plVar12 = (long *)*param_2;
  lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
  if (lVar7 == 0) {
    plVar12 = (long *)0x0;
    uVar15 = 0;
    uVar8 = 0;
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
    uVar8 = 8;
    uVar15 = 0x30;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar7;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar4 = *(int *)(lVar7 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
      *(int *)(lVar7 + 0x12cc) = iVar6;
    }
    plVar11 = *(long **)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,uVar3,uVar13);
    }
    else {
      FUN_00c48fe8(plVar11,lVar9,uVar3,uVar13);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70 = plVar11 + plVar11[600] * 3;
        plStack_68 = plVar11;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          uVar16 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
            plVar14 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar2 == plVar1) {
            uVar16 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
              plVar14 = (long *)plVar11[3];
            }
            uVar16 = (ulong)bVar5;
            plVar1 = plVar11 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,plVar11 + 6);
                plVar14 = (long *)plVar11[6];
                uVar16 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,plVar11 + 9);
                  plVar14 = (long *)plVar11[9];
                  uVar16 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,plVar11 + 0xc);
                    plVar14 = (long *)plVar11[0xc];
                    uVar16 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,plVar11 + 0xf);
                      plVar14 = (long *)plVar11[0xf];
                      uVar16 = 5;
                    }
                    uVar10 = 6;
                    for (local_b8 = plVar11 + 0x12; plVar2 != local_b8; local_b8 = local_b8 + 3) {
                      (**(code **)(*(long *)*local_b8 + 0xd0))();
                      if ((long *)*local_b8 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,local_b8);
                        plVar14 = (long *)*local_b8;
                        uVar16 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar16 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
    lVar7 = *(long *)(param_1 + 0x20);
  }
  *(long **)(param_1 + 0x28) = plVar12;
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  (**(code **)PTR_DAT_047e1cf8)(lVar7,auStack_b0);
  return;
}


