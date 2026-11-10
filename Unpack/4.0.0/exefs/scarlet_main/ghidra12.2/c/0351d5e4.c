/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351d5e4; name: FUN_0351d5e4
 */


void FUN_0351d5e4(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  puVar4 = PTR_DAT_047e2fd0;
  lVar3 = *plVar5;
  while (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 1) {
      FUN_035187ac(*(undefined8 *)(lVar3 + 0x10));
    }
    lVar6 = *(long *)(lVar3 + 0x18);
    plVar1 = plVar5;
    if (*plVar5 != lVar3) {
      plVar1 = (long *)&DAT_00000018;
    }
    *plVar1 = lVar6;
    (**(code **)(puVar4 + 0x30))(0,lVar3);
    lVar3 = lVar6;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80) = 0;
    plVar5 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[9] + -1, *(int *)(plVar5 + 9) = iVar2, iVar2 == 0)) {
      if (plVar5[2] == 0) {
        FUN_03518540(plVar5);
      }
      else {
        FUN_0351c44c(plVar5[2],plVar5);
        plVar5[2] = 0;
      }
      (**(code **)(*plVar5 + 0x50))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x0351d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar5);
      return;
    }
  }
  return;
}


