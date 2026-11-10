/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02004980; name: FUN_02004980
 */


undefined8 FUN_02004980(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return 0;
  }
  uVar3 = 0;
  iVar1 = *param_2 - *(int *)(param_1 + 0x60);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) {
    uVar3 = 0;
    iVar2 = param_2[1] - *(int *)(param_1 + 100);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x3c))) {
      uVar3 = *(undefined8 *)
               (*(long *)(param_1 + 0x48) + (long)(iVar1 + *(int *)(param_1 + 0x38) * iVar2) * 8);
    }
  }
  return uVar3;
}


