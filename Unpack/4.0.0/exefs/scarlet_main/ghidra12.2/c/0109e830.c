/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109e830; name: FUN_0109e830
 */


short * FUN_0109e830(undefined8 param_1,long param_2,short *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  short *psVar6;
  short sVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  short sVar11;
  char local_24 [4];
  
  uVar2 = FUN_021737d0(param_3);
  if (*param_3 == 0x10) {
    uVar1 = param_3[1];
    if (uVar1 < 2) {
      sVar7 = 0;
      sVar11 = 0;
      if (uVar1 != 0) goto LAB_0109e878;
    }
    else {
      sVar7 = param_3[3];
LAB_0109e878:
      if (uVar1 - 1 < 2) goto LAB_0109ed1c;
      sVar11 = param_3[4];
    }
  }
  else {
    sVar7 = 0;
LAB_0109ed1c:
    sVar11 = 0;
  }
  local_24[0] = '\0';
  uVar3 = FUN_021737ec(param_1,sVar7,local_24);
  if ((sVar11 != 0) || (local_24[0] == '\0')) {
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d8ca0;
    *(undefined8 *)PTR_DAT_047d8ca8 = uVar5;
    psVar6 = (short *)FUN_021738fc(uVar5,uVar2,uVar3);
    sVar7 = *psVar6;
    if (sVar7 != 0) {
      do {
        psVar6 = psVar6 + 1;
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar1 = *(ushort *)(param_2 + 0x52);
          if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar1 + 1;
            *(short *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 2) = sVar7;
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
          }
        }
        sVar7 = *psVar6;
      } while (sVar7 != 0);
    }
    goto switchD_0109e908_default;
  }
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar8 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar8;
  iVar4 = *(int *)(lVar8 + 0x2b0);
  if (iVar4 == 6) {
    switch(uVar2) {
    case 4:
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
      uVar1 = *(ushort *)(param_2 + 0x52);
      if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar1 + 1;
        lVar8 = *(long *)(param_2 + 0x30);
        uVar10 = 100;
LAB_0109eac8:
        *(undefined2 *)(lVar8 + (ulong)uVar1 * 2) = uVar10;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
        if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
      }
      break;
    case 5:
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
      uVar1 = *(ushort *)(param_2 + 0x52);
      if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar1 + 1;
        lVar8 = *(long *)(param_2 + 0x30);
        uVar10 = 0x44;
        goto LAB_0109eac8;
      }
      break;
    case 6:
switchD_0109e908_caseD_8:
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
      uVar1 = *(ushort *)(param_2 + 0x52);
      uVar9 = (ulong)uVar1;
      if ((uint)*(ushort *)(param_2 + 0x50) <= uVar1 + 1) goto LAB_0109eb1c;
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x61;
      goto LAB_0109eb04;
    case 7:
switchD_0109e908_caseD_9:
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
      uVar1 = *(ushort *)(param_2 + 0x52);
      uVar9 = (ulong)uVar1;
      if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar1 + 1;
        lVar8 = *(long *)(param_2 + 0x30);
        uVar10 = 0x41;
        goto LAB_0109eb04;
      }
      goto LAB_0109eb1c;
    default:
      goto switchD_0109e908_default;
    }
    uVar1 = *(ushort *)(param_2 + 0x52);
    uVar9 = (ulong)uVar1;
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x65;
      goto LAB_0109eb04;
    }
    goto LAB_0109eb1c;
  }
  if (iVar4 != 4) goto switchD_0109e908_default;
  switch(uVar2) {
  case 4:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 100;
LAB_0109eb80:
      *(undefined2 *)(lVar8 + (ulong)uVar1 * 2) = uVar10;
      *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    }
    break;
  case 5:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x44;
      goto LAB_0109eb80;
    }
    break;
  case 6:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x73;
LAB_0109ec1c:
      *(undefined2 *)(lVar8 + (ulong)uVar1 * 2) = uVar10;
      *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    }
    goto LAB_0109ec34;
  case 7:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x53;
      goto LAB_0109ec1c;
    }
LAB_0109ec34:
    uVar1 = *(ushort *)(param_2 + 0x52);
    uVar9 = (ulong)uVar1;
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x75;
      goto LAB_0109eb04;
    }
    goto LAB_0109eb1c;
  case 8:
    goto switchD_0109e908_caseD_8;
  case 9:
    goto switchD_0109e908_caseD_9;
  case 10:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x69;
LAB_0109ecb8:
      *(undefined2 *)(lVar8 + (ulong)uVar1 * 2) = uVar10;
      *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
      if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    }
    goto LAB_0109ecd0;
  case 0xb:
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
    uVar1 = *(ushort *)(param_2 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x49;
      goto LAB_0109ecb8;
    }
LAB_0109ecd0:
    uVar1 = *(ushort *)(param_2 + 0x52);
    uVar9 = (ulong)uVar1;
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
      *(ushort *)(param_2 + 0x52) = uVar1 + 1;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar10 = 0x6e;
      goto LAB_0109eb04;
    }
    goto LAB_0109eb1c;
  default:
    goto switchD_0109e908_default;
  }
  uVar1 = *(ushort *)(param_2 + 0x52);
  uVar9 = (ulong)uVar1;
  if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
    *(ushort *)(param_2 + 0x52) = uVar1 + 1;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar10 = 0x69;
LAB_0109eb04:
    *(undefined2 *)(lVar8 + uVar9 * 2) = uVar10;
    *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
    if (*(char *)(param_2 + 0x54) == '\0') goto switchD_0109e908_default;
  }
LAB_0109eb1c:
  uVar1 = *(ushort *)(param_2 + 0x52);
  if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
    *(ushort *)(param_2 + 0x52) = uVar1 + 1;
    *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 2) = 0x20;
    *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
  }
switchD_0109e908_default:
  if (*param_3 == 0x10) {
    param_3 = param_3 + (ulong)(ushort)param_3[1] + 2;
  }
  return param_3;
}


