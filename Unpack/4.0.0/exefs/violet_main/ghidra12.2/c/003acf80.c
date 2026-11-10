/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003acf80; name: FUN_003acf80
 */


undefined8 FUN_003acf80(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0xe8) != 0) {
LAB_003acfa0:
    if (param_2 == 0) {
      FUN_003e8b90(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
      *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0) = 0;
    }
    return 1;
  }
  lVar2 = FUN_003e9560(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,&local_28);
  if (lVar2 < 1) {
    uVar4 = 0x14c;
    uVar5 = 0x182;
  }
  else {
    lVar3 = FUN_0042bbc0();
    *(long *)(*(long *)(param_1 + 0xa8) + 0xe8) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x189;
    }
    else {
      lVar3 = FUN_003b0120(param_1);
      if (((lVar3 != 0) &&
          (iVar1 = FUN_0042bc40(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8),lVar3,0),
          iVar1 != 0)) &&
         (iVar1 = FUN_0042bd60(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8),local_28,lVar2),
         iVar1 != 0)) goto LAB_003acfa0;
      uVar4 = 0x44;
      uVar5 = 0x191;
    }
  }
  FUN_003c3950(param_1,0x50,0x125,uVar4,"external/openssl/ssl/s3_enc.c",uVar5);
  return 0;
}


