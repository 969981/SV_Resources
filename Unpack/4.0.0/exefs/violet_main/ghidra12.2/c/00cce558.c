/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cce558; name: FUN_00cce558
 */


void FUN_00cce558(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x20;
    lVar1 = *(long *)(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x20) = 0;
    if (lVar1 != 0) {
      FUN_0270ec20(lVar2 + -0x18);
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


