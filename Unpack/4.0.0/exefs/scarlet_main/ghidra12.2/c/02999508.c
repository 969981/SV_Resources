/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999508; name: FUN_02999508
 */


bool FUN_02999508(long param_1,int *param_2,undefined4 param_3)

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
    if (iVar4 == 5) {
      return *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 0x18) == 0;
    }
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


