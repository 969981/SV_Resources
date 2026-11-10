/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f6768; name: FUN_001f6768
 */


void FUN_001f6768(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0xb8);
  bVar1 = uVar3 <= (ulong)(param_4 - param_3);
  if (bVar1) {
    param_4 = param_3 + uVar3;
  }
  lVar2 = FUN_001f8118(param_1 + 0x40,param_2,param_3,param_4 - param_3,bVar1);
  if (-1 < lVar2) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - lVar2;
  }
  return;
}


