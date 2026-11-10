/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea9b90; name: FUN_01ea9b90
 */


void FUN_01ea9b90(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x108);
  if (lVar2 != *(long *)(param_1 + 0x110)) {
    do {
      FUN_01ea3384(lVar2 + 8);
      if ((*(long *)(lVar2 + 8) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 8) + 0x10), lVar3 != 0)) {
        plVar1 = (long *)(lVar3 + -0x28);
        (**(code **)(*plVar1 + 0x120))(plVar1,1);
      }
      lVar2 = FUN_015bb494(param_1 + 0x108,lVar2);
    } while (*(long *)(param_1 + 0x110) != lVar2);
  }
  return;
}


