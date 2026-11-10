/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00549d4c; name: FUN_00549d4c
 */


undefined8 * FUN_00549d4c(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  ulong local_38;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_00550264(&local_48,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_48;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_38 & 0xfffffffffffffffe);
    if ((local_38 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_48) {
                    /* try { // try from 00549e50 to 00549e57 has its CatchHandler @ 00549e80 */
        FUN_0057503c(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 00549df8 to 00549dff has its CatchHandler @ 00549e80 */
      FUN_00574fd8(param_1 + 2,auStack_40);
    }
  }
  else {
    FUN_00550130(&local_48,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_48;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_38 & 0xfffffffffffffffe);
    if ((local_38 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_48) {
                    /* try { // try from 00549e24 to 00549e2b has its CatchHandler @ 00549e84 */
        FUN_0057503c(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 00549da8 to 00549daf has its CatchHandler @ 00549e84 */
      FUN_00574fd8(param_1 + 2,auStack_40);
    }
  }
  FUN_005744a0(auStack_40);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


