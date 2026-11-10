/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b1b90; name: FUN_012b1b90
 */


long * FUN_012b1b90(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x3000000;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3000000,0x10);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
  }
  else {
    FUN_00cc87dc(plVar1,plVar1 + 0x16,&LAB_02ffff50);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xe0))(plVar1,"NetworkHeap::Main");
  }
  return plVar1;
}


