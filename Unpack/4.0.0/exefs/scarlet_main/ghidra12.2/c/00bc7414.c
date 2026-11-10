/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc7414; name: FUN_00bc7414
 */


void FUN_00bc7414(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x18),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00c0d4cc(2,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


