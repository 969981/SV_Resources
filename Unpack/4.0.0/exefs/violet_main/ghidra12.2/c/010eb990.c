/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010eb990; name: FUN_010eb990
 */


long * FUN_010eb990(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  long *plVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  long local_170;
  long *plStack_168;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  long *local_f8;
  long local_f0;
  long *local_e8 [12];
  long *local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  
  plVar10 = (long *)FUN_00c8c7b4();
  puVar3 = PTR_DAT_047d2088;
  if (((*PTR_DAT_047d2088 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d2088), iVar9 != 0))
  {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar9 != 0)) {
      *(undefined8 *)PTR_DAT_047d20a0 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2090 = PTR_DAT_047d20a0;
    __cxa_guard_release(PTR_DAT_047d2088);
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
    puVar4 = PTR_DAT_047d2090;
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)PTR_DAT_047d2090) {
        plVar11 = (long *)thunk_FUN_008b4520(plVar10,0,
                                             &DAT_00003010 +
                                             *(long *)(*(long *)(param_1 + 0x40) + 0x30),
                                             *(undefined8 *)(param_1 + 0x60));
        if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d2088), iVar9 != 0)) {
          if (((*PTR_DAT_047d2098 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar9 != 0)) {
            *(undefined8 *)PTR_DAT_047d20a0 = 0;
            __cxa_guard_release(PTR_DAT_047d2098);
          }
          *(undefined **)puVar4 = PTR_DAT_047d20a0;
          __cxa_guard_release(PTR_DAT_047d2088);
        }
        if (plVar11 == (long *)0x0) goto LAB_010eba80;
        plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11);
        goto joined_r0x010eba68;
      }
    }
  }
  return (long *)0x0;
joined_r0x010eba68:
  if (plVar12 == (long *)0x0) goto LAB_010eba7c;
  if (plVar12 == (long *)puVar4) goto LAB_010eba80;
  plVar12 = (long *)*plVar12;
  goto joined_r0x010eba68;
LAB_010eba7c:
  plVar11 = (long *)0x0;
LAB_010eba80:
  FUN_010ec5e8(plVar11,*(undefined8 *)(param_3 + 8));
  FUN_00fab630(param_1,plVar11);
  puVar6 = PTR_DAT_047d20a0;
  puVar5 = PTR_DAT_047d2098;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11;
    do {
      if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          *(undefined8 *)puVar6 = 0;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar4 = puVar6;
        __cxa_guard_release(puVar3);
      }
      for (plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12); plVar13 != (long *)0x0;
          plVar13 = (long *)*plVar13) {
        if (plVar13 == (long *)puVar4) {
          FUN_00fab630(param_1,plVar12);
          break;
        }
      }
      plVar12 = (long *)FUN_00faadf0(plVar12);
    } while (plVar12 != (long *)0x0);
  }
  plVar12 = (long *)PTR_PTR_047d4508;
  plVar13 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_1 + 0x638) != 0) {
    lVar14 = FUN_00d36bcc(plVar11,0x14);
    lVar14 = *(long *)(lVar14 + 8);
    for (plVar12 = *(long **)(*(long *)(param_1 + 0x638) + 0x78); plVar12 != (long *)0x0;
        plVar12 = (long *)*plVar12) {
      puVar17 = (undefined8 *)plVar12[6];
      puVar1 = (undefined8 *)plVar12[7];
      if (puVar17 != puVar1) {
        do {
          puVar24 = (undefined1 *)*puVar17;
          plVar13 = (long *)puVar17[3];
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          if (puVar17[4] == plVar10[0x1d]) {
            lVar21 = *(long *)(puVar17[4] + 0x18);
            puVar22 = &DAT_cbf29ce484222645;
            bVar2 = *(byte *)(lVar21 + 0xb0);
            if (bVar2 != 0) {
              puVar22 = &DAT_cbf29ce484222645;
              pbVar19 = (byte *)(lVar21 + 0xb1);
              do {
                puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = *pbVar19;
                pbVar19 = pbVar19 + 1;
              } while (bVar2 != 0);
            }
            bVar8 = puVar24 == puVar22;
          }
          else {
            bVar8 = false;
          }
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13);
          }
          if (bVar8) goto LAB_010ebbf4;
          puVar17 = puVar17 + 0xd;
        } while (puVar17 != puVar1);
        puVar17 = puVar1;
LAB_010ebbf4:
        if (puVar17 != (undefined8 *)plVar12[7]) {
          local_110 = (undefined1 *)*puVar17;
          local_108 = (code *)puVar17[1];
          local_100 = (undefined1 *)puVar17[2];
          local_f8 = (long *)puVar17[3];
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x18))();
          }
          memcpy(&local_f0,puVar17 + 4,0x48);
          goto LAB_010ebc64;
        }
      }
    }
    local_110 = &DAT_cbf29ce484222645;
    local_108 = (code *)&DAT_03c886bc;
    local_100 = (undefined1 *)0x0;
    local_f8 = (long *)0x0;
    local_f0 = 0;
    FUN_0216c05c(local_e8);
