/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f3a34; name: FUN_014f3a34
 */


undefined4 FUN_014f3a34(undefined8 *param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)*param_1;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 == 0)) {
    return 0;
  }
  return *(undefined4 *)((long)piVar1 + uVar2);
}


