/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c370c; name: FUN_016c370c
 */


void FUN_016c370c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *local_38;
  long *local_30 [2];
  
  uVar2 = FUN_016c37e4();
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
    FUN_021e8614(&local_38,local_30);
    FUN_00d0bff0(param_1,&local_38,3);
    local_30[0] = local_38;
  }
  else {
    FUN_021e85b4(local_30);
    FUN_00d0bff0(param_1,local_30,3);
  }
  if (local_30[0] != (long *)0x0) {
    (**(code **)(*local_30[0] + 0x20))();
  }
  return;
}


