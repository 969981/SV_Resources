/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03473548; name: FUN_03473548
 */


void FUN_03473548(long param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_48;
  ulong uStack_40;
  float local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  plVar1 = (long *)0x0;
  if (param_5 == 0) {
    plVar1 = (long *)(param_1 + 0x150);
  }
  plVar3 = (long *)(param_1 + 0x178);
  if (param_5 != 5) {
    plVar3 = plVar1;
  }
  plVar3 = (long *)*plVar3;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar3 + 1) == param_2) break;
    plVar3 = (long *)*plVar3;
  }
  *(undefined1 *)((long)plVar3 + 0x2c) = 1;
  if (plVar3[4] != 0) {
    FUN_034e6c0c(0,*(undefined8 *)PTR_DAT_047e7038,plVar3[4],param_5,param_3,param_4,0);
    return;
  }
  local_48 = plVar3 + 2;
  if ((param_3 == 0) || (local_38 = *(float *)(plVar3 + 5), local_38 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x03473658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*local_48)(0,local_48,param_5,1);
    return;
  }
  uStack_40 = (ulong)param_5;
  local_34 = 0;
  uStack_28 = 0xd;
  local_24 = 0x101;
  local_22 = 0;
  iStack_30 = param_3;
  local_2c = param_4;
  uVar2 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_48,0);
  plVar3[4] = uVar2;
  return;
}


