/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e06328; name: FUN_02e06328
 */


ulong FUN_02e06328(long param_1,int *param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  code *UNRECOVERED_JUMPTABLE;
  ushort *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  int iVar27;
  long *plVar28;
  long *plVar29;
  undefined *local_60;
  undefined2 local_58;
  
  puVar22 = (ushort *)((long)param_2 - (long)*param_2);
  if ((*puVar22 < 9) || ((ulong)puVar22[4] == 0)) goto switchD_02e07cb8_caseD_6;
  uVar20 = 0;
  switch(*(undefined2 *)((long)param_2 + (ulong)puVar22[4])) {
  case 1:
    bVar5 = *(short *)(param_1 + 0x18) ==
            *(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                      (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 8);
    goto LAB_02e09290;
  case 2:
    plVar28 = *(long **)(param_1 + 0x10);
    uVar25 = (uint)*(ushort *)
                    ((long)((long)param_2 + (ulong)puVar22[5]) +
                    (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0xe);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x360);
    uVar20 = (uint)*(ushort *)(param_1 + 0x18);
    goto LAB_02e09118;
  case 3:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x2a);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        plVar26 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x148);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 4:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 0x20);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        plVar26 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x78);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 5:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 0x20);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        plVar26 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x80);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 6:
    plVar28 = *(long **)(param_1 + 0x10);
    cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                     (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0xc);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x318);
    goto LAB_02e07028;
  case 7:
    plVar28 = *(long **)(param_1 + 0x10);
    cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                     (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0xb);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x2c8);
LAB_02e07028:
    cVar7 = (*UNRECOVERED_JUMPTABLE)(plVar28,*(undefined2 *)(param_1 + 0x18));
LAB_02e07de4:
    bVar5 = cVar8 == cVar7;
    goto LAB_02e09290;
  case 8:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar15 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0xa0);
LAB_02e09288:
      iVar16 = (*UNRECOVERED_JUMPTABLE)(plVar28,uVar13);
      goto LAB_02e0928c;
    }
    break;
  case 9:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar20 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0xa0);
      goto LAB_02e092c8;
    }
    break;
  case 10:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0xa0);
LAB_02e09318:
      iVar15 = (*UNRECOVERED_JUMPTABLE)(plVar28,uVar13);
      goto LAB_02e0931c;
    }
    break;
  case 0xb:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *(byte *)((long)puVar1 + (ulong)*puVar1 + 0x27) - 1;
    if (uVar20 < 0xe) {
      cVar8 = (&DAT_03d69c15)[(ulong)(byte)uVar20 * 2];
    }
    else {
      cVar8 = '\a';
    }
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (3 < uVar20 - 1) break;
    plVar26 = *(long **)(param_1 + 0x20);
    sVar11 = *(short *)(param_1 + 0x18);
    plVar28 = plVar26;
    switch(uVar20) {
    case 1:
      goto switchD_02e07d6c_caseD_1;
    case 2:
      puVar24 = (undefined8 *)(param_1 + 0x30);
      break;
    case 3:
      puVar24 = (undefined8 *)(param_1 + 0x28);
      break;
    case 4:
      puVar24 = (undefined8 *)(param_1 + 0x38);
    }
    plVar28 = (long *)*puVar24;
