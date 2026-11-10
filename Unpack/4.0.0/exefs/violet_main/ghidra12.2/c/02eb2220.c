/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb2220; name: FUN_02eb2220
 */


void FUN_02eb2220(long *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_047e3490 + 0x10);
  puVar4 = PTR_DAT_047d1a08;
  plVar5 = param_1 + 4;
  uVar6 = (ulong)*(uint *)(param_1 + 5);
  if (0 < (int)*(uint *)(param_1 + 5)) {
    lVar1 = 0;
    if (*plVar5 != 0) {
      lVar1 = *plVar5 + (long)plVar5;
    }
    plVar3 = (long *)(lVar1 + uVar6 * 0x18);
    do {
      plVar7 = plVar3 + -3;
      if (*(int *)((long)plVar3 + -0xc) < 0) {
        lVar1 = 0;
        if (*plVar7 != 0) {
          lVar1 = *plVar7 + (long)plVar7;
        }
        (**(code **)(puVar4 + 8))(0,lVar1,0);
      }
      uVar2 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar2;
      plVar3 = plVar7;
    } while (uVar2 != 0);
  }
  if (*(int *)((long)param_1 + 0x2c) < 0) {
    lVar1 = 0;
    if (*plVar5 != 0) {
      lVar1 = *plVar5 + (long)plVar5;
    }
    (**(code **)(puVar4 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02eb2308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 8))(0,param_1,0);
  return;
}


