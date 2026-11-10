/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03471674; name: FUN_03471674
 */


void FUN_03471674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar1 = param_1 + 0xe0;
    bVar2 = *(int *)(param_1 + 0x110) != 0;
    lVar6 = lVar1;
    if (bVar2) {
      lVar6 = param_1 + 0x100;
    }
    lVar4 = 0xe8;
    if (bVar2) {
      lVar4 = 0x108;
    }
    plVar7 = *(long **)(param_1 + lVar4);
    plVar8 = (long *)(lVar6 + 8);
    lVar4 = *plVar8;
    puVar9 = (uint *)(lVar6 + 0x10);
    uVar5 = (ulong)*puVar9;
    if ((long *)(lVar4 + uVar5 * 8) != plVar7) {
      do {
        plVar3 = (long *)*plVar7;
        if ((plVar3[0x12] != 0) && (0 < *(short *)(plVar3[0x12] + 0x90))) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,param_2,param_3,param_4);
          lVar4 = *plVar8;
          uVar5 = (ulong)*puVar9;
        }
        plVar7 = plVar7 + 1;
        if ((lVar1 != lVar6) && (plVar7 == (long *)(lVar4 + uVar5 * 8))) {
          plVar7 = *(long **)(param_1 + 0xe8);
          lVar6 = lVar1;
        }
        plVar8 = (long *)(lVar6 + 8);
        lVar4 = *plVar8;
        puVar9 = (uint *)(lVar6 + 0x10);
        uVar5 = (ulong)*puVar9;
      } while ((long *)(lVar4 + uVar5 * 8) != plVar7);
    }
  }
  return;
}


