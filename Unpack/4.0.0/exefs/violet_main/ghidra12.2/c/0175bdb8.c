/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175bdb8; name: FUN_0175bdb8
 */


void FUN_0175bdb8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = param_2;
  if (lVar3 != 0) {
    uVar1 = FUN_0175c820(param_1,lVar3,param_3,param_2);
    lVar2 = FUN_0175c820(param_1,param_3,lVar3 + *(long *)(param_1 + 0x28) * 0x10,uVar1);
    for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = lVar4 + -1) {
      FUN_0175be68(lVar3);
      lVar3 = lVar3 + 0x10;
    }
    FUN_0175c66c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar2 - param_2 >> 4;
  *(undefined8 *)(param_1 + 0x30) = 0x40;
  return;
}


