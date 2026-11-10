/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006794e0; name: FUN_006794e0
 */


undefined8 * FUN_006794e0(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  ulong local_40;
  
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_00679750(&local_50,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_50;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_40 & 0xfffffffffffffffe);
    if ((local_40 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_50) {
                    /* try { // try from 006795e4 to 006795eb has its CatchHandler @ 00679614 */
        FUN_00691c0c(param_1 + 2,auStack_48);
      }
    }
    else {
                    /* try { // try from 0067958c to 00679593 has its CatchHandler @ 00679614 */
      FUN_00691b64(param_1 + 2,auStack_48);
    }
  }
  else {
    FUN_0067961c(&local_50,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_50;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_40 & 0xfffffffffffffffe);
    if ((local_40 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_50) {
                    /* try { // try from 006795b8 to 006795bf has its CatchHandler @ 00679618 */
        FUN_00691c0c(param_1 + 2,auStack_48);
      }
    }
    else {
                    /* try { // try from 0067953c to 00679543 has its CatchHandler @ 00679618 */
      FUN_00691b64(param_1 + 2,auStack_48);
    }
  }
  FUN_00691020(auStack_48);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


