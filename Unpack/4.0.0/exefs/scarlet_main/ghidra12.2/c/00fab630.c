/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fab630; name: FUN_00fab630
 */


/* WARNING: Removing unreachable block (ram,0x00fabc00) */

void FUN_00fab630(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *local_a0;
  ulong local_98;
  long *plStack_88;
  long *local_70;
  long *plStack_68;
  
  puVar6 = (undefined4 *)FUN_00d36bcc(param_2,0x14);
  *puVar6 = 1;
  plStack_88 = *(long **)(param_1 + 8);
  puVar7 = (undefined8 *)(**(code **)(*plStack_88 + 0x10))(plStack_88,0x78,8);
  if (puVar7 == (undefined8 *)0x0) {
    uVar20 = 0;
    uVar21 = 0;
    plStack_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00fabdd0;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plStack_88;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    memset(puVar7 + 1,0,0x70);
    *puVar7 = &PTR_LAB_0459c0d8;
    FUN_00fabf24(puVar7 + 1);
    uVar21 = 0x78;
    uVar20 = 8;
    puVar7[0xe] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *(undefined8 **)(puVar6 + 2) = puVar7;
  puVar16 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar16 < *(undefined8 **)(param_1 + 0x300)) {
    uVar18 = *(undefined8 *)(param_1 + 0x308);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar16 = puVar7;
      puVar16[1] = plStack_88;
      puVar16[2] = uVar21;
      puVar16[3] = uVar20;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00fabdd0;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar16 = puVar7;
      puVar16[1] = plStack_88;
      puVar16[2] = uVar21;
      puVar16[3] = uVar20;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x2f8) = puVar16 + 4;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x310);
    lVar8 = (long)puVar16 - *(long *)(param_1 + 0x2f0) >> 5;
    uVar9 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(undefined8 **)(param_1 + 0x300) - *(long *)(param_1 + 0x2f0);
    uVar11 = lVar10 >> 4;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar13 >> 1 <= (ulong)(lVar10 >> 5)) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x308) + 0x10))
                         (*(long **)(param_1 + 0x308),uVar9 << 5,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x308) + 0xe8))();
      }
    }
    puVar16 = (undefined8 *)(lVar10 + lVar8 * 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x308);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar16 = puVar7;
      puVar16[1] = plStack_88;
      puVar16[2] = uVar21;
      puVar16[3] = uVar20;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00fabdd0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar16 = puVar7;
      puVar16[1] = plStack_88;
      puVar16[2] = uVar21;
      puVar16[3] = uVar20;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x2f0);
    puVar15 = *(undefined8 **)(param_1 + 0x2f8);
    if (puVar15 == puVar7) {
      puVar12 = puVar16;
      puVar15 = puVar7;
    }
    else {
      puVar19 = puVar16;
      do {
        uVar20 = *(undefined8 *)(param_1 + 0x308);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00fabdd0;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar20;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        uVar20 = puVar15[-4];
        puVar15[-4] = 0;
        puVar19[-4] = uVar20;
        uVar20 = puVar15[-3];
        uVar21 = puVar15[-1];
        puVar19[-2] = puVar15[-2];
        puVar19[-1] = uVar21;
        puVar12 = puVar19 + -4;
        puVar15 = puVar15 + -4;
        puVar19[-3] = uVar20;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar19 = puVar12;
      } while (puVar7 != puVar15);
      puVar7 = *(undefined8 **)(param_1 + 0x2f0);
      puVar15 = *(undefined8 **)(param_1 + 0x2f8);
    }
    lVar8 = *(long *)(param_1 + 0x300);
    *(undefined8 **)(param_1 + 0x2f0) = puVar12;
    *(undefined8 **)(param_1 + 0x2f8) = puVar16 + 4;
    *(ulong *)(param_1 + 0x300) = lVar10 + uVar9 * 0x20;
    if (puVar15 != puVar7) {
      do {
        puVar12 = puVar15 + -4;
        puVar16 = (undefined8 *)*puVar12;
        *puVar12 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar10 = FUN_00c4e600();
          iVar3 = *(int *)(lVar10 + 0x12c8);
          iVar5 = iVar3 + 1;
          *(int *)(lVar10 + 0x12c8) = iVar5;
          if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
            *(int *)(lVar10 + 0x12cc) = iVar5;
          }
          (**(code **)*puVar16)(puVar16);
          plVar14 = (long *)puVar15[-3];
          uVar20 = puVar15[-2];
          uVar21 = puVar15[-1];
          uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,puVar16,uVar20,uVar21);
          }
          else {
            FUN_00c48fe8(plVar14,puVar16,uVar20,uVar21);
          }
          lVar10 = FUN_00c4e600();
          iVar5 = *(int *)(lVar10 + 0x12c8) + -1;
          *(int *)(lVar10 + 0x12c8) = iVar5;
          if (iVar5 == 0) {
            plVar14 = (long *)FUN_00c4e600();
            if (plVar14[600] != 0) {
              local_70 = plVar14 + plVar14[600] * 3;
              plStack_68 = plVar14;
              FUN_00c4ea30(&plStack_68,&local_70);
              plVar17 = (long *)*plVar14;
              plVar2 = plVar14;
              if (plVar14[600] != 0) {
                plVar2 = plVar14 + plVar14[600] * 3;
              }
              if (plVar2 == plVar14) {
                local_98 = 0;
                uVar9 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar14,plVar14);
                  plVar17 = (long *)*plVar14;
                }
                plVar1 = plVar14 + 3;
                if (plVar2 == plVar1) {
                  local_98 = 0;
                  uVar9 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  bVar4 = (long *)*plVar1 != plVar17;
                  if (bVar4) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar14,plVar14 + 3);
                    plVar17 = (long *)plVar14[3];
                  }
                  local_98 = (ulong)bVar4;
                  plVar1 = plVar14 + 6;
                  if (plVar2 == plVar1) {
                    uVar9 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar14 + local_98 * 3,plVar14 + 6);
                      plVar17 = (long *)plVar14[6];
                      local_98 = 2;
                    }
                    plVar1 = plVar14 + 9;
                    if (plVar2 == plVar1) {
                      uVar9 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar14 + local_98 * 3,plVar14 + 9);
                        plVar17 = (long *)plVar14[9];
                        local_98 = 3;
                      }
                      plVar1 = plVar14 + 0xc;
                      if (plVar2 == plVar1) {
                        uVar9 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))
                                    (plVar17,plVar14 + local_98 * 3,plVar14 + 0xc);
                          plVar17 = (long *)plVar14[0xc];
                          local_98 = 4;
                        }
                        plVar1 = plVar14 + 0xf;
                        if (plVar2 == plVar1) {
                          uVar9 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar17) {
                            (**(code **)(*plVar17 + 0x100))
                                      (plVar17,plVar14 + local_98 * 3,plVar14 + 0xf);
                            plVar17 = (long *)plVar14[0xf];
                            local_98 = 5;
                          }
                          local_a0 = plVar14 + 0x12;
                          uVar9 = 6;
                          if (plVar2 != local_a0) {
                            do {
                              (**(code **)(*(long *)*local_a0 + 0xd0))();
                              if ((long *)*local_a0 != plVar17) {
                                (**(code **)(*plVar17 + 0x100))
                                          (plVar17,plVar14 + local_98 * 3,local_a0);
                                plVar17 = (long *)*local_a0;
                                local_98 = uVar9;
                              }
                              local_a0 = local_a0 + 3;
                              uVar9 = uVar9 + 1;
                            } while (plVar2 != local_a0);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar14 + local_98 * 3,plVar14 + uVar9 * 3);
              plVar14[600] = 0;
            }
            *(undefined4 *)(lVar10 + 0x12cc) = 0;
          }
        }
        puVar15 = puVar12;
      } while (puVar12 != puVar7);
    }
    if (puVar7 != (undefined8 *)0x0) {
      plVar14 = *(long **)(param_1 + 0x308);
      lVar8 = lVar8 - (long)puVar7;
      uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar7,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar14,puVar7,lVar8,8);
      }
    }
  }
  return;
}


