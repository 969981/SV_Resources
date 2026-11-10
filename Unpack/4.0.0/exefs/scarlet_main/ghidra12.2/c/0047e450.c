/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e450; name: FUN_0047e450
 */


undefined8 FUN_0047e450(int *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < (int)param_2)) {
    if (*param_1 <= (int)param_2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
  }
  return uVar1;
}


