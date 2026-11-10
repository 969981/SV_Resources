/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea3870; name: FUN_01ea3870
 */


bool FUN_01ea3870(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_2 == 0) || (*(short *)(*param_2 + 0x1a) == 0)) {
    return false;
  }
  lVar1 = *(long *)(param_1 + 0x4058);
  lVar3 = *(long *)(param_1 + 0x4060);
  lVar2 = lVar1;
  if (lVar1 != lVar3) {
    do {
      if (((*(long *)(lVar2 + 8) != 0) && (*(short *)(*(long *)(lVar2 + 8) + 0x1a) != 0)) &&
         (*(long *)(lVar2 + 8) == *param_2)) goto LAB_01ea38e0;
      lVar2 = lVar2 + 0xb0;
    } while (lVar3 != lVar2);
    lVar2 = lVar3;
LAB_01ea38e0:
    lVar1 = *(long *)(param_1 + 0x4060);
  }
  return lVar1 != lVar2;
}


