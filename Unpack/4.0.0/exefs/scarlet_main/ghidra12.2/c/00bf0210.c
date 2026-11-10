/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf0210; name: FUN_00bf0210
 */


void FUN_00bf0210(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x198))();
  FUN_00b7ce18(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 0x98),
               *(long *)(param_3 + 0x70),uVar1);
  return;
}


