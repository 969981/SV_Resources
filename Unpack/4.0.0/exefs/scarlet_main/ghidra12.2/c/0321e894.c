/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321e894; name: FUN_0321e894
 */


uint FUN_0321e894(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long local_28;
  
  lVar6 = *(long *)(param_2 + 8);
  local_28 = param_1;
  lVar1 = FUN_0321e944(lVar6,&local_28);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 4);
    uVar3 = ((int)lVar1 - (int)*(undefined8 *)(lVar6 + 0x10)) * 0x20000000;
  }
  if ((int)(uVar2 | uVar3) < 0) {
    uVar5 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (0 < (int)(uVar5 >> 3)) {
      uVar4 = 0;
      do {
        if (*(long *)(*(long *)(param_2 + 0x10) + uVar4 * 8) == local_28) {
          return ~(uint)uVar4 >> 0x1f;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar5 >> 3 & 0xffffffff) != uVar4);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


