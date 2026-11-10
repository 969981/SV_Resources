/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006f9f18; name: FUN_006f9f18
 */


undefined8 * FUN_006f9f18(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  ulong local_38;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_006fa864(&local_48,*param_1);
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
                    /* try { // try from 006fa01c to 006fa023 has its CatchHandler @ 006fa04c */
        FUN_00724454(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 006f9fc4 to 006f9fcb has its CatchHandler @ 006fa04c */
      FUN_007243f0(param_1 + 2,auStack_40);
    }
  }
  else {
    FUN_006fa730(&local_48,*param_1);
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
                    /* try { // try from 006f9ff0 to 006f9ff7 has its CatchHandler @ 006fa050 */
        FUN_00724454(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 006f9f74 to 006f9f7b has its CatchHandler @ 006fa050 */
      FUN_007243f0(param_1 + 2,auStack_40);
    }
  }
  FUN_00723a5c(auStack_40);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


