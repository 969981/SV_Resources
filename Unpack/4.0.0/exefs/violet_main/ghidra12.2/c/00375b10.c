/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00375b10; name: FUN_00375b10
 */


ulong FUN_00375b10(ulong param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auStack_28 [8];
  
  uVar3 = FUN_00351f40(param_1,param_2,auStack_28);
  if ((uVar3 & 1) == 0) {
    if (4 < param_1) {
      bVar2 = *(byte *)(param_1 + 0x2d);
      while (bVar2 != 0xff) {
        lVar1 = param_1 + (ulong)bVar2 * 8;
        uVar3 = FUN_00375b10(*(undefined8 *)(lVar1 + 0x38),param_2 & 0xffffffff);
        if (uVar3 != 0) {
          return uVar3;
        }
        bVar2 = *(byte *)(lVar1 + 0x40);
      }
    }
    param_1 = 0;
  }
  return param_1;
}


