/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0bf18; name: FUN_00d0bf18
 */


void FUN_00d0bf18(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *local_38;
  long *local_30 [2];
  
  uVar2 = FUN_00d0c31c();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00d0c374(param_2);
    if (uVar1 == 0xffffffff) {
      *param_1 = 0;
      param_1[1] = &DAT_cbf29ce484222645;
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      param_1[2] = &DAT_03c886bc;
      param_1[3] = 0;
      return;
    }
    snprintf((char *)local_30,0xf,PTR_s_save_d___047dd9d0,(ulong)uVar1);
    FUN_00d0c37c(&local_38,local_30);
    FUN_00d0bff0(param_1,&local_38,3);
    local_30[0] = local_38;
  }
  else {
    FUN_00d0c9e8(local_30);
    FUN_00d0bff0(param_1,local_30,3);
  }
  if (local_30[0] != (long *)0x0) {
    (**(code **)(*local_30[0] + 0x20))();
  }
  return;
}


