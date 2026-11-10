/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160033c; name: FUN_0160033c
 */


void FUN_0160033c(uint *param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    bVar3 = *param_2;
    uVar2 = 0x811c9dc5;
    if (bVar3 != 0) {
      do {
        param_2 = param_2 + 1;
        bVar1 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar1 = bVar3;
        }
        uVar2 = uVar2 * 0x1000193 ^ (uint)bVar1;
        bVar3 = *param_2;
      } while (bVar3 != 0);
    }
  }
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_4;
  return;
}


