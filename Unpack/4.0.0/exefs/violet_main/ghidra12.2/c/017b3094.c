/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b3094; name: FUN_017b3094
 */


void FUN_017b3094(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *local_58;
  char acStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[6] = param_2;
  *(undefined1 **)(param_1 + 8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 10) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = *param_4;
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0x12) = *param_5;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  if (param_2 == -1) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
      local_40 = FUN_00d44228();
      puVar2 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_40);
      FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    FUN_0135d26c(&local_40,PTR_DAT_047d8c30);
    plVar4 = *(long **)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 10) = local_38;
    *(undefined8 *)(param_1 + 0xc) = local_30;
    *(undefined8 *)(param_1 + 0xe) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0xe) = local_28;
  }
  else {
    snprintf(acStack_50,0x10,"save%d",param_2);
    FUN_013e3cf8(&local_58,acStack_50);
    FUN_0135d26c(&local_40,&local_58);
    plVar4 = *(long **)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 10) = local_38;
    *(undefined8 *)(param_1 + 0xc) = local_30;
    *(undefined8 *)(param_1 + 0xe) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    uVar1 = local_28;
    local_28 = 0;
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


