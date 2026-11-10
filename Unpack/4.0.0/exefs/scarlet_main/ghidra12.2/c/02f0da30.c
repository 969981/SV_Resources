/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0da30; name: FUN_02f0da30
 */


void FUN_02f0da30(ulong *param_1,uint *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((char)param_3[1] == '\0') {
    **(undefined4 **)(param_2 + 2) = 0x7fffffff;
    uVar2 = (ulong)*param_2;
  }
  else {
    lVar1 = *param_3;
    **(uint **)(param_2 + 2) = (uint)lVar1 & 0xffffff;
    uVar2 = lVar1 + 0x1000000U & 0xffffffffff000000 | (ulong)*param_2 & 0xffffff;
  }
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


