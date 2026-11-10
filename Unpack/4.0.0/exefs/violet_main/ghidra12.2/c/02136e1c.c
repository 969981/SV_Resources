/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02136e1c; name: FUN_02136e1c
 */


void FUN_02136e1c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar2;
  FUN_011b00ec(&local_50,uVar2,*param_4);
  *(undefined4 *)(param_2 + 0x38) = (undefined4)local_40;
  *(undefined8 *)(param_2 + 0x28) = local_50;
  *(undefined8 *)(param_2 + 0x30) = uStack_48;
  local_40 = *(undefined8 *)(param_2 + 0x78);
  uStack_38 = 0;
  local_50 = *(undefined8 *)(param_2 + 0x68);
  uStack_48 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = FUN_00d1e340(&local_50);
  if ((uVar3 & 1) != 0) {
    FUN_01990a84(param_2);
  }
  plVar4 = (long *)*param_3;
  local_58 = plVar4;
  if (plVar4 == (long *)0x0) {
    FUN_02136f5c(param_1,param_2,&local_58,param_4,param_5 & 1);
  }
  else {
    (**(code **)(*plVar4 + 0x58))(plVar4);
    FUN_02136f5c(param_1,param_2,&local_58,param_4,param_5 & 1);
    (**(code **)(*plVar4 + 0x60))(plVar4);
  }
  return;
}


