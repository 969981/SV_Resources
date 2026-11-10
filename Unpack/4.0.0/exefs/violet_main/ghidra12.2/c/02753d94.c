/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02753d94; name: FUN_02753d94
 */


void FUN_02753d94(long *param_1)

{
  long lVar1;
  
  if (*(char *)((long)param_1 + 0x6c) == '\0') {
    *param_1 = 0;
  }
  else if (*param_1 != 0) {
    (**(code **)PTR_DAT_047e1e48)();
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 == 0) {
      return;
    }
    FUN_013ea610(param_1 + 1);
    return;
  }
  *param_1 = 0;
  return;
}


