/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ecec; name: FUN_0124ecec
 */


void FUN_0124ecec(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),param_2 & 0xff)
  ;
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar2 = 0;
  if (param_2 < 5) {
    lVar2 = *(long *)(lVar3 + 0x30) + (ulong)param_2 * 0x38 + 0x28;
  }
  FUN_0124ef5c(*(undefined8 *)(lVar3 + 0x290),lVar2,param_2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,param_2 & 0xff);
  return;
}


