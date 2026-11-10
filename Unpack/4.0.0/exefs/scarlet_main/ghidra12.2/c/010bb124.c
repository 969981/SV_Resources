/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bb124; name: FUN_010bb124
 */


void FUN_010bb124(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x148) + 0x10))
                             (*(long **)(param_1 + 0x148),0x40,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0xe8))();
  }
  *plVar1 = 0;
  FUN_010bb1c4((undefined8 *)(param_1 + 0x148),plVar1 + 2,param_2);
  plVar1[1] = param_1 + 0x130;
  lVar2 = *(long *)(param_1 + 0x130);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0x130) = plVar1;
  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
  return;
}


