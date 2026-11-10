/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118dcb4; name: FUN_0118dcb4
 */


void FUN_0118dcb4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  
  *(undefined8 *)(param_1 + 0x90) = param_3;
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x78,8);
  if (plVar7 == (long *)0x0) {
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
    lVar10 = *(long *)(param_1 + 0x90);
    *plVar7 = (long)(PTR_DAT_047e3238 + 0x10);
    FUN_00f3553c(plVar7 + 1);
    plVar7[0xe] = lVar10;
    FUN_00f35790(plVar7,param_2);
    uVar14 = 8;
    uVar15 = 0x78;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = *(long *)(param_1 + 0x48);
  *(long **)(param_1 + 0x48) = plVar7;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar6;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar6;
    }
    FUN_01093d74(lVar8);
    plVar7 = *(long **)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,uVar3,uVar11);
    }
    else {
      FUN_00c48fe8(plVar7,lVar8,uVar3,uVar11);
    }
    lVar8 = FUN_00c4e600();
    iVar6 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_70 = plVar7 + plVar7[600] * 3;
        local_68 = plVar7;
        FUN_00c4ea30(&local_68,&local_70);
        plVar12 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          uVar13 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
            plVar12 = (long *)*plVar7;
          }
          plVar1 = plVar7 + 3;
          if (plVar2 == plVar1) {
            uVar13 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
              plVar12 = (long *)plVar7[3];
            }
            uVar13 = (ulong)bVar5;
            plVar1 = plVar7 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 6);
                plVar12 = (long *)plVar7[6];
                uVar13 = 2;
              }
              plVar1 = plVar7 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 9);
                  plVar12 = (long *)plVar7[9];
                  uVar13 = 3;
                }
                plVar1 = plVar7 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xc);
                    plVar12 = (long *)plVar7[0xc];
                    uVar13 = 4;
                  }
                  plVar1 = plVar7 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xf);
                      plVar12 = (long *)plVar7[0xf];
                      uVar13 = 5;
                    }
                    uVar9 = 6;
                    for (local_78 = plVar7 + 0x12; plVar2 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,local_78);
                        plVar12 = (long *)*local_78;
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
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + uVar9 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = uVar15;
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  return;
}


