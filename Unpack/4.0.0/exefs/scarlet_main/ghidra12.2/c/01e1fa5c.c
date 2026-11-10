/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1fa5c; name: FUN_01e1fa5c
 */


undefined4 FUN_01e1fa5c(void)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)FUN_00db90e0();
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((long)piVar2 + uVar3);
    }
  }
  return uVar1;
}


