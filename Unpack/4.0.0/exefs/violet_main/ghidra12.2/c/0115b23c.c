/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0115b23c; name: FUN_0115b23c
 */


void FUN_0115b23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *local_70;
  long lStack_68;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar13 = (long *)param_2[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = plVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar13 = (long *)param_2[7];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar4 = (long *)param_1[7];
  param_1[7] = plVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar13 = (long *)param_2[0xb];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar4 = (long *)param_1[0xb];
  param_1[0xb] = plVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (param_1 == param_2) goto LAB_0115b83c;
  plVar13 = param_1 + 0xc;
  plVar4 = param_1 + 0x13;
  if (*plVar4 == param_2[0x13]) {
    uVar11 = param_1[0xd];
  }
  else {
    FUN_01e26f88(plVar13);
    lVar15 = *plVar13;
    *plVar13 = 0;
    if (lVar15 != 0) {
      lVar6 = param_1[0xd];
      plVar14 = (long *)param_1[0xe];
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar6 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar15,lVar6 << 3,8);
      }
    }
    uVar11 = 0;
    param_1[0xd] = 0;
  }
  uVar16 = param_2[0xe];
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  param_1[0xe] = uVar16;
  param_1[0xf] = uVar1;
  lVar15 = param_2[0x13];
  uVar16 = param_2[0x14];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  *plVar4 = lVar15;
  param_1[0x14] = uVar16;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar14 = (long *)param_2[0x12];
  if (uVar11 != 0) {
    uVar10 = uVar11 & 3;
    if (uVar11 - 1 < 3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        *(undefined8 *)(*plVar13 + uVar12 * 8) = 0;
        *(undefined8 *)(*plVar13 + uVar12 * 8 + 8) = 0;
        *(undefined8 *)(*plVar13 + uVar12 * 8 + 0x10) = 0;
        lVar15 = uVar12 * 8;
        uVar12 = uVar12 + 4;
        *(undefined8 *)(*plVar13 + lVar15 + 0x18) = 0;
      } while ((uVar11 & 0xfffffffffffffffc) != uVar12);
    }
    if (uVar10 != 0) {
      lVar15 = uVar12 << 3;
      do {
        *(undefined8 *)(*plVar13 + lVar15) = 0;
        uVar10 = uVar10 - 1;
        lVar15 = lVar15 + 8;
      } while (uVar10 != 0);
    }
    plVar7 = (long *)param_1[0x12];
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    while (plVar7 != (long *)0x0) {
      if (plVar14 == (long *)0x0) goto LAB_0115b61c;
      local_70 = plVar7 + 2;
      lStack_68 = (long)(plVar7 + 3);
      FUN_00a9ea04(&local_70,plVar14 + 2);
      lVar15 = *plVar7;
      FUN_010240d0(plVar13,plVar7);
      plVar14 = (long *)*plVar14;
      plVar7 = (long *)lVar15;
    }
  }
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    puVar5 = (undefined8 *)(**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x38,8);
    if (puVar5 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar4 + 0xe8))();
    }
    lVar15 = *plVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0115ba18;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(plVar14 + 2);
    puVar5[3] = plVar14[3];
    puVar5[4] = plVar14[4];
    puVar5[5] = plVar14[5];
    plVar7 = (long *)plVar14[6];
    puVar5[6] = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *puVar5 = 0;
    puVar5[1] = (ulong)*(ushort *)(puVar5 + 2);
    FUN_010240d0(plVar13,puVar5);
  }
  goto LAB_0115b664;
LAB_0115b9cc:
  do {
    plVar4 = (long *)*plVar14;
    FUN_0115b014(plVar14 + 3);
    plVar13 = (long *)param_1[0x20];
    uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,0x80,8);
    }
    else {
      FUN_00c48fe8(plVar13,plVar14,0x80,8);
    }
    plVar14 = plVar4;
  } while (plVar4 != (long *)0x0);
  goto LAB_0115b83c;
LAB_0115b61c:
  do {
    plVar13 = (long *)*plVar7;
    if ((long *)plVar7[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[6] + 0x20))();
    }
    plVar4 = (long *)param_1[0x13];
    uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar7,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar4,plVar7,0x38,8);
    }
    plVar7 = plVar13;
  } while (plVar13 != (long *)0x0);
LAB_0115b664:
  if (param_1 != param_2) {
    plVar13 = param_1 + 0x19;
    puVar5 = param_1 + 0x20;
    if (param_1[0x20] == param_2[0x20]) {
      uVar11 = param_1[0x1a];
    }
    else {
      FUN_01e271bc(plVar13);
      lVar15 = *plVar13;
      *plVar13 = 0;
      if (lVar15 != 0) {
        lVar6 = param_1[0x1a];
        plVar4 = (long *)param_1[0x1b];
        uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar15,lVar6 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar4,lVar15,lVar6 << 3,8);
        }
      }
      uVar11 = 0;
      param_1[0x1a] = 0;
    }
    uVar16 = param_2[0x1b];
    uVar1 = param_2[0x1c];
    uVar2 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = uVar2;
    param_1[0x1b] = uVar16;
    param_1[0x1c] = uVar1;
    uVar16 = param_2[0x20];
    uVar1 = param_2[0x21];
    uVar2 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = uVar2;
    *puVar5 = uVar16;
    param_1[0x21] = uVar1;
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    plVar4 = (long *)param_2[0x1f];
    if (uVar11 != 0) {
      uVar10 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          *(undefined8 *)(*plVar13 + uVar12 * 8) = 0;
          *(undefined8 *)(*plVar13 + uVar12 * 8 + 8) = 0;
          *(undefined8 *)(*plVar13 + uVar12 * 8 + 0x10) = 0;
          lVar15 = uVar12 * 8;
          uVar12 = uVar12 + 4;
          *(undefined8 *)(*plVar13 + lVar15 + 0x18) = 0;
        } while ((uVar11 & 0xfffffffffffffffc) != uVar12);
      }
      if (uVar10 != 0) {
        lVar15 = uVar12 << 3;
        do {
          *(undefined8 *)(*plVar13 + lVar15) = 0;
          uVar10 = uVar10 - 1;
          lVar15 = lVar15 + 8;
        } while (uVar10 != 0);
      }
      plVar14 = (long *)param_1[0x1f];
      param_1[0x24] = 0;
      param_1[0x1f] = 0;
      while (plVar14 != (long *)0x0) {
        if (plVar4 == (long *)0x0) goto LAB_0115b9cc;
        *(undefined2 *)(plVar14 + 2) = *(undefined2 *)(plVar4 + 2);
        FUN_01155f84(plVar14 + 3,plVar4 + 3);
        lVar15 = *plVar14;
        FUN_010254dc(plVar13,plVar14);
        plVar4 = (long *)*plVar4;
        plVar14 = (long *)lVar15;
      }
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,0x80,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar5 + 0xe8))();
      }
      uVar16 = *puVar5;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 == 0) {
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(plVar4 + 2);
        FUN_010260a8(puVar8 + 3,plVar4 + 3);
      }
      else {
        if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_0115ba18:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(plVar4 + 2);
        FUN_010260a8(puVar8 + 3,plVar4 + 3);
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      *puVar8 = 0;
      puVar8[1] = (ulong)*(ushort *)(puVar8 + 2);
      FUN_010254dc(plVar13,puVar8);
    }
  }
LAB_0115b83c:
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  plVar13 = (long *)param_2[0x2a];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar4 = (long *)param_1[0x2a];
  param_1[0x2a] = plVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  return;
}


