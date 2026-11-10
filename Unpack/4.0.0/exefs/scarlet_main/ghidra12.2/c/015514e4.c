/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015514e4; name: FUN_015514e4
 */


void FUN_015514e4(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  ushort *__s;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  long *plVar19;
  size_t __n;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *local_80;
  long *local_70;
  long *local_68;
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_2 + 0x52);
  uVar7 = *(ushort *)(param_2 + 0x50);
  plVar19 = *(long **)(param_1 + 8);
  *(ushort *)(param_1 + 0x50) = uVar7;
  __n = (ulong)uVar7 << 1;
  __s = (ushort *)(**(code **)(*plVar19 + 0x10))(plVar19,__n,2);
  if (__s == (ushort *)0x0) {
    plVar19 = (long *)0x0;
    __n = 0;
    uVar23 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar19;
    lVar14 = *(long *)(lVar10 + 0x80) + 1;
    *(long *)(lVar10 + 0x80) = lVar14;
    if (uVar7 != 0) {
      memset(__s,0,__n);
      lVar14 = *(long *)(lVar10 + 0x80);
    }
    uVar23 = 2;
    *(long *)(lVar10 + 0x80) = lVar14 + -1;
  }
  lVar10 = *(long *)(param_1 + 0x30);
  *(ushort **)(param_1 + 0x30) = __s;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar6 = *(int *)(lVar14 + 0x12c8);
    iVar9 = iVar6 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar9;
    if (*(int *)(lVar14 + 0x12cc) <= iVar6) {
      *(int *)(lVar14 + 0x12cc) = iVar9;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar21 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,uVar5,uVar21);
    }
    else {
      FUN_00c48fe8(plVar12,lVar10,uVar5,uVar21);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        local_68 = plVar12;
        FUN_00c4ea30(&local_68,&local_70);
        plVar20 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar22 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12);
            plVar20 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar4 == plVar2) {
            uVar22 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != plVar20;
            if (bVar8) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12 + 3);
              plVar20 = (long *)plVar12[3];
            }
            uVar22 = (ulong)bVar8;
            plVar2 = plVar12 + 6;
            if (plVar4 == plVar2) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 6);
                plVar20 = (long *)plVar12[6];
                uVar22 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar4 == plVar2) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 9);
                  plVar20 = (long *)plVar12[9];
                  uVar22 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar4 == plVar2) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 0xc);
                    plVar20 = (long *)plVar12[0xc];
                    uVar22 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 0xf);
                      plVar20 = (long *)plVar12[0xf];
                      uVar22 = 5;
                    }
                    uVar11 = 6;
                    for (local_80 = plVar12 + 0x12; plVar4 != local_80; local_80 = local_80 + 3) {
                      (**(code **)(*(long *)*local_80 + 0xd0))();
                      if ((long *)*local_80 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,local_80);
                        plVar20 = (long *)*local_80;
                        uVar22 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + uVar11 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
    __s = *(ushort **)(param_1 + 0x30);
  }
  *(long **)(param_1 + 0x38) = plVar19;
  *(size_t *)(param_1 + 0x40) = __n;
  *(undefined8 *)(param_1 + 0x48) = uVar23;
  if (__s != (ushort *)0x0) {
    uVar13 = (uint)*(ushort *)(param_1 + 0x50);
    if (*(ushort *)(param_1 + 0x50) != 0) {
      puVar15 = *(ushort **)(param_2 + 0x30);
      iVar9 = 0;
      do {
        uVar7 = *puVar15;
        *__s = uVar7;
        if (uVar7 == 0) goto LAB_01551774;
        if (uVar7 == 0x10) {
          puVar17 = puVar15 + 1;
          uVar7 = *puVar17;
          uVar1 = uVar7 + 2;
          bVar8 = uVar13 < uVar1;
          uVar13 = uVar13 - uVar1;
          if (bVar8 || uVar13 == 0) {
            *__s = 0;
            goto LAB_01551774;
          }
          uVar16 = uVar7 + 1;
          uVar3 = uVar16 & 7;
          puVar18 = __s + 1;
          *puVar18 = uVar7;
          if (uVar3 != 0) {
            lVar10 = 0;
            do {
              lVar14 = lVar10;
              uVar16 = uVar16 - 1;
              uVar3 = uVar3 - 1;
              *(undefined2 *)((long)__s + lVar14 + 4) = *(undefined2 *)((long)puVar15 + lVar14 + 4);
              lVar10 = lVar14 + 2;
            } while (uVar3 != 0);
            puVar18 = (ushort *)((long)__s + lVar14 + 4);
            puVar15 = (ushort *)((long)puVar15 + lVar14 + 2);
            puVar17 = puVar15 + 1;
            __s = puVar18;
          }
          if (6 < uVar7) {
            do {
              puVar18[1] = puVar15[2];
              puVar18[2] = puVar17[2];
              puVar18[3] = puVar17[3];
              puVar18[4] = puVar17[4];
              puVar18[5] = puVar17[5];
              puVar18[6] = puVar17[6];
              puVar15 = puVar17 + 7;
              puVar18[7] = *puVar15;
              puVar17 = puVar17 + 8;
              uVar16 = uVar16 - 8;
              puVar18 = puVar18 + 8;
              *puVar18 = *puVar17;
              __s = puVar18;
            } while (uVar16 != 0);
          }
          puVar15 = puVar17;
          iVar9 = uVar1 + iVar9;
        }
        else {
          __s = __s + 1;
          puVar15 = puVar15 + 1;
          iVar9 = iVar9 + 1;
          uVar13 = uVar13 - 1;
        }
      } while (uVar13 != 0);
      if (iVar9 != 0) {
        __s[-1] = 0;
      }
    }
LAB_01551774:
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}


