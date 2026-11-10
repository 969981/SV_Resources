/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125d1c8; name: FUN_0125d1c8
 */


void FUN_0125d1c8(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  long *plVar11;
  ushort uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  ushort *puVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  long *local_e8;
  long *aplStack_e0 [12];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  int *local_58;
  undefined8 local_50;
  long *local_48;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar13 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045681d8;
  param_1[1] = lVar13;
  param_1[4] = (long)&PTR_LAB_04568210;
  param_1[0xc] = (long)&DAT_cbf29ce484222645;
  param_1[0xd] = (long)&DAT_03c886bc;
  param_1[0x1a] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = (long)&DAT_cbf29ce484222645;
  param_1[0x13] = (long)&DAT_03c886bc;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar8 + 0x30), lVar13 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar13 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = lVar13;
  param_1[0x21] = 0;
  param_1[0x1c] = -1;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar8 + 0x30), lVar13 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar13 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x23] = 0x1fffffffffffffff;
  param_1[0x24] = 0;
  param_1[0x22] = lVar13;
  *(undefined4 *)(param_1 + 0x25) = 0;
  local_100 = (code *)0x7941e1e2a5457911;
  local_f8 = (code *)0x3c71538;
  local_f0 = (undefined1 *)0x5;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x2c) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x430f1d44ee020fcc;
  local_f8 = (code *)0x3c572d9;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  uVar4 = FUN_00d5a2b4(param_2,&local_100);
  *(undefined1 *)((long)param_1 + 0x2e) = uVar4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x68a3732777251727;
  local_f8 = (code *)&DAT_03c27041;
  local_f0 = (undefined1 *)0x3;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar4 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    uVar4 = 0;
    if (uVar14 != 0) {
      uVar4 = *(undefined1 *)((long)piVar9 + uVar14);
    }
  }
  *(undefined1 *)((long)param_1 + 0x2f) = uVar4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x83b2227bf32522c7;
  local_f8 = (code *)0x3bfd440;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)(param_1 + 6) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xf09c0e49b8a5a491;
  local_f8 = (code *)0x3c572e0;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)((long)param_1 + 0x32) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x8a57e713af38dd39;
  local_f8 = (code *)0x3bdbe0b;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)((long)param_1 + 0x34) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x16e84835401deb16;
  local_f8 = (code *)0x3c3c3a0;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x36) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x4c3aae72bd9f9498;
  local_f8 = (code *)0x3c6a9f5;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)(param_1 + 7) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x16e84735401de963;
  local_f8 = (code *)0x3c2eb60;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x3a) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x4c3ab172bd9f99b1;
  local_f8 = (code *)0x3c43294;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)((long)param_1 + 0x3c) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x16e84635401de7b0;
  local_f8 = (code *)0x3c2eb67;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x3e) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x4c3ab072bd9f97fe;
  local_f8 = (code *)0x3c1976a;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)(param_1 + 8) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x16e84d35401df395;
  local_f8 = (code *)0x3c279fc;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x42) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x4c3ab372bd9f9d17;
  local_f8 = (code *)0x3c209ab;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)((long)param_1 + 0x44) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_80 = 0x4ec6467ade87f7e4;
  pcStack_78 = "area";
  local_70 = 4;
  local_68 = (long *)0x0;
  FUN_00cee868(&local_60,param_2,&local_80);
  local_100 = FUN_02a2c5a0;
  local_f8 = FUN_02a2c5dc;
  local_f0 = &LAB_02a2c5e0;
  local_e8 = (long *)&LAB_02a2c5ec;
  aplStack_e0[0] = param_1;
  FUN_0125ec04(local_58,&local_100);
  pcVar2 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar2)(aplStack_e0);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0xaad194213d63c545;
  pcStack_78 = "locationName";
  local_70 = 0xc;
  local_68 = (long *)0x0;
  FUN_00cee868(&local_60,param_2,&local_80);
  local_100 = (code *)&LAB_02a2c5f8;
  local_f8 = FUN_02a2c9f4;
  local_f0 = &LAB_02a2c9f8;
  local_e8 = (long *)&LAB_02a2ca04;
  aplStack_e0[0] = param_1;
  FUN_0125ec04(local_58,&local_100);
  pcVar2 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar2)(aplStack_e0);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar1 = PTR_DAT_047d5608;
  piVar9 = (int *)param_2[1];
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) goto LAB_0125eb34;
  uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
  uVar15 = 0;
  if (uVar14 != 0) {
    puVar10 = (uint *)((long)piVar9 + uVar14);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_100 = (code *)0x3c925ba;
    puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (piVar9 = (int *)*param_2, piVar9 != (int *)0x0)) {
      piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar16 = (ushort *)((long)piVar17 - (long)*piVar17);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        piVar19 = (int *)0x0;
      }
      else {
        piVar19 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar10 = (uint *)((long)piVar17 + (ulong)puVar16[3]);
          piVar19 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar19 + uVar14) & 0xffffffff;
      }
      if (*(long *)(puVar1 + uVar14 * 8) == 4) {
        if (uVar12 < 0xb) {
          uVar18 = 0;
LAB_0125e8c0:
          uVar15 = 0;
        }
        else {
          uVar18 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar18 = (uint)*(ushort *)((long)piVar17 + (ulong)puVar16[5]);
          }
          if ((uVar12 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0125e8c0;
          uVar15 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[6]);
        }
        if ((uVar18 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar14 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar18), uVar14 != 0
           )) {
          uVar15 = *(undefined4 *)((long)piVar9 + uVar14);
        }
        goto LAB_0125d950;
      }
      if ((0xc < uVar12) && ((ulong)puVar16[6] != 0)) {
        uVar15 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[6]);
        goto LAB_0125d950;
      }
    }
