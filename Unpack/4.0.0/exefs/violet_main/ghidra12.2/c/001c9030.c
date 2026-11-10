/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9030; name: FUN_001c9030
 */


void FUN_001c9030(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  if ((*(long *)(param_1 + 0xc08) != -1) && (*(long *)(param_1 + 200) != 0)) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc298(param_1,3,2);
    }
    FUN_001ed1e0(&local_8);
    local_30 = *(undefined8 *)(param_1 + 0xc08);
    uStack_28 = local_8;
    FUN_001c8c10(*(undefined8 *)(param_1 + 200),&local_30,&LAB_001c9bdc);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc2d8(param_1,3);
    }
  }
  return;
}


