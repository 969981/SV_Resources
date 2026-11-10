/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd5cdc; name: FUN_02fd5cdc
 */


void FUN_02fd5cdc(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  *param_1 = (long)&PTR_LAB_04612488;
  param_1[4] = (long)&PTR_LAB_046124d0;
  if (param_1[0x10] != 0) {
    uVar2 = *(uint *)(param_1 + 0x13);
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      plVar3 = (long *)param_1[0x12];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = -(uVar2 & 0xfffffffe);
          do {
            plVar4 = plVar3;
            if (*plVar5 != 0) {
              plVar4 = plVar3 + 1;
              *plVar3 = *plVar5;
            }
            plVar3 = plVar4;
            if (plVar5[1] != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = plVar5[1];
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0x12];
      }
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
      *(undefined1 *)((long)param_1 + 0x8c) = 0;
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0x10] + 0x28))((long *)param_1[0x10],param_1[0x12]);
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 3);
  }
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02fd5e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


