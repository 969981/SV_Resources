/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001221f0; name: FUN_001221f0
 */


void FUN_001221f0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((param_2 & 0xfffffffe) == 0xc) {
    *puVar1 = puVar1[-2];
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar1 + -1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  FUN_0012dbd0(param_1,param_2,puVar1 + -4,puVar1 + -2,puVar1 + -4);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return;
}


