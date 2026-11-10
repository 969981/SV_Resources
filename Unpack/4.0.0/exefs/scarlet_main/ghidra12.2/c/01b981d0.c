/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b981d0; name: FUN_01b981d0
 */


undefined1  [16] FUN_01b981d0(long *param_1,code *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined1 auVar3 [16];
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_01b97f8c(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      puVar1 = (undefined8 *)(*param_2)();
      uVar4 = puVar1[1];
      uVar2 = *puVar1;
      FUN_01b98018(&local_30);
      goto LAB_01b98240;
    }
  }
  FUN_01b98018(&local_30);
  uVar2 = 0;
  uVar4 = 0;
LAB_01b98240:
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


