/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270ab70; name: FUN_0270ab70
 */


void FUN_0270ab70(long param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *local_88;
  long *local_70;
  long *plStack_68;
  
  if (*param_2 == 0) {
    plVar14 = *(long **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0xd8,8);
    if (puVar7 == (undefined8 *)0x0) {
      plVar14 = (long *)0x0;
      lVar13 = 0;
      lVar8 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar12 = *param_5;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[4] = 0x555555555555555;
      puVar7[5] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = uVar12;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0x400000010;
      *(undefined4 *)(puVar7 + 6) = 0;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0xbf800000bf800000;
      puVar7[0xe] = 0;
      memset(puVar7 + 0x11,0,0x49);
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      lVar8 = 8;
      lVar13 = 0xd8;
    }
    lVar15 = *param_2;
    *param_2 = (long)puVar7;
    if (lVar15 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar9 = FUN_00c4e600();
      iVar3 = *(int *)(lVar9 + 0x12c8);
      iVar5 = iVar3 + 1;
      *(int *)(lVar9 + 0x12c8) = iVar5;
      if (*(int *)(lVar9 + 0x12cc) <= iVar3) {
        *(int *)(lVar9 + 0x12cc) = iVar5;
      }
      FUN_00ee9b24(lVar15);
      plVar10 = (long *)param_2[1];
      lVar9 = param_2[2];
      lVar16 = param_2[3];
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar9,lVar16);
      }
      else {
        FUN_00c48fe8(plVar10,lVar15,lVar9,lVar16);
      }
      lVar15 = FUN_00c4e600();
      iVar5 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          plStack_68 = plVar10;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar17 = (long *)*plVar10;
          plVar2 = plVar10;
          if (plVar10[600] != 0) {
            plVar2 = plVar10 + plVar10[600] * 3;
          }
          if (plVar2 == plVar10) {
            uVar18 = 0;
            uVar6 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10);
              plVar17 = (long *)*plVar10;
            }
            plVar1 = plVar10 + 3;
            if (plVar2 == plVar1) {
              uVar18 = 0;
              uVar6 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != plVar17;
              if (bVar4) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10 + 3);
                plVar17 = (long *)plVar10[3];
              }
              uVar18 = (ulong)bVar4;
              plVar1 = plVar10 + 6;
              if (plVar2 == plVar1) {
                uVar6 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 6);
                  plVar17 = (long *)plVar10[6];
                  uVar18 = 2;
                }
                plVar1 = plVar10 + 9;
                if (plVar2 == plVar1) {
                  uVar6 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 9);
                    plVar17 = (long *)plVar10[9];
                    uVar18 = 3;
                  }
                  plVar1 = plVar10 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar6 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 0xc);
                      plVar17 = (long *)plVar10[0xc];
                      uVar18 = 4;
                    }
                    plVar1 = plVar10 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar6 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 0xf);
                        plVar17 = (long *)plVar10[0xf];
                        uVar18 = 5;
                      }
                      uVar6 = 6;
                      for (local_88 = plVar10 + 0x12; plVar2 != local_88; local_88 = local_88 + 3) {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,local_88);
                          plVar17 = (long *)*local_88;
                          uVar18 = uVar6;
                        }
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + uVar6 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
    }
    param_2[3] = lVar8;
    param_2[1] = (long)plVar14;
    param_2[2] = lVar13;
    *param_3 = 1;
  }
  uVar6 = FUN_0270b12c(param_4);
  if ((uVar6 & 1) != 0) {
    *param_3 = 1;
  }
  return;
}


