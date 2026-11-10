/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00aa1bc4; name: FUN_00aa1bc4
 */


void FUN_00aa1bc4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
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
  
  uVar1 = *(uint *)(param_1 + 4);
  switch((ulong)uVar1) {
  case 0:
    local_80 = (undefined8 *)0xea7d19e5dbafdb35;
    plStack_78 = (long *)&DAT_03bef6e1;
    local_70 = 4;
    break;
  case 1:
  case 8:
    plStack_78 = (long *)0x3c35082;
    local_80 = (undefined8 *)0x37d70e5a19407f39;
LAB_00aa1c9c:
    local_70 = 7;
    break;
  case 2:
    plStack_78 = (long *)0x3bfce08;
    local_80 = (undefined8 *)0x19b9490427cf21a2;
    goto LAB_00aa1cc0;
  case 3:
    plStack_78 = (long *)0x3c3bb6c;
    local_80 = (undefined8 *)0x6fd5a33c12d44e1b;
    goto LAB_00aa1d08;
  case 4:
    plStack_78 = (long *)0x3ca6517;
    local_80 = (undefined8 *)0x7ddfbc7d1a52ea5f;
LAB_00aa1cc0:
    local_70 = 10;
    break;
  case 5:
    local_80 = (undefined8 *)0xba81e8450aa9b992;
    plStack_78 = (long *)0x3c70f3a;
    local_70 = 9;
    break;
  case 6:
    plStack_78 = (long *)0x3bdb7cf;
    local_80 = (undefined8 *)0x43741481b5ae6dc6;
    goto LAB_00aa1c9c;
  case 7:
    plStack_78 = (long *)0x3c496b3;
    local_80 = (undefined8 *)0x9e6a35bd0788d4df;
LAB_00aa1d08:
    local_70 = 6;
    break;
  default:
    return;
  }
  uStack_68 = 0;
  lVar4 = FUN_020d8e68(&local_80);
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    plVar8 = (long *)0x0;
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + -0x28);
    }
  }
  local_c0 = 0xddb8b69366ac0946;
  pcStack_b8 = "pe_AudioJointComponent_SetGroup";
  local_b0 = 0x1f;
  local_a8 = (long *)0x0;
  plVar5 = (long *)(**(code **)(*plVar8 + 0x138))(plVar8);
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x300,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    uVar15 = 0;
    uVar13 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = (undefined8 *)0x0;
    plStack_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar5;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_00e76b9c(puVar6,&local_c0);
    puVar6[0x40] = 0;
    uVar13 = 0x300;
    uVar15 = 0x10;
    *puVar6 = &PTR_FUN_04545770;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x53] = 0;
    puVar6[0x52] = 0;
    puVar6[0x51] = 0;
    puVar6[0x50] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    local_70 = 0x300;
    uStack_68 = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_80 = puVar6;
    plStack_78 = plVar5;
  }
  plVar5 = plStack_78;
  pcVar10 = (code *)puVar6[0x11];
  if (pcVar10 != (code *)0x0) {
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    (*pcVar10)(puVar6 + 0x14);
  }
  puVar6[0x10] = &LAB_01e2e2e8;
  puVar6[0x11] = &LAB_00aa2f68;
  pcVar10 = (code *)puVar6[0x21];
  puVar6[0x14] = lVar4;
  puVar6[0x15] = (ulong)uVar1;
  puVar6[0x12] = &LAB_00aa2f6c;
  puVar6[0x13] = &LAB_00aa2f78;
  if (pcVar10 != (code *)0x0) {
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    (*pcVar10)(puVar6 + 0x24);
  }
  pcVar10 = (code *)puVar6[0x31];
  if (pcVar10 != (code *)0x0) {
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    (*pcVar10)(puVar6 + 0x34);
  }
  pcVar10 = (code *)puVar6[0x41];
  if (pcVar10 != (code *)0x0) {
    puVar6[0x43] = 0;
    puVar6[0x42] = 0;
    puVar6[0x41] = 0;
    puVar6[0x40] = 0;
    (*pcVar10)(puVar6 + 0x44);
  }
  pcVar10 = (code *)puVar6[0x51];
  if (pcVar10 != (code *)0x0) {
    puVar6[0x52] = 0;
    puVar6[0x53] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    (*pcVar10)(puVar6 + 0x54);
  }
  puVar6[0x50] = FUN_010113c4;
  puVar6[0x51] = &LAB_00aa2f84;
  puVar6[0x52] = &LAB_00aa2f88;
  *(undefined1 *)(puVar6 + 0x54) = 0;
  puVar6[0x53] = &LAB_00aa2f94;
  local_80 = (undefined8 *)0x0;
  local_a0 = puVar6;
  local_98 = plVar5;
  local_90 = uVar13;
  local_88 = uVar15;
  FUN_00e767a8(plVar8,&local_a0);
  puVar6 = local_a0;
  local_a0 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar2 = *(int *)(lVar4 + 0x12c8);
    iVar3 = iVar2 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar3;
    if (*(int *)(lVar4 + 0x12cc) <= iVar2) {
      *(int *)(lVar4 + 0x12cc) = iVar3;
    }
    (**(code **)*puVar6)(puVar6);
    uVar15 = local_88;
    uVar13 = local_90;
    plVar8 = local_98;
    uVar7 = (**(code **)(*local_98 + 0xf8))(local_98);
    if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,uVar13,uVar15);
    }
    else {
      FUN_00c48fe8(plVar8,puVar6,uVar13,uVar15);
    }
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar3;
    if (iVar3 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_60 = plVar8 + plVar8[600] * 3;
        plStack_58 = plVar8;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar11 = (long *)*plVar8;
        plVar5 = plVar8;
        if (plVar8[600] != 0) {
          plVar5 = plVar8 + plVar8[600] * 3;
        }
        if (plVar5 == plVar8) {
          lVar14 = 0;
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          lVar14 = 0;
          plVar12 = plVar8;
          do {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + lVar14 * 3,plVar12);
              plVar11 = (long *)*plVar12;
              lVar14 = lVar9;
            }
            plVar12 = plVar12 + 3;
            lVar9 = lVar9 + 1;
          } while (plVar5 != plVar12);
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + lVar14 * 3,plVar8 + lVar9 * 3);
        puVar6 = local_80;
        plVar8[600] = 0;
        *(undefined4 *)(lVar4 + 0x12cc) = 0;
        local_80 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_01e2e474(&plStack_78);
        }
        goto LAB_00aa1ee8;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  local_80 = (undefined8 *)0x0;
LAB_00aa1ee8:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  return;
}


