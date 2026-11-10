/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00468a10; name: FUN_00468a10
 */


undefined4 FUN_00468a10(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_38 = param_2;
  iVar1 = FUN_0045bea0(*param_3);
  if (iVar1 != 0x390) {
    FUN_004806c0(4,0x9b,0x9b,"external/openssl/crypto/rsa/rsa_ameth.c",0x2a4);
    return 0xffffffff;
  }
  lVar3 = FUN_003de4b0(PTR_DAT_047cd4a8,param_3[1]);
  if ((lVar3 != 0) && (puVar8 = *(undefined8 **)(lVar3 + 8), puVar8 != (undefined8 *)0x0)) {
    iVar1 = FUN_0045bea0(*puVar8);
    if (iVar1 == 0x38f) {
      lVar4 = FUN_003de4b0(PTR_DAT_047cd248,puVar8[1]);
      *(long *)(lVar3 + 0x20) = lVar4;
      if (lVar4 != 0) goto LAB_00468ac8;
    }
    else {
      *(undefined8 *)(lVar3 + 0x20) = 0;
    }
    FUN_00468da0(lVar3);
    lVar3 = 0;
  }
LAB_00468ac8:
  iVar1 = FUN_00466f00(lVar3,&local_50,&local_48,&local_3c);
  if (iVar1 == 0) {
    uVar5 = 0x95;
    uVar6 = 0x2ab;
LAB_00468b18:
    FUN_004806c0(4,0x9b,uVar5,"external/openssl/crypto/rsa/rsa_ameth.c",uVar6);
LAB_00468b20:
    uVar7 = 0xffffffff;
  }
  else {
    if (param_4 == 0) {
      iVar1 = FUN_00440390(param_2,0xffffffff,0xf8,0xd,0,&local_58);
      if (iVar1 < 1) goto LAB_00468b20;
      iVar1 = FUN_0043b710(local_50);
      iVar2 = FUN_0043b710(local_58);
      if (iVar1 != iVar2) {
        uVar5 = 0x9e;
        uVar6 = 0x2b8;
        goto LAB_00468b18;
      }
    }
    else {
      iVar1 = FUN_0043cae0(param_1,&local_38,local_50,0,param_4);
      if (iVar1 == 0) goto LAB_00468b20;
    }
    uVar7 = 0xffffffff;
    iVar1 = FUN_0046a3b0(local_38,0xffffffff,0x1001,6,0);
    if (0 < iVar1) {
      iVar1 = FUN_0046a3b0(local_38,0x18,0x1002,local_3c,0);
      uVar7 = 0xffffffff;
      if (0 < iVar1) {
        iVar1 = FUN_0046a3b0(local_38,0x3f8,0x1005,0,local_48);
        uVar7 = 1;
        if (iVar1 < 1) {
          uVar7 = 0xffffffff;
        }
      }
    }
  }
  FUN_00468da0(lVar3);
  return uVar7;
}


