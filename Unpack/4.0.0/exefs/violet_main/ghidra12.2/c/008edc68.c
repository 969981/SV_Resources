/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008edc68; name: FUN_008edc68
 */


void FUN_008edc68(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((char)param_1[0xc] != '\0') {
    if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + (long)*param_1 * 2 + 4)) {
      *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + (long)*param_1 * 2 + 4);
    }
    piVar4 = param_1 + (long)*param_1 * 0x6c + 0xe;
    FUN_008f0940(piVar4,0,*(undefined8 *)(piVar4 + 0x12));
    FUN_008f093c(piVar4);
    iVar3 = 2;
    if (param_1[1] == 3) {
      iVar3 = 3;
    }
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = (*param_1 + 1) / iVar3;
    }
    iVar3 = (*param_1 + 1) - iVar1 * iVar3;
    piVar4 = param_1 + (long)iVar3 * 0x6c + 0xe;
    *param_1 = iVar3;
    piVar4[0x68] = 0;
    piVar4[0x69] = 0;
    uVar2 = FUN_008f0928(piVar4);
    *(undefined8 *)(piVar4 + 0x6a) = uVar2;
    iVar3 = *param_1;
    (param_1 + (long)iVar3 * 2 + 4)[0] = 0;
    (param_1 + (long)iVar3 * 2 + 4)[1] = 0;
  }
  return;
}


