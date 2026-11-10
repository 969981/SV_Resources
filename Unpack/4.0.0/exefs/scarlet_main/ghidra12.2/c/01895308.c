/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01895308; name: FUN_01895308
 */


void FUN_01895308(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  byte bVar6;
  short sVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char local_54 [4];
  
  FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar11 = FUN_01481540();
  if (((uVar11 & 1) != 0) &&
     (uVar11 = (**(code **)(*(long *)param_3[1] + 0x78))(), (uVar11 & 1) == 0)) {
    if (*(char *)((long)param_3 + 0x31) == '\0') goto LAB_018953a0;
    uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar18 = param_3[1];
    uVar1 = *(undefined1 *)(param_3 + 5);
    sVar7 = *(short *)(param_3 + 2);
    uVar14 = FUN_01243584(param_1);
    uVar17 = 2;
    goto LAB_01895574;
  }
  uVar14 = *param_3;
  plVar15 = (long *)param_3[1];
  uVar3 = *(ushort *)(param_3 + 2);
  uVar1 = *(undefined1 *)(param_3 + 5);
  cVar2 = *(char *)(param_3 + 6);
  uVar11 = (**(code **)(*plVar15 + 0x220))(plVar15,uVar3);
  if ((cVar2 != '\x02') && ((uVar11 & 1) != 0)) {
    bVar6 = 1;
    bVar5 = true;
    uVar17 = 1;
    goto LAB_0189537c;
  }
  if (((uVar3 < 6) && (sVar7 = (**(code **)(*plVar15 + 0x230))(plVar15), cVar2 == '\0')) &&
     (sVar7 != 0)) goto LAB_01895444;
  uVar18 = FUN_01246e90(param_1);
  uVar11 = FUN_01895ea4(uVar18,plVar15,uVar14,uVar3,uVar1);
  if ((uVar11 & 1) != 0) goto switchD_0189560c_caseD_2;
  plVar13 = (long *)(**(code **)plVar15[5])(plVar15 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar10 != 0)) {
    uVar14 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar14;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)PTR_DAT_047d3f08) {
      if ((uVar3 == 0x2a) && (*(char *)((long)plVar15 + 0x714) != '\0')) goto LAB_0189553c;
      break;
    }
  }
  uVar11 = FUN_0297dd04(param_1,plVar15);
  if ((uVar3 == 3) && ((uVar11 & 1) != 0)) goto LAB_01895444;
  switch(uVar3) {
  case 1:
    uVar9 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    if ((((uVar9 & 0x7c00) != 0x3000) && ((uVar9 & 0x1f) != 0xc)) && ((uVar9 & 0x3e0) != 0x180))
    goto switchD_0189560c_caseD_2;
    break;
  case 2:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x11:
switchD_0189560c_caseD_2:
    local_54[0] = '\0';
    uVar14 = *param_3;
    uVar18 = param_3[1];
    uVar1 = *(undefined1 *)(param_3 + 5);
    uVar4 = *(undefined2 *)(param_3 + 2);
    uVar17 = FUN_01246e90(param_1);
    bVar6 = FUN_01896364(uVar17,uVar14,uVar18,uVar4,uVar1,local_54);
    if (((bVar6 & 1) != 0) && (local_54[0] != '\0' || *(char *)((long)param_3 + 0x32) != '\0')) {
      uVar14 = FUN_01246e90(param_1);
      FUN_0297dd9c(uVar14,param_3[1],*param_3,*(undefined2 *)(param_3 + 2),
                   *(undefined1 *)(param_3 + 5),*(undefined4 *)((long)param_3 + 0x2c));
      lVar12 = FUN_0149b698(param_1);
      *(undefined1 *)(lVar12 + 0xc0) = 1;
    }
    *param_2 = bVar6 & 1;
    return;
  case 3:
    uVar9 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    if ((((uVar9 & 0x7c00) != 0x3800) && ((uVar9 & 0x1f) != 0xe)) && ((uVar9 & 0x3e0) != 0x1c0))
    goto switchD_0189560c_caseD_2;
    break;
  case 4:
    uVar9 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    if ((((uVar9 & 0x7c00) != 0x2400) && ((uVar9 & 0x1f) != 9)) && ((uVar9 & 0x3e0) != 0x120))
    goto switchD_0189560c_caseD_2;
    break;
  case 5:
    uVar9 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    if (((uVar9 & 0x3e0) != 0x100) && ((uVar9 & 0x1f) != 8)) {
      bVar5 = false;
      uVar17 = 2;
      bVar6 = 1;
      if (((uVar9 & 0x7c00) != 0xc00) &&
         ((((uVar9 & 0x3e0) != 0x60 && ((uVar9 & 0x7c00) != 0x2000)) && ((uVar9 & 0x1f) != 3))))
      goto switchD_0189560c_caseD_2;
    }
    break;
  case 7:
    lVar12 = *(long *)(param_1 + 0x10);
    iVar10 = (**(code **)(*plVar15 + 0x98))(plVar15);
    lVar12 = *(long *)(lVar12 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar12 + 0x18) == 0)) {
      uVar14 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),1);
      plVar15 = (long *)FUN_0124c614(uVar14,0);
      if (plVar15 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar15 + 0x98))();
        *(undefined4 *)(lVar12 + 0x18) = uVar8;
      }
    }
    if (*(int *)(lVar12 + 0x18) != iVar10) goto switchD_0189560c_caseD_2;
    goto LAB_0189553c;
  case 0xc:
    lVar12 = *(long *)(param_1 + 0x10);
    iVar10 = (**(code **)(*plVar15 + 0x98))(plVar15);
    lVar12 = *(long *)(lVar12 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar12 + 0x18) == 0)) {
      uVar14 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),1);
      plVar13 = (long *)FUN_0124c614(uVar14,0);
      if (plVar13 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar13 + 0x98))();
        *(undefined4 *)(lVar12 + 0x18) = uVar8;
      }
    }
    if (*(int *)(lVar12 + 0x18) != iVar10) {
      lVar12 = *(long *)(param_1 + 0x10);
      uVar8 = (**(code **)(*plVar15 + 0x98))(plVar15);
      plVar15 = (long *)FUN_01021c94(*(undefined8 *)(lVar12 + 0x30),uVar8);
      if ((plVar15 == (long *)0x0) || (uVar11 = (**(code **)(*plVar15 + 0x78))(), (uVar11 & 1) != 0)
         ) goto switchD_0189560c_caseD_2;
    }