LAB_0125eb34:
    uVar15 = 0;
  }
LAB_0125d950:
  *(undefined4 *)(param_1 + 9) = uVar15;
  piVar9 = (int *)param_2[1];
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) goto LAB_0125eb54;
  uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
  uVar15 = 0;
  if (uVar14 != 0) {
    puVar10 = (uint *)((long)piVar9 + uVar14);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_100 = (code *)0x3c042e8;
    puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (piVar9 = (int *)*param_2, piVar9 != (int *)0x0)) {
      piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar16 = (ushort *)((long)piVar17 - (long)*piVar17);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        piVar19 = (int *)0x0;
      }
      else {
        piVar19 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar10 = (uint *)((long)piVar17 + (ulong)puVar16[3]);
          piVar19 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar19 + uVar14) & 0xffffffff;
      }
      if (*(long *)(puVar1 + uVar14 * 8) == 4) {
        if (uVar12 < 0xb) {
          uVar18 = 0;
LAB_0125e8cc:
          uVar15 = 0;
        }
        else {
          uVar18 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar18 = (uint)*(ushort *)((long)piVar17 + (ulong)puVar16[5]);
          }
          if ((uVar12 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0125e8cc;
          uVar15 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[6]);
        }
        if ((uVar18 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar14 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar18), uVar14 != 0
           )) {
          uVar15 = *(undefined4 *)((long)piVar9 + uVar14);
        }
        goto LAB_0125da5c;
      }
      if ((0xc < uVar12) && ((ulong)puVar16[6] != 0)) {
        uVar15 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[6]);
        goto LAB_0125da5c;
      }
    }
LAB_0125eb54:
    uVar15 = 0;
  }
