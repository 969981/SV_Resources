/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109ed9c; name: FUN_0109ed9c
 */


void FUN_0109ed9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x180) + 0x10))
                             (*(long **)(param_1 + 0x180),0x78,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x180) + 0xe8))();
  }
  *plVar1 = 0;
  FUN_0109ee3c((undefined8 *)(param_1 + 0x180),plVar1 + 2,param_2);
  plVar1[1] = param_1 + 0x168;
  lVar2 = *(long *)(param_1 + 0x168);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0x168) = plVar1;
  *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
  return;
}


