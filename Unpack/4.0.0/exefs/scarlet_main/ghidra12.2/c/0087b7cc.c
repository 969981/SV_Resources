/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087b7cc; name: FUN_0087b7cc
 */


long * FUN_0087b7cc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))
                             (param_2,0x198,
                              "D:/Jenkins/ws/wwise_v2021.1/Wwise/SDK/source/SoundEngine/Plugins/Effects/MasteringSuite/MasteringSuiteFXParams.cpp"
                              ,0xa9);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)(PTR_DAT_047d1db0 + 0x10);
    memcpy(plVar1 + 1,(void *)(param_1 + 8),400);
  }
  return plVar1;
}


