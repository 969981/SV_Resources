/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a0b628; name: FUN_01a0b628
 */


void FUN_01a0b628(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  FUN_01a0b958();
  lVar1 = *(long *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x58);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0xd0;
    FUN_0159e7d4(lVar3);
  }
  *(long *)(param_1 + 0x58) = lVar1;
  lVar1 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0xc0;
    FUN_01a0b710(lVar3);
  }
  *(long *)(param_1 + 0x90) = lVar1;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    pcVar2 = *(code **)(param_1 + 0x2f8);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x300) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      (*pcVar2)(param_1 + 0x310);
    }
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x3a8);
  if (*(char *)(param_1 + 0x3e0) != '\0') {
    *(undefined1 *)(param_1 + 0x3e0) = 0;
  }
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_1 + 0x430);
  return;
}


