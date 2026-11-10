/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00140890; name: FUN_00140890
 */


ulong FUN_00140890(long param_1,double *param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_3 + 1);
  if ((bVar1 & 0x3f) != (bVar2 & 0x3f)) {
    if ((bVar1 & 0xf) != 3 || (bVar2 & 0xf) != 3) {
      return 0;
    }
    if (bVar1 == 3) {
      dVar6 = *param_2;
    }
    else {
      if (bVar1 != 0x13) {
        return 0;
      }
      dVar6 = (double)(long)*param_2;
      if (dVar6 != *param_2) {
        return 0;
      }
      if (dVar6 < -9.223372036854776e+18) {
        return 0;
      }
      if (9.223372036854776e+18 <= dVar6) {
        return 0;
      }
      dVar6 = (double)(long)dVar6;
    }
    if (bVar2 == 3) {
      dVar7 = *param_3;
    }
    else {
      if (bVar2 != 0x13) {
        return 0;
      }
      dVar7 = (double)(long)*param_3;
      if (dVar7 != *param_3) {
        return 0;
      }
      if (dVar7 < -9.223372036854776e+18) {
        return 0;
      }
      if (9.223372036854776e+18 <= dVar7) {
        return 0;
      }
      dVar7 = (double)(long)dVar7;
    }
    bVar3 = dVar6 == dVar7;
LAB_00140ad4:
    return (ulong)bVar3;
  }
  uVar4 = 1;
  switch(bVar1 & 0x3f) {
  case 0:
  case 1:
  case 0x11:
    goto switchD_001408e4_caseD_0;
  default:
    return (ulong)(*param_2 == *param_3);
  case 5:
    dVar6 = *param_3;
    if (*param_2 == dVar6) {
      return 1;
    }
    if (param_1 == 0) {
      return 0;
    }
    lVar5 = *(long *)((long)*param_2 + 0x28);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 10) >> 5 & 1) == 0)) {
      lVar5 = FUN_0013dec0(lVar5,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x140));
      if (lVar5 != 0) goto LAB_00140a50;
      dVar6 = *param_3;
    }
    lVar5 = *(long *)((long)dVar6 + 0x28);
    if (lVar5 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(lVar5 + 10);
    break;
  case 7:
    dVar6 = *param_3;
    if (*param_2 == dVar6) {
      return 1;
    }
    if (param_1 == 0) {
      return 0;
    }
    lVar5 = *(long *)((long)*param_2 + 0x18);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 10) >> 5 & 1) == 0)) {
      lVar5 = FUN_0013dec0(lVar5,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x140));
      if (lVar5 != 0) goto LAB_00140a50;
      dVar6 = *param_3;
    }
    lVar5 = *(long *)((long)dVar6 + 0x18);
    if (lVar5 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(lVar5 + 10);
    break;
  case 0x13:
    bVar3 = *param_2 == *param_3;
    goto LAB_00140ad4;
  case 0x14:
    uVar4 = FUN_0013b870(*param_2,*param_3);
    return uVar4;
  }
  if ((bVar1 >> 5 & 1) != 0) {
    return 0;
  }
  lVar5 = FUN_0013dec0(lVar5,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x140));
  uVar4 = 0;
  if (lVar5 != 0) {
LAB_00140a50:
    FUN_0013e0d0(param_1,lVar5,param_2,param_3,*(undefined8 *)(param_1 + 0x10));
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 8);
    return (ulong)(bVar1 != 1 && (bVar1 & 0xf) != 0);
  }
switchD_001408e4_caseD_0:
  return uVar4;
}


