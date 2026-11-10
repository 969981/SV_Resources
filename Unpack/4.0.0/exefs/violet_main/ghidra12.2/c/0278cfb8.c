/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278cfb8; name: FUN_0278cfb8
 */


undefined8 FUN_0278cfb8(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  iVar1 = FUN_0278d020(*(undefined8 *)(lVar3 + 0x70));
  *(int *)(lVar3 + 0x78) = iVar1;
  if (iVar1 == 0) {
    FUN_0278cf24(*(undefined8 *)(lVar3 + 0x70),0x200002,lVar3 + 0xb8);
  }
  else {
    uVar2 = FUN_0278ce70(lVar3);
    *(undefined4 *)(lVar3 + 0xb0) = uVar2;
  }
  FUN_0278c964(*(undefined8 *)(lVar3 + 0x70));
  FUN_0278c970(lVar3);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  return 1;
}


