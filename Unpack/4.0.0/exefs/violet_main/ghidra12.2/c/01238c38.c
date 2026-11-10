/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01238c38; name: FUN_01238c38
 */


undefined8 FUN_01238c38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  byte local_8 [4];
  byte local_4 [4];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  FUN_01253868(*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x290),param_2,local_4,local_8);
  uVar2 = (ulong)local_4[0];
  if ((uVar2 == 5) || (*(byte *)(lVar3 + uVar2 * 0x38 + 0x58) <= local_8[0])) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + uVar2 * 0x38 + (ulong)local_8[0] * 8 + 0x28);
  }
  return uVar1;
}


