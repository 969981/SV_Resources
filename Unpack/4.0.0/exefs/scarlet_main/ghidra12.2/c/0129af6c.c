/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0129af6c; name: FUN_0129af6c
 */


bool FUN_0129af6c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x30));
  uVar3 = FUN_0129b2a0(*(undefined8 *)(lVar4 + 0x18),uVar2,param_3,param_4);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x5a,param_2,param_3,param_4);
  }
  return bVar1;
}


