/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b83eac; name: FUN_02b83eac
 */


undefined8 FUN_02b83eac(float param_1,long param_2,int param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  plVar1 = *(long **)(*(long *)(param_2 + 0x200) + 0x60);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_3,(int)(param_1 * 1000.0),4);
  return 1;
}


