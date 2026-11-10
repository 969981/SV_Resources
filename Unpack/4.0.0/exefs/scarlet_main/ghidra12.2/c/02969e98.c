/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02969e98; name: FUN_02969e98
 */


ulong FUN_02969e98(undefined8 param_1,byte param_2,undefined1 *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0x12) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)param_2;
    bVar1 = (&DAT_03d6286c)[uVar3 * 0x12] != '\x04' && (&DAT_03d6286c)[uVar3 * 0x12] != '\b';
    if (bVar1) {
      *param_3 = 0;
    }
    uVar2 = (ulong)bVar1;
    if ((&DAT_03d6286d)[uVar3 * 0x12] != '\x04' && (&DAT_03d6286d)[uVar3 * 0x12] != '\b') {
      param_3[uVar2] = 1;
      uVar2 = (ulong)(bVar1 + 1);
    }
    if ((&DAT_03d6286e)[uVar3 * 0x12] != '\x04' && (&DAT_03d6286e)[uVar3 * 0x12] != '\b') {
      param_3[uVar2] = 2;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d6286f)[uVar3 * 0x12] != '\x04') && ((&DAT_03d6286f)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 3;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62870)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62870)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 4;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62871)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62871)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 5;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62872)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62872)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 6;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62873)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62873)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 7;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62874)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62874)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2] = 8;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((&DAT_03d62875)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62875)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 9;
    }
    if (((&DAT_03d62876)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62876)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 10;
    }
    if (((&DAT_03d62877)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62877)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0xb;
    }
    if (((&DAT_03d62878)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62878)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0xc;
    }
    if (((&DAT_03d62879)[uVar3 * 0x12] != '\x04') && ((&DAT_03d62879)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0xd;
    }
    if (((&DAT_03d6287a)[uVar3 * 0x12] != '\x04') && ((&DAT_03d6287a)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0xe;
    }
    if (((&DAT_03d6287b)[uVar3 * 0x12] != '\x04') && ((&DAT_03d6287b)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0xf;
    }
    if (((&DAT_03d6287c)[uVar3 * 0x12] != '\x04') && ((&DAT_03d6287c)[uVar3 * 0x12] != '\b')) {
      uVar4 = uVar2 & 0xff;
      uVar2 = (ulong)((int)uVar2 + 1);
      param_3[uVar4] = 0x10;
    }
    if (((&DAT_03d6287d)[uVar3 * 0x12] != '\x04') && ((&DAT_03d6287d)[uVar3 * 0x12] != '\b')) {
      param_3[uVar2 & 0xff] = 0x11;
      return (ulong)((int)uVar2 + 1);
    }
  }
  return uVar2;
}


