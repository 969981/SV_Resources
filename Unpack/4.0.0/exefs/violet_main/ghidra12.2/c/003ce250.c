/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ce250; name: FUN_003ce250
 */


undefined8 FUN_003ce250(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = *param_1;
  *param_1 = param_2;
  uVar5 = FUN_003ba8c0(param_1,0x11,0x300,param_3,0,0);
  if ((int)uVar5 == 0) {
    *param_1 = iVar2;
    return uVar5;
  }
  if ((param_1[0x168] != 0) && (*param_1 != 0x304)) {
    *param_1 = iVar2;
    uVar5 = 0x46;
    iVar4 = 0x10a;
    uVar6 = 0x7a2;
    goto LAB_003ce510;
  }
  iVar4 = **(int **)(param_1 + 2);
  if (iVar4 == 0x10000) {
    piVar8 = &DAT_044a1498;
  }
  else {
    if (iVar4 != 0x1ffff) {
      if (*param_1 == iVar4) {
        return 1;
      }
      *param_1 = iVar2;
      uVar5 = 0x46;
      iVar4 = 0x10a;
      uVar6 = 0x7ac;
      goto LAB_003ce510;
    }
    piVar8 = &DAT_044a1528;
  }
  iVar4 = FUN_003cb8a0(param_1,&local_24,&local_28,&local_2c);
  if (iVar4 != 0) {
    *param_1 = iVar2;
    uVar5 = 0x46;
    uVar6 = 0x7c3;
    goto LAB_003ce510;
  }
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60);
  iVar4 = *param_1;
  if ((uVar3 >> 3 & 1) == 0) {
    if (iVar4 < local_24) goto LAB_003ce3dc;
    if (local_28 < iVar4) goto LAB_003ce414;
  }
  else {
    iVar7 = 0xff00;
    if (iVar4 != 0x100) {
      iVar7 = iVar4;
    }
    iVar1 = 0xff00;
    if (local_24 != 0x100) {
      iVar1 = local_24;
    }
    if (iVar1 < iVar7) {
LAB_003ce3dc:
      *param_1 = iVar2;
      uVar5 = 0x46;
      iVar4 = 0x102;
      uVar6 = 0x7ca;
      goto LAB_003ce510;
    }
    iVar1 = 0xff00;
    if (local_28 != 0x100) {
      iVar1 = local_28;
    }
    if (iVar7 < iVar1) {
LAB_003ce414:
      *param_1 = iVar2;
      uVar5 = 0x46;
      iVar4 = 0x102;
      uVar6 = 2000;
      goto LAB_003ce510;
    }
  }
  if (-1 < (char)param_1[0x1a6]) {
    local_2c = local_28;
  }
  if ((iVar4 == 0x303) && (0x303 < local_2c)) {
    if (*(long *)PTR_DAT_047cd1b0 == *(long *)(*(long *)(param_1 + 0x2a) + 0xb0)) {
      *param_1 = iVar2;
      uVar5 = 0x2f;
      iVar4 = 0x175;
      uVar6 = 0x7e0;
      goto LAB_003ce510;
    }
  }
  else if (((((uVar3 >> 3 & 1) == 0) && (iVar4 < 0x303)) && (iVar4 < local_2c)) &&
          (*(long *)PTR_s_DOWNGRD_047cd1b8 == *(long *)(*(long *)(param_1 + 0x2a) + 0xb0))) {
    *param_1 = iVar2;
    uVar5 = 0x2f;
    iVar4 = 0x175;
    uVar6 = 0x7ed;
    goto LAB_003ce510;
  }
  iVar7 = *piVar8;
  if (iVar7 != 0) {
    do {
      if ((iVar4 == iVar7) && (*(code **)(piVar8 + 2) != (code *)0x0)) {
        uVar5 = (**(code **)(piVar8 + 2))();
        *(undefined8 *)(param_1 + 2) = uVar5;
        return 1;
      }
      iVar7 = piVar8[6];
      piVar8 = piVar8 + 6;
    } while (iVar7 != 0);
  }
  *param_1 = iVar2;
  uVar5 = 0x46;
  iVar4 = 0x102;
  uVar6 = 0x7fc;
LAB_003ce510:
  FUN_003c3950(param_1,uVar5,0x25f,iVar4,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  return 0;
}


