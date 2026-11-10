/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01371ed0; name: FUN_01371ed0
 */


void FUN_01371ed0(long param_1,long *param_2)

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
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *local_98;
  ulong local_90;
  long *local_70;
  long *plStack_68;
  
  lVar17 = 0;
  puVar1 = PTR_DAT_047e26f0 + 0x10;
  do {
    uVar13 = 0x438;
    plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x438,8);
    if (plVar8 == (long *)0x0) {
      plVar14 = (long *)0x0;
      uVar13 = 0;
      uVar16 = 0;
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
      memset(plVar8 + 1,0,0x430);
      uVar16 = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      plVar14 = param_2;
    }
    lVar9 = param_1 + lVar17 * 0x20;
    puVar18 = *(undefined8 **)(lVar9 + 8);
    *(long **)(lVar9 + 8) = plVar8;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar5 = *(int *)(lVar10 + 0x12c8);
      iVar7 = iVar5 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar7;
      if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
        *(int *)(lVar10 + 0x12cc) = iVar7;
      }
      (**(code **)*puVar18)(puVar18);
      plVar8 = *(long **)(lVar9 + 0x10);
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      uVar15 = *(undefined8 *)(lVar9 + 0x20);
      uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar18,uVar4,uVar15);
      }
      else {
        FUN_00c48fe8(plVar8,puVar18,uVar4,uVar15);
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
          plVar12 = (long *)*plVar8;
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
            if ((long *)*plVar8 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8);
              plVar12 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              local_90 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar12;
              if (bVar6) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8 + 3);
                plVar12 = (long *)plVar8[3];
              }
              local_90 = (ulong)bVar6;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,plVar8 + 6);
                  plVar12 = (long *)plVar8[6];
                  local_90 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,plVar8 + 9);
                    plVar12 = (long *)plVar8[9];
                    local_90 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,plVar8 + 0xc);
                      plVar12 = (long *)plVar8[0xc];
                      local_90 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,plVar8 + 0xf);
                        plVar12 = (long *)plVar8[0xf];
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
                          if ((long *)*local_98 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,local_98);
                            plVar12 = (long *)*local_98;
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
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + local_90 * 3,plVar8 + uVar11 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    lVar17 = lVar17 + 1;
    *(long **)(lVar9 + 0x10) = plVar14;
    *(undefined8 *)(lVar9 + 0x18) = uVar13;
    *(undefined8 *)(lVar9 + 0x20) = uVar16;
  } while (lVar17 != 0x20);
  return;
}


