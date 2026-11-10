/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01371948; name: FUN_01371948
 */


void FUN_01371948(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long *local_98;
  ulong local_90;
  long *local_70;
  long *plStack_68;
  
  lVar14 = 0;
  puVar1 = PTR_DAT_047e26f8 + 0x10;
  do {
    plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (plVar8 == (long *)0x0) {
      plVar13 = (long *)0x0;
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar8 = (long)puVar1;
      *(undefined2 *)(plVar8 + 1) = 0;
      *(undefined1 *)((long)plVar8 + 10) = 0;
      *(undefined8 *)((long)plVar8 + 0xc) = 0;
      *(undefined8 *)((long)plVar8 + 0x14) = 0;
      *(undefined4 *)((long)plVar8 + 0x1c) = 0;
      uVar12 = 0x20;
      uVar15 = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      plVar13 = param_2;
    }
    lVar9 = param_1 + lVar14 * 0x20;
    puVar16 = *(undefined8 **)(lVar9 + 8);
    *(long **)(lVar9 + 8) = plVar8;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar5 = *(int *)(lVar10 + 0x12c8);
      iVar7 = iVar5 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar7;
      if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
        *(int *)(lVar10 + 0x12cc) = iVar7;
      }
      (**(code **)*puVar16)(puVar16);
      plVar8 = *(long **)(lVar9 + 0x10);
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      uVar17 = *(undefined8 *)(lVar9 + 0x20);
      uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar16,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar8,puVar16,uVar4,uVar17);
      }
      lVar10 = FUN_00c4e600();
      iVar7 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar18 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            local_90 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8);
              plVar18 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              local_90 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar18;
              if (bVar6) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8 + 3);
                plVar18 = (long *)plVar8[3];
              }
              local_90 = (ulong)bVar6;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,plVar8 + 6);
                  plVar18 = (long *)plVar8[6];
                  local_90 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,plVar8 + 9);
                    plVar18 = (long *)plVar8[9];
                    local_90 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,plVar8 + 0xc);
                      plVar18 = (long *)plVar8[0xc];
                      local_90 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,plVar8 + 0xf);
                        plVar18 = (long *)plVar8[0xf];
                        local_90 = 5;
                      }
                      local_98 = plVar8 + 0x12;
                      if (plVar3 == local_98) {
                        uVar11 = 6;
                      }
                      else {
                        uVar11 = 6;
                        do {
                          (**(code **)(*(long *)*local_98 + 0xd0))();
                          if ((long *)*local_98 != plVar18) {
                            (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,local_98);
                            plVar18 = (long *)*local_98;
                            local_90 = uVar11;
                          }
                          local_98 = local_98 + 3;
                          uVar11 = uVar11 + 1;
                        } while (plVar3 != local_98);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_90 * 3,plVar8 + uVar11 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    lVar14 = lVar14 + 1;
    *(undefined8 *)(lVar9 + 0x20) = uVar15;
    *(long **)(lVar9 + 0x10) = plVar13;
    *(undefined8 *)(lVar9 + 0x18) = uVar12;
  } while (lVar14 != 0x60);
  return;
}