switchD_02e07d6c_caseD_1:
    uVar20 = 0;
    if (((sVar11 == 0) || (plVar26 == (long *)0x0)) || (plVar28 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    plVar29 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar26 + 0x98))(plVar26);
    uVar14 = (**(code **)(*plVar28 + 0x98))(plVar28);
    cVar7 = (**(code **)(*plVar29 + 0x450))(plVar29,uVar13,uVar14,sVar11);
    bVar5 = cVar8 == cVar7;
    goto LAB_02e09290;
  case 0xc:
    uVar20 = *(byte *)((long)((long)param_2 + (ulong)puVar22[5]) +
                      (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x1a) - 1;
    if (uVar20 < 4) {
      uVar17 = (ulong)(byte)(&DAT_03d69b73)[*(long *)(&DAT_03cbf520 + (long)(char)uVar20 * 8) * 2];
    }
    else {
      uVar17 = 0;
    }
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x3d0);
    goto LAB_02e094fc;
  case 0xd:
    uVar20 = *(byte *)((long)((long)param_2 + (ulong)puVar22[5]) +
                      (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x12) - 1;
    if (uVar20 < 5) {
      uVar17 = (ulong)*(uint *)(&DAT_03d69b80 + (ulong)(byte)uVar20 * 8);
    }
    else {
      uVar17 = 0xe;
    }
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x3d8);
    goto LAB_02e094fc;
  case 0xe:
    uVar17 = (ulong)puVar22[5];
    uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    cVar8 = *(char *)((long)((long)param_2 + uVar17) + uVar23 + 0x14);
    iVar15 = 3;
    if (cVar8 != '\x02') {
      iVar15 = 0;
    }
    if (cVar8 == '\x01') {
      iVar15 = 1;
    }
    if (iVar15 == 3) {
      plVar28 = (long *)(param_1 + 0x28);
LAB_02e0805c:
      if ((long *)*plVar28 == (long *)0x0) goto LAB_02e080a0;
      plVar26 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar13 = (**(code **)(*plVar26 + 0x58))(plVar26,uVar13);
      uVar17 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
      uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    }
    else {
      if (iVar15 == 2) {
        plVar28 = (long *)(param_1 + 0x30);
        goto LAB_02e0805c;
      }
      if (iVar15 == 1) {
        plVar28 = (long *)(param_1 + 0x20);
        goto LAB_02e0805c;
      }
LAB_02e080a0:
      uVar13 = 2;
    }
    uVar20 = *(byte *)((long)param_2 + uVar23 + uVar17 + 0x2d) - 2;
    if ((uVar20 < 0x11) && ((0x1fc7fU >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar25 = *(uint *)(&DAT_03d69ba8 + *(long *)(&DAT_03d69c30 + (long)(char)uVar20 * 8) * 8);
    }
    else {
      uVar25 = 0x13;
    }
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x3f0);
    goto LAB_02e094a4;
  default:
    goto switchD_02e06390_caseD_f;
  case 0x10:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x290);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x11:
    cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                     (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x17);
    if (cVar8 == '\x01') {
      lVar21 = 0;
LAB_02e07df0:
      iVar15 = (&DAT_03d69b58)[lVar21 * 2];
    }
    else {
      if (cVar8 == '\x02') {
        lVar21 = 1;
        goto LAB_02e07df0;
      }
      iVar15 = 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x4d8);
    goto LAB_02e07e14;
  case 0x14:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x4a0);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x15:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *puVar1;
    iVar15 = (int)*(short *)((long)puVar1 + (ulong)uVar20 + 0x38);
    iVar16 = FUN_02e0a364(param_1,*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 10),
                          *(undefined1 *)((long)puVar1 + (ulong)uVar20 + 0x30));
    goto LAB_02e0928c;
  case 0x16:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *puVar1;
    iVar16 = (int)*(short *)((long)puVar1 + (ulong)uVar20 + 0x38);
    iVar15 = FUN_02e0a364(param_1,*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 10),
                          *(undefined1 *)((long)puVar1 + (ulong)uVar20 + 0x30));
    goto LAB_02e092cc;
  case 0x17:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *puVar1;
    iVar16 = (int)*(short *)((long)puVar1 + (ulong)uVar20 + 0x38);
    iVar15 = FUN_02e0a364(param_1,*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 10),
                          *(undefined1 *)((long)puVar1 + (ulong)uVar20 + 0x30));
    goto LAB_02e0931c;
  case 0x18:
    uVar20 = *(byte *)((long)((long)param_2 + (ulong)puVar22[5]) +
                      (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x1b) - 1;
    if (uVar20 < 7) {
      cVar8 = (&DAT_03d69b65)[(ulong)(byte)uVar20 * 2];
    }
    else {
      cVar8 = '\0';
    }
    cVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x3c8))();
    goto LAB_02e07de4;
  case 0x19:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    switch(*(undefined1 *)((long)puVar1 + (ulong)*puVar1 + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      plVar28 = (long *)0x0;
      goto LAB_02e086bc;
    }
    plVar28 = (long *)*plVar28;
LAB_02e086bc:
    switch(*(undefined1 *)((long)puVar1 + (ulong)*puVar1 + 0x24)) {
    case 1:
      puVar24 = (undefined8 *)(param_1 + 0x20);
      break;
    case 2:
      puVar24 = (undefined8 *)(param_1 + 0x30);
      break;
    case 3:
      puVar24 = (undefined8 *)(param_1 + 0x28);
      break;
    case 4:
      puVar24 = (undefined8 *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((plVar28 == (long *)0x0) || (plVar26 = (long *)*puVar24, plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    plVar29 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
    iVar16 = (**(code **)(*plVar29 + 0x38))(plVar29,uVar13);
    plVar28 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar26 + 0x98))(plVar26);
    iVar15 = (**(code **)(*plVar28 + 0x38))(plVar28,uVar13);
    bVar5 = SBORROW4(iVar15,iVar16);
    iVar15 = iVar15 - iVar16;
    goto LAB_02e09320;
  case 0x1b:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar2 = *(undefined2 *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        plVar28 = *(long **)(*(long *)(param_1 + 8) + 400);
        if (plVar28 != (long *)0x0) {
          plVar26 = plVar28 + 5;
          do {
            lVar21 = *plVar26;
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *(int *)plVar26 = (int)lVar21 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((int)lVar21 == -1) {
LAB_02e0a314:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        uVar18 = (**(code **)(*plVar28 + 0x30))(plVar28,uVar2);
        if (plVar28 != (long *)0x0) {
          plVar26 = plVar28 + 5;
          do {
            lVar21 = *plVar26;
            iVar15 = (int)lVar21 + -1;
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *(int *)plVar26 = iVar15;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
          else if ((int)lVar21 == 0) {
LAB_02e0a33c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02e08a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar17 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1f8))
                           (*(long **)(param_1 + 0x10),uVar13,uVar18);
        return uVar17;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x1c:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x32);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        plVar26 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x1c8);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x1d:
    plVar28 = *(long **)(param_1 + 0x20);
    uVar20 = 0;
    if ((plVar28 == (long *)0x0) || (plVar26 = *(long **)(param_1 + 0x28), plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    if (*(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                 (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10) == '\x01') {
      uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
      lVar21 = *plVar26;
      plVar28 = plVar26;
    }
    else {
      uVar13 = (**(code **)(*plVar26 + 0x98))(plVar26);
      lVar21 = *plVar28;
    }
    uVar25 = (**(code **)(lVar21 + 0x98))(plVar28);
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0xf8);
    goto LAB_02e094a4;
  case 0x1e:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar9 = *(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x22);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        uVar10 = (**(code **)(**(long **)(param_1 + 0x10) + 0x188))
                           (*(long **)(param_1 + 0x10),uVar13);
        uVar20 = (uint)(uVar10 <= uVar9);
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x1f:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (3 < uVar20 - 1) break;
    cVar8 = *(char *)((long)puVar1 + (ulong)*puVar1 + 0x26);
    switch(uVar20) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    uVar13 = (**(code **)(*plVar26 + 0x188))(plVar26,uVar13);
    cVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x318))(*(long **)(param_1 + 0x10),uVar13);
    bVar5 = cVar8 == cVar7;
    goto LAB_02e09290;
  case 0x20:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (3 < uVar20 - 1) break;
    uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
    switch(uVar20) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    uVar20 = (**(code **)(*(long *)*plVar28 + 0x98))();
    plVar28 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x28);
    goto LAB_02e09118;
  case 0x21:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x418);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x22:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x1a0);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x23:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar15 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x280);
      goto LAB_02e09288;
    }
    break;
  case 0x24:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x4a8);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x25:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x4b0);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x26:
    iVar15 = (int)*(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 4);
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x4d0);
LAB_02e07e14:
    iVar16 = (*UNRECOVERED_JUMPTABLE)();
    goto LAB_02e0928c;
  case 0x27:
    sVar11 = *(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                       (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 4);
    iVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x4d0))();
    uVar20 = (uint)(sVar11 < iVar15);
    goto switchD_02e06390_caseD_f;
  case 0x28:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x198);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x29:
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x4e0);
    goto LAB_02e0753c;
  case 0x2a:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      sVar11 = *(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar20 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),uVar13);
      uVar20 = uVar20 & 0xffff;
      uVar25 = (uint)sVar11;
      bVar4 = SBORROW4(uVar25,uVar20);
      iVar15 = uVar25 - uVar20;
      bVar5 = uVar25 == uVar20;
