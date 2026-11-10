/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6bb0; name: FUN_006c6bb0
 */


undefined8 FUN_006c6bb0(long param_1)

{
  undefined8 uVar1;
  long local_28;
  
  FUN_006c6e5c(param_1 + 0xe0);
  if (*(char *)(param_1 + 0x110) == '\0') {
    local_28 = 0;
    FUN_006c6298(param_1,&local_28);
    if (local_28 == 0) {
      FUN_006c6558(param_1,&local_28);
      if (local_28 == 0) goto LAB_006c6bd8;
    }
    FUN_006c61e4(param_1);
    uVar1 = 1;
  }
  else {
LAB_006c6bd8:
    uVar1 = 0;
  }
  FUN_006c6e94(param_1 + 0xe0);
  return uVar1;
}


