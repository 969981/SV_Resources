/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea3f4c; name: FUN_01ea3f4c
 */


void FUN_01ea3f4c(long param_1,long *param_2,uint param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x4058);
  lVar2 = *(long *)(param_1 + 0x4060);
  if (lVar1 == lVar2) {
LAB_01ea3f7c:
    if ((lVar1 != lVar2) && (lVar1 = *(long *)(lVar1 + 0x70), lVar1 != 0)) {
      if (*(char *)(lVar1 + 0x146) == '\0') {
        *(undefined1 *)(lVar1 + 0x146) = 1;
        *(uint *)(lVar1 + 0x148) = param_3 & 0xffff | param_4 << 0x10;
        return;
      }
      *(uint *)(lVar1 + 0x148) = param_3 & 0xffff | param_4 << 0x10;
      return;
    }
  }
  else {
    do {
      if (*(long *)(lVar1 + 8) == *param_2) goto LAB_01ea3f7c;
      lVar1 = lVar1 + 0xb0;
    } while (lVar2 != lVar1);
  }
  return;
}