LAB_0125da5c:
  *(undefined4 *)((long)param_1 + 0x4c) = uVar15;
  local_100 = (code *)0xa4cbee7be554d7e2;
  local_f8 = (code *)0x3c0b47e;
  local_f0 = (undefined1 *)0xb;
  local_e8 = (long *)0x0;
  FUN_00fb4c10(&local_60,param_2,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_58 == (int *)0x0) {
    *(undefined1 *)(param_1 + 10) = 0;
LAB_0125e8d8:
    *(undefined1 *)((long)param_1 + 0x51) = 0;
LAB_0125e8dc:
    bVar3 = false;
    *(undefined1 *)((long)param_1 + 0x52) = 0;
LAB_0125de18:
    *(bool *)((long)param_1 + 0x53) = bVar3;
    if (local_58 != (int *)0x0) {
      if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
         (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = (uint *)((long)local_58 + uVar14);
        puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      }
      local_100 = (code *)&DAT_03c572e9;
      puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar10 != (uint *)0x0) {
        piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
        puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar12 = *puVar16;
        if (uVar12 < 7) {
          piVar17 = (int *)0x0;
        }
        else {
          piVar17 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
            piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
          }
        }
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
           (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
        }
        if (*(long *)(puVar1 + uVar14 * 8) == 1) {
          if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
          }
          bVar3 = *(char *)(local_60 + uVar14) == '\0';
        }
        else {
          if ((uVar12 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0125e9b4;
          bVar3 = *(long *)((long)piVar9 + (ulong)puVar16[6]) == 0;
        }
        bVar3 = !bVar3;
        goto LAB_0125def8;
      }
    }
LAB_0125e9b4:
    bVar3 = false;
  }
  else {
    if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)((long)local_58 + uVar14);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    local_100 = (code *)&DAT_03c0b48a;
    puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar10 == (uint *)0x0) {
LAB_0125e924:
      bVar3 = false;
    }
    else {
      piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
          piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
      }
      if (*(long *)(puVar1 + uVar14 * 8) == 1) {
        if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
        }
        bVar3 = *(char *)(local_60 + uVar14) == '\0';
LAB_0125db74:
        bVar3 = !bVar3;
      }
      else {
        if (uVar12 < 0xd) goto LAB_0125e924;
        bVar3 = false;
        if ((ulong)puVar16[6] != 0) {
          bVar3 = *(long *)((long)piVar9 + (ulong)puVar16[6]) == 0;
          goto LAB_0125db74;
        }
      }
    }
    *(bool *)(param_1 + 10) = bVar3;
    if (local_58 == (int *)0x0) goto LAB_0125e8d8;
    if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)((long)local_58 + uVar14);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    local_100 = (code *)0x3bd4bb1;
    puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar10 == (uint *)0x0) {
LAB_0125e948:
      bVar3 = false;
    }
    else {
      piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
          piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
      }
      if (*(long *)(puVar1 + uVar14 * 8) == 1) {
        if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
        }
        bVar3 = *(char *)(local_60 + uVar14) == '\0';
LAB_0125dc54:
        bVar3 = !bVar3;
      }
      else {
        if (uVar12 < 0xd) goto LAB_0125e948;
        bVar3 = false;
        if ((ulong)puVar16[6] != 0) {
          bVar3 = *(long *)((long)piVar9 + (ulong)puVar16[6]) == 0;
          goto LAB_0125dc54;
        }
      }
    }
    *(bool *)((long)param_1 + 0x51) = bVar3;
    if (local_58 == (int *)0x0) goto LAB_0125e8dc;
    if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)((long)local_58 + uVar14);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    local_100 = (code *)0x3c27a03;
    puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar10 == (uint *)0x0) {
LAB_0125e96c:
      bVar3 = false;
    }
    else {
      piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
          piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
      }
      if (*(long *)(puVar1 + uVar14 * 8) == 1) {
        if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
        }
        bVar3 = *(char *)(local_60 + uVar14) == '\0';
