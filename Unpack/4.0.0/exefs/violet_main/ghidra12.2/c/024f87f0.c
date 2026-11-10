/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024f87f0; name: FUN_024f87f0
 */


undefined8 FUN_024f87f0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char local_a0 [8];
  long local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  dVar12 = (double)FUN_00c41790(param_1,1,0);
  dVar13 = (double)FUN_00c41790(param_1,2,0);
  dVar14 = (double)FUN_00c41790(param_1,3,0);
  dVar15 = (double)FUN_00c41790(param_1,4,0);
  if (((DAT_0484dbc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0484dbc8), iVar5 != 0)) {
    DAT_0484dbc0 = &LAB_02b9d52c;
    __cxa_guard_release(&DAT_0484dbc8);
  }
  FUN_024f8c98(local_a0,(double)(float)dVar12,(double)(float)dVar13,(double)(float)dVar14,
               (double)(float)dVar15,&DAT_0484dbc0);
  FUN_00d31580(param_1,local_a0);
  lVar8 = local_98;
  if ((local_a0[0] == '\x01') && (local_98 = 0, lVar8 != 0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    uVar7 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*local_90 + 0x18))(local_90,lVar8,uStack_88,local_80);
    }
    else {
      FUN_00c48fe8(local_90,lVar8,uStack_88,local_80);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_78 = plVar9 + plVar9[600] * 3;
        local_68 = plVar9;
        FUN_00c4ea30(&local_68,&local_78);
        plVar10 = (long *)*plVar9;
        plVar2 = plVar9;
        if (plVar9[600] != 0) {
          plVar2 = plVar9 + plVar9[600] * 3;
        }
        if (plVar2 == plVar9) {
          uVar11 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar10) {
            (**(code **)(*plVar10 + 0x100))(plVar10,plVar9,plVar9);
            plVar10 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar2 == plVar1) {
            uVar11 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar10;
            if (bVar4) {
              (**(code **)(*plVar10 + 0x100))(plVar10,plVar9,plVar9 + 3);
              plVar10 = (long *)plVar9[3];
            }
            uVar11 = (ulong)bVar4;
            plVar1 = plVar9 + 6;
            if (plVar2 == plVar1) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar10) {
                (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar9 + 6);
                plVar10 = (long *)plVar9[6];
                uVar11 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar2 == plVar1) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar10) {
                  (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar9 + 9);
                  plVar10 = (long *)plVar9[9];
                  uVar11 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar2 == plVar1) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar10) {
                    (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar9 + 0xc);
                    plVar10 = (long *)plVar9[0xc];
                    uVar11 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar10) {
                      (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar9 + 0xf);
                      plVar10 = (long *)plVar9[0xf];
                      uVar11 = 5;
                    }
                    uVar7 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar10) {
                        (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar1);
                        plVar10 = (long *)*plVar1;
                        uVar11 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar10 + 0x100))(plVar10,plVar9 + uVar11 * 3,plVar9 + uVar7 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  return 1;
}


