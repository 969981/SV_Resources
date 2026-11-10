/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242e68; name: FUN_01242e68
 */


void FUN_01242e68(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  piVar3 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),
                               uVar2);
  if (piVar3 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar3;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  FUN_01242ecc(*(undefined8 *)(param_2 + 0x290),iVar1,*(undefined1 *)(param_1 + 0x95));
  return;
}


