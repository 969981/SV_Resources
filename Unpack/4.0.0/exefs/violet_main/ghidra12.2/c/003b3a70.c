/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3a70; name: FUN_003b3a70
 */


undefined4 FUN_003b3a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  lVar2 = *(long *)(param_1 + 0x1918);
  if (lVar2 == 0) {
    lVar2 = FUN_003e6480();
    *(long *)(param_1 + 0x1918) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  uVar1 = FUN_003e5ce0((undefined8 *)(param_1 + 0x1910),lVar2,&local_24,param_3,param_2,0x28);
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar3 = 0x195;
    uVar4 = 0x6de;
    break;
  case 1:
    uVar1 = 6;
    goto LAB_003b3b3c;
  case 2:
    uVar1 = 5;
LAB_003b3b3c:
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    return 0xffffffff;
  case 3:
    *(undefined8 *)(param_1 + 0x1910) = 0;
    return local_24;
  default:
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar3 = 0x44;
    uVar4 = 0x6eb;
  }
  FUN_004806c0(0x14,0x185,uVar3,"external/openssl/ssl/ssl_lib.c",uVar4);
  return 0xffffffff;
}


