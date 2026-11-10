/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012190b8; name: FUN_012190b8
 */


void FUN_012190b8(long param_1,uint param_2,long *param_3,long *param_4,long *param_5,long *param_6,
                 long *param_7)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *local_70;
  long *local_68;
  
  if (*(char *)param_3[1] != '\0') {
    plVar7 = *(long **)(param_1 + 8);
    plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x280,0x10);
    if (plVar8 != (long *)0x0) {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar7;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar8 = (long)(PTR_DAT_047dd990 + 0x10);
      plVar8[1] = *param_3;
      plVar8[2] = param_3[1];
      plVar8[3] = param_3[2];
      plVar10 = (long *)param_3[3];
      plVar8[4] = (long)plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))();
      }
      plVar10 = plVar8 + 6;
      *plVar10 = 0;
      plVar8[8] = 0;
      plVar8[9] = 0;
      plVar8[7] = 0;
      *plVar8 = (long)&PTR_LAB_045a7210;
      plVar8[0x18] = 0;
      plVar8[0x19] = 0;
      plVar8[0x1a] = 0;
      plVar8[0x1b] = 0;
      plVar8[0x1c] = 0;
      plVar8[0x1d] = 0;
      puVar1 = PTR_DAT_047dafb8 + 0x10;
      *(undefined2 *)(plVar8 + 0x1e) = 0;
      *(undefined1 *)((long)plVar8 + 0xf2) = 0;
      plVar8[0x40] = 0;
      plVar8[0x41] = 0;
      plVar8[0x42] = 0;
      plVar8[0x43] = 0;
      plVar8[0x16] = (long)puVar1;
      plVar8[0x17] = 0;
      plVar8[0x20] = 0;
      plVar8[0x21] = 0;
      plVar8[0x22] = 0;
      plVar8[0x23] = 0;
      plVar8[0x32] = 0;
      plVar8[0x33] = 0;
      plVar8[0x30] = 0;
      plVar8[0x31] = 0;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      pcVar12 = (code *)plVar8[7];
      if (pcVar12 != (code *)0x0) {
        plVar8[8] = 0;
        plVar8[9] = 0;
        *plVar10 = 0;
        plVar8[7] = 0;
        (*pcVar12)(plVar8 + 10);
      }
      if ((code *)param_4[3] != (code *)0x0) {
        (*(code *)param_4[3])(param_4 + 4,plVar8 + 10);
        lVar9 = param_4[1];
        plVar8[9] = param_4[3];
        lVar13 = param_4[2];
        *plVar10 = *param_4;
        plVar8[7] = lVar9;
        plVar8[8] = lVar13;
        pcVar12 = (code *)param_4[1];
        if (pcVar12 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar12)(param_4 + 4);
        }
      }
      pcVar12 = (code *)plVar8[0x21];
      if (pcVar12 != (code *)0x0) {
        plVar8[0x22] = 0;
        plVar8[0x23] = 0;
        plVar8[0x20] = 0;
        plVar8[0x21] = 0;
        (*pcVar12)(plVar8 + 0x24);
      }
      if ((code *)param_5[3] != (code *)0x0) {
        (*(code *)param_5[3])(param_5 + 4,plVar8 + 0x24);
        lVar9 = param_5[1];
        plVar8[0x23] = param_5[3];
        lVar13 = param_5[2];
        plVar8[0x20] = *param_5;
        plVar8[0x21] = lVar9;
        plVar8[0x22] = lVar13;
        pcVar12 = (code *)param_5[1];
        if (pcVar12 != (code *)0x0) {
          param_5[2] = 0;
          param_5[3] = 0;
          *param_5 = 0;
          param_5[1] = 0;
          (*pcVar12)(param_5 + 4);
        }
      }
      pcVar12 = (code *)plVar8[0x31];
      if (pcVar12 != (code *)0x0) {
        plVar8[0x32] = 0;
        plVar8[0x33] = 0;
        plVar8[0x30] = 0;
        plVar8[0x31] = 0;
        (*pcVar12)(plVar8 + 0x34);
      }
      if ((code *)param_6[3] != (code *)0x0) {
        (*(code *)param_6[3])(param_6 + 4,plVar8 + 0x34);
        lVar9 = param_6[1];
        plVar8[0x33] = param_6[3];
        lVar13 = param_6[2];
        plVar8[0x30] = *param_6;
        plVar8[0x31] = lVar9;
        plVar8[0x32] = lVar13;
        pcVar12 = (code *)param_6[1];
        if (pcVar12 != (code *)0x0) {
          param_6[2] = 0;
          param_6[3] = 0;
          *param_6 = 0;
          param_6[1] = 0;
          (*pcVar12)(param_6 + 4);
        }
      }
      pcVar12 = (code *)plVar8[0x41];
      if (pcVar12 != (code *)0x0) {
        plVar8[0x42] = 0;
        plVar8[0x43] = 0;
        plVar8[0x40] = 0;
        plVar8[0x41] = 0;
        (*pcVar12)(plVar8 + 0x44);
      }
      if ((code *)param_7[3] != (code *)0x0) {
        (*(code *)param_7[3])(param_7 + 4,plVar8 + 0x44);
        lVar9 = param_7[1];
        plVar8[0x43] = param_7[3];
        lVar13 = param_7[2];
        plVar8[0x40] = *param_7;
        plVar8[0x41] = lVar9;
        plVar8[0x42] = lVar13;
        pcVar12 = (code *)param_7[1];
        if (pcVar12 != (code *)0x0) {
          param_7[2] = 0;
          param_7[3] = 0;
          *param_7 = 0;
          param_7[1] = 0;
          (*pcVar12)(param_7 + 4);
        }
      }
      param_1 = param_1 + (ulong)param_2 * 0x20;
      puVar14 = *(undefined8 **)(param_1 + 0x120);
      *(long **)(param_1 + 0x120) = plVar8;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar9 = FUN_00c4e600();
        iVar4 = *(int *)(lVar9 + 0x12c8);
        iVar6 = iVar4 + 1;
        *(int *)(lVar9 + 0x12c8) = iVar6;
        if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
          *(int *)(lVar9 + 0x12cc) = iVar6;
        }
        (**(code **)*puVar14)(puVar14);
        plVar8 = *(long **)(param_1 + 0x128);
        uVar3 = *(undefined8 *)(param_1 + 0x130);
        uVar15 = *(undefined8 *)(param_1 + 0x138);
        uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,puVar14,uVar3,uVar15);
        }
        else {
          FUN_00c48fe8(plVar8,puVar14,uVar3,uVar15);
        }
        lVar9 = FUN_00c4e600();
        iVar6 = *(int *)(lVar9 + 0x12c8) + -1;
        *(int *)(lVar9 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar8 = (long *)FUN_00c4e600();
          if (plVar8[600] != 0) {
            local_70 = plVar8 + plVar8[600] * 3;
            local_68 = plVar8;
            FUN_00c4ea30(&local_68,&local_70);
            plVar16 = (long *)*plVar8;
            plVar10 = plVar8;
            if (plVar8[600] != 0) {
              plVar10 = plVar8 + plVar8[600] * 3;
            }
            if (plVar10 == plVar8) {
              uVar17 = 0;
              uVar11 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar8 + 0xd0))();
              if ((long *)*plVar8 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8);
                plVar16 = (long *)*plVar8;
              }
              plVar2 = plVar8 + 3;
              if (plVar10 == plVar2) {
                uVar17 = 0;
                uVar11 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar5 = (long *)*plVar2 != plVar16;
                if (bVar5) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8 + 3);
                  plVar16 = (long *)plVar8[3];
                }
                uVar17 = (ulong)bVar5;
                plVar2 = plVar8 + 6;
                if (plVar10 == plVar2) {
                  uVar11 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar8 + 6);
                    plVar16 = (long *)plVar8[6];
                    uVar17 = 2;
                  }
                  plVar2 = plVar8 + 9;
                  if (plVar10 == plVar2) {
                    uVar11 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar8 + 9);
                      plVar16 = (long *)plVar8[9];
                      uVar17 = 3;
                    }
                    plVar2 = plVar8 + 0xc;
                    if (plVar10 == plVar2) {
                      uVar11 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar8 + 0xc);
                        plVar16 = (long *)plVar8[0xc];
                        uVar17 = 4;
                      }
                      plVar2 = plVar8 + 0xf;
                      if (plVar10 == plVar2) {
                        uVar11 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar8 + 0xf);
                          plVar16 = (long *)plVar8[0xf];
                          uVar17 = 5;
                        }
                        uVar11 = 6;
                        for (plVar2 = plVar8 + 0x12; plVar10 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar2);
                            plVar16 = (long *)*plVar2;
                            uVar17 = uVar11;
                          }
                          uVar11 = uVar11 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + uVar17 * 3,plVar8 + uVar11 * 3);
            plVar8[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
        }
      }
      *(long **)(param_1 + 0x128) = plVar7;
      *(undefined8 *)(param_1 + 0x130) = 0x280;
      *(undefined8 *)(param_1 + 0x138) = 0x10;
    }
  }
  return;
}


