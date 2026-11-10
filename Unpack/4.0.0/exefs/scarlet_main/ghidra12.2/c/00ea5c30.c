/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea5c30; name: FUN_00ea5c30
 */


void FUN_00ea5c30(long *param_1,ushort param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined2 *__s;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  size_t __n;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *local_80;
  long *local_70;
  long *local_68;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_0459c8b0;
  param_1[1] = (long)plVar13;
  __n = (ulong)param_2 << 1;
  param_1[4] = (long)&PTR_LAB_0459c8e8;
  plVar17 = param_1 + 6;
  *plVar17 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined2 *)((long)param_1 + 0x52) = 0;
  *(ushort *)(param_1 + 10) = param_2;
  __s = (undefined2 *)(**(code **)(*plVar13 + 0x10))(plVar13,__n,2);
  if (__s == (undefined2 *)0x0) {
    plVar13 = (long *)0x0;
    __n = 0;
    lVar7 = 0;
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
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
    lVar12 = *(long *)(lVar8 + 0x80) + 1;
    *(long *)(lVar8 + 0x80) = lVar12;
    if (param_2 != 0) {
      memset(__s,0,__n);
      lVar12 = *(long *)(lVar8 + 0x80);
    }
    lVar7 = 2;
    *(long *)(lVar8 + 0x80) = lVar12 + -1;
  }
  lVar8 = *plVar17;
  *plVar17 = (long)__s;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar3 = *(int *)(lVar12 + 0x12c8);
    iVar6 = iVar3 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar6;
    if (*(int *)(lVar12 + 0x12cc) <= iVar3) {
      *(int *)(lVar12 + 0x12cc) = iVar6;
    }
    plVar10 = (long *)param_1[7];
    lVar12 = param_1[8];
    lVar15 = param_1[9];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar12,lVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar12,lVar15);
    }
    lVar8 = FUN_00c4e600();
    iVar6 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        local_68 = plVar10;
        FUN_00c4ea30(&local_68,&local_70);
        plVar14 = (long *)*plVar10;
        plVar2 = plVar10;
        if (plVar10[600] != 0) {
          plVar2 = plVar10 + plVar10[600] * 3;
        }
        if (plVar2 == plVar10) {
          uVar16 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10);
            plVar14 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar2 == plVar1) {
            uVar16 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10 + 3);
              plVar14 = (long *)plVar10[3];
            }
            uVar16 = (ulong)bVar5;
            plVar1 = plVar10 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,plVar10 + 6);
                plVar14 = (long *)plVar10[6];
                uVar16 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,plVar10 + 9);
                  plVar14 = (long *)plVar10[9];
                  uVar16 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,plVar10 + 0xc);
                    plVar14 = (long *)plVar10[0xc];
                    uVar16 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,plVar10 + 0xf);
                      plVar14 = (long *)plVar10[0xf];
                      uVar16 = 5;
                    }
                    uVar9 = 6;
                    for (local_80 = plVar10 + 0x12; plVar2 != local_80; local_80 = local_80 + 3) {
                      (**(code **)(*(long *)*local_80 + 0xd0))();
                      if ((long *)*local_80 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,local_80);
                        plVar14 = (long *)*local_80;
                        uVar16 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar16 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
    __s = (undefined2 *)*plVar17;
  }
  param_1[7] = (long)plVar13;
  param_1[8] = __n;
  param_1[9] = lVar7;
  if (__s != (undefined2 *)0x0) {
    *__s = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 1;
  }
  return;
}


