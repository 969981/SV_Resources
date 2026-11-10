/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5e600; name: FUN_01d5e600
 */


void FUN_01d5e600(code *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = param_3[2];
  local_20 = (long *)param_3[3];
  param_3[3] = 0;
  local_50 = *param_4;
  local_4e = param_4[1];
  local_4c = *(undefined1 *)(param_4 + 2);
  local_4b = *(undefined1 *)((long)param_4 + 5);
  local_4a = *(undefined1 *)(param_4 + 3);
  local_48 = *(undefined4 *)(param_4 + 4);
  uStack_44 = *(undefined4 *)(param_4 + 6);
  local_40 = *(undefined4 *)(param_4 + 8);
  (*param_1)(*param_6,*param_7,&local_18,&local_38,&local_50,*param_5);
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


