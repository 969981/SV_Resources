/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028eb054; name: FUN_028eb054
 */


void FUN_028eb054(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
                    /* WARNING: Could not recover jumptable at 0x028eb094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(puVar1 + 4);
    return;
  }
  return;
}


