/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ded94; name: FUN_007ded94
 */


void FUN_007ded94(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_007e5328(param_1 + 0x68);
  if ((lVar2 == param_2) && (uVar1 = FUN_007e5330(param_1 + 0x68), param_3 == (uVar1 & 0xffff))) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}


