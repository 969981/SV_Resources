/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b9350; name: FUN_029b9350
 */


void FUN_029b9350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *local_90 [13];
  long local_28;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x3ffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0x3ffffffffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  param_1[7] = 0;
  param_1[8] = uVar1;
  plVar2 = (long *)param_2[7];
  local_90[0] = param_1;
  if (plVar2 != (long *)0x0) {
    do {
      if (plVar2[6] != 0) {
        local_28 = plVar2[6];
        FUN_029b981c(local_90,plVar2 + 2,&local_28);
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  FUN_02e4d858(local_90);
  return;
}


