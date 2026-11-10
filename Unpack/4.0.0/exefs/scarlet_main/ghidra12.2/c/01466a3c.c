/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01466a3c; name: FUN_01466a3c
 */


undefined4 FUN_01466a3c(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)param_1[1];
  if ((piVar2 == (int *)0x0) && (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) {
    return 0;
  }
  puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar5 = 0;
  if ((((6 < *puVar3) && ((ulong)puVar3[3] != 0)) &&
      (8 < *puVar3 && *(char *)((long)piVar2 + (ulong)puVar3[3]) == '\x02')) &&
     ((ulong)puVar3[4] != 0)) {
    puVar1 = (uint *)((long)piVar2 + (ulong)puVar3[4]);
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 != 0)) {
      uVar5 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  return uVar5;
}


