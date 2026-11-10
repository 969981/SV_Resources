/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dbfdc; name: FUN_008dbfdc
 */


long FUN_008dbfdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != -1) {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar1 = *(long *)(param_1 + 0x78);
      lVar2 = 0;
      do {
        if (*(long *)(lVar1 + 0x18) == param_2) {
          return lVar1;
        }
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x98;
      } while (lVar2 < *(int *)(param_1 + 0x68));
    }
    lVar2 = 0;
    if ((*(long *)(param_1 + 0x4a8) == 0) || (lVar2 = FUN_008dbfdc(), lVar2 != 0)) {
      return lVar2;
    }
    FUN_008d4680("Appointed Primitive is not found from Resident Resource.\n");
  }
  return 0;
}


