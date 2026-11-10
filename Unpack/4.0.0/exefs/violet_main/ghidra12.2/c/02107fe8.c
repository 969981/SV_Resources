/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02107fe8; name: FUN_02107fe8
 */


undefined8 FUN_02107fe8(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte local_28 [4];
  byte local_24 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x840))();
  if ((uVar1 & 0xff) != 10) {
    lVar2 = (**(code **)(*param_1 + 0x928))(param_1);
    FUN_01253868(*(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x290),uVar1,local_24,local_28);
    uVar3 = (ulong)local_24[0];
    if ((uVar3 != 5) && (local_28[0] < *(byte *)(lVar2 + uVar3 * 0x38 + 0x58))) {
      return *(undefined8 *)(lVar2 + uVar3 * 0x38 + (ulong)local_28[0] * 8 + 0x28);
    }
  }
  return 0;
}


