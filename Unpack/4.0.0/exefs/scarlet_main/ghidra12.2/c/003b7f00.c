/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b7f00; name: FUN_003b7f00
 */


int FUN_003b7f00(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_004808e0();
  puVar1 = (undefined8 *)(param_2 + 0x1908);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xb8);
  }
  uVar9 = *puVar1;
  puVar1 = (undefined8 *)(param_2 + 0x1900);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xb0);
  }
  uVar10 = *puVar1;
  FUN_003ea5c0();
  lVar4 = FUN_003e8a30();
  if (lVar4 == 0) {
    uVar10 = 0x24f;
    uVar9 = 7;
LAB_003b7ff8:
    FUN_004806c0(0x14,0xdc,uVar9,"external/openssl/ssl/ssl_rsa.c",uVar10);
    lVar5 = 0;
  }
  else {
    iVar2 = FUN_003e9560(lVar4,0x6c,3,param_3);
    if (iVar2 < 1) {
      uVar10 = 0x254;
      uVar9 = 2;
      goto LAB_003b7ff8;
    }
    lVar5 = FUN_0045f8d0(lVar4,0,uVar10,uVar9);
    if (lVar5 == 0) {
      FUN_004806c0(0x14,0xdc,9,"external/openssl/ssl/ssl_rsa.c",0x25b);
      goto LAB_003b8000;
    }
    if (param_1 == 0) {
      iVar2 = FUN_003d9b20(param_2,0,lVar5,0,1);
      if (iVar2 != 1) {
        uVar9 = 0xc6;
        uVar10 = 0x24;
        goto LAB_003b80c8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x550);
    }
    else {
      iVar2 = FUN_003d9b20(0,param_1,lVar5,0,1);
      if (iVar2 != 1) {
        uVar9 = 0xab;
        uVar10 = 0x12d;
LAB_003b80c8:
        FUN_004806c0(0x14,uVar9,iVar2,"external/openssl/ssl/ssl_rsa.c",uVar10);
        FUN_00480c60();
        iVar2 = 0;
        goto LAB_003b8004;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x140);
    }
    iVar2 = FUN_003b78e0(uVar6,lVar5);
    lVar7 = FUN_00480c60();
    if (lVar7 != 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) goto LAB_003b8004;
    if (param_1 == 0) {
      iVar3 = FUN_003b2f50(param_2,0x58,0,0);
      if (iVar3 != 0) {
        do {
          lVar7 = FUN_0045f850(lVar4,0,uVar10,uVar9);
          if (lVar7 == 0) goto LAB_003b8190;
          iVar3 = FUN_003b2f50(param_2,0x59,0,lVar7);
        } while (iVar3 != 0);
        goto LAB_003b8184;
      }
    }
    else {
      iVar3 = FUN_003b3f20(param_1,0x58,0,0);
      if (iVar3 != 0) {
        do {
          lVar7 = FUN_0045f850(lVar4,0,uVar10,uVar9);
          if (lVar7 == 0) goto LAB_003b8190;
          iVar3 = FUN_003b3f20(param_1,0x59,0,lVar7);
        } while (iVar3 != 0);
LAB_003b8184:
        FUN_0048c830(lVar7);
      }
    }
  }
LAB_003b8000:
  iVar2 = 0;
LAB_003b8004:
  FUN_0048c830(lVar5);
  FUN_003e8b90(lVar4);
  return iVar2;
LAB_003b8190:
  uVar8 = FUN_00480c80();
  if ((uVar8 & 0xff000fff) == 0x900006c) {
    FUN_004808e0();
    goto LAB_003b8004;
  }
  goto LAB_003b8000;
}


