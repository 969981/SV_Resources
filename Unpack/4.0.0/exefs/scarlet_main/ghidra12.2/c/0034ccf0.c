/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ccf0; name: FUN_0034ccf0
 */


undefined4 FUN_0034ccf0(int param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 auStack_20 [4];
  
  if (3 < param_1) goto switchD_0034cdc4_caseD_0;
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((param_2 - (param_2 >> 1 & 0x77777777)) - (param_2 >> 2 & 0x33333333)) -
          (param_2 >> 3 & 0x11111111);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = ~((uVar1 / 0xff) * 0xff) + uVar1;
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  if (param_1 < 1) goto switchD_0034cdc4_caseD_0;
  if ((param_2 >> 2 & 1) == 0) {
    lVar2 = 0;
    if (uVar3 != 0 && (param_2 & 2) != 0) {
LAB_0034cd98:
      auStack_20[lVar2 + 1] = 1;
    }
  }
  else {
    auStack_20[1] = 2;
    lVar2 = 1;
    if (uVar3 != 1 && (param_2 & 2) != 0) goto LAB_0034cd98;
  }
  switch(param_1) {
  case 1:
    return auStack_20[1];
  case 2:
    return *(undefined4 *)((long)auStack_20 + (uVar3 & 0xfffffffe) * 2 + 4);
  case 3:
    return auStack_20[uVar3];
  }
switchD_0034cdc4_caseD_0:
                    /* WARNING: Subroutine does not return */
  abort();
}


