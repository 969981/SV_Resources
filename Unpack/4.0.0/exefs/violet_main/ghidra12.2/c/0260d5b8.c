/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0260d5b8; name: FUN_0260d5b8
 */


bool FUN_0260d5b8(int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*(ushort *)((long)param_1 - (long)*param_1) < 7) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3];
    piVar3 = (int *)0x0;
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
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
  return *(long *)(PTR_DAT_047d5608 + uVar2 * 8) == 8;
}


