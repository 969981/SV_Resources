/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006e8e38; name: FUN_006e8e38
 */


undefined8 * FUN_006e8e38(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  ulong local_38;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_006ea138(&local_48,*param_1);
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
                    /* try { // try from 006e8f3c to 006e8f43 has its CatchHandler @ 006e8f6c */
        FUN_00709084(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 006e8ee4 to 006e8eeb has its CatchHandler @ 006e8f6c */
      FUN_00709020(param_1 + 2,auStack_40);
    }
  }
  else {
    FUN_006ea004(&local_48,*param_1);
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
                    /* try { // try from 006e8f10 to 006e8f17 has its CatchHandler @ 006e8f70 */
        FUN_00709084(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 006e8e94 to 006e8e9b has its CatchHandler @ 006e8f70 */
      FUN_00709020(param_1 + 2,auStack_40);
    }
  }
  FUN_007087d8(auStack_40);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


