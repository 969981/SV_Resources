/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c22bc4; name: FUN_00c22bc4
 */


undefined8 FUN_00c22bc4(long *param_1,int param_2,byte param_3,byte param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  plVar4 = param_1 + 1;
  plVar11 = (long *)*plVar4;
  if (plVar11 != (long *)0x0) {
    plVar4 = param_1 + 1;
    do {
      if (param_2 < (int)plVar11[4]) {
        plVar7 = (long *)*plVar11;
        plVar4 = plVar11;
        if (plVar7 == (long *)0x0) {
          goto LAB_00c22c50;
        }
      }
      else {
        if (param_2 <= (int)plVar11[4]) goto LAB_00c22c50;
        plVar4 = plVar11 + 1;
        plVar7 = (long *)*plVar4;
        if (plVar7 == (long *)0x0) goto LAB_00c22c50;
      }
      plVar11 = plVar7;
    } while( true );
  }
  plVar11 = plVar4;
LAB_00c22c50:
  lVar8 = *plVar4;
  if (lVar8 != 0) {
    puVar10 = (undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x38) = param_5;
    goto switchD_00c22d40_default;
  }
  lVar8 = tpidr_el0;
  plVar7 = *(long **)(lVar8 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x40,8);
  *(int *)(puVar3 + 4) = param_2;
  puVar10 = puVar3 + 5;
  *puVar10 = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[2] = plVar11;
  *puVar3 = 0;
  puVar3[1] = 0;
  *plVar4 = (long)puVar3;
  if (*(long *)*param_1 == 0) {
    puVar5 = puVar3;
  }
  else {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*plVar4;
  }
  FUN_010108e0(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  puVar3[7] = param_5;
  *(undefined1 *)((long)puVar3 + 0x31) = 1;
  *(byte *)(puVar3 + 6) = param_3;
  uVar1 = *(undefined4 *)(PTR_DAT_047dad98 + (ulong)param_3 * 4);
  *(byte *)((long)puVar3 + 0x33) = param_4 & 1;
  switch(uVar1) {
  case 1:
  case 8:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cb10;
LAB_00c22f30:
      *plVar11 = lVar9;
      goto LAB_00c22f34;
    }
    break;
  case 2:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cb30;
      goto LAB_00c22f30;
    }
    break;
  case 3:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cb50;
      goto LAB_00c22f30;
    }
    break;
  case 4:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cb70;
      goto LAB_00c22f30;
    }
    break;
  case 5:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cbb0;
      goto LAB_00c22f30;
    }
    break;
  case 6:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cb90;
      goto LAB_00c22f30;
    }
    break;
  case 7:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar11 = (long *)FUN_00c0e238(lVar9,0,8);
      plVar4[1] = (long)plVar11;
      puVar6 = &LAB_00c2cbd0;
      goto LAB_00c22f30;
    }
    break;
  case 9:
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x18);
      *plVar4 = lVar9;
      plVar4[1] = 0;
      puVar6 = &LAB_00c2cbf0;
      plVar4[2] = 0;
      goto LAB_00c22f34;
    }
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00c230c0:
      plVar4 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
LAB_00c23020:
    plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    goto LAB_00c22f7c;
  case 10:
    lVar9 = param_1[3];
    if (lVar9 == 0) {
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        goto LAB_00c230c0;
      }
      goto LAB_00c23020;
    }
    plVar4 = (long *)FUN_00c0e238(lVar9,0,0x18);
    *plVar4 = lVar9;
    plVar4[1] = 0;
    plVar4[2] = 0;
    puVar6 = PTR_LAB_047dad90;
LAB_00c22f34:
    FUN_00c0e13c(lVar9,plVar4,puVar6);
    goto LAB_00c22f7c;
  default:
    goto switchD_00c22d40_default;
  }
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
  *plVar4 = 0;
  plVar4[1] = 0;
LAB_00c22f7c:
  *puVar10 = plVar4;
switchD_00c22d40_default:
  return *puVar10;
}


