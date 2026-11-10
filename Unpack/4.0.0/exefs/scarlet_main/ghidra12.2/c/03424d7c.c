/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03424d7c; name: FUN_03424d7c
 */


undefined8 FUN_03424d7c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x20); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x1ec]) {
    if (puVar1[0x1ee] != 0) goto LAB_03424e1c;
  }
  puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(10,0xf78,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xa4] = puVar1 + 0x52;
    puVar1[0xf6] = puVar1 + 0xa4;
    puVar1[0x148] = puVar1 + 0xf6;
    puVar1[0x1ee] = puVar1 + 0x19a;
    puVar1[0x1ec] = 0;
    *puVar1 = 0;
    puVar1[0x52] = puVar1;
    puVar1[0x19a] = puVar1 + 0x148;
    *(undefined4 *)(puVar1 + 0x1ed) = 6;
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined8 **)(param_1 + 0x20) = puVar1;
      puVar1[0x1ec] = 0;
    }
    else {
      puVar1[0x1ec] = *(long *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar1;
    }
LAB_03424e1c:
    plVar2 = (long *)puVar1[0x1ee];
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x1ee] = 0;
      }
      else {
        puVar1[0x1ee] = *plVar2;
      }
      *(int *)(puVar1 + 0x1ed) = *(int *)(puVar1 + 0x1ed) + -1;
      *(undefined4 *)(plVar2 + 0x50) = 0;
      *(long **)(param_1 + 0x10) = plVar2;
      *(undefined4 *)((long)plVar2 + 0x284) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0x40860a91;
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 0x34;
}


