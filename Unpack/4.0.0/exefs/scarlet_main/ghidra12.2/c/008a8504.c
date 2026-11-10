/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8504; name: FUN_008a8504
 */


long FUN_008a8504(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0088fc10(param_1 + 0xb0);
  if ((uVar1 & 1) == 0) {
    for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != param_1 + 0x20; lVar3 = *(long *)(lVar3 + 8)) {
      lVar2 = (**(code **)(*(long *)(lVar3 + -8) + 0xd8))((long *)(lVar3 + -8),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}


