/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b5c97c; name: FUN_02b5c97c
 */


void FUN_02b5c97c(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_045a2ba0;
  pcVar2 = (code *)param_1[0x51];
  if (pcVar2 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar2)(param_1 + 0x54);
  }
  pcVar2 = (code *)param_1[0x41];
  if (pcVar2 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar2)(param_1 + 0x44);
  }
  pcVar2 = (code *)param_1[0x31];
  if (pcVar2 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar2)(param_1 + 0x34);
  }
  pcVar2 = (code *)param_1[0x21];
  if (pcVar2 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar2)(param_1 + 0x24);
  }
  pcVar2 = (code *)param_1[0x11];
  if (pcVar2 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar2)(param_1 + 0x14);
  }
  *param_1 = (long)(PTR_DAT_047d9450 + 0x10);
  plVar3 = param_1 + 10;
  plVar1 = plVar3;
  if (param_1[0xe] != 0) {
    plVar1 = plVar3 + param_1[0xe];
  }
  if (plVar1 != plVar3) {
    (**(code **)(*(long *)param_1[10] + 8))((long *)param_1[10],param_1);
    for (plVar3 = param_1 + 0xb; plVar1 != plVar3; plVar3 = plVar3 + 1) {
      (**(code **)(*(long *)*plVar3 + 8))((long *)*plVar3,param_1);
    }
  }
  if ((long *)param_1[4] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b5ca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x20))();
  return;
}


