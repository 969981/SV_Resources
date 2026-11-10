/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edac94; name: FUN_01edac94
 */


void FUN_01edac94(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 0x7cb0);
  iVar2 = *(int *)(param_3 + 8);
  if ((((((*piVar3 == iVar2) || (piVar3 = (int *)(param_2 + 0x7cc0), *piVar3 == iVar2)) ||
        (piVar3 = (int *)(param_2 + 0x7cd0), *piVar3 == iVar2)) ||
       ((piVar3 = (int *)(param_2 + 0x7ce0), *piVar3 == iVar2 ||
        (piVar3 = (int *)(param_2 + 0x7cf0), *piVar3 == iVar2)))) ||
      ((piVar3 = (int *)(param_2 + 32000), *piVar3 == iVar2 ||
       ((piVar3 = (int *)(param_2 + 0x7d10), *piVar3 == iVar2 ||
        (piVar3 = (int *)(param_2 + 0x7d20), *piVar3 == iVar2)))))) ||
     ((piVar3 = (int *)(param_2 + 0x7d30), *piVar3 == iVar2 ||
      (piVar3 = (int *)(param_2 + 0x7d40), *piVar3 == iVar2)))) {
    uVar1 = *(undefined8 *)(piVar3 + 2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)piVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


