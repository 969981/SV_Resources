/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b5d90; name: FUN_004b5d90
 */


void FUN_004b5d90(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 004b5dc0 to 004b5dc3 has its CatchHandler @ 004b5e68 */
  FUN_002cdbb0(param_1,uVar4);
  uVar4 = 0;
  bVar3 = false;
  do {
    while ((*param_2 & 1) == 0) {
      if (*param_2 >> 1 <= uVar4) {
        return;
      }
      bVar1 = param_2[uVar4 + 1];
      if (bVar1 == 0x5f) {
        bVar3 = true;
        uVar4 = uVar4 + 1;
      }
      else {
LAB_004b5e24:
        if (bVar3) {
          uVar2 = bVar1 - 0x20;
          if (0x19 < bVar1 - 0x61) {
            uVar2 = (uint)bVar1;
          }
                    /* try { // try from 004b5e38 to 004b5e4b has its CatchHandler @ 004b5e6c */
          FUN_002cdcec(param_1,uVar2);
        }
        else {
          FUN_002cdcec(param_1);
        }
        bVar3 = false;
        uVar4 = uVar4 + 1;
      }
    }
    if (*(ulong *)(param_2 + 8) <= uVar4) {
      return;
    }
    bVar1 = *(byte *)(*(long *)(param_2 + 0x10) + uVar4);
    if (bVar1 != 0x5f) goto LAB_004b5e24;
    bVar3 = true;
    uVar4 = uVar4 + 1;
  } while( true );
}


