/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336a884; name: FUN_0336a884
 */


undefined8 FUN_0336a884(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      lVar4 = (long)*(int *)(param_1 + 0x30) << 3;
      do {
        if (((*(int *)(*plVar3 + 0x1c) == 3) && (*(long *)(*plVar3 + 0x10) != 0)) &&
           (uVar2 = FUN_0336a884(), (uVar2 & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x98) = 1;
          return 1;
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


