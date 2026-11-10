/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c973e4; name: FUN_00c973e4
 */


void FUN_00c973e4(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (puVar6 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = plVar13;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      puVar6[0xf] = 0;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      puVar6[4] = 0x555555555555555;
      puVar6[5] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0x400000010;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0xbf800000bf800000;
      puVar6[0xe] = 0;
      memset(puVar6 + 0x11,0,0x49);
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      uVar9 = 8;
      uVar11 = 0xd8;
    }
    lVar12 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar6;
    if (lVar12 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar3 = *(int *)(lVar10 + 0x12c8);
      iVar5 = iVar3 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar5;
      if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
        *(int *)(lVar10 + 0x12cc) = iVar5;
      }
      FUN_00ee9b24(lVar12);
      plVar8 = *(long **)(param_1 + 0x1c8);
      uVar2 = *(undefined8 *)(param_1 + 0x1d0);
      uVar15 = *(undefined8 *)(param_1 + 0x1d8);
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,uVar2,uVar15);
      }
      else {
        FUN_00c48fe8(plVar8,lVar12,uVar2,uVar15);
      }
      lVar12 = FUN_00c4e600();
      iVar5 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          local_68 = plVar8;
          FUN_00c4ea30(&local_68,&local_70);
          plVar16 = (long *)*plVar8;
          plVar1 = plVar8;
          if (plVar8[600] != 0) {
            plVar1 = plVar8 + plVar8[600] * 3;
          }
          if (plVar1 == plVar8) {
            uVar18 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8);
              plVar16 = (long *)*plVar8;
            }
            plVar17 = plVar8 + 3;
            if (plVar1 == plVar17) {
              uVar18 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              bVar4 = (long *)*plVar17 != plVar16;
              if (bVar4) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8 + 3);
                plVar16 = (long *)plVar8[3];
              }
              uVar18 = (ulong)bVar4;
              plVar17 = plVar8 + 6;
              if (plVar1 == plVar17) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar17 + 0xd0))();
                if ((long *)*plVar17 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar8 + 6);
                  plVar16 = (long *)plVar8[6];
                  uVar18 = 2;
                }
                plVar17 = plVar8 + 9;
                if (plVar1 == plVar17) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar17 + 0xd0))();
                  if ((long *)*plVar17 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar8 + 9);
                    plVar16 = (long *)plVar8[9];
                    uVar18 = 3;
                  }
                  plVar17 = plVar8 + 0xc;
                  if (plVar1 == plVar17) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar17 + 0xd0))();
                    if ((long *)*plVar17 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar8 + 0xc);
                      plVar16 = (long *)plVar8[0xc];
                      uVar18 = 4;
                    }
                    plVar17 = plVar8 + 0xf;
                    if (plVar1 == plVar17) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar17 + 0xd0))();
                      if ((long *)*plVar17 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar8 + 0xf);
                        plVar16 = (long *)plVar8[0xf];
                        uVar18 = 5;
                      }
                      uVar7 = 6;
                      for (plVar17 = plVar8 + 0x12; plVar1 != plVar17; plVar17 = plVar17 + 3) {
                        (**(code **)(*(long *)*plVar17 + 0xd0))();
                        if ((long *)*plVar17 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar17);
                          plVar16 = (long *)*plVar17;
                          uVar18 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar18 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x1c0);
    }
    *(long **)(param_1 + 0x1c8) = plVar13;
    *(undefined8 *)(param_1 + 0x1d0) = uVar11;
    *(undefined8 *)(param_1 + 0x1d8) = uVar9;
    piVar14 = (int *)((long)puVar6 + 100);
    if (*piVar14 == param_2) goto LAB_00c97528;
  }
  else {
    piVar14 = (int *)(*(long *)(param_1 + 0x1c0) + 100);
    if (*piVar14 == param_2) {
      return;
    }
  }
  *piVar14 = param_2;
LAB_00c97528:
  lVar12 = *(long *)(param_1 + 0x208);
  lVar10 = *(long *)(param_1 + 0x210);
  if (((lVar12 != lVar10) && (*(undefined1 *)(lVar12 + 0x10) = 1, lVar12 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar12 + 0x28) = 1, lVar12 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar12 + 0x40) = 1;
    for (lVar12 = lVar12 + 0x48; lVar12 != lVar10; lVar12 = lVar12 + 0x18) {
      *(undefined1 *)(lVar12 + 0x10) = 1;
    }
  }
  return;
}