LAB_02e08d78:
      uVar20 = (uint)(bVar5 || iVar15 < 0 != bVar4);
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x2b:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (3 < uVar20 - 1) break;
    uVar25 = (uint)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
    switch(uVar20) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    uVar20 = (**(code **)(*(long *)*plVar28 + 0x98))();
    plVar28 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x50);
LAB_02e09118:
    uVar20 = (*UNRECOVERED_JUMPTABLE)(plVar28,uVar20);
    bVar5 = uVar25 == (uVar20 & 0xffff);
    goto LAB_02e09290;
  case 0x2c:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x208);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x2d:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x200);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x2e:
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 800);
    uVar17 = (ulong)*(ushort *)(param_1 + 0x18);
    goto LAB_02e094fc;
  case 0x2f:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x298);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x30:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x22);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        plVar26 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x170);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x31:
    sVar11 = *(short *)(param_1 + 0x18);
    uVar20 = 0;
    if (((sVar11 != 0) && (plVar28 = *(long **)(param_1 + 0x20), plVar28 != (long *)0x0)) &&
       (plVar26 = *(long **)(param_1 + 0x28), plVar26 != (long *)0x0)) {
      cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                       (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x15);
      plVar29 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
      uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar29 + 0x448);
LAB_02e070e4:
                    /* WARNING: Could not recover jumptable at 0x02e0710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*UNRECOVERED_JUMPTABLE)(plVar29,uVar13,uVar14,sVar11,cVar8 == '\x01');
      return uVar17;
    }
    goto switchD_02e06390_caseD_f;
  case 0x32:
    sVar11 = *(short *)(param_1 + 0x18);
    uVar20 = 0;
    if (((sVar11 != 0) && (plVar28 = *(long **)(param_1 + 0x20), plVar28 != (long *)0x0)) &&
       (plVar26 = *(long **)(param_1 + 0x28), plVar26 != (long *)0x0)) {
      cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                       (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x15);
      plVar29 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
      uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar29 + 0x440);
      goto LAB_02e070e4;
    }
    goto switchD_02e06390_caseD_f;
  case 0x34:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x28);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        plVar26 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x180);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x35:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar15 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x278);
      goto LAB_02e09288;
    }
    break;
  case 0x36:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x278);
      goto LAB_02e09318;
    }
    break;
  case 0x37:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar20 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x278);
      goto LAB_02e092c8;
    }
    break;
  case 0x38:
    uVar20 = 0;
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x178);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x3a:
    plVar28 = *(long **)(param_1 + 0x20);
    uVar20 = 0;
    if ((plVar28 == (long *)0x0) || (plVar26 = *(long **)(param_1 + 0x28), plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    uVar6 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                     (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x15) == '\x01';
    plVar29 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
    uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar29 + 0x4b8);
    goto LAB_02e08e50;
  case 0x3b:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    switch(*(undefined1 *)((long)puVar1 + (ulong)*puVar1 + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      plVar28 = (long *)0x0;
      goto LAB_02e09144;
    }
    plVar28 = (long *)*plVar28;
LAB_02e09144:
    switch(*(undefined1 *)((long)puVar1 + (ulong)*puVar1 + 0x24)) {
    case 1:
      puVar24 = (undefined8 *)(param_1 + 0x20);
      break;
    case 2:
      puVar24 = (undefined8 *)(param_1 + 0x30);
      break;
    case 3:
      puVar24 = (undefined8 *)(param_1 + 0x28);
      break;
    case 4:
      puVar24 = (undefined8 *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((plVar28 == (long *)0x0) || (plVar26 = (long *)*puVar24, plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
    uVar25 = (**(code **)(*plVar26 + 0x98))(plVar26);
    plVar26 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x470);
    goto LAB_02e094a4;
  case 0x3d:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *puVar1;
    uVar25 = *(byte *)((long)puVar1 + (ulong)uVar20 + 0x41) - 1;
    if (uVar25 < 0xe) {
      uVar6 = (&DAT_03d69c15)[(ulong)(byte)uVar25 * 2];
    }
    else {
      uVar6 = 7;
    }
    switch(*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      plVar28 = (long *)0x0;
      goto LAB_02e084bc;
    }
    plVar28 = (long *)*plVar28;
LAB_02e084bc:
    switch(*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 0x24)) {
    case 1:
      puVar24 = (undefined8 *)(param_1 + 0x20);
      break;
    case 2:
      puVar24 = (undefined8 *)(param_1 + 0x30);
      break;
    case 3:
      puVar24 = (undefined8 *)(param_1 + 0x28);
      break;
    case 4:
      puVar24 = (undefined8 *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((plVar28 != (long *)0x0) && (plVar26 = (long *)*puVar24, plVar26 != (long *)0x0)) {
      plVar29 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
      uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar29 + 0x460);
LAB_02e08e50:
                    /* WARNING: Could not recover jumptable at 0x02e08e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*UNRECOVERED_JUMPTABLE)(plVar29,uVar13,uVar14,uVar6);
      return uVar17;
    }
    goto switchD_02e06390_caseD_f;
  case 0x3e:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = *puVar1;
    uVar25 = *(byte *)((long)puVar1 + (ulong)uVar20 + 0x41) - 1;
    if (uVar25 < 0xe) {
      uVar6 = (&DAT_03d69c15)[(ulong)(byte)uVar25 * 2];
    }
    else {
      uVar6 = 7;
    }
    switch(*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      plVar28 = (long *)0x0;
      goto LAB_02e08dcc;
    }
    plVar28 = (long *)*plVar28;
LAB_02e08dcc:
    switch(*(undefined1 *)((long)puVar1 + (ulong)uVar20 + 0x24)) {
    case 1:
      puVar24 = (undefined8 *)(param_1 + 0x20);
      break;
    case 2:
      puVar24 = (undefined8 *)(param_1 + 0x30);
      break;
    case 3:
      puVar24 = (undefined8 *)(param_1 + 0x28);
      break;
    case 4:
      puVar24 = (undefined8 *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((plVar28 == (long *)0x0) || (plVar26 = (long *)*puVar24, plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    plVar29 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
    uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar29 + 0x468);
    goto LAB_02e08e50;
  case 0x3f:
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x4f0);
LAB_02e0753c:
                    /* WARNING: Could not recover jumptable at 0x02e07554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar17 = (*UNRECOVERED_JUMPTABLE)();
    return uVar17;
  case 0x40:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      sVar11 = *(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      iVar16 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1d8))(*(long **)(param_1 + 0x10),uVar13)
      ;
      iVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1e0))(*(long **)(param_1 + 0x10),uVar13)
      ;
      iVar16 = iVar16 - iVar15;
      iVar27 = (int)sVar11;
      bVar4 = SBORROW4(iVar16,iVar27);
      iVar15 = iVar16 - iVar27;
      bVar5 = iVar16 == iVar27;
      goto LAB_02e08d78;
    }
    break;
  case 0x41:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    sVar11 = (**(code **)(*plVar26 + 400))(plVar26,uVar13);
    bVar5 = sVar11 == 0;
LAB_02e0907c:
    uVar20 = (uint)!bVar5;
    goto switchD_02e06390_caseD_f;
  case 0x42:
    if (*(short *)(param_1 + 0x18) != 0) {
      uVar20 = 0;
      if (*(long **)(param_1 + 0x20) == (long *)0x0) goto switchD_02e06390_caseD_f;
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar26 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
        uVar25 = (**(code **)(**(long **)(param_1 + 0x28) + 0x98))();
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x228);
        goto LAB_02e094a4;
      }
    }
    break;
  case 0x43:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      uVar25 = (uint)*(ushort *)((long)puVar1 + (ulong)*puVar1 + 0x22);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 != (long *)0x0) {
        uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
        plVar26 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x490);
        goto LAB_02e094a4;
      }
      goto switchD_02e06390_caseD_f;
    }
    break;
  case 0x44:
    goto switchD_02e06390_caseD_44;
  case 0x45:
    plVar26 = *(long **)(param_1 + 0x10);
    uVar17 = (ulong)*(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                              (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 4);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x4c0);
    goto LAB_02e094fc;
  case 0x46:
    plVar26 = *(long **)(param_1 + 0x10);
    uVar17 = (ulong)*(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                              (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 4);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x4c8);
LAB_02e094fc:
                    /* WARNING: Could not recover jumptable at 0x02e09514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar17 = (*UNRECOVERED_JUMPTABLE)(plVar26,uVar17);
    return uVar17;
  case 0x47:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0x1c0);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x48:
    uVar25 = (uint)*(byte *)((long)((long)param_2 + (ulong)puVar22[5]) +
                            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x1c);
    uVar20 = 0;
    if (0x2e < uVar25 - 1) goto switchD_02e06390_caseD_f;
    uVar2 = *(undefined2 *)(param_1 + 0x18);
    local_58 = uVar2;
    switch(uVar25) {
    case 1:
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar18;
      piVar19 = (int *)FUN_00cf60cc(uVar18,uVar2);
      if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x2d) ||
         (uVar17 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0x16], uVar17 == 0))
      goto switchD_02e07cb8_caseD_6;
LAB_02e09bcc:
      bVar5 = *(char *)((long)piVar19 + uVar17) == '\0';
      goto LAB_02e0907c;
    case 2:
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar18;
      piVar19 = (int *)FUN_00cf60cc(uVar18,uVar2);
      if (0x2e < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar9 = ((ushort *)((long)piVar19 - (long)*piVar19))[0x17];
joined_r0x02e09a68:
        uVar17 = (ulong)uVar9;
        if (uVar17 != 0) goto LAB_02e09bcc;
      }
      goto switchD_02e07cb8_caseD_6;
    case 3:
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar18;
      piVar19 = (int *)FUN_00cf60cc(uVar18,uVar2);
      if (0x30 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar9 = ((ushort *)((long)piVar19 - (long)*piVar19))[0x18];
        goto joined_r0x02e09a68;
      }
      goto switchD_02e07cb8_caseD_6;
    case 4:
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar18;
      piVar19 = (int *)FUN_00cf60cc(uVar18,uVar2);
      if (0x32 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar9 = ((ushort *)((long)piVar19 - (long)*piVar19))[0x19];
        goto joined_r0x02e09a68;
      }
      goto switchD_02e07cb8_caseD_6;
    case 5:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fb714(&local_60);
      break;
    case 6:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fe3d8(&local_60);
      break;
    case 7:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fe59c(&local_60);
      break;
    case 8:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fb910(&local_60);
      break;
    case 9:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_016b1db4(&local_60);
      break;
    case 10:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fbb0c(&local_60);
      break;
    case 0xc:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fbe94(&local_60);
      break;
    case 0xd:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fc058(&local_60);
      break;
    case 0xe:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_01482ae8(&local_60);
      break;
    case 0xf:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fc5dc(&local_60);
      break;
    case 0x10:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fc7d8(&local_60);
      break;
    case 0x11:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fe760(&local_60);
      break;
    case 0x12:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fc9d4(&local_60);
      break;
    case 0x13:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fcbd0(&local_60);
      break;
    case 0x14:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fcdcc(&local_60);
      break;
    case 0x15:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fcfc8(&local_60);
      break;
    case 0x16:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fe924(&local_60);
      break;
    case 0x17:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fd1c4(&local_60);
      break;
    case 0x18:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fd3c0(&local_60);
      break;
    case 0x19:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fd5bc(&local_60);
      break;
    case 0x1a:
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar18;
      piVar19 = (int *)FUN_00cf60cc(uVar18,uVar2);
      if (100 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar9 = ((ushort *)((long)piVar19 - (long)*piVar19))[0x32];
        goto joined_r0x02e09a68;
      }
      goto switchD_02e07cb8_caseD_6;
    case 0x1b:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fd7b8(&local_60);
      break;
    case 0x1c:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fd9b4(&local_60);
      break;
    case 0x1d:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fdbb0(&local_60);
      break;
    case 0x1e:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fddac(&local_60);
      break;
    case 0x1f:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fdfa8(&local_60);
      break;
    case 0x20:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fe1a4(&local_60);
      break;
    case 0x21:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021feae8(&local_60);
      break;
    case 0x22:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fecac(&local_60);
      break;
    case 0x23:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021fee70(&local_60);
      break;
    case 0x24:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff034(&local_60);
      break;
    case 0x25:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff1f8(&local_60);
      break;
    case 0x26:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff3bc(&local_60);
      break;
    case 0x27:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff580(&local_60);
      break;
    case 0x28:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff744(&local_60);
      break;
    case 0x29:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ff908(&local_60);
      break;
    case 0x2a:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ffacc(&local_60);
      break;
    case 0x2b:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ffc90(&local_60);
      break;
    case 0x2c:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_021ffe54(&local_60);
      break;
    case 0x2d:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_02200018(&local_60);
      break;
    case 0x2e:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_022001dc(&local_60);
      break;
    case 0x2f:
      local_60 = PTR_DAT_047ddad8 + 0x10;
      uVar20 = FUN_022003a0(&local_60);
    }
    goto switchD_02e06390_caseD_f;
  case 0x49:
    plVar28 = *(long **)(param_1 + 0x10);
    iVar16 = (int)*(short *)((long)((long)param_2 + (ulong)puVar22[5]) +
                            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 4);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x390);
    uVar20 = (uint)*(ushort *)(param_1 + 0x18);
LAB_02e092c8:
    iVar15 = (*UNRECOVERED_JUMPTABLE)(plVar28,uVar20);
    goto LAB_02e092cc;
  case 0x4a:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar15 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x498);
      goto LAB_02e09288;
    }
    break;
  case 0x4b:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar20 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x498);
      goto LAB_02e092c8;
    }
    break;
  case 0x4c:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (uVar20 - 1 < 4) {
      iVar16 = (int)*(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
      switch(uVar20) {
      case 1:
        plVar28 = (long *)(param_1 + 0x20);
        break;
      case 2:
        plVar28 = (long *)(param_1 + 0x30);
        break;
      case 3:
        plVar28 = (long *)(param_1 + 0x28);
        break;
      case 4:
        plVar28 = (long *)(param_1 + 0x38);
      }
      uVar20 = 0;
      if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      plVar28 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar28 + 0x498);
      goto LAB_02e09318;
    }
    break;
  case 0x4d:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar20 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1 + 10);
    if (3 < uVar20 - 1) break;
    sVar11 = *(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
    switch(uVar20) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    uVar18 = (**(code **)(**(long **)(param_1 + 0x10) + 0x220))(*(long **)(param_1 + 0x10),uVar13);
    plVar28 = *(long **)(*(long *)(param_1 + 8) + 400);
    if (plVar28 != (long *)0x0) {
      plVar26 = plVar28 + 5;
      do {
        lVar21 = *plVar26;
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar5) {
          *(int *)plVar26 = (int)lVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar21 == -1) goto LAB_02e0a314;
    }
    sVar12 = (**(code **)(*plVar28 + 0x38))(plVar28,uVar18);
    if (plVar28 != (long *)0x0) {
      plVar26 = plVar28 + 5;
      do {
        lVar21 = *plVar26;
        iVar15 = (int)lVar21 + -1;
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar5) {
          *(int *)plVar26 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
      else if ((int)lVar21 == 0) goto LAB_02e0a33c;
    }
    bVar5 = sVar11 == sVar12;
    goto LAB_02e09290;
  case 0x4e:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0;
    goto LAB_02e0945c;
  case 0x4f:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 1;
    goto LAB_02e0945c;
  case 0x50:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 2;
    goto LAB_02e0945c;
  case 0x51:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 3;
    goto LAB_02e0945c;
  case 0x52:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 4;
    goto LAB_02e0945c;
  case 0x53:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 5;
    goto LAB_02e0949c;
  case 0x54:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 6;
    goto LAB_02e0945c;
  case 0x55:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 7;
    goto LAB_02e0945c;
  case 0x56:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 8;
    goto LAB_02e0945c;
  case 0x57:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 9;
    goto LAB_02e0949c;
  case 0x58:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 10;
    goto LAB_02e0949c;
  case 0x59:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0xc;
    goto LAB_02e0945c;
  case 0x5a:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0xd;
    goto LAB_02e0949c;
  case 0x5b:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0xf;
    goto LAB_02e0945c;
  case 0x5c:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x12;
    goto LAB_02e0949c;
  case 0x5d:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x13;
    goto LAB_02e0949c;
  case 0x5e:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x14;
    goto LAB_02e0949c;
  case 0x5f:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x15;
    goto LAB_02e0949c;
  case 0x60:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x16;
    goto LAB_02e0949c;
  case 0x61:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x17;
    goto LAB_02e0949c;
  case 0x62:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x18;
LAB_02e0945c:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 600);
    goto LAB_02e094a4;
  case 99:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x19;
    goto LAB_02e0949c;
  case 100:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 == (long *)0x0) goto switchD_02e06390_caseD_f;
    plVar26 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
    lVar21 = *plVar26;
    uVar25 = 0x1a;
LAB_02e0949c:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 600);
LAB_02e094a4:
                    /* WARNING: Could not recover jumptable at 0x02e094bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar17 = (*UNRECOVERED_JUMPTABLE)(plVar26,uVar13,uVar25);
    return uVar17;
  case 0x65:
    uVar17 = (ulong)puVar22[5];
    uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    cVar8 = *(char *)((long)((long)param_2 + uVar17) + uVar23 + 0x14);
    iVar15 = 3;
    if (cVar8 != '\x02') {
      iVar15 = 0;
    }
    if (cVar8 == '\x01') {
      iVar15 = 1;
    }
    if (iVar15 == 3) {
      plVar28 = (long *)(param_1 + 0x28);
LAB_02e07ee4:
      if ((long *)*plVar28 == (long *)0x0) goto LAB_02e07f28;
      plVar26 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar13 = (**(code **)(*plVar26 + 0x58))(plVar26,uVar13);
      uVar17 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
      uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    }
    else {
      if (iVar15 == 2) {
        plVar28 = (long *)(param_1 + 0x30);
        goto LAB_02e07ee4;
      }
      if (iVar15 == 1) {
        plVar28 = (long *)(param_1 + 0x20);
        goto LAB_02e07ee4;
      }
LAB_02e07f28:
      uVar13 = 2;
    }
    uVar20 = *(byte *)((long)param_2 + uVar23 + uVar17 + 0x2d) - 2;
    if ((uVar20 < 0x11) && ((0x1fc7fU >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar14 = *(undefined4 *)
                (&DAT_03d69ba8 + *(long *)(&DAT_03d69c30 + (long)(char)uVar20 * 8) * 8);
    }
    else {
      uVar14 = 0x13;
    }
    iVar15 = (int)*(short *)((long)param_2 + uVar23 + uVar17 + 0x38);
    iVar16 = (**(code **)(**(long **)(param_1 + 0x10) + 0x400))
                       (*(long **)(param_1 + 0x10),uVar13,uVar14);
LAB_02e0928c:
    bVar5 = iVar16 == iVar15;
LAB_02e09290:
    uVar20 = (uint)bVar5;
    goto switchD_02e06390_caseD_f;
  case 0x66:
    uVar17 = (ulong)puVar22[5];
    uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    cVar8 = *(char *)((long)((long)param_2 + uVar17) + uVar23 + 0x14);
    iVar15 = 3;
    if (cVar8 != '\x02') {
      iVar15 = 0;
    }
    if (cVar8 == '\x01') {
      iVar15 = 1;
    }
    if (iVar15 == 3) {
      plVar28 = (long *)(param_1 + 0x28);
LAB_02e07fa0:
      if ((long *)*plVar28 == (long *)0x0) goto LAB_02e07fe4;
      plVar26 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar13 = (**(code **)(*plVar26 + 0x58))(plVar26,uVar13);
      uVar17 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
      uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    }
    else {
      if (iVar15 == 2) {
        plVar28 = (long *)(param_1 + 0x30);
        goto LAB_02e07fa0;
      }
      if (iVar15 == 1) {
        plVar28 = (long *)(param_1 + 0x20);
        goto LAB_02e07fa0;
      }
LAB_02e07fe4:
      uVar13 = 2;
    }
    uVar20 = *(byte *)((long)param_2 + uVar23 + uVar17 + 0x2d) - 2;
    if ((uVar20 < 0x11) && ((0x1fc7fU >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar14 = *(undefined4 *)
                (&DAT_03d69ba8 + *(long *)(&DAT_03d69c30 + (long)(char)uVar20 * 8) * 8);
    }
    else {
      uVar14 = 0x13;
    }
    iVar16 = (int)*(short *)((long)param_2 + uVar23 + uVar17 + 0x38);
    iVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x400))
                       (*(long **)(param_1 + 0x10),uVar13,uVar14);
LAB_02e092cc:
    uVar20 = (uint)(iVar16 <= iVar15);
    goto switchD_02e06390_caseD_f;
  case 0x67:
    uVar17 = (ulong)puVar22[5];
    uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    cVar8 = *(char *)((long)((long)param_2 + uVar17) + uVar23 + 0x14);
    iVar15 = 3;
    if (cVar8 != '\x02') {
      iVar15 = 0;
    }
    if (cVar8 == '\x01') {
      iVar15 = 1;
    }
    if (iVar15 == 3) {
      plVar28 = (long *)(param_1 + 0x28);
LAB_02e07e28:
      if ((long *)*plVar28 == (long *)0x0) goto LAB_02e07e6c;
      plVar26 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar13 = (**(code **)(*plVar26 + 0x58))(plVar26,uVar13);
      uVar17 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
      uVar23 = (ulong)*(uint *)((long)param_2 + uVar17);
    }
    else {
      if (iVar15 == 2) {
        plVar28 = (long *)(param_1 + 0x30);
        goto LAB_02e07e28;
      }
      if (iVar15 == 1) {
        plVar28 = (long *)(param_1 + 0x20);
        goto LAB_02e07e28;
      }
LAB_02e07e6c:
      uVar13 = 2;
    }
    uVar20 = *(byte *)((long)param_2 + uVar23 + uVar17 + 0x2d) - 2;
    if ((uVar20 < 0x11) && ((0x1fc7fU >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar14 = *(undefined4 *)
                (&DAT_03d69ba8 + *(long *)(&DAT_03d69c30 + (long)(char)uVar20 * 8) * 8);
    }
    else {
      uVar14 = 0x13;
    }
    iVar16 = (int)*(short *)((long)param_2 + uVar23 + uVar17 + 0x38);
    iVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x400))
                       (*(long **)(param_1 + 0x10),uVar13,uVar14);
LAB_02e0931c:
    bVar5 = SBORROW4(iVar15,iVar16);
    iVar15 = iVar15 - iVar16;
LAB_02e09320:
    uVar20 = (uint)(iVar15 < 0 != bVar5);
    goto switchD_02e06390_caseD_f;
  case 0x68:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0xd8);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x69:
    switch(*(undefined1 *)
            ((long)((long)param_2 + (ulong)puVar22[5]) +
            (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 10)) {
    case 1:
      plVar28 = (long *)(param_1 + 0x20);
      break;
    case 2:
      plVar28 = (long *)(param_1 + 0x30);
      break;
    case 3:
      plVar28 = (long *)(param_1 + 0x28);
      break;
    case 4:
      plVar28 = (long *)(param_1 + 0x38);
      break;
    default:
      goto switchD_02e07cb8_caseD_6;
    }
    uVar20 = 0;
    if ((long *)*plVar28 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x10);
      uVar17 = (**(code **)(*(long *)*plVar28 + 0x98))();
      uVar17 = uVar17 & 0xffffffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar26 + 0xe0);
      goto LAB_02e094fc;
    }
    goto switchD_02e06390_caseD_f;
  case 0x6a:
    sVar11 = *(short *)(param_1 + 0x18);
    uVar20 = 0;
    if (((sVar11 == 0) || (plVar28 = *(long **)(param_1 + 0x20), plVar28 == (long *)0x0)) ||
       (plVar26 = *(long **)(param_1 + 0x28), plVar26 == (long *)0x0))
    goto switchD_02e06390_caseD_f;
    cVar8 = *(char *)((long)((long)param_2 + (ulong)puVar22[5]) +
                     (ulong)*(uint *)((long)param_2 + (ulong)puVar22[5]) + 0x15);
    plVar29 = *(long **)(param_1 + 0x10);
    uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
    uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
    uVar17 = (**(code **)(*plVar29 + 0x448))(plVar29,uVar13,uVar14,sVar11,cVar8 == '\x01');
    if ((uVar17 & 1) != 0) {
      plVar29 = *(long **)(param_1 + 0x10);
      uVar13 = (**(code **)(*plVar28 + 0x98))(plVar28);
      uVar14 = (**(code **)(*plVar26 + 0x98))(plVar26);
      uVar17 = (**(code **)(*plVar29 + 0x4b8))(plVar29,uVar13,uVar14,cVar8 == '\x01');
      if ((uVar17 & 1) == 0) goto switchD_02e06390_caseD_44;
    }
    break;
  case 0x6b:
    puVar1 = (uint *)((long)param_2 + (ulong)puVar22[5]);
    uVar6 = *(undefined1 *)((long)puVar1 + (ulong)*puVar1 + 0x16);
    sVar11 = *(short *)((long)puVar1 + (ulong)*puVar1 + 0x1e);
    uVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x360))
                      (*(long **)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x18));
    switch(uVar6) {
    case 1:
      if (sVar11 == 3) {
LAB_02e096ac:
        uVar20 = 1;
        if ((uVar9 == 0x19d) || (uVar9 == 0x1d8)) goto switchD_02e06390_caseD_f;
      }
      else if (sVar11 == 2) {
        uVar20 = 1;
        if (uVar9 == 0x32) goto switchD_02e06390_caseD_f;
LAB_02e0977c:
        uVar20 = 1;
        if (uVar9 == 0x134) goto switchD_02e06390_caseD_f;
        if (uVar9 == 0x13c) {
          cVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x3c8))();
LAB_02e0979c:
          if (cVar8 == '\x01') goto switchD_02e06390_caseD_44;
        }
      }
      else if (sVar11 == 1) {
        uVar25 = (uint)uVar9;
        uVar20 = 1;
        if (uVar25 < 0x13c) {
          if (uVar25 < 0x8b) {
            if ((uVar25 == 10) || (uVar25 == 0x32)) goto switchD_02e06390_caseD_f;
            if (uVar25 == 0x6d) {
LAB_02e0a014:
              if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                plVar28 = *(long **)(param_1 + 0x10);
                uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
                uVar17 = (**(code **)(*plVar28 + 0x78))(plVar28,uVar13,7);
                if ((uVar17 & 1) != 0) break;
              }
switchD_02e06390_caseD_44:
              uVar20 = 1;
              goto switchD_02e06390_caseD_f;
            }
          }
          else if (((uVar25 - 0x8b < 2) || (uVar25 == 0x134)) || (uVar25 == 0x138))
          goto switchD_02e06390_caseD_f;
        }
        else if (uVar25 < 0x1a8) {
          if (uVar25 == 0x13c) goto switchD_02e06390_caseD_f;
          if (uVar25 == 0x153) {
LAB_02e0a108:
            if (*(long **)(param_1 + 0x20) != (long *)0x0) {
              plVar28 = *(long **)(param_1 + 0x10);
              uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
              uVar17 = (**(code **)(*plVar28 + 0x78))(plVar28,uVar13,0xb);
              if ((uVar17 & 1) != 0) goto switchD_02e06390_caseD_44;
            }
          }
          else if (uVar25 == 0x187) goto LAB_02e0a0ac;
        }
        else {
          if ((uVar25 == 0x1a8) || (uVar25 == 0x1b0)) goto switchD_02e06390_caseD_f;
          if ((uVar25 == 0x1c5) && (*(long **)(param_1 + 0x20) != (long *)0x0)) {
            plVar28 = *(long **)(param_1 + 0x10);
            uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
            cVar8 = (**(code **)(*plVar28 + 0x2c0))(plVar28,uVar13);
            goto LAB_02e0979c;
          }
        }
      }
      break;
    case 2:
      if (sVar11 != 3) {
        if (sVar11 != 2) {
          if (sVar11 == 1) {
            uVar25 = (uint)uVar9;
            uVar20 = 1;
            if (uVar25 < 0x148) {
              uVar17 = (ulong)(uVar25 - 0x6d);
              if (uVar25 - 0x6d < 0x34) {
                if ((1L << (uVar17 & 0x3f) & 0x8010a0000000U) != 0) goto switchD_02e06390_caseD_f;
                if (uVar17 == 0) goto LAB_02e0a014;
                if (uVar17 == 0x33) goto LAB_02e09f48;
              }
              if ((uVar25 == 0xb) || (uVar25 == 0x33)) goto switchD_02e06390_caseD_f;
            }
            else if (uVar25 < 0x19d) {
              if (uVar25 == 0x148) goto switchD_02e06390_caseD_f;
              if (uVar25 == 0x15e) goto LAB_02e0a108;
LAB_02e0a0a4:
              if (uVar9 == 0x16e) {
LAB_02e0a0ac:
                if ((*(long **)(param_1 + 0x20) != (long *)0x0) &&
                   (plVar28 = *(long **)(param_1 + 0x30), plVar28 != (long *)0x0)) {
                  sVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0xf0))();
                  sVar12 = (**(code **)(*plVar28 + 0xf0))(plVar28);
                  if (((sVar11 == 0x39) && (sVar12 == 0x3a)) ||
                     ((sVar11 == 0x3a && (sVar12 == 0x39)))) goto switchD_02e06390_caseD_44;
                }
              }
            }
            else if (uVar25 < 0x1b0) {
              if ((uVar25 == 0x19d) || (uVar25 == 0x1a8)) goto switchD_02e06390_caseD_f;
            }
            else {
              if (uVar25 == 0x1b0) goto switchD_02e06390_caseD_f;
              if ((uVar25 == 0x1c5) && (*(long **)(param_1 + 0x20) != (long *)0x0)) {
                plVar28 = *(long **)(param_1 + 0x10);
                uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
                cVar8 = (**(code **)(*plVar28 + 0x2c0))(plVar28,uVar13);
                if (cVar8 == '\x02') goto switchD_02e06390_caseD_44;
              }
            }
          }
          break;
        }
        uVar20 = 1;
        if (uVar9 == 0x33) goto switchD_02e06390_caseD_f;
      }
      uVar20 = 1;
      if (uVar9 == 0x148) goto switchD_02e06390_caseD_f;
LAB_02e09e48:
      uVar20 = 1;
      if (uVar9 == 0x19d) goto switchD_02e06390_caseD_f;
      break;
    case 3:
      if (sVar11 == 3) goto LAB_02e096ac;
      if (sVar11 == 2) {
        uVar25 = (uint)uVar9;
        uVar20 = 1;
        if (0x133 < uVar25) {
          if ((uVar25 - 0x134 < 0x3a) &&
             ((1L << ((ulong)(uVar25 - 0x134) & 0x3f) & 0x200000000000011U) != 0))
          goto switchD_02e06390_caseD_f;
          goto LAB_02e096ac;
        }
        if ((uVar25 == 0x34) || (uVar25 == 0x11c)) goto switchD_02e06390_caseD_f;
      }
      else if (sVar11 == 1) {
        uVar25 = (uint)uVar9;
        uVar20 = 1;
        if (uVar25 < 0x16d) {
          if (uVar25 < 0x11c) {
            if (((uVar25 == 0xc) || (uVar25 == 0x34)) || (uVar25 == 0x8c))
            goto switchD_02e06390_caseD_f;
          }
          else if ((uVar25 - 0x11c < 0x1d) &&
                  ((1 << (ulong)(uVar25 - 0x11c & 0x1f) & 0x11000801U) != 0))
          goto switchD_02e06390_caseD_f;
        }
        else {
          uVar3 = uVar25 - 0x19d;
          if (uVar3 < 0x3c) {
            if ((1L << ((ulong)uVar3 & 0x3f) & 0x800000000080801U) != 0)
            goto switchD_02e06390_caseD_f;
            if ((ulong)uVar3 == 0x28) {
              if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                plVar28 = *(long **)(param_1 + 0x10);
                uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
                cVar8 = (**(code **)(*plVar28 + 0x2c0))(plVar28,uVar13);
                if (cVar8 == '\x05') goto switchD_02e06390_caseD_44;
              }
              break;
            }
          }
          if (uVar25 == 0x16d) goto switchD_02e06390_caseD_f;
        }
      }
      break;
    case 4:
      if (sVar11 == 3) {
        uVar20 = 1;
        if (uVar9 == 0x141) goto switchD_02e06390_caseD_f;
        goto LAB_02e09e48;
      }
      if (sVar11 == 2) {
        uVar20 = 1;
        if (0x140 < uVar9) {
          if (uVar9 == 0x141) goto switchD_02e06390_caseD_f;
          goto LAB_02e09e40;
        }
        if (uVar9 == 0x35) goto switchD_02e06390_caseD_f;
        goto LAB_02e0977c;
      }
      if (sVar11 == 1) {
        uVar25 = (uint)uVar9;
        uVar20 = 1;
        if (uVar25 < 0x134) {
          if (uVar25 < 0x8c) {
            if ((uVar25 == 0xd) || (uVar25 == 0x35)) goto switchD_02e06390_caseD_f;
          }
          else if ((uVar25 == 0x8c) || (uVar25 == 0x114)) goto switchD_02e06390_caseD_f;
        }
        else {
          if (0x186 < uVar25) {
            if (0x1a7 < uVar25) goto LAB_02e09fcc;
            if (uVar25 == 0x187) goto LAB_02e0a0ac;
            goto LAB_02e09e48;
          }
          uVar25 = uVar25 - 0x134;
          if (uVar25 < 0x3a) {
            if ((1L << ((ulong)uVar25 & 0x3f) & 0x200000000002101U) != 0)
            goto switchD_02e06390_caseD_f;
            if ((ulong)uVar25 == 0x1f) goto LAB_02e0a108;
          }
        }
      }
      break;
    case 5:
      if (sVar11 == 3) {
        if (uVar9 == 0x19d) goto switchD_02e06390_caseD_44;
      }
      else {
        if (sVar11 == 2) {
          uVar20 = 1;
          if (uVar9 == 0x36) goto switchD_02e06390_caseD_f;
LAB_02e09e40:
          uVar20 = 1;
          if (uVar9 == 0x16d) goto switchD_02e06390_caseD_f;
          goto LAB_02e09e48;
        }
        if (sVar11 == 1) {
          uVar20 = 1;
          if (uVar9 < 0xae) {
            if (uVar9 < 0x8c) {
              if ((uVar9 == 0xe) || (uVar9 == 0x36)) goto switchD_02e06390_caseD_f;
            }
            else {
              if ((uVar9 == 0x8c) || (uVar9 == 0x9c)) goto switchD_02e06390_caseD_f;
              if (uVar9 == 0xa0) {
LAB_02e09f48:
                if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                  plVar28 = *(long **)(param_1 + 0x10);
                  uVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x98))();
                  iVar15 = (**(code **)(*plVar28 + 0x280))(plVar28,uVar13);
                  if (iVar15 < 3) goto switchD_02e06390_caseD_44;
                }
              }
            }
          }
          else {
            if (uVar9 < 0x19d) {
              if ((uVar9 == 0xae) || (uVar9 == 0x16d)) goto switchD_02e06390_caseD_f;
              goto LAB_02e0a0a4;
            }
            if (uVar9 == 0x19d) goto switchD_02e06390_caseD_f;
LAB_02e09fcc:
            uVar20 = 1;
            if ((uVar9 == 0x1a8) || (uVar9 == 0x1b0)) goto switchD_02e06390_caseD_f;
          }
        }
      }
      break;
    case 7:
      if (sVar11 != 2) {
        if (sVar11 != 1) break;
        uVar20 = 1;
        if (uVar9 == 0x10) goto switchD_02e06390_caseD_f;
      }
      uVar20 = 1;
      if ((uVar9 == 0x38) || (uVar9 == 0x6c)) goto switchD_02e06390_caseD_f;
    }
  }
switchD_02e07cb8_caseD_6:
  uVar20 = 0;
switchD_02e06390_caseD_f:
  return (ulong)(uVar20 & 1);
}


