/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027032f0; name: FUN_027032f0
 */


void FUN_027032f0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_3 + 8);
  lVar3 = *plVar2;
  plVar1 = (long *)(param_2 + 8);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(byte *)(param_3 + 0x58) = *(byte *)(param_3 + 0x58) | 0x10;
  return;
}


