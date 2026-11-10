/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00129640; name: FUN_00129640
 */


long FUN_00129640(undefined8 param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_00129fd0(param_1,6,(long)(int)(param_2 * 8 + 0x20));
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(char *)(lVar1 + 10) = (char)param_2;
  if (param_2 != 0) {
    memset((undefined8 *)(lVar1 + 0x18) + ((long)(int)param_2 - (ulong)(param_2 - 1)),0,
           (ulong)param_2 << 3);
  }
  return lVar1;
}


