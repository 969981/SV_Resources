/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaa948; name: FUN_01eaa948
 */


void FUN_01eaa948(long param_1,short *param_2)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x108);
  psVar1 = *(short **)(param_1 + 0x110);
  if ((psVar4 != psVar1) && (*psVar4 != *param_2)) {
    do {
      psVar4 = psVar4 + 0x20;
      if (psVar1 == psVar4) {
        psVar4 = psVar1;
        goto LAB_01eaa970;
      }
    } while (*psVar4 != *param_2);
  }
LAB_01eaa970:
  if (psVar1 == psVar4) {
    return;
  }
  FUN_01ea3384(psVar4 + 4);
  if ((*(long *)(psVar4 + 4) != 0) && (lVar3 = *(long *)(*(long *)(psVar4 + 4) + 0x10), lVar3 != 0))
  {
    plVar2 = (long *)(lVar3 + -0x28);
    (**(code **)(*plVar2 + 0x120))(plVar2,1);
  }
  FUN_015bb494(param_1 + 0x108,psVar4);
  return;
}