LAB_010ebc64:
    plVar13 = (long *)PTR_DAT_047d8b70;
    plVar12 = (long *)PTR_PTR_047d4508;
    if ((char)*local_e8[0] == '\0') {
      plVar16 = (long *)FUN_00d44228();
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar15;
      FUN_00cf9884(&local_88,uVar15,local_e8[0]);
      plVar16 = local_88;
    }
    uVar15 = *(undefined8 *)(param_1 + 0x638);
    local_88 = plVar13;
    if (plVar16 != (long *)0x0) {
      local_88 = plVar16 + 6;
    }
    local_88 = (long *)*local_88;
    plVar20 = plVar12;
    if (plVar16 != (long *)0x0) {
      plVar20 = plVar16 + 7;
    }
    lStack_80 = *plVar20;
    if (plVar16 == (long *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = plVar16[8];
    }
    local_70 = (long *)0x0;
    plVar20 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plVar20 = plVar16;
    }
    local_70 = plVar20;
    uVar15 = FUN_010ec1f8(uVar15,&local_88,plVar11);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    *(undefined8 *)(lVar14 + 0x70) = uVar15;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  local_110 = &LAB_00d357c8;
  local_108 = FUN_02b3c29c;
  local_100 = &LAB_02b3c2a0;
  local_f8 = (long *)&LAB_02b3c2ac;
  local_190 = &LAB_00d357c8;
  local_188 = FUN_02b3c29c;
  local_180 = &LAB_02b3c2a0;
  puStack_178 = &LAB_02b3c2ac;
  plVar16 = *(long **)(*(long *)(param_1 + 0x328) + 0x38);
  local_170 = param_1;
  plStack_168 = plVar11;
  local_f0 = param_1;
  local_e8[0] = plVar11;
  (**(code **)(*plVar16 + 0x60))(plVar16,0x616e696d,&LAB_02b3b430,&local_190);
  pcVar7 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    puStack_178 = (undefined1 *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar7)(&local_170);
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x328) + 0x38);
  (**(code **)(*plVar16 + 0x18))(plVar16,FUN_011c7f74);
  FUN_010ec1c4(plVar10[3],plVar11);
  FUN_00faae34(&local_88,plVar11);
  puVar17 = (undefined8 *)
            (**(code **)(**(long **)(param_1 + 0x6b8) + 0x10))(*(long **)(param_1 + 0x6b8),0x38,8);
  if (puVar17 == (undefined8 *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6b8) + 0xe8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x6b8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  plVar10 = local_88;
  if (lVar14 != 0) {
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar15;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  }
  if (local_88 != (long *)0x0) {
    plVar12 = local_88 + 7;
    plVar13 = local_88 + 6;
  }
  lVar21 = *plVar12;
  if (local_88 == (long *)0x0) {
    lVar23 = 0;
  }
  else {
    lVar23 = local_88[8];
  }
  puVar17[2] = *plVar13;
  puVar17[3] = lVar21;
  puVar17[4] = lVar23;
  puVar17[5] = 0;
  if (local_88 == (long *)0x0) {
    puVar17[5] = 0;
  }
  else {
    (**(code **)(*local_88 + 0x18))(local_88);
    plVar12 = (long *)puVar17[5];
    puVar17[5] = plVar10;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  puVar17[6] = plVar11;
  if (lVar14 != 0) {
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  *puVar17 = 0;
  puVar17[1] = puVar17[2];
  uVar18 = FUN_00fab268(param_1 + 0x680,puVar17);
  if ((puVar17 != (undefined8 *)0x0) && ((uVar18 & 1) == 0)) {
    if ((long *)puVar17[5] != (long *)0x0) {
      (**(code **)(*(long *)puVar17[5] + 0x20))();
    }
    plVar10 = *(long **)(param_1 + 0x6b8);
    uVar18 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar18 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar17,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar10,puVar17,0x38,8);
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  pcVar7 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (long *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar7)(&local_f0);
  }
  return plVar11;
}


