/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4e70c; name: FUN_00c4e70c
 */


void FUN_00c4e70c(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *local_60;
  long *plStack_58;
  
  lVar5 = FUN_00c4e600();
  iVar3 = *(int *)(lVar5 + 0x12c8) + -1;
  *(int *)(lVar5 + 0x12c8) = iVar3;
  if (iVar3 == 0) {
    plVar6 = (long *)FUN_00c4e600();
    if (plVar6[600] != 0) {
      local_60 = plVar6 + plVar6[600] * 3;
      plStack_58 = plVar6;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar7 = (long *)*plVar6;
      plVar2 = plVar6;
      if (plVar6[600] != 0) {
        plVar2 = plVar6 + plVar6[600] * 3;
      }
      if (plVar2 == plVar6) {
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar6 + 0xd0))();
        if ((long *)*plVar6 != plVar7) {
          (**(code **)(*plVar7 + 0x100))(plVar7,plVar6,plVar6);
          plVar7 = (long *)*plVar6;
        }
        plVar1 = plVar6 + 3;
        if (plVar2 == plVar1) {
          uVar8 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar1 + 0xd0))();
          bVar4 = (long *)*plVar1 != plVar7;
          if (bVar4) {
            (**(code **)(*plVar7 + 0x100))(plVar7,plVar6,plVar6 + 3);
            plVar7 = (long *)plVar6[3];
          }
          uVar8 = (ulong)bVar4;
          plVar1 = plVar6 + 6;
          if (plVar2 == plVar1) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            if ((long *)*plVar1 != plVar7) {
              (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar6 + 6);
              plVar7 = (long *)plVar6[6];
              uVar8 = 2;
            }
            plVar1 = plVar6 + 9;
            if (plVar2 == plVar1) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar7) {
                (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar6 + 9);
                plVar7 = (long *)plVar6[9];
                uVar8 = 3;
              }
              plVar1 = plVar6 + 0xc;
              if (plVar2 == plVar1) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar7) {
                  (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar6 + 0xc);
                  plVar7 = (long *)plVar6[0xc];
                  uVar8 = 4;
                }
                plVar1 = plVar6 + 0xf;
                if (plVar2 == plVar1) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar7) {
                    (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar6 + 0xf);
                    plVar7 = (long *)plVar6[0xf];
                    uVar8 = 5;
                  }
                  uVar9 = 6;
                  for (plVar1 = plVar6 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar7) {
                      (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar1);
                      plVar7 = (long *)*plVar1;
                      uVar8 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar7 + 0x100))(plVar7,plVar6 + uVar8 * 3,plVar6 + uVar9 * 3);
      plVar6[600] = 0;
    }
    *(undefined4 *)(lVar5 + 0x12cc) = 0;
  }
  return;
}


