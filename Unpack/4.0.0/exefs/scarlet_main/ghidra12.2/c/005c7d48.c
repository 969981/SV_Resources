/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c7d48; name: FUN_005c7d48
 */


undefined8 * FUN_005c7d48(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  ulong local_88;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_005c8708(&local_98,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_98;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_98) {
                    /* try { // try from 005c7e4c to 005c7e53 has its CatchHandler @ 005c7e7c */
        FUN_0060c6a0(param_1 + 2,auStack_90);
      }
    }
    else {
                    /* try { // try from 005c7df4 to 005c7dfb has its CatchHandler @ 005c7e7c */
      FUN_0060c664(param_1 + 2,auStack_90);
    }
  }
  else {
    FUN_005c85d4(&local_98,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_98;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_98) {
                    /* try { // try from 005c7e20 to 005c7e27 has its CatchHandler @ 005c7e80 */
        FUN_0060c6a0(param_1 + 2,auStack_90);
      }
    }
    else {
                    /* try { // try from 005c7da4 to 005c7dab has its CatchHandler @ 005c7e80 */
      FUN_0060c664(param_1 + 2,auStack_90);
    }
  }
  FUN_0060ac04(auStack_90);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


