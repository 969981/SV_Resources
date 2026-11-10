/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fd370; name: FUN_003fd370
 */


undefined8
FUN_003fd370(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  bool bVar12;
  long lVar13;
  int local_64;
  
  iVar2 = FUN_003ec640(param_4);
  if (iVar2 == 0) {
    uVar3 = FUN_003fde80(param_1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
  if ((((*(int *)(param_2 + 1) != 1) || (*(int *)(param_2 + 2) != 0)) ||
      (iVar2 = FUN_003eb510(param_3,4), iVar2 != 0)) ||
     ((iVar2 = FUN_003eb510(param_2,4), iVar2 != 0 || (iVar2 = FUN_003eb510(param_4,4), iVar2 != 0))
     )) {
    uVar3 = FUN_003fd860(param_1,param_2,param_3,param_4,param_5,0);
    return uVar3;
  }
  uVar11 = *(uint *)*param_2;
  iVar2 = FUN_003eb510(param_3,4);
  if ((iVar2 != 0) || (iVar2 = FUN_003eb510(param_4,4), iVar2 != 0)) {
    uVar3 = 0x42;
    uVar8 = 0x486;
LAB_003fd4c8:
    FUN_004806c0(3,0x75,uVar3,"external/openssl/crypto/bn/bn_exp.c",uVar8);
    return 0;
  }
  iVar2 = FUN_003ec640(param_4);
  if (iVar2 == 0) {
    uVar3 = 0x66;
    uVar8 = 0x48e;
    goto LAB_003fd4c8;
  }
  if (*(int *)(param_4 + 1) == 1) {
    uVar9 = *(uint *)*param_4;
    uVar1 = 0;
    if (uVar9 != 0) {
      uVar1 = uVar11 / uVar9;
    }
    uVar11 = uVar11 - uVar1 * uVar9;
  }
  local_64 = FUN_003eb2b0(param_3);
  if (local_64 == 0) {
    iVar2 = FUN_003ec570(param_4,1);
    if (iVar2 == 0) {
      uVar3 = FUN_003eb9f0(param_1,1);
      return uVar3;
    }
LAB_003fd5a8:
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  if (uVar11 == 0) goto LAB_003fd5a8;
  FUN_003ed410(param_5);
  lVar4 = FUN_003ed5c0(param_5);
  lVar5 = FUN_003ed5c0(param_5);
  if (lVar5 == 0) {
    lVar6 = 0;
    uVar3 = 0;
    goto LAB_003fd840;
  }
  lVar6 = FUN_003ecc70();
  if (lVar6 == 0) {
    uVar3 = 0;
    lVar6 = 0;
    goto LAB_003fd840;
  }
  iVar2 = FUN_003ecd40(lVar6,param_4,param_5);
  if (iVar2 == 0) {
    uVar3 = 0;
    goto LAB_003fd840;
  }
  if (local_64 < 2) {
    iVar2 = 1;
    uVar9 = uVar11;
  }
  else {
    local_64 = local_64 + -1;
    uVar3 = 1;
    uVar7 = (ulong)uVar11;
    do {
      uVar10 = uVar7 * uVar7;
      lVar13 = lVar5;
      if (uVar10 >> 0x20 == 0) {
        if ((int)uVar3 == 0) goto LAB_003fd660;
        bVar12 = false;
      }
      else {
        if ((int)uVar3 == 0) {
          iVar2 = FUN_003f3030(lVar4);
          if ((iVar2 == 0) || (iVar2 = FUN_003ed910(0,lVar5,lVar4,param_4,param_5), iVar2 == 0))
          goto LAB_003fd77c;
          uVar10 = 1;
          lVar13 = lVar4;
          lVar4 = lVar5;
        }
        else {
          iVar2 = FUN_003eb9f0();
          if ((iVar2 == 0) || (iVar2 = FUN_003ec680(lVar4,lVar4,lVar6,param_5), iVar2 == 0))
          goto LAB_003fd77c;
          uVar10 = 1;
        }
LAB_003fd660:
        iVar2 = FUN_003ec770(lVar4,lVar4,lVar4,lVar6,param_5);
        uVar3 = 0;
        if (iVar2 == 0) goto LAB_003fd840;
        bVar12 = true;
        lVar5 = lVar13;
      }
      local_64 = local_64 + -1;
      iVar2 = FUN_003ec150(param_3);
      if (iVar2 != 0) {
        uVar7 = (ulong)uVar11 * (uVar10 & 0xffffffff);
        if (uVar7 >> 0x20 == 0) {
          uVar10 = uVar7 & 0xffffffff;
        }
        else {
          if (bVar12) {
            iVar2 = FUN_003f3030();
            if (iVar2 == 0) goto LAB_003fd834;
            iVar2 = FUN_003ed910(0,lVar5,lVar4,param_4,param_5);
            lVar13 = lVar4;
            lVar4 = lVar5;
          }
          else {
            iVar2 = FUN_003eb9f0(lVar4,uVar10 & 0xffffffff);
            if (iVar2 == 0) goto LAB_003fd834;
            iVar2 = FUN_003ec680(lVar4,lVar4,lVar6,param_5);
            lVar13 = lVar5;
          }
          lVar5 = lVar13;
          uVar10 = (ulong)uVar11;
          uVar3 = 0;
          if (iVar2 == 0) {
            uVar3 = 0;
            goto LAB_003fd840;
          }
        }
      }
      iVar2 = (int)uVar3;
      uVar7 = uVar10 & 0xffffffff;
      uVar9 = (uint)uVar10;
    } while (0 < local_64);
  }
  if (uVar9 == 1) {
    if (iVar2 == 0) {
LAB_003fd810:
      iVar2 = FUN_003ecb60(param_1,lVar4,lVar6,param_5);
    }
    else {
      iVar2 = FUN_003eb9f0(param_1,1);
    }
    if (iVar2 == 0) {
LAB_003fd77c:
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = FUN_003f3030(lVar4,uVar9);
      if (iVar2 != 0) {
        iVar2 = FUN_003ed910(0,lVar5,lVar4,param_4,param_5);
        lVar4 = lVar5;
        goto joined_r0x003fd80c;
      }
    }
    else {
      iVar2 = FUN_003eb9f0();
      if (iVar2 != 0) {
        iVar2 = FUN_003ec680(lVar4,lVar4,lVar6,param_5);
joined_r0x003fd80c:
        if (iVar2 != 0) goto LAB_003fd810;
      }
    }
LAB_003fd834:
    uVar3 = 0;
  }
LAB_003fd840:
  FUN_003eccf0(lVar6);
  FUN_003ed530(param_5);
  return uVar3;
}


