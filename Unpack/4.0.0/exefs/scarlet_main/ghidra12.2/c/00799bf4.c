/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00799bf4; name: FUN_00799bf4
 */


void FUN_00799bf4(long param_1,long *param_2)

{
  undefined1 auStack_20 [16];
  
  *(long **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 0x108))(auStack_20,param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}


