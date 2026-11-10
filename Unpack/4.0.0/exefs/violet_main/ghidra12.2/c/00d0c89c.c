/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0c89c; name: FUN_00d0c89c
 */


void FUN_00d0c89c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long *local_40 [2];
  long *local_18;
  
  uVar2 = FUN_00d0c988();
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
    snprintf((char *)local_40,0xf,PTR_s_save_d___047dd9d0,(ulong)uVar1);
    FUN_01050280(&local_18,local_40,param_3);
    FUN_00d0bff0(param_1,&local_18,3);
    local_40[0] = local_18;
  }
  else {
    FUN_01050714(local_40,param_3);
    FUN_00d0bff0(param_1,local_40,3);
  }
  if (local_40[0] != (long *)0x0) {
    (**(code **)(*local_40[0] + 0x20))();
  }
  return;
}


