/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c48b0; name: FUN_003c48b0
 */


undefined8 FUN_003c48b0(long param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0xa8) + 0x110) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0xa8) + 0x108) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (iVar1 == 0xc) {
        return 1;
      }
    }
    else if ((iVar1 == 0) || (iVar1 == 0x14)) {
      return 1;
    }
  }
  return 0;
}


