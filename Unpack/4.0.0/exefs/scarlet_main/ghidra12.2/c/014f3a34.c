/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


