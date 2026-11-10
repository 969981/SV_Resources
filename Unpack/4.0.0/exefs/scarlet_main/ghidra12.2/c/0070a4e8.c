/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0070a4e8; name: FUN_0070a4e8
 */


void FUN_0070a4e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d01e8 + 0x10);
  if (param_1 != (long *)PTR_DAT_047d01e0) {
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      FUN_00719018(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
      FUN_00534a90(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


