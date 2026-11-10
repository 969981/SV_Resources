/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff61c; name: FUN_007ff61c
 */


undefined8 FUN_007ff61c(long param_1)

{
  long *plVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar2 = 0;
    do {
      plVar1 = (long *)FUN_008013e4(*(undefined8 *)(param_1 + 0x1308),uVar2);
      if ((((plVar1 != (long *)0x0) && (*plVar1 != *(long *)(*(long *)(param_1 + 0x1308) + 0x18)))
          && (*(char *)((long)plVar1 + 0x5a) != '\0')) && ((int)plVar1[2] != 0xd)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0x114e));
  }
  return 1;
}


