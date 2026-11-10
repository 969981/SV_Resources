/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103c70; name: FUN_00103c70
 */


void FUN_00103c70(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 4) = 0;
  if (*param_2 == param_2[2]) {
    *param_2 = param_2[1];
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 3);
  }
  else {
    uVar1 = 0;
  }
  FUN_00103d00(*(undefined4 *)((long)param_1 + 0xc),*(undefined4 *)(param_1 + 1),
               *(undefined4 *)((long)param_1 + 0x1c),*(undefined4 *)((long)param_1 + 0x2c),param_2,
               param_3,*(undefined4 *)((long)param_1 + 0x24),(long)param_1 + 0x34,
               *(undefined4 *)((long)param_1 + 0x14),uVar1,*param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


