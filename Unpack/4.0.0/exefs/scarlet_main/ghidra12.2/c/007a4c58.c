/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4c58; name: FUN_007a4c58
 */


void FUN_007a4c58(undefined8 *param_1,void *param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_3 <= *(uint *)(param_1 + 1)) {
    uVar1 = param_3;
  }
  memcpy((void *)*param_1,param_2,(ulong)uVar1);
  *(uint *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return;
}


