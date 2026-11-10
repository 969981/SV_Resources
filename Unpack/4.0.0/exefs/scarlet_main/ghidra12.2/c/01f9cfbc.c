/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9cfbc; name: FUN_01f9cfbc
 */


bool FUN_01f9cfbc(undefined8 param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    piVar3 = (int *)0x0;
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar2);
      piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar2 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (long)*(char *)((long)piVar3 + uVar2) & 0xffffffff;
  }
  return *(long *)(PTR_DAT_047d5608 + uVar2 * 8) == 2;
}


