/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988544; name: FUN_02988544
 */


uint FUN_02988544(undefined8 param_1,uint param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_01243584();
  if ((param_4 & 1) == 0) {
    uVar1 = FUN_0298d124(*(undefined8 *)(lVar2 + 0x20),param_2,param_3);
    FUN_0129aff0(*(undefined8 *)(lVar2 + 0x18),0x67,param_2 & 0xff,param_3);
    return uVar1 & 1;
  }
  uVar1 = FUN_0298d12c(*(undefined8 *)(lVar2 + 0x20));
  FUN_0129aff0(*(undefined8 *)(lVar2 + 0x18),0x68,param_2 & 0xff,param_3);
  return uVar1 & 1;
}


