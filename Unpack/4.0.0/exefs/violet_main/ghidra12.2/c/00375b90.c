/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00375b90; name: FUN_00375b90
 */


undefined8 FUN_00375b90(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auStack_18 [8];
  
  uVar3 = FUN_00351f40(param_1,3,auStack_18);
  if ((uVar3 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x2d);
    while( true ) {
      if (bVar2 == 0xff) {
        return 0;
      }
      lVar1 = param_1 + (ulong)bVar2 * 8;
      uVar3 = FUN_00375b90(*(undefined8 *)(lVar1 + 0x38));
      if ((uVar3 & 1) != 0) break;
      bVar2 = *(byte *)(lVar1 + 0x40);
    }
  }
  return 1;
}


