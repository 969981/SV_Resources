/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f53b0; name: FUN_007f53b0
 */


void FUN_007f53b0(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  char *pcVar5;
  
  puVar2 = PTR_DAT_047d0860;
  if (*(char *)(param_1 + 0x78) == '\x05') {
    if (*(char *)(param_1 + 0xba) != 'd') {
      return;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0xffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    puVar2 = PTR_DAT_047d0860;
    *(undefined1 *)(param_1 + 0xba) = 0;
    if (*(short *)(*(long *)puVar2 + 0x50) != 0) {
      uVar4 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar4) = 0xff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(*(long *)puVar2 + 0x50));
    }
    *(undefined1 *)(param_1 + 0xba) = 100;
    uVar3 = 6;
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x02') {
      return;
    }
    uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      pcVar5 = *(char **)(param_1 + 0x98);
      do {
        if (*pcVar5 == *(char *)(param_1 + 0xa4)) {
          uVar4 = FUN_007e7128(*(undefined8 *)(param_1 + 0x70),*(undefined2 *)(param_1 + 0xb8));
          if ((uVar4 & 1) == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x78) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined2 *)(param_1 + 0xb8) = 0;
          *(undefined2 *)(param_1 + 0xa4) = 0xffff;
          *(undefined1 *)(param_1 + 0xba) = 0;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          *(undefined8 *)(param_1 + 0xb0) = 0;
          if (*(short *)(*(long *)puVar2 + 0x50) != 0) {
            uVar4 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar4) = 0xff;
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ushort *)(*(long *)puVar2 + 0x50));
          }
          *(undefined1 *)(param_1 + 0xba) = 100;
          uVar3 = 3;
          goto LAB_007f5550;
        }
        uVar4 = uVar4 - 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar4 != 0);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0xffff;
    *(undefined1 *)(param_1 + 0xba) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar4) = 0xff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(*(long *)puVar2 + 0x50));
    }
    uVar3 = 0xc;
  }
LAB_007f5550:
  *(undefined1 *)(param_1 + 0x78) = uVar3;
  return;
}


