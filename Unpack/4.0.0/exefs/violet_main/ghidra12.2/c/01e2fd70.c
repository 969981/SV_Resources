/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2fd70; name: FUN_01e2fd70
 */


void FUN_01e2fd70(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(long *)(param_1 + 0x60) != -1) {
    if ((*PTR_DAT_047d6c20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d6c28;
    *(undefined8 *)PTR_DAT_047d6c30 = uVar2;
    local_40 = *param_2;
    uStack_38 = param_2[1];
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    local_30 = param_2[2];
    local_28 = (long *)param_2[3];
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
    FUN_01e2fe70(uVar2,uVar3,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


