/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248894; name: FUN_01248894
 */


void FUN_01248894(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((ulong)*(byte *)(param_1 + 0x2420) != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_1 + lVar2;
      if (*(int *)(lVar1 + 8) == param_2) {
        *(undefined1 *)(lVar1 + 0x91) = 1;
        lVar2 = FUN_01248948(param_1,lVar1 + 8,param_2);
        if (lVar2 == 0) {
          return;
        }
        *(undefined1 *)(lVar2 + 0x89) = 1;
        lVar2 = FUN_01248948(param_1,lVar2,param_2);
        if (lVar2 == 0) {
          return;
        }
        do {
          *(undefined1 *)(lVar2 + 0x89) = 1;
          lVar2 = FUN_01248948(param_1,lVar2,param_2);
        } while (lVar2 != 0);
        return;
      }
      lVar2 = lVar2 + 0x8c;
    } while ((ulong)*(byte *)(param_1 + 0x2420) * 0x8c != lVar2);
  }
  return;
}


