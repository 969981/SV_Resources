/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b5c40; name: FUN_004b5c40
 */


void FUN_004b5c40(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 004b5c74 to 004b5c77 has its CatchHandler @ 004b5d5c */
  FUN_002cdbb0(param_1,uVar4);
  uVar4 = 0;
  uVar3 = param_3 ^ 1;
  while( true ) {
    while ((*param_2 & 1) != 0) {
      if (*(ulong *)(param_2 + 8) <= uVar4) goto LAB_004b5d0c;
      bVar2 = *(byte *)(*(long *)(param_2 + 0x10) + uVar4);
      if (bVar2 != 0x5f) goto LAB_004b5cd8;
      uVar3 = 1;
      uVar4 = uVar4 + 1;
    }
    if (*param_2 >> 1 <= uVar4) break;
    bVar2 = param_2[uVar4 + 1];
    if (bVar2 == 0x5f) {
      uVar3 = 1;
      uVar4 = uVar4 + 1;
    }
    else {
LAB_004b5cd8:
      if ((uVar3 & 1) == 0) {
        FUN_002cdcec(param_1);
      }
      else {
        uVar3 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar3 = (uint)bVar2;
        }
                    /* try { // try from 004b5cec to 004b5cff has its CatchHandler @ 004b5d60 */
        FUN_002cdcec(param_1,uVar3);
      }
      uVar3 = 0;
      uVar4 = uVar4 + 1;
    }
  }
LAB_004b5d0c:
  if ((param_3 & 1) != 0) {
    if ((*param_1 & 1) == 0) {
      if (*param_1 < 2) {
        return;
      }
      param_1 = param_1 + 1;
    }
    else {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      param_1 = *(byte **)(param_1 + 0x10);
    }
    bVar1 = *param_1;
    bVar2 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      bVar2 = bVar1;
    }
    *param_1 = bVar2;
  }
  return;
}


