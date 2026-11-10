/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f69e0; name: FUN_028f69e0
 */


void FUN_028f69e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x40);
  for (plVar1 = *(long **)(param_1 + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 4) {
    (*(code *)**(undefined8 **)(*plVar1 + 0x400))(*plVar1 + 0x400);
  }
  FUN_028f6a40((long *)(param_1 + 0x38));
  FUN_028f6ad0(param_1);
  return;
}


