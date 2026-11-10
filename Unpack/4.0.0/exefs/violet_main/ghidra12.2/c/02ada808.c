/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ada808; name: FUN_02ada808
 */


void FUN_02ada808(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  if (*(char *)(param_1 + 0x250) != '\0') {
    lVar6 = *(long *)(param_1 + 0x2d8);
    lVar5 = *(long *)(param_1 + 0x2e0);
    if (lVar5 != lVar6) {
      do {
        if ((*(short *)(param_1 + 0x44) == *(short *)(lVar6 + 2)) &&
           (*(int *)(param_1 + 0x50) == *(int *)(lVar6 + 4))) {
          lVar5 = lVar6;
          break;
        }
        lVar6 = lVar6 + 0x1c;
      } while (lVar5 != lVar6);
    }
    FUN_02ae06a0(&local_90,*(undefined8 *)(param_1 + 8),param_1 + 0x44,lVar5,1);
    uVar8 = local_90;
    local_90 = 0;
    puVar7 = *(undefined8 **)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = uVar8;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar7)(puVar7);
      plVar11 = *(long **)(param_1 + 0x260);
      uVar8 = *(undefined8 *)(param_1 + 0x268);
      uVar9 = *(undefined8 *)(param_1 + 0x270);
      uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar8,uVar9);
      }
      else {
        FUN_00c48fe8(plVar11,puVar7,uVar8,uVar9);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_70 = plVar11 + plVar11[600] * 3;
          plStack_68 = plVar11;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar10 = (long *)*plVar11;
          plVar2 = plVar11;
          if (plVar11[600] != 0) {
            plVar2 = plVar11 + plVar11[600] * 3;
          }
          if (plVar2 == plVar11) {
            lVar13 = 0;
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            lVar13 = 0;
            plVar12 = plVar11;
            do {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar10) {
                (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar12);
                plVar10 = (long *)*plVar12;
                lVar13 = lVar5;
              }
              plVar12 = plVar12 + 3;
              lVar5 = lVar5 + 1;
            } while (plVar2 != plVar12);
          }
          (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar11 + lVar5 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x260) = local_88;
    lVar6 = *(long *)(param_1 + 0x2d8);
    lVar5 = *(long *)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x270) = local_78;
    *(undefined8 *)(param_1 + 0x268) = uStack_80;
    if (lVar5 != lVar6) {
      do {
        if ((*(short *)(param_1 + 0x90) == *(short *)(lVar6 + 2)) &&
           (*(int *)(param_1 + 0x9c) == *(int *)(lVar6 + 4))) {
          lVar5 = lVar6;
          break;
        }
        lVar6 = lVar6 + 0x1c;
      } while (lVar5 != lVar6);
    }
    FUN_02ae06a0(&local_90,*(undefined8 *)(param_1 + 8),param_1 + 0x90,lVar5,1);
    uVar8 = local_90;
    local_90 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = uVar8;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar7)(puVar7);
      plVar11 = *(long **)(param_1 + 0x280);
      uVar8 = *(undefined8 *)(param_1 + 0x288);
      uVar9 = *(undefined8 *)(param_1 + 0x290);
      uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar8,uVar9);
      }
      else {
        FUN_00c48fe8(plVar11,puVar7,uVar8,uVar9);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_70 = plVar11 + plVar11[600] * 3;
          plStack_68 = plVar11;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar10 = (long *)*plVar11;
          plVar2 = plVar11;
          if (plVar11[600] != 0) {
            plVar2 = plVar11 + plVar11[600] * 3;
          }
          if (plVar2 == plVar11) {
            lVar13 = 0;
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            lVar13 = 0;
            plVar12 = plVar11;
            do {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar10) {
                (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar12);
                plVar10 = (long *)*plVar12;
                lVar13 = lVar5;
              }
              plVar12 = plVar12 + 3;
              lVar5 = lVar5 + 1;
            } while (plVar2 != plVar12);
          }
          (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar11 + lVar5 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x280) = local_88;
    lVar6 = *(long *)(param_1 + 0x2d8);
    lVar5 = *(long *)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x290) = local_78;
    *(undefined8 *)(param_1 + 0x288) = uStack_80;
    if (lVar5 != lVar6) {
      do {
        if ((*(short *)(param_1 + 0xdc) == *(short *)(lVar6 + 2)) &&
           (*(int *)(param_1 + 0xe8) == *(int *)(lVar6 + 4))) {
          lVar5 = lVar6;
          break;
        }
        lVar6 = lVar6 + 0x1c;
      } while (lVar5 != lVar6);
    }
    FUN_02ae06a0(&local_90,*(undefined8 *)(param_1 + 8),param_1 + 0xdc,lVar5,1);
    uVar8 = local_90;
    local_90 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x298);
    *(undefined8 *)(param_1 + 0x298) = uVar8;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar7)(puVar7);
      plVar11 = *(long **)(param_1 + 0x2a0);
      uVar8 = *(undefined8 *)(param_1 + 0x2a8);
      uVar9 = *(undefined8 *)(param_1 + 0x2b0);
      uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar8,uVar9);
      }
      else {
        FUN_00c48fe8(plVar11,puVar7,uVar8,uVar9);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_70 = plVar11 + plVar11[600] * 3;
          plStack_68 = plVar11;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar10 = (long *)*plVar11;
          plVar2 = plVar11;
          if (plVar11[600] != 0) {
            plVar2 = plVar11 + plVar11[600] * 3;
          }
          if (plVar2 == plVar11) {
            lVar13 = 0;
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            lVar13 = 0;
            plVar12 = plVar11;
            do {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar10) {
                (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar12);
                plVar10 = (long *)*plVar12;
                lVar13 = lVar5;
              }
              plVar12 = plVar12 + 3;
              lVar5 = lVar5 + 1;
            } while (plVar2 != plVar12);
          }
          (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar11 + lVar5 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x2a0) = local_88;
    *(undefined8 *)(param_1 + 0x2b0) = local_78;
    *(undefined8 *)(param_1 + 0x2a8) = uStack_80;
    if (*(short *)(param_1 + 300) != 0) {
      lVar6 = *(long *)(param_1 + 0x2d8);
      lVar5 = *(long *)(param_1 + 0x2e0);
      if (lVar5 != lVar6) {
        do {
          if ((*(short *)(param_1 + 300) == *(short *)(lVar6 + 2)) &&
             (*(int *)(param_1 + 0x138) == *(int *)(lVar6 + 4))) {
            lVar5 = lVar6;
            break;
          }
          lVar6 = lVar6 + 0x1c;
        } while (lVar5 != lVar6);
      }
      FUN_02ae06a0(&local_90,*(undefined8 *)(param_1 + 8),param_1 + 300,lVar5,1);
      uVar8 = local_90;
      local_90 = 0;
      puVar7 = *(undefined8 **)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2b8) = uVar8;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar6 = FUN_00c4e600();
        iVar3 = *(int *)(lVar6 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
          *(int *)(lVar6 + 0x12cc) = iVar1;
        }
        (**(code **)*puVar7)(puVar7);
        plVar11 = *(long **)(param_1 + 0x2c0);
        uVar8 = *(undefined8 *)(param_1 + 0x2c8);
        uVar9 = *(undefined8 *)(param_1 + 0x2d0);
        uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar8,uVar9);
        }
        else {
          FUN_00c48fe8(plVar11,puVar7,uVar8,uVar9);
        }
        lVar6 = FUN_00c4e600();
        iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar11 = (long *)FUN_00c4e600();
          if (plVar11[600] != 0) {
            local_70 = plVar11 + plVar11[600] * 3;
            plStack_68 = plVar11;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar10 = (long *)*plVar11;
            plVar2 = plVar11;
            if (plVar11[600] != 0) {
              plVar2 = plVar11 + plVar11[600] * 3;
            }
            if (plVar2 == plVar11) {
              lVar13 = 0;
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              lVar13 = 0;
              plVar12 = plVar11;
              do {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar10) {
                  (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar12);
                  plVar10 = (long *)*plVar12;
                  lVar13 = lVar5;
                }
                plVar12 = plVar12 + 3;
                lVar5 = lVar5 + 1;
              } while (plVar2 != plVar12);
            }
            (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar11 + lVar5 * 3);
            plVar11[600] = 0;
          }
          *(undefined4 *)(lVar6 + 0x12cc) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x2d0) = local_78;
      *(undefined8 *)(param_1 + 0x2c8) = uStack_80;
      *(undefined8 *)(param_1 + 0x2c0) = local_88;
    }
    uVar4 = FUN_00b0d038();
    if (((uVar4 & 1) != 0) && (*(short *)(param_1 + 0x178) != 0)) {
      for (lVar6 = *(long *)(param_1 + 0x2d8); lVar5 = *(long *)(param_1 + 0x2e0),
          *(long *)(param_1 + 0x2e0) != lVar6; lVar6 = lVar6 + 0x1c) {
        if ((*(short *)(param_1 + 0x178) == *(short *)(lVar6 + 2)) &&
           (*(int *)(param_1 + 0x184) == *(int *)(lVar6 + 4))) {
          lVar5 = lVar6;
          break;
        }
      }
      FUN_02ae06a0(&local_90,*(undefined8 *)(param_1 + 8),param_1 + 0x178,lVar5,1);
      uVar8 = local_90;
      local_90 = 0;
      puVar7 = *(undefined8 **)(param_1 + 0xb00);
      *(undefined8 *)(param_1 + 0xb00) = uVar8;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar6 = FUN_00c4e600();
        iVar3 = *(int *)(lVar6 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
          *(int *)(lVar6 + 0x12cc) = iVar1;
        }
        (**(code **)*puVar7)(puVar7);
        plVar11 = *(long **)(param_1 + 0xb08);
        uVar8 = *(undefined8 *)(param_1 + 0xb10);
        uVar9 = *(undefined8 *)(param_1 + 0xb18);
        uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar8,uVar9);
        }
        else {
          FUN_00c48fe8(plVar11,puVar7,uVar8,uVar9);
        }
        lVar6 = FUN_00c4e600();
        iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar11 = (long *)FUN_00c4e600();
          if (plVar11[600] != 0) {
            local_70 = plVar11 + plVar11[600] * 3;
            plStack_68 = plVar11;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar10 = (long *)*plVar11;
            plVar2 = plVar11;
            if (plVar11[600] != 0) {
              plVar2 = plVar11 + plVar11[600] * 3;
            }
            if (plVar2 == plVar11) {
              lVar13 = 0;
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              lVar13 = 0;
              plVar12 = plVar11;
              do {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar10) {
                  (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar12);
                  plVar10 = (long *)*plVar12;
                  lVar13 = lVar5;
                }
                plVar12 = plVar12 + 3;
                lVar5 = lVar5 + 1;
              } while (plVar2 != plVar12);
            }
            (**(code **)(*plVar10 + 0x100))(plVar10,plVar11 + lVar13 * 3,plVar11 + lVar5 * 3);
            plVar11[600] = 0;
          }
          *(undefined4 *)(lVar6 + 0x12cc) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0xb18) = local_78;
      *(undefined8 *)(param_1 + 0xb10) = uStack_80;
      *(undefined8 *)(param_1 + 0xb08) = local_88;
    }
  }
  return;
}


