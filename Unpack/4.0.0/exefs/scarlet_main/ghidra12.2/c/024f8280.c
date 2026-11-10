/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f8280; name: FUN_024f8280
 */


undefined8 FUN_024f8280(undefined8 param_1)

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
  double dVar16;
  double dVar17;
  char local_98 [8];
  long local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  dVar12 = (double)FUN_00c41790(param_1,1,0);
  dVar13 = (double)FUN_00c41790(param_1,2,0);
  FUN_00c41790(param_1,3,0);
  dVar14 = (double)FUN_00c41790(param_1,4,0);
  dVar15 = (double)FUN_00c41790(param_1,5,0);
  FUN_00c41790(param_1,6,0);
  dVar16 = (double)FUN_00c41790(param_1,7,0);
  dVar17 = (double)FUN_00c41790(param_1,8,0);
  FUN_00c41790(param_1,9,0);
  if (((DAT_0484dbb8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0484dbb8), iVar5 != 0)) {
    __cxa_guard_release(&DAT_0484dbb8);
  }
  FUN_024f87ac(local_98,CONCAT44((float)dVar13,(float)dVar12),CONCAT44((float)dVar15,(float)dVar14),
               CONCAT44((float)dVar17,(float)dVar16));
  FUN_00d31580(param_1,local_98);
  lVar8 = local_90;
  if ((local_98[0] == '\x01') && (local_90 = 0, lVar8 != 0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    uVar7 = (**(code **)(*local_88 + 0xf8))(local_88);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*local_88 + 0x18))(local_88,lVar8,uStack_80,local_78);
    }
    else {
      FUN_00c48fe8(local_88,lVar8,uStack_80,local_78);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_70 = plVar9 + plVar9[600] * 3;
        plStack_68 = plVar9;
        FUN_00c4ea30(&plStack_68,&local_70);
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


