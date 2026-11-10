/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c3770; name: FUN_034c3770
 */


bool FUN_034c3770(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  piVar3 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  piVar5 = piVar3;
  if ((uVar2 != 0) && (*piVar3 != param_2)) {
    lVar6 = (ulong)uVar2 * 4;
    piVar4 = piVar3;
    do {
      lVar6 = lVar6 + -4;
      if (lVar6 == 0) {
        piVar5 = piVar3 + uVar2;
        goto LAB_034c37bc;
      }
      piVar5 = piVar4 + 1;
      piVar1 = piVar4 + 1;
      piVar4 = piVar5;
    } while (*piVar1 != param_2);
  }
LAB_034c37bc:
  return piVar3 + uVar2 != piVar5;
}


