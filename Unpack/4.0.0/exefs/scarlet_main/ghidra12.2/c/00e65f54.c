/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e65f54; name: FUN_00e65f54
 */


void FUN_00e65f54(long param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *local_90;
  ulong local_88;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  puVar14 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar14 == (undefined8 *)0x0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar14 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (puVar14 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = plVar13;
      puVar14[7] = 0;
      puVar14[8] = 0;
      *(undefined4 *)(puVar14 + 6) = 0;
      puVar14[0xf] = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      puVar14[4] = 0x555555555555555;
      puVar14[5] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0x400000010;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0xbf800000bf800000;
      puVar14[0xe] = 0;
      memset(puVar14 + 0x11,0,0x49);
      uVar16 = 8;
      uVar15 = 0xd8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    lVar12 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar14;
    if (lVar12 != 0) {
      FUN_00c4e600(param_1);
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar7 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar7;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar7;
      }
      FUN_00ee9b24(lVar12);
      plVar9 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar11 = *(undefined8 *)(param_1 + 0x1d8);
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,uVar3,uVar11);
      }
      else {
        FUN_00c48fe8(plVar9,lVar12,uVar3,uVar11);
      }
      lVar12 = FUN_00c4e600();
      iVar7 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          local_78 = (long *)*plVar9;
          plVar2 = plVar9;
          if (plVar9[600] != 0) {
            plVar2 = plVar9 + plVar9[600] * 3;
          }
          if (plVar2 == plVar9) {
            local_88 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != local_78) {
              (**(code **)(*local_78 + 0x100))(local_78,plVar9,plVar9);
              local_78 = (long *)*plVar9;
            }
            plVar1 = plVar9 + 3;
            if (plVar2 == plVar1) {
              local_88 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != local_78;
              if (bVar6) {
                (**(code **)(*local_78 + 0x100))(local_78,plVar9,plVar9 + 3);
                local_78 = (long *)plVar9[3];
              }
              local_88 = (ulong)bVar6;
              plVar1 = plVar9 + 6;
              if (plVar2 == plVar1) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != local_78) {
                  (**(code **)(*local_78 + 0x100))(local_78,plVar9 + local_88 * 3,plVar9 + 6);
                  local_78 = (long *)plVar9[6];
                  local_88 = 2;
                }
                plVar1 = plVar9 + 9;
                if (plVar2 == plVar1) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != local_78) {
                    (**(code **)(*local_78 + 0x100))(local_78,plVar9 + local_88 * 3,plVar9 + 9);
                    local_78 = (long *)plVar9[9];
                    local_88 = 3;
                  }
                  plVar1 = plVar9 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != local_78) {
                      (**(code **)(*local_78 + 0x100))(local_78,plVar9 + local_88 * 3,plVar9 + 0xc);
                      local_78 = (long *)plVar9[0xc];
                      local_88 = 4;
                    }
                    plVar1 = plVar9 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != local_78) {
                        (**(code **)(*local_78 + 0x100))
                                  (local_78,plVar9 + local_88 * 3,plVar9 + 0xf);
                        local_78 = (long *)plVar9[0xf];
                        local_88 = 5;
                      }
                      uVar8 = 6;
                      for (local_90 = plVar9 + 0x12; plVar2 != local_90; local_90 = local_90 + 3) {
                        (**(code **)(*(long *)*local_90 + 0xd0))();
                        if ((long *)*local_90 != local_78) {
                          (**(code **)(*local_78 + 0x100))(local_78,plVar9 + local_88 * 3,local_90);
                          local_78 = (long *)*local_90;
                          local_88 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_78 + 0x100))(local_78,plVar9 + local_88 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
      puVar14 = *(undefined8 **)(param_1 + 0x1c0);
    }
    bVar5 = 0;
    *(undefined8 *)(param_1 + 0x1d8) = uVar16;
    *(long **)(param_1 + 0x1c8) = plVar13;
    *(undefined8 *)(param_1 + 0x1d0) = uVar15;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = *(int *)((long)puVar14 + 0xc4) != param_2;
  if (bVar6) {
    *(int *)((long)puVar14 + 0xc4) = param_2;
  }
  iVar7 = *(int *)(puVar14 + 0x19);
  if (iVar7 != param_3) {
    *(int *)(puVar14 + 0x19) = param_3;
  }
  if (*(int *)((long)puVar14 + 0xcc) == param_4) {
    if ((bool)(bVar5 & (!bVar6 && (iVar7 == param_3 && !bVar6)))) {
      return;
    }
  }
  else {
    *(int *)((long)puVar14 + 0xcc) = param_4;
  }
  lVar12 = *(long *)(param_1 + 0x208);
  lVar10 = *(long *)(param_1 + 0x210);
  if (((lVar12 != lVar10) && (*(undefined1 *)(lVar12 + 0x10) = 1, lVar12 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar12 + 0x28) = 1, lVar12 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar12 + 0x40) = 1;
    for (lVar12 = lVar12 + 0x48; lVar12 != lVar10; lVar12 = lVar12 + 0x18) {
      *(undefined1 *)(lVar12 + 0x10) = 1;
    }
  }
  return;
}


