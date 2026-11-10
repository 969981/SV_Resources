/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221ebc8; name: FUN_0221ebc8
 */


void FUN_0221ebc8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != param_2) {
    lVar4 = 0;
    do {
      lVar1 = lVar3 + lVar4;
      pcVar2 = *(code **)(lVar1 + -0x78);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        (*pcVar2)(lVar1 + -0x60);
      }
      pcVar2 = *(code **)(lVar1 + -0xf8);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0xf0) = 0;
        *(undefined8 *)(lVar1 + -0xe8) = 0;
        *(undefined8 *)(lVar1 + -0x100) = 0;
        *(undefined8 *)(lVar1 + -0xf8) = 0;
        (*pcVar2)(lVar1 + -0xe0);
      }
      pcVar2 = *(code **)(lVar1 + -0x178);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x170) = 0;
        *(undefined8 *)(lVar1 + -0x168) = 0;
        *(undefined8 *)(lVar1 + -0x180) = 0;
        *(undefined8 *)(lVar1 + -0x178) = 0;
        (*pcVar2)(lVar1 + -0x160);
      }
      pcVar2 = *(code **)(lVar1 + -0x1f8);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x1f0) = 0;
        *(undefined8 *)(lVar1 + -0x1e8) = 0;
        *(undefined8 *)(lVar1 + -0x200) = 0;
        *(undefined8 *)(lVar1 + -0x1f8) = 0;
        (*pcVar2)(lVar1 + -0x1e0);
      }
      pcVar2 = *(code **)(lVar1 + -0x278);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x270) = 0;
        *(undefined8 *)(lVar1 + -0x268) = 0;
        *(undefined8 *)(lVar1 + -0x280) = 0;
        *(undefined8 *)(lVar1 + -0x278) = 0;
        (*pcVar2)(lVar1 + -0x260);
      }
      if (*(long **)(lVar1 + -0x298) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x298) + 0x20))();
      }
      lVar4 = lVar4 + -0x2b0;
    } while (param_2 - lVar3 != lVar4);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


