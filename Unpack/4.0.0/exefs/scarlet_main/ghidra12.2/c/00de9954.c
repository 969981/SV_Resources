/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00de9954; name: FUN_00de9954
 */


void FUN_00de9954(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  long *plStack_58;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x138))();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x300,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    uVar13 = 0;
    uVar12 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = (undefined8 *)0x0;
    plStack_78 = (long *)0x0;
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
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar6;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_00e76b9c(puVar7,param_2);
    puVar7[0x40] = 0;
    uVar12 = 0x300;
    uVar13 = 0x10;
    *puVar7 = &PTR_FUN_04545770;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x41] = 0;
    puVar7[0x42] = 0;
    puVar7[0x43] = 0;
    puVar7[0x53] = 0;
    puVar7[0x52] = 0;
    puVar7[0x51] = 0;
    puVar7[0x50] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    puVar7[0x30] = 0;
    puVar7[0x31] = 0;
    puVar7[0x32] = 0;
    puVar7[0x33] = 0;
    local_70 = 0x300;
    uStack_68 = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    local_80 = puVar7;
    plStack_78 = plVar6;
  }
  plVar6 = plStack_78;
  pcVar10 = (code *)puVar7[0x11];
  if (pcVar10 != (code *)0x0) {
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    (*pcVar10)(puVar7 + 0x14);
  }
  *(undefined1 *)(puVar7 + 0x14) = 0;
  puVar7[0x10] = &LAB_0186a8f0;
  puVar7[0x11] = &LAB_00aa514c;
  pcVar10 = (code *)puVar7[0x21];
  puVar7[0x12] = &LAB_00aa5150;
  puVar7[0x13] = &LAB_00aa515c;
  if (pcVar10 != (code *)0x0) {
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    (*pcVar10)(puVar7 + 0x24);
  }
  *(undefined1 *)(puVar7 + 0x24) = 0;
  puVar7[0x20] = &LAB_01e3a0c0;
  puVar7[0x21] = &LAB_00aa5168;
  pcVar10 = (code *)puVar7[0x31];
  puVar7[0x22] = &LAB_00aa516c;
  puVar7[0x23] = &LAB_00aa5178;
  if (pcVar10 != (code *)0x0) {
    puVar7[0x32] = 0;
    puVar7[0x33] = 0;
    puVar7[0x30] = 0;
    puVar7[0x31] = 0;
    (*pcVar10)(puVar7 + 0x34);
  }
  pcVar10 = (code *)puVar7[0x41];
  if (pcVar10 != (code *)0x0) {
    puVar7[0x43] = 0;
    puVar7[0x42] = 0;
    puVar7[0x41] = 0;
    puVar7[0x40] = 0;
    (*pcVar10)(puVar7 + 0x44);
  }
  pcVar10 = (code *)puVar7[0x51];
  if (pcVar10 != (code *)0x0) {
    puVar7[0x53] = 0;
    puVar7[0x52] = 0;
    puVar7[0x51] = 0;
    puVar7[0x50] = 0;
    (*pcVar10)(puVar7 + 0x54);
  }
  local_80 = (undefined8 *)0x0;
  local_a0 = puVar7;
  local_98 = plVar6;
  local_90 = uVar12;
  local_88 = uVar13;
  FUN_00e767a8(param_1,&local_a0);
  puVar7 = local_a0;
  local_a0 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar3 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar3 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar7)(puVar7);
    uVar13 = local_88;
    uVar12 = local_90;
    plVar6 = local_98;
    uVar9 = (**(code **)(*local_98 + 0xf8))(local_98);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar6,puVar7,uVar12,uVar13);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] == 0) {
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
      else {
        local_60 = plVar6 + plVar6[600] * 3;
        plStack_58 = plVar6;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar11 = (long *)*plVar6;
        plVar2 = plVar6;
        if (plVar6[600] != 0) {
          plVar2 = plVar6 + plVar6[600] * 3;
        }
        if (plVar2 == plVar6) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar6,plVar6);
            plVar11 = (long *)*plVar6;
          }
          plVar1 = plVar6 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar11;
            if (bVar4) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar6,plVar6 + 3);
              plVar11 = (long *)plVar6[3];
            }
            uVar14 = (ulong)bVar4;
            plVar1 = plVar6 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar6 + 6);
                plVar11 = (long *)plVar6[6];
                uVar14 = 2;
              }
              plVar1 = plVar6 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar6 + 9);
                  plVar11 = (long *)plVar6[9];
                  uVar14 = 3;
                }
                plVar1 = plVar6 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar6 + 0xc);
                    plVar11 = (long *)plVar6[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar6 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar6 + 0xf);
                      plVar11 = (long *)plVar6[0xf];
                      uVar14 = 5;
                    }
                    uVar9 = 6;
                    for (plVar1 = plVar6 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar1);
                        plVar11 = (long *)*plVar1;
                        uVar14 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar14 * 3,plVar6 + uVar9 * 3);
        puVar7 = local_80;
        plVar6[600] = 0;
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
        local_80 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          FUN_01e2e474(&plStack_78);
        }
      }
    }
  }
  return;
}


