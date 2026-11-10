/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dc4c0; name: FUN_003dc4c0
 */


undefined8
FUN_003dc4c0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [64];
  
  iVar1 = FUN_0043b720(param_3);
  if (iVar1 < 0) {
    uVar4 = 0x178;
  }
  else {
    iVar1 = FUN_003daff0(param_1,param_3,param_5,param_7,param_8,param_6,iVar1,param_9,iVar1,1);
    if (iVar1 == 0) goto LAB_003dc6d8;
    iVar1 = FUN_0043b6e0(param_4);
    uVar3 = FUN_0043b160(param_4);
    if ((uVar3 & 0xf0007) == 7) {
      lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
      if (((lVar5 == 0) && (lVar5 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x1f0), lVar5 == 0)) &&
         ((*(long *)(param_1 + 0x5d8) == 0 ||
          (lVar5 = *(long *)(*(long *)(param_1 + 0x5d8) + 0x1f0), lVar5 == 0)))) {
        uVar4 = 0x193;
        goto LAB_003dc6cc;
      }
      lVar6 = 0x10;
      if ((*(byte *)(lVar5 + 0x26) & 3) != 0) {
        lVar6 = 8;
      }
      uVar3 = 0xc;
    }
    else {
      iVar2 = FUN_0043b690(param_4);
      lVar6 = 0;
      uVar3 = (ulong)iVar2;
    }
    iVar1 = FUN_003daff0(param_1,param_3,param_9,&DAT_03cdd207,3,0,0,auStack_90,(long)iVar1,1);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_003daff0(param_1,param_3,param_9,&DAT_03cdd20b,2,0,0,param_10,uVar3,1),
       iVar1 == 0)) goto LAB_003dc6d8;
    iVar1 = FUN_00439e90(param_11,param_4,0,0,0,param_2);
    if (((0 < iVar1) && (iVar1 = FUN_0043a230(param_11,9,uVar3 & 0xffffffff,0), iVar1 != 0)) &&
       (((lVar6 == 0 || (iVar1 = FUN_0043a230(param_11,0x11,lVar6,0), iVar1 != 0)) &&
        (iVar1 = FUN_00439e90(param_11,0,0,auStack_90,0,0xffffffff), 0 < iVar1)))) {
      return 1;
    }
    uVar4 = 0x1ab;
  }
LAB_003dc6cc:
  FUN_003c3950(param_1,0x50,0x202,6,"external/openssl/ssl/tls13_enc.c",uVar4);
LAB_003dc6d8:
  FUN_00453300(auStack_90,0x40);
  return 0;
}


