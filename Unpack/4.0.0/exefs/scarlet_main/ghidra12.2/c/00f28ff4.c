/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f28ff4; name: FUN_00f28ff4
 */


void FUN_00f28ff4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  byte *pbVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  pbVar1 = (byte *)(param_1 + 0x25d8);
  if (param_8 == 1) {
    bVar6 = *pbVar1;
    lVar4 = 0;
    do {
      if (bVar6 == 0) {
        bVar6 = 1;
        *pbVar1 = 1;
      }
      lVar2 = param_1 + lVar4;
      if (*(char *)(lVar2 + 0xcd8) == '\0') {
        *(undefined4 *)(lVar2 + 0xcdc) = param_2;
        *(undefined4 *)(lVar2 + 0xce0) = param_3;
        *(undefined1 *)(lVar2 + 0xcd8) = 1;
        *(undefined4 *)(lVar2 + 0xce4) = param_4;
        *(undefined8 *)(lVar2 + 0xce8) = param_5;
        *(undefined4 *)(lVar2 + 0xcf0) = param_6;
        *(undefined1 *)(lVar2 + 0xcf4) = 0;
        return;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != 0xc80);
  }
  else if (param_8 == 2) {
    bVar6 = *pbVar1;
    lVar4 = 0;
    do {
      if (bVar6 < 2) {
        bVar6 = 2;
        *pbVar1 = 2;
      }
      if (*(char *)(param_1 + 0x1958 + lVar4) == '\0') {
        param_1 = param_1 + lVar4;
        *(undefined1 *)(param_1 + 0x1958) = 1;
        *(undefined4 *)(param_1 + 0x195c) = param_2;
        *(undefined4 *)(param_1 + 0x1960) = param_3;
        *(undefined4 *)(param_1 + 0x1964) = param_4;
        *(undefined8 *)(param_1 + 0x1968) = param_5;
        *(undefined4 *)(param_1 + 0x1970) = param_6;
        *(undefined1 *)(param_1 + 0x1974) = 0;
        return;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != 0xc80);
  }
  else {
    pcVar3 = (char *)(param_1 + 0x70);
    uVar5 = 1;
    do {
      if (pcVar3[-0x20] == '\0') {
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar3 + -0x20;
LAB_00f29104:
        *pcVar3 = '\x01';
        lVar4 = param_1 + (uVar5 & 0xffffffff) * 0x20;
        *(undefined4 *)(lVar4 + 0x54) = param_2;
        *(undefined4 *)(lVar4 + 0x58) = param_3;
        *(undefined4 *)(lVar4 + 0x5c) = param_4;
        *(undefined8 *)(lVar4 + 0x60) = param_5;
        *(undefined4 *)(lVar4 + 0x68) = param_6;
        *(undefined1 *)(lVar4 + 0x6c) = 0;
        if (param_8 == 0) {
          *(undefined4 *)(param_1 + (uVar5 & 0xffffffff) * 4 + 0x83a8) = param_7;
          return;
        }
        return;
      }
      if (*pcVar3 == '\0') goto LAB_00f29104;
      uVar5 = uVar5 + 2;
      pcVar3 = pcVar3 + 0x40;
    } while (uVar5 != 0x65);
  }
  return;
}


