/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4658; name: FUN_001f4658
 */


void FUN_001f4658(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_001ed56c(param_2);
  *param_1 = uVar2 >> 8 & 0xffffff;
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)(param_2 + 4);
  uVar1 = FUN_001ed56c(param_2 + 5);
  *(uint *)(param_1 + 1) = uVar1 & 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


