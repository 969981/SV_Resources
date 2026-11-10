/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140f330; name: FUN_0140f330
 */


undefined8 FUN_0140f330(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  char local_d8 [8];
  long local_d0;
  long *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0 [6];
  long *local_80 [6];
  
  uVar5 = FUN_00c92df0(param_1,1,0);
  uVar6 = FUN_00c92df0(param_1,2,0);
  uVar7 = FUN_00c92df0(param_1,3,0);
  uVar9 = FUN_00c92df0(param_1,4,0);
  if (((DAT_0482f228 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0482f228), iVar8 != 0)) {
    __cxa_guard_release(&DAT_0482f228);
  }
  FUN_0140f7d8(local_b0,uVar5,uVar6,uVar7,uVar9);
  local_d8[0] = '\x01';
  memcpy(local_80,local_b0,0x30);
  FUN_00defd6c(&local_d0,local_80);
  FUN_00defb30(param_1,local_d8);
  lVar12 = local_d0;
  if ((local_d8[0] == '\x01') && (local_d0 = 0, lVar12 != 0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar8 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar8;
    }
    uVar11 = (**(code **)(*local_c8 + 0xf8))(local_c8);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*local_c8 + 0x18))(local_c8,lVar12,uStack_c0,local_b8);
    }
    else {
      FUN_00c48fe8(local_c8,lVar12,uStack_c0,local_b8);
    }
    lVar12 = FUN_00c4e600();
    iVar8 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_b0[0] = plVar13 + plVar13[600] * 3;
        local_80[0] = plVar13;
        FUN_00c4ea30(local_80,local_b0);
        plVar14 = (long *)*plVar13;
        plVar2 = plVar13;
        if (plVar13[600] != 0) {
          plVar2 = plVar13 + plVar13[600] * 3;
        }
        if (plVar2 == plVar13) {
          uVar15 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
            plVar14 = (long *)*plVar13;
          }
          plVar1 = plVar13 + 3;
          if (plVar2 == plVar1) {
            uVar15 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar14;
            if (bVar4) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
              plVar14 = (long *)plVar13[3];
            }
            uVar15 = (ulong)bVar4;
            plVar1 = plVar13 + 6;
            if (plVar2 == plVar1) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 6);
                plVar14 = (long *)plVar13[6];
                uVar15 = 2;
              }
              plVar1 = plVar13 + 9;
              if (plVar2 == plVar1) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 9);
                  plVar14 = (long *)plVar13[9];
                  uVar15 = 3;
                }
                plVar1 = plVar13 + 0xc;
                if (plVar2 == plVar1) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 0xc);
                    plVar14 = (long *)plVar13[0xc];
                    uVar15 = 4;
                  }
                  plVar1 = plVar13 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 0xf);
                      plVar14 = (long *)plVar13[0xf];
                      uVar15 = 5;
                    }
                    uVar11 = 6;
                    for (plVar1 = plVar13 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar15 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + uVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  return 1;
}


