/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259558; name: FUN_01259558
 */


void FUN_01259558(long *param_1)

{
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = (param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar1 < (ulong)((param_1[2] - *param_1 >> 3) * 0x6db6db6db6db6db7)) {
    FUN_01259c00(auStack_48,uVar1,uVar1,param_1 + 3);
    FUN_01259c90(param_1,auStack_48);
    FUN_01259d38(auStack_48);
  }
  return;
}


