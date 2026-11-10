/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bf1d54; name: FUN_01bf1d54
 */


void FUN_01bf1d54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(DAT_0483af70 + 0x88);
  lVar1 = DAT_0483af70 + 0x80;
  if (lVar2 != lVar1) {
    do {
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(short *)(*(long *)(lVar2 + 0x10) + 0x1a) != 0)) {
        (*(code *)*param_1)(param_1 + 4);
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != lVar1);
  }
  return;
}


