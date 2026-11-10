/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d42f0; name: FUN_008d42f0
 */


void FUN_008d42f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x1fU & 0xffffffffffffffe0;
  (**(code **)(**(long **)PTR_DAT_047d2530 + 0x10))(*(long **)PTR_DAT_047d2530,uVar1,param_2);
  *(ulong *)PTR_DAT_047d2538 = *(long *)PTR_DAT_047d2538 + uVar1;
  return;
}


