/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c9620; name: FUN_003c9620
 */


undefined8 FUN_003c9620(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_28;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
  uVar1 = *(uint *)(lVar7 + 0x20);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(lVar7 + 0x1c);
  uVar4 = FUN_00483c90(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x1b8));
  lVar7 = FUN_003af5b0(uVar4,&local_28);
  if ((lVar7 == 0) || ((*(uint *)(lVar7 + 4) & uVar1) == 0)) {
    uVar4 = 0x28;
    uVar5 = 0xdd;
    uVar6 = 0xe1a;
  }
  else if ((*(uint *)(lVar7 + 4) >> 3 & 1) == 0) {
    if (((uVar2 & 0x41) == 0) || (local_28 == 0)) {
      if ((uVar2 >> 1 & 1) == 0) {
        return 1;
      }
      if (*(long *)(*(long *)(param_1 + 0xa8) + 0x408) != 0) {
        return 1;
      }
      uVar4 = 0x50;
      uVar5 = 0x44;
      uVar6 = 0xe32;
    }
    else {
      uVar4 = 0x28;
      uVar5 = 0xa9;
      uVar6 = 0xe2b;
    }
  }
  else {
    iVar3 = FUN_003b4f00(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x1b8),param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar4 = 0x28;
    uVar5 = 0x130;
    uVar6 = 0xe23;
  }
  FUN_003c3950(param_1,uVar4,0x82,uVar5,"external/openssl/ssl/statem/statem_clnt.c",uVar6);
  return 0;
}


