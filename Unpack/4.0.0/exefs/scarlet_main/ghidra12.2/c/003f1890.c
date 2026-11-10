/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f1890; name: FUN_003f1890
 */


void FUN_003f1890(long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
                 long param_7)

{
  long lVar1;
  void *__s;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  uint uVar16;
  
  uVar15 = (ulong)param_4;
  if ((int)param_4 < 8) {
    FUN_003f1740(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    return;
  }
  iVar6 = param_4 - param_5;
  lVar11 = param_2 + uVar15 * 4;
  uVar3 = uVar15 << 1;
  uVar13 = -(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | uVar3;
  iVar4 = FUN_003ec2b0(param_2,lVar11,param_5,iVar6);
  lVar1 = param_3 + uVar15 * 4;
  iVar7 = param_6 - param_4;
  iVar5 = FUN_003ec2b0(lVar1,param_3,param_6,iVar7);
  iVar12 = (int)uVar3;
  switch(iVar4 * 3 + iVar5) {
  case 3:
  case 4:
    FUN_003f1060(param_7,param_2,lVar11,param_5,iVar6);
    lVar8 = lVar1;
    lVar9 = param_3;
    break;
  case -4:
    FUN_003f1060(param_7,lVar11,param_2,param_5,param_5 - param_4);
    iVar7 = param_4 - param_6;
    lVar8 = param_3;
    lVar9 = lVar1;
    break;
  case -3:
  case -2:
    FUN_003f1060(param_7,lVar11,param_2,param_5,param_5 - param_4);
    lVar8 = lVar1;
    lVar9 = param_3;
    goto LAB_003f19dc;
  case -1:
  case 0:
  case 1:
  case 2:
    FUN_003f1060(param_7,param_2,lVar11,param_5,iVar6);
    iVar7 = param_4 - param_6;
    lVar8 = param_3;
    lVar9 = lVar1;
LAB_003f19dc:
    FUN_003f1060(param_7 + uVar15 * 4,lVar8,lVar9,param_6,iVar7);
    bVar14 = false;
    goto joined_r0x003f19ec;
  default:
    goto switchD_003f1974_default;
  }
  FUN_003f1060(param_7 + uVar15 * 4,lVar8,lVar9,param_6,iVar7);
switchD_003f1974_default:
  bVar14 = true;
joined_r0x003f19ec:
  if (param_4 == 8) {
    FUN_003ee790(param_7 + 0x40,param_7,param_7 + 0x20);
    FUN_003ee790(param_1,param_2,param_3);
    FUN_003f1740(param_1 + 0x40,lVar11,param_5,lVar1,param_6);
    uVar16 = (0x10 - param_5) - param_6;
    memset((void *)(param_1 + (long)(int)(param_5 + 0x10 + param_6) * 4),0,
           -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2);
    uVar13 = 0x10;
  }
  else {
    lVar8 = param_7 + (long)(int)param_4 * 0x10;
    FUN_003f12b0(param_7 + uVar13 * 4,param_7,param_7 + uVar15 * 4,uVar15,0,0,lVar8);
    FUN_003f12b0(param_1,param_2,param_3,uVar15,0,0,lVar8);
    uVar16 = param_4 >> 1;
    uVar2 = param_5;
    if ((int)param_5 <= (int)param_6) {
      uVar2 = param_6;
    }
    if (uVar2 == uVar16) {
      FUN_003f12b0(param_1 + uVar13 * 4,lVar11,lVar1,uVar16,param_5 - uVar16,param_6 - uVar16,lVar8)
      ;
      iVar6 = iVar12 + (param_4 & 0xfffffffe);
      param_6 = iVar12 - (param_4 & 0xfffffffe);
    }
    else {
      __s = (void *)(param_1 + uVar13 * 4);
      if ((int)(uVar2 - uVar16) < 1) {
        memset(__s,0,uVar13 << 2);
        if (((int)param_5 < 0x10) && ((int)param_6 < 0x10)) {
          FUN_003f1740(__s,lVar11,param_5,lVar1,param_6);
        }
        else {
          do {
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 1;
            }
            uVar16 = (int)uVar16 >> 1;
            if ((int)uVar16 < (int)param_5 || (int)uVar16 < (int)param_6) {
              FUN_003f1890(__s,lVar11,lVar1,uVar16,param_5 - uVar16,param_6 - uVar16,lVar8);
              goto LAB_003f1ba8;
            }
          } while ((uVar16 != param_5) && (uVar16 != param_6));
          FUN_003f12b0(__s,lVar11,lVar1,uVar16,param_5 - uVar16,param_6 - uVar16,lVar8);
        }
        goto LAB_003f1ba8;
      }
      FUN_003f1890(__s,lVar11,lVar1,uVar16,param_5 - uVar16,param_6 - uVar16,lVar8);
      iVar6 = iVar12 + param_5 + param_6;
      param_6 = (iVar12 - param_5) - param_6;
    }
    memset((void *)(param_1 + (long)iVar6 * 4),0,
           -(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2);
  }
LAB_003f1ba8:
  iVar6 = FUN_003ee580(param_7,param_1,param_1 + uVar13 * 4,uVar3 & 0xffffffff);
  lVar11 = param_7 + uVar13 * 4;
  if (bVar14) {
    iVar7 = FUN_003ee580(lVar11,lVar11,param_7,uVar3 & 0xffffffff);
  }
  else {
    iVar7 = FUN_003ee6a0(lVar11,param_7,lVar11,uVar3 & 0xffffffff);
    iVar7 = -iVar7;
  }
  lVar1 = param_1 + uVar15 * 4;
  iVar4 = FUN_003ee580(lVar1,lVar1,lVar11,uVar3 & 0xffffffff);
  uVar16 = iVar4 + iVar7 + iVar6;
  if ((uVar16 != 0) &&
     (lVar11 = (long)(int)param_4 * 0xc, uVar2 = *(uint *)(param_1 + lVar11),
     *(uint *)(param_1 + lVar11) = uVar2 + uVar16, CARRY4(uVar2,uVar16))) {
    puVar10 = (uint *)(param_1 + (long)(int)param_4 * 0xc);
    do {
      puVar10 = puVar10 + 1;
      uVar16 = *puVar10;
      *puVar10 = uVar16 + 1;
    } while (0xfffffffe < uVar16);
  }
  return;
}


