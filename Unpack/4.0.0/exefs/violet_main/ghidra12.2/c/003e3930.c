/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e3930; name: FUN_003e3930
 */


int FUN_003e3930(long *param_1,long param_2,byte *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  uint local_64;
  
  lVar9 = *(long *)(param_3 + 0x20);
  bVar2 = *param_3;
  if ((bVar2 != 0) && (*param_1 == 0)) {
    return 0;
  }
  if (lVar9 == 0) {
    pcVar11 = (code *)0x0;
  }
  else {
    pcVar11 = *(code **)(lVar9 + 0x18);
  }
  if (6 < bVar2) {
    return 0;
  }
  iVar3 = 0;
  uVar5 = 0;
  uVar8 = 1;
  switch(bVar2) {
  case 0:
    lVar9 = *(long *)(param_3 + 0x10);
    if (lVar9 != 0) goto LAB_003e39d0;
    break;
  case 2:
    if (param_4 != -1) {
      uVar7 = 0x7a;
LAB_003e3a48:
      FUN_004806c0(0xd,0x90,0xe6,"external/openssl/crypto/asn1/tasn_enc.c",uVar7);
      return -1;
    }
    if ((pcVar11 != (code *)0x0) && (iVar3 = (*pcVar11)(6,param_1,param_3,0), iVar3 == 0)) {
      return 0;
    }
    uVar5 = FUN_003e5120(param_1,param_3);
    if (((int)uVar5 < 0) || (*(long *)(param_3 + 0x18) <= (long)(ulong)uVar5)) {
      if (pcVar11 == (code *)0x0) {
        return 0;
      }
      (*pcVar11)(7,param_1,param_3,0);
      return 0;
    }
    lVar9 = *(long *)(param_3 + 0x10) + (ulong)uVar5 * 0x28;
    param_1 = (long *)FUN_003e5460(param_1,lVar9);
    param_4 = -1;
LAB_003e39d0:
    iVar3 = FUN_003e3cf0(param_1,param_2,lVar9,param_4,param_5);
    return iVar3;
  case 3:
    goto switchD_003e39b8_caseD_3;
  case 4:
    iVar3 = (**(code **)(lVar9 + 0x28))(param_1,param_2,param_3,param_4,param_5);
    return iVar3;
  case 5:
    if (param_4 != -1) {
      uVar7 = 0x6f;
      goto LAB_003e3a48;
    }
    param_4 = -1;
    break;
  case 6:
    uVar5 = (param_5 & 0x800) >> 0xb;
    uVar8 = 1;
    if ((param_5 & 0x800) != 0) {
      uVar8 = 2;
    }
  case 1:
    iVar3 = FUN_003e53d0(&local_64,param_2,param_1,param_3);
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        return local_64;
      }
      local_64 = 0;
      uVar1 = param_5 & 0xffffff3f;
      if (param_4 != -1) {
        uVar1 = param_5;
      }
      iVar3 = 0x10;
      if (param_4 != -1) {
        iVar3 = param_4;
      }
      if ((pcVar11 == (code *)0x0) || (iVar4 = (*pcVar11)(6,param_1,param_3,0), iVar4 != 0)) {
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar10 = *(long *)(param_3 + 0x10);
          lVar9 = 0;
          do {
            lVar6 = FUN_003e5470(param_1,lVar10,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar7 = FUN_003e5460(param_1,lVar6);
            iVar4 = FUN_003e3cf0(uVar7,0,lVar6,0xffffffff,uVar1);
            if (iVar4 == -1) {
              return -1;
            }
            if ((int)(0x7fffffff - local_64) < iVar4) {
              return -1;
            }
            local_64 = local_64 + iVar4;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x28;
          } while (lVar9 < *(long *)(param_3 + 0x18));
        }
        iVar4 = FUN_003def90(uVar8,local_64,iVar3);
        if (param_2 == 0) {
          return iVar4;
        }
        if (iVar4 == -1) {
          return -1;
        }
        FUN_003dede0(param_2,uVar8,local_64,iVar3,uVar1);
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar10 = *(long *)(param_3 + 0x10);
          lVar9 = 0;
          do {
            lVar6 = FUN_003e5470(param_1,lVar10,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar7 = FUN_003e5460(param_1,lVar6);
            FUN_003e3cf0(uVar7,param_2,lVar6,0xffffffff,uVar1);
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x28;
          } while (lVar9 < *(long *)(param_3 + 0x18));
        }
        if (uVar5 != 0) {
          FUN_003def70(param_2);
        }
        if (pcVar11 == (code *)0x0) {
          return iVar4;
        }
        iVar3 = (*pcVar11)(7,param_1,param_3,0);
        if (iVar3 != 0) {
          return iVar4;
        }
      }
    }
    return 0;
  }
  iVar3 = FUN_003e41e0(param_1,param_2,param_3,param_4,param_5);
switchD_003e39b8_caseD_3:
  return iVar3;
}


