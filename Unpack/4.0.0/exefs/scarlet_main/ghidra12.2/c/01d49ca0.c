/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d49ca0; name: FUN_01d49ca0
 */


undefined8 FUN_01d49ca0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  char local_88 [8];
  long local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  long *plStack_58;
  
  if (((DAT_0482f2e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0482f2e8), iVar5 != 0)) {
    DAT_04830cd8 = '\x01';
    __cxa_guard_release(&DAT_0482f2e8);
  }
  pcVar6 = (char *)FUN_01d49a20(param_1,1);
  lVar9 = 0x70;
  if (DAT_04830cd8 == '\0') {
    lVar9 = -1;
  }
  if ((*pcVar6 == '\x01') || (*pcVar6 == '\0')) {
    local_80 = 0;
    if (*(long *)(pcVar6 + 8) != 0) {
      local_80 = *(long *)(pcVar6 + 8) + lVar9;
    }
  }
  else {
    local_80 = 0;
  }
  local_88[0] = '\0';
  FUN_013e7280(param_1,local_88);
  lVar9 = local_80;
  if ((local_88[0] == '\x01') && (local_80 = 0, lVar9 != 0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar5;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar5;
    }
    FUN_013e6dc0(lVar9);
    uVar8 = (**(code **)(*local_78 + 0xf8))(local_78);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*local_78 + 0x18))(local_78,lVar9,uStack_70,local_68);
    }
    else {
      FUN_00c48fe8(local_78,lVar9,uStack_70,local_68);
    }
    lVar9 = FUN_00c4e600();
    iVar5 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_60 = plVar10 + plVar10[600] * 3;
        plStack_58 = plVar10;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar11 = (long *)*plVar10;
        plVar2 = plVar10;
        if (plVar10[600] != 0) {
          plVar2 = plVar10 + plVar10[600] * 3;
        }
        if (plVar2 == plVar10) {
          uVar12 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10);
            plVar11 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar2 == plVar1) {
            uVar12 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar11;
            if (bVar4) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10 + 3);
              plVar11 = (long *)plVar10[3];
            }
            uVar12 = (ulong)bVar4;
            plVar1 = plVar10 + 6;
            if (plVar2 == plVar1) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar10 + 6);
                plVar11 = (long *)plVar10[6];
                uVar12 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar2 == plVar1) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar10 + 9);
                  plVar11 = (long *)plVar10[9];
                  uVar12 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar2 == plVar1) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar10 + 0xc);
                    plVar11 = (long *)plVar10[0xc];
                    uVar12 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar10 + 0xf);
                      plVar11 = (long *)plVar10[0xf];
                      uVar12 = 5;
                    }
                    uVar8 = 6;
                    for (plVar1 = plVar10 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar1);
                        plVar11 = (long *)*plVar1;
                        uVar12 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar12 * 3,plVar10 + uVar8 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return 1;
}


