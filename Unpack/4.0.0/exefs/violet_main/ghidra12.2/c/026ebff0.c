/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ebff0; name: FUN_026ebff0
 */


long * FUN_026ebff0(undefined8 *param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ushort *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *local_160;
  undefined1 auStack_158 [56];
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 auStack_118 [24];
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_b0 = (long *)0x0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_b0 = (long *)0x0;
    if (uVar9 != 0) {
      puVar1 = (uint *)((long)param_3 + uVar9);
      local_b0 = (long *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  FUN_00ea0a7c(&local_b8,&local_b0);
  puVar10 = (ushort *)((long)param_3 - (long)*param_3);
  uVar2 = *puVar10;
  if (uVar2 < 7) {
    uVar15 = 0;
    uVar12 = 0;
    uVar13 = 0;
    local_b0 = (long *)0x0;
  }
  else {
    if ((ulong)puVar10[3] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)((long)param_3 + (ulong)puVar10[3]);
    }
    if (uVar2 < 0xd) {
      uVar15 = 0;
      if (uVar2 < 9) {
        local_b0 = (long *)0x0;
        uVar13 = 0;
        goto LAB_026ec0c8;
      }
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      if ((ulong)puVar10[6] == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (undefined1)*(undefined4 *)((long)param_3 + (ulong)puVar10[6]);
      }
      if ((uVar2 < 0xf) || ((ulong)puVar10[7] == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (char)*(undefined4 *)((long)param_3 + (ulong)puVar10[7]);
      }
    }
    local_b0 = (long *)0x0;
    if ((ulong)puVar10[4] != 0) {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar10[4]);
      local_b0 = (long *)((long)puVar1 + (ulong)*puVar1);
    }
  }
LAB_026ec0c8:
  FUN_00ea0a7c(&local_c0,&local_b0);
  uStack_e0 = *param_1;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c8 = 0;
  local_e8 = 0;
  local_d8 = 0x1fffffffffffffff;
  uStack_d0 = 0;
  if ((10 < *(ushort *)((long)param_3 - (long)*param_3)) &&
     (uVar9 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5], uVar9 != 0)) {
    puVar1 = (uint *)((long)param_3 + uVar9);
    uVar17 = (ulong)*puVar1;
    FUN_011bda1c(&local_f8,*(undefined4 *)((long)puVar1 + uVar17));
    if (*(int *)((long)puVar1 + uVar17) != 0) {
      lVar18 = 0;
      uVar19 = 0;
      lVar3 = uVar17 + uVar9 + 4;
      do {
        local_b0 = (long *)((long)param_3 +
                           lVar18 + (ulong)*(uint *)((long)param_3 + uVar19 * 4 + lVar3) + lVar3);
        FUN_026ec510(&local_f8,&local_b0);
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 4;
      } while (uVar19 < *(uint *)((long)puVar1 + uVar17));
    }
  }
  FUN_0135d26c(auStack_118,&local_b8);
  local_160 = local_c0;
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x18))();
  }
  FUN_00e3c378(auStack_158,&local_f8);
  local_120 = uVar12;
  local_11c = uVar13;
  local_11b = uVar15;
  plVar7 = (long *)(**(code **)(*param_2 + 0x138))(param_2);
  plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x300,0x10);
  if (plVar8 == (long *)0x0) {
    plVar7 = (long *)0x0;
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar7;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    FUN_00e76b9c(plVar8,auStack_118);
    puVar4 = PTR_DAT_047db030;
    plVar8[0x40] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    *plVar8 = (long)(puVar4 + 0x10);
    plVar8[0x20] = 0;
    plVar8[0x21] = 0;
    uVar16 = 0x300;
    plVar8[0x41] = 0;
    plVar8[0x42] = 0;
    plVar8[0x43] = 0;
    plVar8[0x53] = 0;
    plVar8[0x52] = 0;
    plVar8[0x51] = 0;
    plVar8[0x50] = 0;
    plVar8[0x22] = 0;
    plVar8[0x23] = 0;
    plVar8[0x30] = 0;
    plVar8[0x31] = 0;
    plVar8[0x32] = 0;
    plVar8[0x33] = 0;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    uVar14 = 0x10;
  }
  FUN_026ec560(&local_b0,&local_160);
  pcVar11 = (code *)plVar8[0x11];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    (*pcVar11)(plVar8 + 0x14);
  }
  plVar5 = local_b0;
  local_b0 = (long *)0x0;
  plVar8[0x1a] = local_80;
  plVar8[0x1b] = lStack_78;
  plVar8[0x18] = local_90;
  plVar8[0x19] = lStack_88;
  plVar8[0x14] = (long)plVar5;
  plVar8[0x15] = (long)local_a8;
  plVar8[0x16] = local_a0;
  plVar8[0x17] = local_98;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = (long *)0x0;
  *(undefined2 *)((long)plVar8 + 0xe4) = local_6c;
  *(undefined4 *)(plVar8 + 0x1c) = local_70;
  plVar8[0x10] = (long)&LAB_026eca74;
  plVar8[0x11] = (long)&LAB_026ecc0c;
  plVar8[0x12] = (long)FUN_026ed0b0;
  plVar8[0x13] = (long)&LAB_02ba9478;
  FUN_026ec5b4(&local_a8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  pcVar11 = (code *)plVar8[0x21];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x22] = 0;
    plVar8[0x23] = 0;
    plVar8[0x20] = 0;
    plVar8[0x21] = 0;
    (*pcVar11)(plVar8 + 0x24);
  }
  pcVar11 = (code *)plVar8[0x31];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x32] = 0;
    plVar8[0x33] = 0;
    plVar8[0x30] = 0;
    plVar8[0x31] = 0;
    (*pcVar11)(plVar8 + 0x34);
  }
  pcVar11 = (code *)plVar8[0x41];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x43] = 0;
    plVar8[0x42] = 0;
    plVar8[0x41] = 0;
    plVar8[0x40] = 0;
    (*pcVar11)(plVar8 + 0x44);
  }
  pcVar11 = (code *)plVar8[0x51];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x53] = 0;
    plVar8[0x52] = 0;
    plVar8[0x51] = 0;
    plVar8[0x50] = 0;
    (*pcVar11)(plVar8 + 0x54);
  }
  local_b0 = plVar8;
  local_a8 = plVar7;
  local_a0 = uVar16;
  local_98 = uVar14;
  FUN_00e767a8(param_2,&local_b0);
  FUN_026ec694(&local_b0);
  FUN_026ec5b4(auStack_158);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  FUN_026ec5b4(&local_f8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return param_2;
}


