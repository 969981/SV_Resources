/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f1840; name: FUN_013f1840
 */


void FUN_013f1840(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0xb0;
    pcVar1 = *(code **)(lVar2 + -0x78);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      (*pcVar1)(lVar2 + -0x60);
    }
    if (*(long **)(lVar2 + -0x98) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x98) + 0x20))();
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


