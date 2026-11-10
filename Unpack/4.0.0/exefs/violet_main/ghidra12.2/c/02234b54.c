/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02234b54; name: FUN_02234b54
 */


void FUN_02234b54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,byte param_5
                 ,byte param_6)

{
  undefined2 uVar1;
  long *plVar2;
  
  FUN_0111badc(param_1,param_4 == 1 | param_5 & 1,1);
  *param_1 = &DAT_046010a0;
  param_1[4] = &PTR_LAB_04601250;
  param_1[5] = &DAT_04601378;
  param_1[6] = &PTR_LAB_046013d0;
  plVar2 = param_1 + 7;
  *plVar2 = (long)&PTR_LAB_046013f8;
  param_1[0x24] = &PTR_LAB_04601430;
  FUN_00ddaef8(param_1 + 0x7c,param_2,0);
  FUN_00ddaef8(param_1 + 0x7d,param_3,0);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(int *)((long)param_1 + 0x3f4) = param_4;
  memset(param_1 + 0x7f,0,0x6b);
  *(byte *)((long)param_1 + 0x463) = param_6 & 1;
  if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8282;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar2);
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  return;
}


