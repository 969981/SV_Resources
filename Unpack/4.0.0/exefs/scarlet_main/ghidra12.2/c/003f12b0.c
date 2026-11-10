/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f12b0; name: FUN_003f12b0
 */


void FUN_003f12b0(long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
                 long param_7)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar3 = param_4;
  if ((int)param_4 < 0) {
    uVar3 = param_4 + 1;
  }
  if ((param_4 == 8) && (param_6 == 0 && param_5 == 0)) {
    FUN_003ee790(param_1,param_2,param_3);
    return;
  }
  if ((int)param_4 < 0x10) {
    FUN_003f1740(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    param_6 = param_6 + param_5;
    if (param_6 < 0) {
      memset((void *)(param_1 + (long)(int)(param_6 + param_4 * 2) * 4),0,
             -(ulong)((uint)-param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)-param_6 << 2);
      return;
    }
    return;
  }
  uVar3 = (int)uVar3 >> 1;
  uVar16 = (ulong)uVar3;
  uVar18 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
  iVar11 = -param_5;
  iVar9 = uVar3 + param_5;
  lVar14 = (long)(int)uVar3;
  lVar17 = param_2 + uVar18;
  iVar10 = uVar3 + param_6;
  iVar7 = FUN_003ec2b0(param_2,lVar17,iVar9,iVar11);
  lVar2 = param_3 + uVar18;
  iVar8 = FUN_003ec2b0(lVar2,param_3,iVar10,param_6);
  switch(iVar7 * 3 + iVar8) {
  case 2:
    FUN_003f1060(param_7,param_2,lVar17,iVar9,iVar11);
    lVar12 = param_3;
    lVar13 = lVar2;
    iVar9 = -param_6;
LAB_003f14e8:
    FUN_003f1060(param_7 + lVar14 * 4,lVar12,lVar13,iVar10,iVar9);
    bVar6 = false;
    goto LAB_003f1534;
  case 4:
    FUN_003f1060(param_7,param_2,lVar17,iVar9,iVar11);
    lVar12 = lVar2;
    lVar13 = param_3;
    iVar9 = param_6;
    break;
  case -4:
    FUN_003f1060(param_7,lVar17,param_2,iVar9,param_5);
    iVar9 = -param_6;
    lVar12 = param_3;
    lVar13 = lVar2;
    break;
  case -3:
  case -1:
  case 0:
  case 1:
  case 3:
    bVar5 = false;
    goto LAB_003f1410;
  case -2:
    FUN_003f1060(param_7,lVar17,param_2,iVar9,param_5);
    lVar12 = lVar2;
    lVar13 = param_3;
    iVar9 = param_6;
    goto LAB_003f14e8;
  default:
    bVar5 = true;
LAB_003f1410:
    bVar6 = true;
    goto joined_r0x003f1424;
  }
  FUN_003f1060(param_7 + lVar14 * 4,lVar12,lVar13,iVar10,iVar9);
  bVar6 = true;
LAB_003f1534:
  bVar5 = true;
joined_r0x003f1424:
  if (((param_4 & 0xfffffffe) == 8) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (ulong)param_4 * 4);
    if (bVar5) {
      FUN_003eede0(puVar1,param_7,param_7 + lVar14 * 4);
    }
    else {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    FUN_003eede0(param_1,param_2,param_3);
    FUN_003eede0(param_1 + (ulong)param_4 * 4,lVar17,lVar2);
  }
  else if (((param_4 & 0xfffffffe) == 0x10) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (ulong)param_4 * 4);
    if (bVar5) {
      FUN_003ee790(puVar1,param_7,param_7 + lVar14 * 4);
    }
    else {
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    FUN_003ee790(param_1,param_2,param_3);
    FUN_003ee790(param_1 + (ulong)param_4 * 4,lVar17,lVar2);
  }
  else {
    lVar12 = param_7 + (long)(int)param_4 * 8;
    __s = (void *)(param_7 + (ulong)param_4 * 4);
    if (bVar5) {
      FUN_003f12b0(__s,param_7,param_7 + lVar14 * 4,uVar16,0,0,lVar12);
    }
    else {
      memset(__s,0,(ulong)param_4 << 2);
    }
    FUN_003f12b0(param_1,param_2,param_3,uVar16,0,0,lVar12);
    FUN_003f12b0(param_1 + (ulong)param_4 * 4,lVar17,lVar2,uVar16,param_5,param_6,lVar12);
  }
  iVar9 = FUN_003ee580(param_7,param_1,param_1 + (ulong)param_4 * 4,param_4);
  lVar17 = param_7 + (ulong)param_4 * 4;
  if (bVar6) {
    iVar10 = FUN_003ee580(lVar17,lVar17,param_7,param_4);
  }
  else {
    iVar10 = FUN_003ee6a0(lVar17,param_7,lVar17,param_4);
    iVar10 = -iVar10;
  }
  lVar2 = param_1 + lVar14 * 4;
  iVar11 = FUN_003ee580(lVar2,lVar2,lVar17,param_4);
  uVar3 = iVar11 + iVar10 + iVar9;
  if (uVar3 != 0) {
    lVar17 = (lVar14 + (int)param_4) * 4;
    uVar4 = *(uint *)(param_1 + lVar17);
    *(uint *)(param_1 + lVar17) = uVar4 + uVar3;
    if (CARRY4(uVar4,uVar3)) {
      puVar15 = (uint *)(param_1 + (lVar14 + (int)param_4) * 4);
      do {
        puVar15 = puVar15 + 1;
        uVar3 = *puVar15;
        *puVar15 = uVar3 + 1;
      } while (0xfffffffe < uVar3);
    }
  }
  return;
}


