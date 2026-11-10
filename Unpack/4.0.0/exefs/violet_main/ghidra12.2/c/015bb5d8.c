/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bb5d8; name: FUN_015bb5d8
 */


undefined8 FUN_015bb5d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_18 [8];
  
  if (((*(long *)*param_1 == 0) ||
      (lVar1 = FUN_00efcb90(*(long *)*param_1 + 0x108,auStack_18), lVar1 == 0)) ||
     (*(char *)(lVar1 + 0x11a) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


