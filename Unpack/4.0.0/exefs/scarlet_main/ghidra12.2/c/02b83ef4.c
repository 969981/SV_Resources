/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b83ef4; name: FUN_02b83ef4
 */


bool FUN_02b83ef4(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0x98))
                    (plVar2,*(undefined8 *)(param_2 + 8),0xffffffffffffffff,param_3,4,0);
  return iVar1 == 1;
}


