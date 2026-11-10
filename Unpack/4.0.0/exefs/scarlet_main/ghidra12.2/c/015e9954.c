/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e9954; name: FUN_015e9954
 */


void FUN_015e9954(long *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  long *plVar20;
  size_t __n;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  ulong local_88;
  long *local_70;
  long *plStack_68;
  
  param_1[2] = 0;
  puVar6 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = *(long **)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_0459c8b0;
  param_1[1] = (long)plVar20;
  uVar15 = 0;
  param_1[4] = (long)&PTR_LAB_0459c8e8;
  param_1[9] = 0;
  plVar24 = param_1 + 6;
  *plVar24 = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar10 = param_2;
  do {
    if (*puVar10 == 0) break;
    if (*puVar10 == 0x10) {
      lVar9 = (ulong)puVar10[1] + 2;
      puVar10 = puVar10 + lVar9;
    }
    else {
      puVar10 = puVar10 + 1;
      lVar9 = 1;
    }
    uVar15 = (int)lVar9 + uVar15;
  } while (uVar15 < 0x800);
  uVar1 = uVar15 + 1;
  *(short *)((long)param_1 + 0x52) = (short)uVar15;
  *(short *)(param_1 + 10) = (short)uVar1;
  __n = ((ulong)uVar1 & 0xffff) << 1;
  puVar10 = (ushort *)(**(code **)(*plVar20 + 0x10))(plVar20,__n,2);
  if (puVar10 == (ushort *)0x0) {
    plVar20 = (long *)0x0;
    __n = 0;
    lVar9 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
    lVar16 = *(long *)(lVar11 + 0x80) + 1;
    *(long *)(lVar11 + 0x80) = lVar16;
    if ((uVar1 & 0xffff) != 0) {
      memset(puVar10,0,__n);
      lVar16 = *(long *)(lVar11 + 0x80);
    }
    lVar9 = 2;
    *(long *)(lVar11 + 0x80) = lVar16 + -1;
  }
  lVar11 = *plVar24;
  *plVar24 = (long)puVar10;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar4 = *(int *)(lVar16 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar8;
    if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
      *(int *)(lVar16 + 0x12cc) = iVar8;
    }
    plVar13 = (long *)param_1[7];
    lVar16 = param_1[8];
    lVar22 = param_1[9];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar16,lVar22);
    }
    else {
      FUN_00c48fe8(plVar13,lVar11,lVar16,lVar22);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70 = plVar13 + plVar13[600] * 3;
        plStack_68 = plVar13;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar21 = (long *)*plVar13;
        plVar3 = plVar13;
        if (plVar13[600] != 0) {
          plVar3 = plVar13 + plVar13[600] * 3;
        }
        if (plVar3 == plVar13) {
          local_88 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar13,plVar13);
            plVar21 = (long *)*plVar13;
          }
          plVar23 = plVar13 + 3;
          if (plVar3 == plVar23) {
            local_88 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar23 + 0xd0))();
            bVar7 = (long *)*plVar23 != plVar21;
            if (bVar7) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar13,plVar13 + 3);
              plVar21 = (long *)plVar13[3];
            }
            local_88 = (ulong)bVar7;
            plVar23 = plVar13 + 6;
            if (plVar3 == plVar23) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar23 + 0xd0))();
              if ((long *)*plVar23 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar13 + 6);
                plVar21 = (long *)plVar13[6];
                local_88 = 2;
              }
              plVar23 = plVar13 + 9;
              if (plVar3 == plVar23) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar23 + 0xd0))();
                if ((long *)*plVar23 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar13 + 9);
                  plVar21 = (long *)plVar13[9];
                  local_88 = 3;
                }
                plVar23 = plVar13 + 0xc;
                if (plVar3 == plVar23) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar23 + 0xd0))();
                  if ((long *)*plVar23 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar13 + 0xc);
                    plVar21 = (long *)plVar13[0xc];
                    local_88 = 4;
                  }
                  plVar23 = plVar13 + 0xf;
                  if (plVar3 == plVar23) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    if ((long *)*plVar23 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar13 + 0xf);
                      plVar21 = (long *)plVar13[0xf];
                      local_88 = 5;
                    }
                    uVar12 = 6;
                    for (plVar23 = plVar13 + 0x12; plVar3 != plVar23; plVar23 = plVar23 + 3) {
                      (**(code **)(*(long *)*plVar23 + 0xd0))();
                      if ((long *)*plVar23 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar23);
                        plVar21 = (long *)*plVar23;
                        local_88 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar13 + local_88 * 3,plVar13 + uVar12 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
    puVar10 = (ushort *)*plVar24;
  }
  param_1[7] = (long)plVar20;
  param_1[8] = __n;
  param_1[9] = lVar9;
  if (puVar10 != (ushort *)0x0) {
    uVar15 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 10) != 0) {
      iVar8 = 0;
      do {
        uVar5 = *param_2;
        *puVar10 = uVar5;
        if (uVar5 == 0) goto LAB_015e9c78;
        if (uVar5 == 0x10) {
          puVar18 = param_2 + 1;
          uVar5 = *puVar18;
          uVar1 = uVar5 + 2;
          bVar7 = uVar15 < uVar1;
          uVar15 = uVar15 - uVar1;
          if (bVar7 || uVar15 == 0) {
            *puVar10 = 0;
            goto LAB_015e9c78;
          }
          uVar17 = uVar5 + 1;
          uVar2 = uVar17 & 7;
          puVar19 = puVar10 + 1;
          *puVar19 = uVar5;
          if (uVar2 != 0) {
            lVar9 = 0;
            do {
              lVar11 = lVar9;
              uVar17 = uVar17 - 1;
              uVar2 = uVar2 - 1;
              *(undefined2 *)((long)puVar10 + lVar11 + 4) =
                   *(undefined2 *)((long)param_2 + lVar11 + 4);
              lVar9 = lVar11 + 2;
            } while (uVar2 != 0);
            puVar19 = (ushort *)((long)puVar10 + lVar11 + 4);
            param_2 = (ushort *)((long)param_2 + lVar11 + 2);
            puVar18 = param_2 + 1;
            puVar10 = puVar19;
          }
          if (6 < uVar5) {
            do {
              puVar19[1] = param_2[2];
              puVar19[2] = puVar18[2];
              puVar19[3] = puVar18[3];
              puVar19[4] = puVar18[4];
              puVar19[5] = puVar18[5];
              puVar19[6] = puVar18[6];
              param_2 = puVar18 + 7;
              puVar19[7] = *param_2;
              puVar18 = puVar18 + 8;
              uVar17 = uVar17 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar18;
              puVar10 = puVar19;
            } while (uVar17 != 0);
          }
          iVar8 = uVar1 + iVar8;
        }
        else {
          puVar10 = puVar10 + 1;
          puVar18 = param_2 + 1;
          iVar8 = iVar8 + 1;
          uVar15 = uVar15 - 1;
        }
        param_2 = puVar18;
      } while (uVar15 != 0);
      if (iVar8 != 0) {
        puVar10[-1] = 0;
      }
    }
LAB_015e9c78:
    *(undefined1 *)((long)param_1 + 0x54) = 1;
  }
  return;
}


