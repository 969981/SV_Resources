/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d1748; name: FUN_005d1748
 */


undefined8 * FUN_005d1748(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_005d19b8(&local_88,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_88;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_78 & 0xfffffffffffffffe);
    if ((local_78 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_88) {
                    /* try { // try from 005d184c to 005d1853 has its CatchHandler @ 005d187c */
        FUN_00608828(param_1 + 2,auStack_80);
      }
    }
    else {
                    /* try { // try from 005d17f4 to 005d17fb has its CatchHandler @ 005d187c */
      FUN_006087ec(param_1 + 2,auStack_80);
    }
  }
  else {
    FUN_005d1884(&local_88,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_88;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_78 & 0xfffffffffffffffe);
    if ((local_78 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_88) {
                    /* try { // try from 005d1820 to 005d1827 has its CatchHandler @ 005d1880 */
        FUN_00608828(param_1 + 2,auStack_80);
      }
    }
    else {
                    /* try { // try from 005d17a4 to 005d17ab has its CatchHandler @ 005d1880 */
      FUN_006087ec(param_1 + 2,auStack_80);
    }
  }
  FUN_00606de0(auStack_80);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


