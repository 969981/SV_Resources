/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00271af4; name: FUN_00271af4
 */


void FUN_00271af4(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *local_38;
  
  puVar1 = PTR_LAB_047cba48;
  if (param_3 <= (ulong)(param_2[1] - *param_2 >> 3)) {
    puVar4 = (undefined8 *)(*param_2 + param_3 * 8);
    if (puVar4 != (undefined8 *)param_2[1]) {
      do {
        puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,param_1);
        if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00271b64 to 00271b6f has its CatchHandler @ 00271c14 */
          local_38 = puVar2;
          FUN_00271c4c(param_1 + 0x20,&local_38);
          puVar2 = local_38;
          local_38 = (undefined8 *)0x0;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
            FUN_0049e790(puVar1,puVar2);
          }
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)param_2[1]);
    }
    plVar3 = *(long **)PTR_DAT_047cc378;
    if (plVar3 != (long *)0x0) {
      local_38 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,param_1);
                    /* try { // try from 00271bc4 to 00271bcf has its CatchHandler @ 00271c10 */
      FUN_00271c4c(param_1 + 0x20,&local_38);
      puVar4 = local_38;
      local_38 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
      }
    }
  }
  return;
}


