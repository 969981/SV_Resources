/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271ae4c; name: FUN_0271ae4c
 */


void FUN_0271ae4c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar7;
  long *plVar6;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar6 = *(long **)(param_1 + 8);
    do {
      plVar7 = plVar6 + -8;
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        lVar1 = plVar6[-6];
        plVar2 = (long *)plVar6[-5];
        plVar6[-7] = lVar5;
        uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
        }
        else {
          FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
        }
      }
      plVar6 = plVar7;
    } while (param_2 != plVar7);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


