/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024eefc4; name: FUN_024eefc4
 */


void FUN_024eefc4(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  double in_stack_00000000;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_14 = (float)param_1;
  local_18 = (float)param_2;
  local_1c = (float)param_3;
  local_20 = (float)param_4;
  local_24 = (float)param_5;
  fStack_28 = (float)param_6;
  local_2c = (float)param_7;
  fStack_30 = (float)param_8;
  local_34 = (float)in_stack_00000000;
  local_38 = (float)in_stack_00000008;
  local_44 = (float)in_stack_00000020;
  local_3c = (float)in_stack_00000010;
  local_50 = (float)in_stack_00000038;
  puVar1 = &LAB_02b9bd24;
  if (DAT_0484f1b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  fStack_40 = (float)in_stack_00000018;
  fStack_48 = (float)in_stack_00000028;
  local_4c = (float)in_stack_00000030;
  FUN_024ff3b0(param_9,puVar1,0,&local_14,&local_18,&local_1c,&local_20,&local_24,&fStack_28,
               &local_2c,&fStack_30,&local_34,&local_38,&local_3c,&fStack_40,&local_44,&fStack_48,
               &local_4c,&local_50);
  return;
}


