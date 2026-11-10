/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec1d4c; name: FUN_00ec1d4c
 */


void FUN_00ec1d4c(long *param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *__s;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *local_78;
  long *local_70;
  long *local_68;
  
  param_2 = (long *)*param_2;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    memset(__s,0,0x98);
    *(undefined8 *)((long)__s + 0x10) = 0xffffffffffffffff;
    memset((void *)((long)__s + 0x18),0,0x70);
    *(undefined1 *)((long)__s + 0x92) = 1;
    *(undefined8 *)((long)__s + 0x88) = 0xffffffffffffffff;
    *(undefined2 *)((long)__s + 0x90) = 0;
    *param_1 = (long)__s;
    param_1[1] = (long)param_2;
    param_1[2] = 0x98;
    param_1[3] = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = *param_1;
  }
  iVar6 = (**(code **)PTR_DAT_047e1db0)(param_3);
  *(long *)(lVar7 + 0x68) = (long)iVar6;
  iVar6 = (**(code **)PTR_DAT_047e1db8)(param_3);
  *(long *)(lVar7 + 0x70) = (long)iVar6;
  iVar6 = (**(code **)PTR_DAT_047e1dc0)(param_3);
  lVar11 = *(long *)(lVar7 + 0x40);
  *(long *)(lVar7 + 0x78) = (long)iVar6;
  *(undefined8 *)(lVar7 + 0x40) = param_3;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar4 = *(int *)(lVar8 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
      *(int *)(lVar8 + 0x12cc) = iVar6;
    }
    plVar10 = *(long **)(lVar7 + 0x48);
    uVar3 = *(undefined8 *)(lVar7 + 0x50);
    uVar13 = *(undefined8 *)(lVar7 + 0x58);
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,uVar3,uVar13);
    }
    else {
      FUN_00c48fe8(plVar10,lVar11,uVar3,uVar13);
    }
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        local_68 = plVar10;
        FUN_00c4ea30(&local_68,&local_70);
        plVar12 = (long *)*plVar10;
        plVar2 = plVar10;
        if (plVar10[600] != 0) {
          plVar2 = plVar10 + plVar10[600] * 3;
        }
        if (plVar2 == plVar10) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
            plVar12 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
              plVar12 = (long *)plVar10[3];
            }
            uVar14 = (ulong)bVar5;
            plVar1 = plVar10 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 6);
                plVar12 = (long *)plVar10[6];
                uVar14 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 9);
                  plVar12 = (long *)plVar10[9];
                  uVar14 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 0xc);
                    plVar12 = (long *)plVar10[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 0xf);
                      plVar12 = (long *)plVar10[0xf];
                      uVar14 = 5;
                    }
                    uVar9 = 6;
                    for (local_78 = plVar10 + 0x12; plVar2 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,local_78);
                        plVar12 = (long *)*local_78;
                        uVar14 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  *(undefined8 *)(lVar7 + 0x60) = param_5;
  *(undefined1 *)(lVar7 + 0x92) = 0;
  iVar6 = (**(code **)PTR_DAT_047e1dc8)(param_3);
  *(long *)(lVar7 + 0x80) = (long)iVar6;
  if ((param_4 & 0xfffffffd) == 1) {
    *(undefined1 *)(lVar7 + 0x90) = 1;
  }
  if ((param_4 & 0xfffffffe) == 2) {
    *(undefined1 *)(lVar7 + 0x91) = 1;
  }
  return;
}


