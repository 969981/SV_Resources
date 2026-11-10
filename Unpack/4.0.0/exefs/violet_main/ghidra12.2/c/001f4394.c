/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4394; name: FUN_001f4394
 */


undefined8 FUN_001f4394(long param_1)

{
  undefined8 uVar1;
  long local_8;
  
  if (**(long **)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      uVar1 = 0xfffffe0a;
    }
    else {
      uVar1 = FUN_001f4184(&local_8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10))
      ;
      if ((int)uVar1 == 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        **(long **)(param_1 + 8) = local_8;
        *(long *)(param_1 + 8) = local_8;
        *(long *)(local_8 + 0x18) = *(long *)(local_8 + 0x18) + *(long *)(param_1 + 0x38);
        *(long *)(*(long *)(param_1 + 8) + 0x20) =
             *(long *)(*(long *)(param_1 + 8) + 0x20) + *(long *)(param_1 + 0x38);
      }
    }
  }
  else {
    uVar1 = 0;
    *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
  }
  return uVar1;
}