LAB_0125dd34:
        bVar3 = !bVar3;
      }
      else {
        if (uVar12 < 0xd) goto LAB_0125e96c;
        bVar3 = false;
        if ((ulong)puVar16[6] != 0) {
          bVar3 = *(long *)((long)piVar9 + (ulong)puVar16[6]) == 0;
          goto LAB_0125dd34;
        }
      }
    }
    *(bool *)((long)param_1 + 0x52) = bVar3;
    if (local_58 != (int *)0x0) {
      if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
         (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = (uint *)((long)local_58 + uVar14);
        puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      }
      local_100 = (code *)&DAT_03bdbe14;
      puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar10 == (uint *)0x0) {
LAB_0125e990:
        bVar3 = false;
      }
      else {
        piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
        puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar12 = *puVar16;
        if (uVar12 < 7) {
          piVar17 = (int *)0x0;
        }
        else {
          piVar17 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
            piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
          }
        }
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
           (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
        }
        if (*(long *)(puVar1 + uVar14 * 8) == 1) {
          if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
          }
          bVar3 = *(char *)(local_60 + uVar14) == '\0';
        }
        else {
          if ((uVar12 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0125e990;
          bVar3 = *(long *)((long)piVar9 + (ulong)puVar16[6]) == 0;
        }
        bVar3 = !bVar3;
      }
      goto LAB_0125de18;
    }
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    bVar3 = false;
  }