LAB_0189553c:
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    break;
  case 0xe:
    sVar7 = (**(code **)(*plVar15 + 0x230))(plVar15);
    if (sVar7 == 0) goto switchD_0189560c_caseD_2;
    goto LAB_01895444;
  case 0x10:
    uVar11 = FUN_0297dd60(param_1,plVar15);
    if ((uVar11 & 1) == 0) {
      uVar8 = (**(code **)(*plVar15 + 0xf0))(plVar15);
      if (((*PTR_DAT_047ddaa8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047ddaa8), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047ddad0,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047ddaa8);
      }
      uVar14 = *(undefined8 *)PTR_DAT_047ddab0;
      *(undefined8 *)PTR_DAT_047ddab8 = uVar14;
      piVar16 = (int *)FUN_01074860(uVar14,uVar8);
      if (((*(ushort *)((long)piVar16 - (long)*piVar16) < 0x11) ||
          (uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[8], uVar11 == 0)) ||
         (*(char *)((long)piVar16 + uVar11) == '\0')) goto switchD_0189560c_caseD_2;
    }
    goto LAB_01895444;
  case 0x12:
    uVar9 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
    bVar5 = false;
    uVar17 = 2;
    bVar6 = 1;
    if (((uVar9 & 0x7c00) != 0x2c00) && (((uVar9 & 0x1f) != 0xb && ((uVar9 & 0x3e0) != 0x160))))
    goto switchD_0189560c_caseD_2;
    break;
  default:
    if ((uVar3 != 0x1c) || (sVar7 = FUN_0107ffe0(param_3 + 3), sVar7 != 0xa5))
    goto switchD_0189560c_caseD_2;
LAB_01895444:
    bVar6 = 0;
    bVar5 = false;
    uVar17 = 3;
  }
LAB_0189537c:
  if ((*(char *)((long)param_3 + 0x31) != '\0') &&
     (((bool)(bVar6 | *(char *)(param_3 + 5) != '\x05') || (*(char *)((long)param_3 + 0x33) == '\0')
      ))) {
    uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
    sVar7 = *(short *)(param_3 + 2);
    if (bVar5 && sVar7 == 0x14) {
      lVar12 = FUN_0149b698(param_1);
      *(undefined1 *)(lVar12 + 0xc1) = 1;
    }
    else {
      uVar18 = param_3[1];
      uVar1 = *(undefined1 *)(param_3 + 5);
      uVar14 = FUN_01243584(param_1);
LAB_01895574:
      FUN_0297db9c(uVar14,uVar8,uVar18,uVar17,sVar7,uVar1);
      lVar12 = FUN_0149b698(param_1);
      *(undefined1 *)(lVar12 + 0xc0) = 1;
    }
  }
LAB_018953a0:
  *param_2 = 1;
  return;
}


