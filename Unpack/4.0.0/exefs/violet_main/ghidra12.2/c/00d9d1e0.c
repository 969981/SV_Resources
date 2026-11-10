/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9d1e0; name: FUN_00d9d1e0
 */


void FUN_00d9d1e0(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(char *)(param_2 + 0x61) != '\0') &&
     (param_1 = *(float *)(param_2 + 0x48) - param_1, *(float *)(param_2 + 0x48) = param_1,
     puVar1 = PTR_DAT_047d8280, param_1 <= 0.0)) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    puVar3 = PTR_DAT_047d8290;
    puVar2 = PTR_DAT_047d8288;
    lVar7 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar7;
    if ((*(int *)(param_2 + 0x38) != 0) &&
       (uVar5 = FUN_00d9d318(*(undefined8 *)(lVar7 + 0x220)), (uVar5 & 1) != 0)) {
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar7 = *(long *)puVar2;
      *(long *)puVar3 = lVar7;
      if (*(int *)(param_2 + 0x38) != 0) {
        plVar6 = *(long **)(*(long *)(lVar7 + 0x200) + 0x60);
        (**(code **)(*plVar6 + 0xd8))(plVar6,*(int *)(param_2 + 0x38),0,4);
      }
      *(undefined4 *)(param_2 + 0x48) = 0x3dcccccd;
    }
  }
  return;
}


