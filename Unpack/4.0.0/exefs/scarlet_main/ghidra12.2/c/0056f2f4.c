/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056f2f4; name: FUN_0056f2f4
 */


void FUN_0056f2f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_047ce128 + 0x10);
  if ((param_1 != (long *)PTR_DAT_047ce120) && (lVar1 = param_1[2], lVar1 != 0)) {
    FUN_00584560(lVar1);
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    operator_delete(param_1);
    return;
  }
  if ((*(byte *)(plVar2 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  operator_delete(param_1);
  return;
}


