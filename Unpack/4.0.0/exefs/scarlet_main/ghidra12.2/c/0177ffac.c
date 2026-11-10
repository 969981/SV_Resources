/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177ffac; name: FUN_0177ffac
 */


void FUN_0177ffac(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  (**(code **)(*plVar1 + 0xd0))
            (plVar1,*(undefined8 *)(param_2 + 8),param_3,param_4 | 1,&LAB_01080c70,param_1,0,0,0);
  return;
}


