/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b90bc; name: FUN_028b90bc
 */


int FUN_028b90bc(long param_1,byte param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == *(long *)(param_1 + 0x38)) {
    FUN_0157184c(param_1,1);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar1 + -1;
  *(byte *)(lVar1 + -1) = param_2 & 1;
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}


