/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184fa60; name: FUN_0184fa60
 */


void FUN_0184fa60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_3[2] + 0xa8) = 0;
  lVar4 = param_3[2];
  bVar1 = *(byte *)(lVar4 + 0xa8);
  if (bVar1 < *(byte *)(lVar4 + 0xa6)) {
    *(byte *)(lVar4 + 0xa8) = bVar1 + 1;
    for (lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8)) {
      uVar2 = FUN_0184fb1c(*(undefined8 *)(param_1 + 0x38),*param_3,lVar4,param_3[1]);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_0149b698(param_1);
        FUN_0167a950(lVar3 + 0x10);
        FUN_0184ff2c(*(undefined8 *)(param_1 + 0x38),*param_3,lVar4);
        FUN_0167bf08(param_3[2],lVar4);
      }
      lVar4 = param_3[2];
      bVar1 = *(byte *)(lVar4 + 0xa8);
      if (*(byte *)(lVar4 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(lVar4 + 0xa8) = bVar1 + 1;
    }
  }
  return;
}


