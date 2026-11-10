/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271783c; name: FUN_0271783c
 */


void FUN_0271783c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != param_2) {
    lVar7 = 0;
    do {
      lVar5 = lVar6 + lVar7;
      if (*(char *)(lVar5 + -0x28) != '\0') {
        if (*(long **)(lVar5 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -8) + 0x20))();
        }
        *(undefined1 *)(lVar5 + -0x28) = 0;
      }
      lVar4 = *(long *)(lVar5 + -0x60);
      if (lVar4 != 0) {
        plVar1 = *(long **)(lVar5 + -0x48);
        *(long *)(lVar5 + -0x58) = lVar4;
        lVar5 = *(long *)(lVar5 + -0x50) - lVar4;
        uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,1);
        }
        else {
          FUN_00c48fe8(plVar1,lVar4,lVar5,1);
        }
      }
      lVar7 = lVar7 + -0x60;
    } while (param_2 - lVar6 != lVar7);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


