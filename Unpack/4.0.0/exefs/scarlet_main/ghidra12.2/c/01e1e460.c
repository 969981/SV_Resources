/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1e460; name: FUN_01e1e460
 */


undefined4 FUN_01e1e460(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x570) != '\0') {
    lVar2 = *(long *)(param_1 + 0x578);
    lVar1 = *(long *)(param_1 + 0x580) - lVar2;
    if (lVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(lVar2 + uVar3 * 0x2dc + 4) == param_2) {
          if ((int)uVar3 < 0) {
            return 2;
          }
          return *(undefined4 *)(lVar2 + uVar3 * 0x2dc);
        }
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (uVar3 < (ulong)((lVar1 >> 2) * 0x6fe99e1395aedd07));
    }
  }
  return 2;
}


