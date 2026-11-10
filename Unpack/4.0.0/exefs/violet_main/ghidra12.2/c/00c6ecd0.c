/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6ecd0; name: FUN_00c6ecd0
 */


void FUN_00c6ecd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(char *)(param_1 + 0x57a) != '\0') || (*(char *)(param_1 + 0x57b) != '\0')) {
    puVar2 = *(undefined8 **)(param_1 + 0x1b0);
    puVar1 = *(undefined8 **)(param_1 + 0x1b8);
    *(undefined2 *)(param_1 + 0x57a) = 0;
    if ((puVar2 != puVar1) && (FUN_00c6ed58(*puVar2,1), puVar2 + 1 != puVar1)) {
      FUN_00c6ed58(puVar2[1],1);
      for (puVar2 = puVar2 + 2; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        FUN_00c6ed58(*puVar2,1);
      }
    }
  }
  return;
}


