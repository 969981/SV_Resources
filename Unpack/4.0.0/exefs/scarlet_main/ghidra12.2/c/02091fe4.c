/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02091fe4; name: FUN_02091fe4
 */


void FUN_02091fe4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_02092040(param_1,*param_2);
  if ((((*(long *)(lVar1 + 0x88) == 0) || (*(short *)(*(long *)(lVar1 + 0x88) + 0x1a) == 0)) &&
      (uVar2 = FUN_013f7d04(lVar1 + 0x70), (uVar2 & 1) == 0)) || (*(long *)(lVar1 + 0x80) == 0)) {
    return;
  }
  FUN_01fa245c();
  return;
}


