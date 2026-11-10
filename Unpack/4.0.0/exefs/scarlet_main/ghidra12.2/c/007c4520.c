/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c4520; name: FUN_007c4520
 */


int FUN_007c4520(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [24];
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_007c6f10(*(undefined8 *)(param_1 + 8),(long)iVar1,param_2,auStack_58 + 0x18);
  iVar1 = iVar1 + -1;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


