/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01605300; name: FUN_01605300
 */


bool FUN_01605300(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_2 + 8),param_3,param_4,4,0);
  return iVar1 == 1;
}


