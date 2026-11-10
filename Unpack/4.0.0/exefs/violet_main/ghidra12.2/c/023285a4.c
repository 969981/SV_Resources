/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023285a4; name: FUN_023285a4
 */


void FUN_023285a4(float param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x200) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x023285d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1,1,param_3,(int)(param_1 * 1000.0),param_4);
  return;
}


