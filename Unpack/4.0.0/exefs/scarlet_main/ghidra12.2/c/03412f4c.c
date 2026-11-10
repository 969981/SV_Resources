/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03412f4c; name: FUN_03412f4c
 */


long * FUN_03412f4c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,0x40);
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 4;
    *plVar4 = 0;
    plVar2[1] = (long)&PTR_FUN_047bf4e0;
    plVar2[2] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    *(undefined1 *)((long)plVar2 + 0x3c) = 1;
    puVar3 = (undefined8 *)(**(code **)(puVar1 + 0x18))(10,0xf78,0x10);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0xa4] = puVar3 + 0x52;
      puVar3[0xf6] = puVar3 + 0xa4;
      puVar3[0x148] = puVar3 + 0xf6;
      puVar3[0x1ee] = puVar3 + 0x19a;
      puVar3[0x1ec] = 0;
      *puVar3 = 0;
      puVar3[0x52] = puVar3;
      puVar3[0x19a] = puVar3 + 0x148;
      *(undefined4 *)(puVar3 + 0x1ed) = 6;
      if (*plVar4 == 0) {
        *plVar4 = (long)puVar3;
        puVar3[0x1ec] = 0;
      }
      else {
        puVar3[0x1ec] = *plVar4;
        *plVar4 = (long)puVar3;
      }
      plVar4 = (long *)puVar3[0x1ee];
      if (plVar4 != (long *)0x0) {
        if (*plVar4 == 0) {
          puVar3[0x1ee] = 0;
        }
        else {
          puVar3[0x1ee] = *plVar4;
        }
        *(int *)(puVar3 + 0x1ed) = *(int *)(puVar3 + 0x1ed) + -1;
        *(undefined4 *)(plVar4 + 0x50) = 0;
        plVar2[2] = (long)plVar4;
        *(undefined4 *)((long)plVar4 + 0x284) = 0;
        *(undefined4 *)(plVar2 + 3) = 0x40860a91;
        if (*(long *)(param_1 + 0x80) == 0) {
          *(long **)(param_1 + 0x80) = plVar2;
          *plVar2 = 0;
          return plVar2;
        }
        *plVar2 = *(long *)(param_1 + 0x80);
        *(long **)(param_1 + 0x80) = plVar2;
        return plVar2;
      }
    }
    plVar2[1] = (long)&PTR_FUN_047bf4e0;
    plVar2[2] = 0;
    (**(code **)(puVar1 + 0x30))(9,plVar2);
  }
  return (long *)0x0;
}


