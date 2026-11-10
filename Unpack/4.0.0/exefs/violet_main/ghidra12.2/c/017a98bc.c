/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a98bc; name: FUN_017a98bc
 */


void FUN_017a98bc(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0x100) = 4;
  if ((((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
      (*(long *)(param_1 + 0xe0) != 0)) &&
     (((lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x38), *(char *)(lVar1 + 0x8c) != '\0' &&
       (*(int *)(lVar1 + 0x30) == 3)) ||
      ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x49b) >> 1 & 1) != 0)))) {
    local_18 = 0xe600cdcd2ecbb3e9;
    FUN_0133edbc(*(long *)(param_1 + 0x50),&local_18);
  }
  return;
}


