/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b50f0; name: FUN_003b50f0
 */


undefined8 FUN_003b50f0(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == param_2) {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (*piVar4 == *param_2) {
    *(int **)(param_1 + 8) = param_2;
    uVar1 = 1;
    lVar2 = *(long *)(piVar4 + 0xc);
  }
  else {
    (**(code **)(piVar4 + 8))(param_1);
    *(int **)(param_1 + 8) = param_2;
    uVar1 = (**(code **)(param_2 + 4))(param_1);
    lVar2 = *(long *)(piVar4 + 0xc);
  }
  if (lVar5 == lVar2) {
    uVar3 = *(undefined8 *)(param_2 + 0xc);
  }
  else {
    if (lVar5 != *(long *)(piVar4 + 10)) {
      return uVar1;
    }
    uVar3 = *(undefined8 *)(param_2 + 10);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return uVar1;
}


