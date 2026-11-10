/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003acb80; name: FUN_003acb80
 */


uint FUN_003acb80(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_28;
  
  local_28 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_003c3950(param_1,0x50,0x24e,0x44,"external/openssl/ssl/s3_lib.c",0x12bc);
    return 0;
  }
  uVar2 = FUN_004400b0(param_2,0);
  iVar1 = FUN_0043f8a0();
  if (((iVar1 < 1) || (iVar1 = FUN_0043f930(uVar2,param_3), iVar1 < 1)) ||
     (iVar1 = FUN_0043fae0(uVar2,0,&local_28), iVar1 < 1)) {
    FUN_003c3950(param_1,0x50,0x24e,0x44,"external/openssl/ssl/s3_lib.c",0x12c6);
    uVar7 = 0;
LAB_003acce0:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00452c30(local_28,"external/openssl/ssl/s3_lib.c",0x12ca);
    if (lVar3 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x12cd;
    }
    else {
      iVar1 = FUN_0043fae0(uVar2,lVar3,&local_28);
      if (0 < iVar1) {
        if (param_4 != 0) {
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
              (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
            if (*(int *)(param_1 + 200) == 0) {
              uVar4 = FUN_003b0120(param_1);
              iVar1 = FUN_003db320(param_1,uVar4,0,0,0,param_1 + 0x13c);
              if (iVar1 == 0) {
                uVar7 = 0;
                goto LAB_003acce4;
              }
            }
            iVar1 = FUN_003db5c0(param_1,lVar3,local_28);
            uVar7 = (uint)(iVar1 != 0);
          }
          else {
            uVar7 = FUN_003ac690(param_1,lVar3,local_28,0);
          }
          goto LAB_003acce4;
        }
        lVar6 = *(long *)(param_1 + 0xa8);
        *(long *)(lVar6 + 0x2b8) = lVar3;
        uVar7 = 1;
        *(undefined8 *)(lVar6 + 0x2c0) = local_28;
        goto LAB_003acce0;
      }
      uVar4 = 0x44;
      uVar5 = 0x12d3;
    }
    FUN_003c3950(param_1,0x50,0x24e,uVar4,"external/openssl/ssl/s3_lib.c",uVar5);
    uVar7 = 0;
  }
LAB_003acce4:
  FUN_00453260(lVar3,local_28,"external/openssl/ssl/s3_lib.c",0x12f2);
  FUN_00440340(uVar2);
  return uVar7;
}


