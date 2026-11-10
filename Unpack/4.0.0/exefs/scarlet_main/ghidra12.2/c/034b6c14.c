/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b6c14; name: FUN_034b6c14
 */


void FUN_034b6c14(long param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    uVar2 = (int)param_2 + param_3;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
    plVar6 = (long *)*plVar1;
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6;
      do {
        if ((*plVar9 == param_2) && ((int)plVar9[1] == param_3)) {
          plVar8 = (long *)0x0;
          goto LAB_034b6c78;
        }
        plVar9 = (long *)plVar9[2];
      } while (plVar9 != (long *)0x0);
    }
  }
  return;
LAB_034b6c78:
  plVar7 = plVar6;
  if ((*plVar7 == param_2) && ((int)plVar7[1] == param_3)) {
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 2;
    }
    *plVar1 = plVar7[2];
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    goto LAB_034b6cc4;
  }
  plVar6 = (long *)plVar7[2];
  plVar8 = plVar7;
  if ((long *)plVar7[2] == (long *)0x0) {
LAB_034b6cc4:
    FUN_034b5984(param_1,plVar9);
    puVar5 = PTR_DAT_047e2fd0;
    if (plVar9[10] != 0) {
      *(undefined4 *)(plVar9 + 0xb) = 0;
      (**(code **)(puVar5 + 0x30))(0);
      plVar9[10] = 0;
      *(undefined4 *)((long)plVar9 + 0x5c) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x034b6d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar5 + 0x30))(0,plVar9);
    return;
  }
  goto LAB_034b6c78;
}


