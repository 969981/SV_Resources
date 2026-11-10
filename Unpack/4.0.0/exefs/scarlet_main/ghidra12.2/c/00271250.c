/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00271250; name: FUN_00271250
 */


void FUN_00271250(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_047cc370 + 0x70;
  puVar2 = PTR_DAT_047cc370 + 0x98;
  *param_1 = (long)(PTR_DAT_047cc370 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)puVar2;
                    /* try { // try from 00271284 to 00271293 has its CatchHandler @ 002713a0 */
  FUN_00370390(param_1[9]);
  if (param_1[0xe] != 0) {
    FUN_002741f8();
  }
  puVar1 = PTR_LAB_047cba48;
  puVar4 = (undefined8 *)param_1[0xf];
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x10];
    if (puVar5 == puVar4) {
      puVar5 = puVar4;
    }
    else {
      do {
        puVar5 = puVar5 + -1;
        puVar3 = (undefined8 *)*puVar5;
        *puVar5 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          FUN_0049e790(puVar1,puVar3);
        }
      } while (puVar4 != puVar5);
      puVar5 = (undefined8 *)param_1[0xf];
    }
    param_1[0x10] = (long)puVar4;
    FUN_0049e790(PTR_LAB_047cba48,puVar5);
  }
                    /* try { // try from 0027131c to 0027131f has its CatchHandler @ 0027139c */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x78))(*(long **)PTR_DAT_047cbb08,param_1 + 10);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[8]);
  }
  param_1[4] = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[5] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00271368 to 00271397 has its CatchHandler @ 00271398 */
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  if (param_1[3] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


