/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03102f44; name: FUN_03102f44
 */


void FUN_03102f44(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint local_58 [2];
  
  if (((param_3 != 0) && (*(char *)(param_2 + 0x5c) != '\x04')) &&
     (lVar6 = (long)*(int *)(param_2 + 0x58), *(int *)(param_2 + 0x58) < *(int *)(param_2 + 0x50)))
  {
    uVar3 = 0xffffffff;
    do {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x48) + lVar6 * 4) >> 0x16;
      if (uVar1 != uVar3) {
        local_58[0] = uVar1;
        lVar2 = FUN_030b04f4((long *)(param_3 + 0x18),local_58);
        if (lVar2 == 0) {
          uVar4 = 0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (ulong)*(uint *)(lVar2 + 4);
          uVar4 = (lVar2 - *(long *)(param_3 + 0x28)) * 0x20000000;
        }
        uVar3 = uVar1;
        if ((-1 < (int)(uVar5 | uVar4)) &&
           ((*(byte *)(*(long *)(param_3 + 0x18) + ((long)((uVar5 | uVar4) << 0x20) >> 0x1d) + 4) >>
             5 & 1) != 0)) {
          FUN_03102a8c(param_2,param_4);
          break;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_2 + 0x50));
  }
  if ((*(byte *)(param_2 + 0x5c) & 0xfd) == 1) {
    FUN_031012d8(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


