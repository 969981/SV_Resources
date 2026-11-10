/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c4890; name: FUN_029c4890
 */


void FUN_029c4890(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar6;
  long *plVar5;
  long lVar7;
  
  if (*(long **)(param_1 + 8) != param_2) {
    puVar1 = PTR_DAT_047e31e8 + 0x10;
    plVar5 = *(long **)(param_1 + 8);
    do {
      plVar6 = plVar5 + -0x16;
      *plVar6 = (long)puVar1;
      lVar7 = plVar5[-0xd];
      if (lVar7 != 0) {
        plVar5[-0xc] = lVar7;
        lVar2 = plVar5[-0xb];
        plVar5 = (long *)plVar5[-10];
        uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar2 - lVar7,8);
        }
        else {
          FUN_00c48fe8(plVar5,lVar7,lVar2 - lVar7,8);
        }
      }
      plVar5 = plVar6;
    } while (param_2 != plVar6);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


