/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016ab43c; name: FUN_016ab43c
 */


ulong FUN_016ab43c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_016ab48c();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_015a02dc(param_1,uVar1 >> 0x20), lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 8);
  }
  return uVar1;
}


