/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0136ba88; name: FUN_0136ba88
 */


void FUN_0136ba88(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *plStack_68;
  
  local_80 = 0;
  uStack_78 = 0;
  local_88 = *(undefined4 *)(param_4 + 0x36c);
  local_84 = *(undefined1 *)(param_4 + 0x370);
  local_98 = param_2;
  uStack_90 = param_3;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x378,8);
  if (lVar7 == 0) {
    param_2 = (long *)0x0;
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_013742d0(lVar7,&local_98);
    uVar14 = 8;
    uVar15 = 0x378;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  plVar10 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar7;
  if (plVar10 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar4 = *(int *)(lVar7 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
      *(int *)(lVar7 + 0x12cc) = iVar6;
    }
    (**(code **)(*plVar10 + 0x18))(plVar10);
    plVar2 = *(long **)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar10,uVar3,uVar12);
    }
    else {
      FUN_00c48fe8(plVar2,plVar10,uVar3,uVar12);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        plStack_68 = plVar10;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar11 = (long *)*plVar10;
        plVar2 = plVar10;
        if (plVar10[600] != 0) {
          plVar2 = plVar10 + plVar10[600] * 3;
        }
        if (plVar2 == plVar10) {
          uVar13 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10);
            plVar11 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar2 == plVar1) {
            uVar13 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar11;
            if (bVar5) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10 + 3);
              plVar11 = (long *)plVar10[3];
            }
            uVar13 = (ulong)bVar5;
            plVar1 = plVar10 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 6);
                plVar11 = (long *)plVar10[6];
                uVar13 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 9);
                  plVar11 = (long *)plVar10[9];
                  uVar13 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xc);
                    plVar11 = (long *)plVar10[0xc];
                    uVar13 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xf);
                      plVar11 = (long *)plVar10[0xf];
                      uVar13 = 5;
                    }
                    uVar9 = 6;
                    for (local_a0 = plVar10 + 0x12; plVar2 != local_a0; local_a0 = local_a0 + 3) {
                      (**(code **)(*(long *)*local_a0 + 0xd0))();
                      if ((long *)*local_a0 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,local_a0);
                        plVar11 = (long *)*local_a0;
                        uVar13 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  FUN_0137d824(lVar7,&local_98);
  return;
}


