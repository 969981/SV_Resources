/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0137102c; name: FUN_0137102c
 */


void FUN_0137102c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  param_1[2] = param_2[3];
  param_1[3] = param_2[4];
  param_1[4] = param_2[5];
  param_1[5] = param_2[6];
  puVar9 = param_1 + 7;
  param_1[6] = param_2[7];
  memset(puVar9,0,0x4c);
  plVar8 = (long *)*param_2;
  plVar4 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xc10,8);
  if (plVar4 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01371944;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar12 = *param_2;
    *plVar4 = (long)(PTR_DAT_047e26e0 + 0x10);
    memset(plVar4 + 1,0,0xc04);
    FUN_01371948(plVar4,uVar12);
    *(undefined4 *)(plVar4 + 0x181) = 0;
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 0x60;
      *(undefined2 *)(*(long *)((long)plVar4 + lVar7 + 8) + 8) = 0;
      *(undefined2 *)(*(long *)((long)plVar4 + lVar7 + 0x28) + 8) = 0;
      *(undefined2 *)(*(long *)((long)plVar4 + lVar7 + 0x48) + 8) = 0;
      lVar7 = lVar1;
    } while (lVar1 != 0xc00);
    uVar13 = 8;
    uVar12 = 0xc10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)*puVar9;
  *puVar9 = plVar4;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e5a0(auStack_78,0);
    (**(code **)*puVar11)(puVar11);
    plVar4 = (long *)param_1[8];
    uVar2 = param_1[9];
    uVar10 = param_1[10];
    uVar6 = FUN_00c4e564(plVar4);
    if ((uVar6 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar11,uVar2,uVar10);
    }
    else {
      FUN_00c48fe8(plVar4,puVar11,uVar2,uVar10);
    }
    FUN_00c4e70c(auStack_78);
  }
  param_1[8] = plVar8;
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  plVar8 = (long *)*param_2;
  plVar4 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x410,8);
  if (plVar4 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar13 = 0;
    uVar12 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01371944:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar12 = *param_2;
    *plVar4 = (long)(PTR_DAT_047e26e8 + 0x10);
    memset(plVar4 + 1,0,0x404);
    FUN_01371ed0(plVar4,uVar12);
    *(undefined4 *)(plVar4 + 0x81) = 0;
    memset((void *)(plVar4[1] + 8),0,0x430);
    memset((void *)(plVar4[5] + 8),0,0x430);
    memset((void *)(plVar4[9] + 8),0,0x430);
    memset((void *)(plVar4[0xd] + 8),0,0x430);
    memset((void *)(plVar4[0x11] + 8),0,0x430);
    memset((void *)(plVar4[0x15] + 8),0,0x430);
    memset((void *)(plVar4[0x19] + 8),0,0x430);
    memset((void *)(plVar4[0x1d] + 8),0,0x430);
    memset((void *)(plVar4[0x21] + 8),0,0x430);
    memset((void *)(plVar4[0x25] + 8),0,0x430);
    memset((void *)(plVar4[0x29] + 8),0,0x430);
    memset((void *)(plVar4[0x2d] + 8),0,0x430);
    memset((void *)(plVar4[0x31] + 8),0,0x430);
    memset((void *)(plVar4[0x35] + 8),0,0x430);
    memset((void *)(plVar4[0x39] + 8),0,0x430);
    memset((void *)(plVar4[0x3d] + 8),0,0x430);
    memset((void *)(plVar4[0x41] + 8),0,0x430);
    memset((void *)(plVar4[0x45] + 8),0,0x430);
    memset((void *)(plVar4[0x49] + 8),0,0x430);
    memset((void *)(plVar4[0x4d] + 8),0,0x430);
    memset((void *)(plVar4[0x51] + 8),0,0x430);
    memset((void *)(plVar4[0x55] + 8),0,0x430);
    memset((void *)(plVar4[0x59] + 8),0,0x430);
    memset((void *)(plVar4[0x5d] + 8),0,0x430);
    memset((void *)(plVar4[0x61] + 8),0,0x430);
    memset((void *)(plVar4[0x65] + 8),0,0x430);
    memset((void *)(plVar4[0x69] + 8),0,0x430);
    memset((void *)(plVar4[0x6d] + 8),0,0x430);
    memset((void *)(plVar4[0x71] + 8),0,0x430);
    memset((void *)(plVar4[0x75] + 8),0,0x430);
    memset((void *)(plVar4[0x79] + 8),0,0x430);
    memset((void *)(plVar4[0x7d] + 8),0,0x430);
    uVar12 = 8;
    uVar13 = 0x410;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar9 = (undefined8 *)param_1[0xb];
  param_1[0xb] = plVar4;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00c4e5a0(auStack_78,0);
    (**(code **)*puVar9)(puVar9);
    plVar4 = (long *)param_1[0xc];
    uVar2 = param_1[0xd];
    uVar10 = param_1[0xe];
    uVar6 = FUN_00c4e564(plVar4);
    if ((uVar6 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar9,uVar2,uVar10);
    }
    else {
      FUN_00c48fe8(plVar4,puVar9,uVar2,uVar10);
    }
    FUN_00c4e70c(auStack_78);
    plVar4 = (long *)param_1[0xb];
  }
  param_1[0xc] = plVar8;
  param_1[0xd] = uVar13;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = uVar12;
  param_1[0xf] = 0;
  *(undefined4 *)(plVar4 + 0x81) = 0;
  memset((void *)(plVar4[1] + 8),0,0x430);
  memset((void *)(plVar4[5] + 8),0,0x430);
  memset((void *)(plVar4[9] + 8),0,0x430);
  memset((void *)(plVar4[0xd] + 8),0,0x430);
  memset((void *)(plVar4[0x11] + 8),0,0x430);
  memset((void *)(plVar4[0x15] + 8),0,0x430);
  memset((void *)(plVar4[0x19] + 8),0,0x430);
  memset((void *)(plVar4[0x1d] + 8),0,0x430);
  memset((void *)(plVar4[0x21] + 8),0,0x430);
  memset((void *)(plVar4[0x25] + 8),0,0x430);
  memset((void *)(plVar4[0x29] + 8),0,0x430);
  memset((void *)(plVar4[0x2d] + 8),0,0x430);
  memset((void *)(plVar4[0x31] + 8),0,0x430);
  memset((void *)(plVar4[0x35] + 8),0,0x430);
  memset((void *)(plVar4[0x39] + 8),0,0x430);
  memset((void *)(plVar4[0x3d] + 8),0,0x430);
  memset((void *)(plVar4[0x41] + 8),0,0x430);
  memset((void *)(plVar4[0x45] + 8),0,0x430);
  memset((void *)(plVar4[0x49] + 8),0,0x430);
  memset((void *)(plVar4[0x4d] + 8),0,0x430);
  memset((void *)(plVar4[0x51] + 8),0,0x430);
  memset((void *)(plVar4[0x55] + 8),0,0x430);
  memset((void *)(plVar4[0x59] + 8),0,0x430);
  memset((void *)(plVar4[0x5d] + 8),0,0x430);
  memset((void *)(plVar4[0x61] + 8),0,0x430);
  memset((void *)(plVar4[0x65] + 8),0,0x430);
  memset((void *)(plVar4[0x69] + 8),0,0x430);
  memset((void *)(plVar4[0x6d] + 8),0,0x430);
  memset((void *)(plVar4[0x71] + 8),0,0x430);
  memset((void *)(plVar4[0x75] + 8),0,0x430);
  memset((void *)(plVar4[0x79] + 8),0,0x430);
  memset((void *)(plVar4[0x7d] + 8),0,0x430);
  lVar7 = param_1[7];
  lVar5 = 0;
  *(undefined4 *)(lVar7 + 0xc08) = 0;
  do {
    lVar1 = lVar7 + lVar5;
    lVar5 = lVar5 + 0x60;
    *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
  } while (lVar5 != 0xc00);
  return;
}


