/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0151fb1c; name: FUN_0151fb1c
 */


void FUN_0151fb1c(float param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  float *pfVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long *local_78;
  long *local_68;
  
  if (*(long *)(param_2 + 0x1c0) == 0) {
    plVar14 = *(long **)(param_2 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0xd8,8);
    if (puVar7 == (undefined8 *)0x0) {
      plVar14 = (long *)0x0;
      uVar12 = 0;
      uVar10 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar14;
      puVar7[7] = 0;
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      puVar7[4] = 0x555555555555555;
      puVar7[5] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0x400000010;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0xbf800000bf800000;
      puVar7[0xe] = 0;
      memset(puVar7 + 0x11,0,0x49);
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      uVar10 = 8;
      uVar12 = 0xd8;
    }
    lVar13 = *(long *)(param_2 + 0x1c0);
    *(undefined8 **)(param_2 + 0x1c0) = puVar7;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar6 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar6;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar6;
      }
      FUN_00ee9b24(lVar13);
      plVar9 = *(long **)(param_2 + 0x1c8);
      uVar3 = *(undefined8 *)(param_2 + 0x1d0);
      uVar16 = *(undefined8 *)(param_2 + 0x1d8);
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,uVar3,uVar16);
      }
      else {
        FUN_00c48fe8(plVar9,lVar13,uVar3,uVar16);
      }
      lVar13 = FUN_00c4e600();
      iVar6 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_78 = plVar9 + plVar9[600] * 3;
          local_68 = plVar9;
          FUN_00c4ea30(&local_68,&local_78);
          plVar17 = (long *)*plVar9;
          plVar2 = plVar9;
          if (plVar9[600] != 0) {
            plVar2 = plVar9 + plVar9[600] * 3;
          }
          if (plVar2 == plVar9) {
            uVar18 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar9,plVar9);
              plVar17 = (long *)*plVar9;
            }
            plVar1 = plVar9 + 3;
            if (plVar2 == plVar1) {
              uVar18 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar5 = (long *)*plVar1 != plVar17;
              if (bVar5) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar9,plVar9 + 3);
                plVar17 = (long *)plVar9[3];
              }
              uVar18 = (ulong)bVar5;
              plVar1 = plVar9 + 6;
              if (plVar2 == plVar1) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar9 + 6);
                  plVar17 = (long *)plVar9[6];
                  uVar18 = 2;
                }
                plVar1 = plVar9 + 9;
                if (plVar2 == plVar1) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar9 + 9);
                    plVar17 = (long *)plVar9[9];
                    uVar18 = 3;
                  }
                  plVar1 = plVar9 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar9 + 0xc);
                      plVar17 = (long *)plVar9[0xc];
                      uVar18 = 4;
                    }
                    plVar1 = plVar9 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar9 + 0xf);
                        plVar17 = (long *)plVar9[0xf];
                        uVar18 = 5;
                      }
                      uVar8 = 6;
                      for (plVar1 = plVar9 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar1);
                          plVar17 = (long *)*plVar1;
                          uVar18 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + uVar18 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
      puVar7 = *(undefined8 **)(param_2 + 0x1c0);
    }
    *(long **)(param_2 + 0x1c8) = plVar14;
    *(undefined8 *)(param_2 + 0x1d0) = uVar12;
    *(undefined8 *)(param_2 + 0x1d8) = uVar10;
    pfVar15 = (float *)(puVar7 + 0xd);
    if (*pfVar15 == param_1) goto LAB_0151fc68;
  }
  else {
    pfVar15 = (float *)(*(long *)(param_2 + 0x1c0) + 0x68);
    if (*pfVar15 == param_1) {
      return;
    }
  }
  *pfVar15 = param_1;
LAB_0151fc68:
  lVar13 = *(long *)(param_2 + 0x208);
  lVar11 = *(long *)(param_2 + 0x210);
  if (((lVar13 != lVar11) && (*(undefined1 *)(lVar13 + 0x10) = 1, lVar13 + 0x18 != lVar11)) &&
     (*(undefined1 *)(lVar13 + 0x28) = 1, lVar13 + 0x30 != lVar11)) {
    *(undefined1 *)(lVar13 + 0x40) = 1;
    for (lVar13 = lVar13 + 0x48; lVar13 != lVar11; lVar13 = lVar13 + 0x18) {
      *(undefined1 *)(lVar13 + 0x10) = 1;
    }
  }
  return;
}


