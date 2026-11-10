/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012500d0; name: FUN_012500d0
 */


void FUN_012500d0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),param_2 & 0xff)
  ;
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0298d04c(*(undefined8 *)(param_1 + 0x20),param_2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3e,param_2 & 0xff);
  return;
}


