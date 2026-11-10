/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035a760; name: FUN_0035a760
 */


undefined8 FUN_0035a760(long param_1,uint param_2)

{
  uint16_t uVar1;
  
  if ((*(char *)(param_1 + 1) != '\x1c') && (*(char *)(param_1 + 1) != '\x02')) {
    return 0;
  }
  if (0xffff < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = htons((uint16_t)param_2);
  *(uint16_t *)(param_1 + 2) = uVar1;
  return 1;
}


