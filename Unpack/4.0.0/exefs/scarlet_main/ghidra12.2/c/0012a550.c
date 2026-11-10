/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012a550; name: FUN_0012a550
 */


void FUN_0012a550(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar5 + 0x66) != '\0') {
    bVar1 = *(byte *)(lVar5 + 100) & 0x18;
    plVar4 = *(long **)(lVar5 + 0x70);
    if (plVar4 != (long *)0x0) {
      do {
        *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar1;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      bVar1 = *(byte *)(lVar5 + 100) & 0x18;
    }
    plVar4 = *(long **)(lVar5 + 0x80);
    *(undefined8 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    if (plVar4 != (long *)0x0) {
      do {
        *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar1;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      bVar1 = *(byte *)(lVar5 + 100) & 0x18;
    }
    for (plVar4 = *(long **)(lVar5 + 0xb0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar1;
    }
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    *(undefined8 *)(lVar5 + 0xf0) = 0;
    *(undefined8 *)(lVar5 + 0xe0) = 0;
    *(undefined2 *)(lVar5 + 0x65) = 8;
    *(undefined8 *)(lVar5 + 0x28) = 0;
  }
  *(undefined8 *)(lVar5 + 0x28) = 0;
  plVar4 = (long *)(lVar5 + 0xb0);
  do {
    plVar2 = plVar4;
    plVar4 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  while (plVar4 = *(long **)(lVar5 + 0x80), plVar4 != *(long **)(lVar5 + 0xe8)) {
    if (plVar4 == *(long **)(lVar5 + 0xe0)) {
      *(long *)(lVar5 + 0xe0) = *plVar4;
    }
    *(long *)(lVar5 + 0x80) = *plVar4;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
    plVar2 = plVar4;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar6 + 0xb0);
  while (lVar3 != 0) {
    FUN_0012d220(param_1);
    lVar3 = *(long *)(lVar6 + 0xb0);
  }
  plVar4 = *(long **)(lVar5 + 0x70);
  lVar3 = *(long *)(lVar5 + 0x108);
  while (plVar4 != (long *)lVar3) {
    plVar4 = (long *)*plVar4;
    FUN_0012bbc0(param_1);
  }
  plVar4 = *(long **)(lVar5 + 0x80);
  while (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
    FUN_0012bbc0(param_1);
  }
  plVar4 = *(long **)(lVar5 + 0xb8);
  while (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
    FUN_0012bbc0(param_1);
  }
  return;
}


