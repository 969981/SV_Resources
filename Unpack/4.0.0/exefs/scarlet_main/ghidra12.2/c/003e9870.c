/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e9870; name: FUN_003e9870
 */


long FUN_003e9870(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar3 = (long *)(param_1 + 0x40);
  lVar2 = *plVar3;
  FUN_003e9560(param_1,7,0,param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x40) = *plVar3;
  }
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 0x48) = lVar1;
  }
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return lVar2;
}


