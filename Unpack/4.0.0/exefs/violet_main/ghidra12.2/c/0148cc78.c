/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148cc78; name: FUN_0148cc78
 */


void FUN_0148cc78(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_8 [8];
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(*param_1 + 0x10);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + -0x28;
    }
  }
  lVar1 = FUN_0148cccc(lVar2 + 0x108,auStack_8);
  if (lVar1 == 0) {
    FUN_01317ec8(lVar2,*(undefined8 *)(lVar2 + 8));
  }
  return;
}


