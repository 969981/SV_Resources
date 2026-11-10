/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fcaa0; name: FUN_016fcaa0
 */


void FUN_016fcaa0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  plVar12 = *(long **)(param_1 + 8);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  local_78 = *(undefined8 *)(param_1 + 0x38);
  local_88 = plVar12;
  lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x1f0,8);
  if (lVar7 == 0) {
    plVar12 = (long *)0x0;
    uVar17 = 0;
    uVar16 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_01053840();
    lVar9 = nn::os::GetTlsValue(*puVar8);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_0136bfa4(lVar7,&local_88);
    uVar16 = 8;
    uVar17 = 0x1f0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar7;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    FUN_01a0c248(lVar9);
    plVar11 = *(long **)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    uVar13 = *(undefined8 *)(param_1 + 0x88);
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,uVar4,uVar13);
    }
    else {
      FUN_00c48fe8(plVar11,lVar9,uVar4,uVar13);
    }
    lVar7 = FUN_00c4e600();
    iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70 = plVar11 + plVar11[600] * 3;
        plStack_68 = plVar11;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar11;
        plVar3 = plVar11;
        if (plVar11[600] != 0) {
          plVar3 = plVar11 + plVar11[600] * 3;
        }
        if (plVar3 == plVar11) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
            plVar14 = (long *)*plVar11;
          }
          plVar2 = plVar11 + 3;
          if (plVar3 == plVar2) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
              plVar14 = (long *)plVar11[3];
            }
            uVar15 = (ulong)bVar6;
            plVar2 = plVar11 + 6;
            if (plVar3 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 6);
                plVar14 = (long *)plVar11[6];
                uVar15 = 2;
              }
              plVar2 = plVar11 + 9;
              if (plVar3 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 9);
                  plVar14 = (long *)plVar11[9];
                  uVar15 = 3;
                }
                plVar2 = plVar11 + 0xc;
                if (plVar3 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xc);
                    plVar14 = (long *)plVar11[0xc];
                    uVar15 = 4;
                  }
                  plVar2 = plVar11 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xf);
                      plVar14 = (long *)plVar11[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (local_90 = plVar11 + 0x12; plVar3 != local_90; local_90 = local_90 + 3) {
                      (**(code **)(*(long *)*local_90 + 0xd0))();
                      if ((long *)*local_90 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,local_90);
                        plVar14 = (long *)*local_90;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x78) = plVar12;
  *(undefined8 *)(param_1 + 0x80) = uVar17;
  *(undefined8 *)(param_1 + 0x88) = uVar16;
  return;
}


