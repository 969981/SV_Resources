/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a4e78; name: FUN_029a4e78
 */


bool FUN_029a4e78(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  puVar1 = (uint *)((long)puVar1 + (param_2 >> 0x1e & 0x3fffffffc) + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 == 0)) {
    return false;
  }
  return *(char *)((long)piVar2 + uVar3) != '\0';
}


