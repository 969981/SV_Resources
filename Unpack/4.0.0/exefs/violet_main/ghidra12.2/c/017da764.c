/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017da764; name: FUN_017da764
 */


bool FUN_017da764(long param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar3 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)param_2 + uVar3);
  }
  piVar1 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) + 0x50)
                               ,param_3);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
    if (4 < iVar2) {
      iVar2 = 0;
    }
  }
  return iVar2 == iVar4;
}


