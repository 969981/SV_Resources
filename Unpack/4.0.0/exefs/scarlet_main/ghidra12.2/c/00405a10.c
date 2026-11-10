/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00405a10; name: FUN_00405a10
 */


int FUN_00405a10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0 && (*(long *)(param_1 + 0x20) == 0)))) {
    FUN_004806c0(0x10,0xc0,0x43,"external/openssl/crypto/ec/ec_asn1.c",0x43e);
    iVar1 = 0;
    uVar3 = 0;
    puVar2 = (undefined4 *)0x0;
    goto LAB_00405b5c;
  }
  puVar2 = (undefined4 *)FUN_003e49a0(&DAT_044a3da0);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004806c0(0x10,0xc0,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x443);
    iVar1 = 0;
    uVar3 = 0;
    goto LAB_00405b5c;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0040c570(param_1,&local_28);
  if (uVar3 == 0) {
    uVar7 = 0x44c;
LAB_00405c20:
    uVar6 = 0x10;
LAB_00405c2c:
    FUN_004806c0(0x10,0xc0,uVar6,"external/openssl/crypto/ec/ec_asn1.c",uVar7);
    iVar1 = 0;
  }
  else {
    FUN_003df340(*(undefined8 *)(puVar2 + 2),local_28,uVar3 & 0xffffffff);
    local_28 = 0;
    uVar8 = *(uint *)(param_1 + 0x30);
    if ((uVar8 & 1) == 0) {
      lVar4 = FUN_00404bf0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar2 + 4));
      *(long *)(puVar2 + 4) = lVar4;
      if (lVar4 == 0) {
        uVar7 = 0x457;
        goto LAB_00405c20;
      }
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar8 >> 1 & 1) == 0) {
      lVar4 = FUN_003e5060();
      *(long *)(puVar2 + 6) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x41;
        uVar7 = 0x45f;
        goto LAB_00405c2c;
      }
      lVar4 = FUN_0040c320(param_1,*(undefined4 *)(param_1 + 0x34),&local_38,0);
      if (lVar4 == 0) {
        uVar7 = 0x466;
        goto LAB_00405c20;
      }
      lVar5 = *(long *)(puVar2 + 6);
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffff0 | 8;
      FUN_003df340(lVar5,local_38,lVar4);
      local_38 = 0;
    }
    iVar1 = FUN_003e3920(puVar2,param_2,&DAT_044a3da0);
    if (iVar1 == 0) {
      FUN_004806c0(0x10,0xc0,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x471);
    }
  }
LAB_00405b5c:
  FUN_00453260(local_28,uVar3,"external/openssl/crypto/ec/ec_asn1.c",0x476);
  FUN_00452f80(local_38,"external/openssl/crypto/ec/ec_asn1.c",0x477);
  FUN_003e4550(puVar2,&DAT_044a3da0);
  return iVar1;
}


