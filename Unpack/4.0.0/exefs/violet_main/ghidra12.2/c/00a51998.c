/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a51998; name: FUN_00a51998
 */


bool FUN_00a51998(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  iVar1 = FUN_00a503ec(param_1,param_2,0);
  piVar2 = *(int **)(param_1 + 0x6448);
  uVar3 = *(long *)(param_1 + 0x6450) - (long)piVar2;
  if (0 < (int)(uVar3 >> 4)) {
    uVar3 = uVar3 >> 4 & 0xffffffff;
    do {
      if ((*(byte *)(piVar2 + 3) & 1) == 0) {
        return *piVar2 <= iVar1;
      }
      piVar2 = piVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return false;
}