LAB_0125def8:
  *(bool *)((long)param_1 + 0x54) = bVar3;
  local_100 = (code *)0x8af55f6750358e98;
  local_f8 = (code *)0x3c1242c;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  FUN_00d996a8(&local_60,param_2,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x1fb7174b0166b02f;
  local_f8 = (code *)0x3c3c3a7;
  local_f0 = (undefined1 *)0x7;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)((long)param_1 + 0x55) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xae680ab65c141293;
  local_f8 = (code *)&DAT_03c572ee;
  local_f0 = (undefined1 *)0x4;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)((long)param_1 + 0x56) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x63ae3195b741788f;
  local_f8 = (code *)0x3bfd449;
  local_f0 = (undefined1 *)0x7;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)((long)param_1 + 0x57) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x970d52a8fd12e7a1;
  local_f8 = (code *)0x3c77c94;
  local_f0 = (undefined1 *)0x5;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)(param_1 + 0xb) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_60 = 0x59b9befa3ace2914;
  local_58 = (int *)0x3ca6ceb;
  local_50 = 8;
  local_48 = (long *)0x0;
  FUN_00cee868(&local_100,param_2,&local_60);
  plVar11 = (long *)param_1[0xf];
  param_1[0xc] = (long)local_100;
  param_1[0xd] = (long)local_f8;
  param_1[0xe] = (long)local_f0;
  param_1[0xf] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  plVar11 = local_e8;
  local_e8 = (long *)0x0;
  param_1[0xf] = (long)plVar11;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_100 = (code *)0x9dd09916c7c69be4;
  local_f8 = (code *)0x3c19774;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  uVar6 = FUN_00d928d0(param_2,&local_100);
  *(undefined2 *)(param_1 + 0x10) = uVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xec1e7904b8590816;
  local_f8 = (code *)0x3c49e39;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x82) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x3299ef27a3bc32e3;
  local_f8 = (code *)0x3bdbe19;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar12 = 0;
  }
  else {
    uVar12 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar12 != 0) {
      uVar12 = *(ushort *)((long)piVar9 + (ulong)uVar12);
    }
  }
  *(ushort *)((long)param_1 + 0x84) = uVar12;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xf9a982222a2cf0af;
  local_f8 = (code *)0x3ca6cf4;
  local_f0 = (undefined1 *)0xa;
  local_e8 = (long *)0x0;
  uVar4 = FUN_00d5a2b4(param_2,&local_100);
  *(undefined1 *)((long)param_1 + 0x86) = uVar4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xcc811b1fdf5d3b12;
  local_f8 = (code *)0x3c3c3af;
  local_f0 = (undefined1 *)0x7;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar4 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    uVar4 = 0;
    if (uVar14 != 0) {
      uVar4 = *(undefined1 *)((long)piVar9 + uVar14);
    }
  }
  *(undefined1 *)((long)param_1 + 0x87) = uVar4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x68f5929d5037e06e;
  local_f8 = (code *)0x3c042f2;
  local_f0 = (undefined1 *)0x10;
  local_e8 = (long *)0x0;
  uVar4 = FUN_00d5a2b4(param_2,&local_100);
  *(undefined1 *)(param_1 + 0x11) = uVar4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_60 = 0x6d3598e77b3574ca;
  local_58 = (int *)0x3c2eb6e;
  local_50 = 0x17;
  local_48 = (long *)0x0;
  FUN_00cee868(&local_100,param_2,&local_60);
  plVar11 = (long *)param_1[0x15];
  param_1[0x12] = (long)local_100;
  param_1[0x13] = (long)local_f8;
  param_1[0x14] = (long)local_f0;
  param_1[0x15] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  plVar11 = local_e8;
  local_e8 = (long *)0x0;
  param_1[0x15] = (long)plVar11;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_100 = (code *)0x6ace8daf0a8c54c9;
  local_f8 = (code *)0x3c925c4;
  local_f0 = (undefined1 *)0xc;
  local_e8 = (long *)0x0;
  FUN_00d996a8(&local_60,param_2,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xaf669c4c860698cc;
  local_f8 = (code *)&DAT_03c5404d;
  local_f0 = (undefined1 *)0x1;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)(param_1 + 0x16) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0xaf669f4c86069de5;
  local_f8 = (code *)&DAT_03bdbe22;
  local_f0 = (undefined1 *)0x1;
  local_e8 = (long *)0x0;
  bVar5 = FUN_00cf7518(&local_60,&local_100);
  *(byte *)((long)param_1 + 0xb1) = bVar5 & 1;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x15d84a115c87d6ec;
  local_f8 = (code *)0x3bd4bba;
  local_f0 = (undefined1 *)0x9;
  local_e8 = (long *)0x0;
  FUN_00fb4c10(&local_60,param_2,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (code *)0x3ce4a61fdc2497db;
  local_f8 = (code *)0x3c77c9a;
  local_f0 = (undefined1 *)0x6;
  local_e8 = (long *)0x0;
  piVar9 = (int *)FUN_00f305e0(&local_60,&local_100);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar15 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    uVar15 = 0;
    if (uVar14 != 0) {
      uVar15 = *(undefined4 *)((long)piVar9 + uVar14);
    }
  }
  *(undefined4 *)((long)param_1 + 0xb4) = uVar15;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  uVar4 = 0;
  if (local_58 == (int *)0x0) goto LAB_0125e500;
  if ((*(ushort *)((long)local_58 - (long)*local_58) < 7) ||
     (uVar14 = (ulong)((ushort *)((long)local_58 - (long)*local_58))[3], uVar14 == 0)) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)((long)local_58 + uVar14);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  }
  local_100 = (code *)0x3c853e6;
  puVar10 = bsearch(&local_100,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar10 != (uint *)0x0) {
    piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
    puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
    uVar12 = *puVar16;
    if (uVar12 < 7) {
      piVar17 = (int *)0x0;
    }
    else {
      piVar17 = (int *)0x0;
      if ((ulong)puVar16[3] != 0) {
        puVar10 = (uint *)((long)piVar9 + (ulong)puVar16[3]);
        piVar17 = (int *)((long)puVar10 + (ulong)*puVar10);
      }
    }
    if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar14 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (long)*(char *)((long)piVar17 + uVar14) & 0xffffffff;
    }
    if (*(long *)(puVar1 + uVar14 * 8) == 1) {
      if ((uVar12 < 0xb) || ((ulong)puVar16[5] == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar16[5]);
      }
      uVar4 = *(undefined1 *)(local_60 + uVar14);
      goto LAB_0125e500;
    }
    if ((0xc < uVar12) && ((ulong)puVar16[6] != 0)) {
      uVar4 = *(undefined1 *)((long)piVar9 + (ulong)puVar16[6]);
      goto LAB_0125e500;
    }
  }
  uVar4 = 0;
LAB_0125e500:
  *(undefined1 *)(param_1 + 0x17) = uVar4;
  return;
}


