/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02172eb0; name: FUN_02172eb0
 */


void FUN_02172eb0(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = param_1 & 0xffff;
  lVar2 = 2;
  if (0x7ff < uVar1) {
    lVar2 = 3;
  }
  if (uVar1 < 0x80) {
    lVar2 = 1;
  }
  bVar3 = (byte)param_1;
  if (lVar2 == 3) {
    param_1 = param_1 >> 0xc & 0xf | 0xffffffe0;
    bVar4 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
    bVar3 = bVar3 & 0x3f | 0x80;
  }
  else if (lVar2 == 2) {
    bVar4 = bVar3 & 0x3f | 0x80;
    bVar3 = 0;
    param_1 = param_1 >> 6 | 0xffffffc0;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    bVar4 = 0;
    bVar3 = 0;
  }
  *param_2 = (char)param_1;
  param_2[1] = bVar4;
  param_2[2] = bVar3;
  param_2[3] = 0;
  return;
}


