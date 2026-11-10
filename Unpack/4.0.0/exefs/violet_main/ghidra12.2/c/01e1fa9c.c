/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1fa9c; name: FUN_01e1fa9c
 */


undefined4 FUN_01e1fa9c(void)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)FUN_00db90e0();
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar3 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((long)piVar2 + uVar3);
    }
  }
  return uVar1;
}


