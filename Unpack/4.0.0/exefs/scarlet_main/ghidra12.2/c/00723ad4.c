/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00723ad4; name: FUN_00723ad4
 */


void FUN_00723ad4(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047d0368 + 0x10);
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_00723960(param_1);
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    operator_delete(param_1);
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  operator_delete(param_1);
  return;
}


