/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071ea48; name: FUN_0071ea48
 */


void FUN_0071ea48(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047d02e0 + 0x10);
  if (((param_1[1] & 1U) != 0) &&
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0 && plVar1 != (long *)0x0)) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  FUN_0071eac0(param_1);
  operator_delete(param_1);
  return;
}


