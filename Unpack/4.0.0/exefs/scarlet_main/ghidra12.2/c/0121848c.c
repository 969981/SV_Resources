/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0121848c; name: FUN_0121848c
 */


void FUN_0121848c(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined2 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *local_70;
  long *plStack_68;
  
  plVar13 = *(long **)(param_1 + 8);
  puVar6 = (undefined2 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x110,0x10);
  if (puVar6 != (undefined2 *)0x0) {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar13;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 0x14) = 0;
    puVar18 = (undefined8 *)(puVar6 + 8);
    *puVar18 = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x54) = 0;
    puVar16 = (undefined8 *)(puVar6 + 0x48);
    *puVar16 = 0;
    *(undefined8 *)(puVar6 + 0x4c) = 0;
    *(undefined8 *)(puVar6 + 0x50) = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    pcVar10 = *(code **)(puVar6 + 0xc);
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x14) = 0;
      *puVar18 = 0;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      (*pcVar10)(puVar6 + 0x18);
    }
    if ((code *)param_3[3] != (code *)0x0) {
      (*(code *)param_3[3])(param_3 + 4,puVar6 + 0x18);
      uVar11 = param_3[1];
      *(undefined8 *)(puVar6 + 0x14) = param_3[3];
      uVar12 = param_3[2];
      *puVar18 = *param_3;
      *(undefined8 *)(puVar6 + 0xc) = uVar11;
      *(undefined8 *)(puVar6 + 0x10) = uVar12;
      pcVar10 = (code *)param_3[1];
      if (pcVar10 != (code *)0x0) {
        param_3[2] = 0;
        param_3[3] = 0;
        *param_3 = 0;
        param_3[1] = 0;
        (*pcVar10)(param_3 + 4);
      }
    }
    pcVar10 = *(code **)(puVar6 + 0x4c);
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(puVar6 + 0x50) = 0;
      *(undefined8 *)(puVar6 + 0x54) = 0;
      *puVar16 = 0;
      *(undefined8 *)(puVar6 + 0x4c) = 0;
      (*pcVar10)(puVar6 + 0x58);
    }
    if ((code *)param_4[3] != (code *)0x0) {
      (*(code *)param_4[3])(param_4 + 4,puVar6 + 0x58);
      uVar11 = param_4[1];
      *(undefined8 *)(puVar6 + 0x54) = param_4[3];
      uVar12 = param_4[2];
      *puVar16 = *param_4;
      *(undefined8 *)(puVar6 + 0x4c) = uVar11;
      *(undefined8 *)(puVar6 + 0x50) = uVar12;
      pcVar10 = (code *)param_4[1];
      if (pcVar10 != (code *)0x0) {
        param_4[2] = 0;
        param_4[3] = 0;
        *param_4 = 0;
        param_4[1] = 0;
        (*pcVar10)(param_4 + 4);
      }
    }
    param_1 = param_1 + (ulong)param_2 * 0x20;
    lVar7 = *(long *)(param_1 + 0x540);
    *(undefined2 **)(param_1 + 0x540) = puVar6;
    if (lVar7 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar3 = *(int *)(lVar8 + 0x12c8);
      iVar5 = iVar3 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar5;
      if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
        *(int *)(lVar8 + 0x12cc) = iVar5;
      }
      pcVar10 = *(code **)(lVar7 + 0x98);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0xa0) = 0;
        *(undefined8 *)(lVar7 + 0xa8) = 0;
        *(undefined8 *)(lVar7 + 0x90) = 0;
        *(undefined8 *)(lVar7 + 0x98) = 0;
        (*pcVar10)(lVar7 + 0xb0);
      }
      pcVar10 = *(code **)(lVar7 + 0x18);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (*pcVar10)(lVar7 + 0x30);
      }
      plVar15 = *(long **)(param_1 + 0x548);
      uVar11 = *(undefined8 *)(param_1 + 0x550);
      uVar12 = *(undefined8 *)(param_1 + 0x558);
      uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar7,uVar11,uVar12);
      }
      else {
        FUN_00c48fe8(plVar15,lVar7,uVar11,uVar12);
      }
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          plStack_68 = plVar15;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar14 = (long *)*plVar15;
          plVar2 = plVar15;
          if (plVar15[600] != 0) {
            plVar2 = plVar15 + plVar15[600] * 3;
          }
          if (plVar2 == plVar15) {
            uVar17 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
              plVar14 = (long *)*plVar15;
            }
            plVar1 = plVar15 + 3;
            if (plVar2 == plVar1) {
              uVar17 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != plVar14;
              if (bVar4) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
                plVar14 = (long *)plVar15[3];
              }
              uVar17 = (ulong)bVar4;
              plVar1 = plVar15 + 6;
              if (plVar2 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                  plVar14 = (long *)plVar15[6];
                  uVar17 = 2;
                }
                plVar1 = plVar15 + 9;
                if (plVar2 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                    plVar14 = (long *)plVar15[9];
                    uVar17 = 3;
                  }
                  plVar1 = plVar15 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                      plVar14 = (long *)plVar15[0xc];
                      uVar17 = 4;
                    }
                    plVar1 = plVar15 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                        plVar14 = (long *)plVar15[0xf];
                        uVar17 = 5;
                      }
                      uVar9 = 6;
                      for (plVar1 = plVar15 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar1);
                          plVar14 = (long *)*plVar1;
                          uVar17 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar9 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x550) = 0x110;
    *(long **)(param_1 + 0x548) = plVar13;
    *(undefined8 *)(param_1 + 0x558) = 0x10;
  }
  return;
}


