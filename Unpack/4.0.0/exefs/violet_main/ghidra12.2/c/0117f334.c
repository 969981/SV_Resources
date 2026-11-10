/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117f334; name: FUN_0117f334
 */


void FUN_0117f334(long param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_90;
  long *local_80;
  long *local_70;
  long *plStack_68;
  
  iVar5 = (**(code **)PTR_DAT_047e1d90)(param_3);
  *(long *)(param_1 + 0x68) = (long)iVar5;
  iVar5 = (**(code **)PTR_DAT_047e1d98)(param_3);
  *(long *)(param_1 + 0x70) = (long)iVar5;
  iVar5 = (**(code **)PTR_DAT_047e1da0)(param_3);
  *(long *)(param_1 + 0x78) = (long)iVar5;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (lVar6 == 0) {
    param_2 = (long *)0x0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar13 = 8;
    uVar12 = 0x80;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  }
  lVar7 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar6;
  if (lVar7 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    plVar9 = *(long **)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,uVar2,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,uVar2,uVar10);
    }
    lVar6 = FUN_00c4e600();
    iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_70 = plVar9 + plVar9[600] * 3;
        plStack_68 = plVar9;
        FUN_00c4ea30(&plStack_68,&local_70);
        local_80 = (long *)*plVar9;
        plVar1 = plVar9;
        if (plVar9[600] != 0) {
          plVar1 = plVar9 + plVar9[600] * 3;
        }
        if (plVar1 == plVar9) {
          local_90 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != local_80) {
            (**(code **)(*local_80 + 0x100))(local_80,plVar9,plVar9);
            local_80 = (long *)*plVar9;
          }
          plVar11 = plVar9 + 3;
          if (plVar1 == plVar11) {
            local_90 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            bVar4 = (long *)*plVar11 != local_80;
            if (bVar4) {
              (**(code **)(*local_80 + 0x100))(local_80,plVar9,plVar9 + 3);
              local_80 = (long *)plVar9[3];
            }
            local_90 = (ulong)bVar4;
            plVar11 = plVar9 + 6;
            if (plVar1 == plVar11) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar11 + 0xd0))();
              if ((long *)*plVar11 != local_80) {
                (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 6);
                local_80 = (long *)plVar9[6];
                local_90 = 2;
              }
              plVar11 = plVar9 + 9;
              if (plVar1 == plVar11) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar11 + 0xd0))();
                if ((long *)*plVar11 != local_80) {
                  (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 9);
                  local_80 = (long *)plVar9[9];
                  local_90 = 3;
                }
                plVar11 = plVar9 + 0xc;
                if (plVar1 == plVar11) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar11 + 0xd0))();
                  if ((long *)*plVar11 != local_80) {
                    (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 0xc);
                    local_80 = (long *)plVar9[0xc];
                    local_90 = 4;
                  }
                  plVar11 = plVar9 + 0xf;
                  if (plVar1 == plVar11) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar11 + 0xd0))();
                    if ((long *)*plVar11 != local_80) {
                      (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 0xf);
                      local_80 = (long *)plVar9[0xf];
                      local_90 = 5;
                    }
                    uVar8 = 6;
                    for (plVar11 = plVar9 + 0x12; plVar1 != plVar11; plVar11 = plVar11 + 3) {
                      (**(code **)(*(long *)*plVar11 + 0xd0))();
                      if ((long *)*plVar11 != local_80) {
                        (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar11);
                        local_80 = (long *)*plVar11;
                        local_90 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  *(undefined8 *)(param_1 + 0x58) = uVar13;
  *(undefined8 *)(param_1 + 0x60) = param_5;
  uVar12 = (**(code **)PTR_DAT_047e1d40)(param_3);
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  (**(code **)PTR_DAT_047e1d30)(*(undefined8 *)(param_1 + 0x40),param_3);
  if ((param_4 & 0xfffffffd) == 1) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  if ((param_4 & 0xfffffffe) == 2) {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}


