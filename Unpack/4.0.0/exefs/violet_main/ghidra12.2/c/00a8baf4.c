/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a8baf4; name: FUN_00a8baf4
 */


undefined8 FUN_00a8baf4(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x328);
  if (piVar2 != *(int **)(param_1 + 0x330)) {
    do {
      iVar1 = *piVar2;
      if (((((iVar1 == *(int *)(param_1 + 0x6d8)) || (iVar1 == *(int *)(param_1 + 0x6dc))) ||
           (iVar1 == *(int *)(param_1 + 0x6e0))) ||
          (((iVar1 == *(int *)(param_1 + 0x6e4) || (iVar1 == *(int *)(param_1 + 0x6e8))) ||
           ((iVar1 == *(int *)(param_1 + 0x6ec) ||
            ((iVar1 == *(int *)(param_1 + 0x6f0) || (iVar1 == *(int *)(param_1 + 0x6f4))))))))) ||
         ((iVar1 == *(int *)(param_1 + 0x6f8) ||
          (((((iVar1 == *(int *)(param_1 + 0x6fc) || (iVar1 == *(int *)(param_1 + 0x700))) ||
             (iVar1 == *(int *)(param_1 + 0x704))) ||
            ((iVar1 == *(int *)(param_1 + 0x708) || (iVar1 == *(int *)(param_1 + 0x70c))))) ||
           ((iVar1 == *(int *)(param_1 + 0x710) || (iVar1 == *(int *)(param_1 + 0x714))))))))) {
        return 1;
      }
      piVar2 = piVar2 + 2;
    } while (*(int **)(param_1 + 0x330) != piVar2);
  }
  return 0;
}


