/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00362330; name: FUN_00362330
 */


void FUN_00362330(void)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_047cceb0 == 0) ||
     (iVar1 = (**(code **)(PTR_PTR_047cceb8 + 0x20))(), iVar1 == 0)) {
    *(undefined4 *)PTR_DAT_047ccec0 = 0;
    return;
  }
  return;
}


