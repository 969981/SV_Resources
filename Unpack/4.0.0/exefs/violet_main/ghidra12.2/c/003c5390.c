/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c5390; name: FUN_003c5390
 */


undefined8 FUN_003c5390(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  lVar5 = *(long *)(lVar3 + 0x2b8);
  uVar4 = *(undefined8 *)(lVar3 + 0x2c0);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x238) + 0x1c);
  if ((uVar1 >> 5 & 1) == 0) {
    if (lVar5 == 0 && (uVar1 & 8) == 0) {
      FUN_003c3950(param_1,0x50,0x162,0x41,"external/openssl/ssl/statem/statem_clnt.c",0xd43);
      lVar5 = 0;
    }
    else {
      iVar2 = FUN_003ac690(param_1,lVar5,uVar4,1);
      if (iVar2 != 0) {
        return 1;
      }
      lVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    iVar2 = FUN_003dac70(param_1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  FUN_00453260(lVar5,uVar4,"external/openssl/ssl/statem/statem_clnt.c",0xd72);
  lVar3 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar3 + 0x2c0) = 0;
  *(undefined8 *)(lVar3 + 0x2b8) = 0;
  return 0;
}


