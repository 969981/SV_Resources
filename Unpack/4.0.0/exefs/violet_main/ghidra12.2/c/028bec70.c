/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bec70; name: FUN_028bec70
 */


void FUN_028bec70(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_045e8bb8;
  param_1[4] = &PTR_LAB_045e8bf0;
  if ((*PTR_DAT_047d4240 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d4248;
  *(long *)PTR_DAT_047d4250 = lVar3;
  plVar4 = *(long **)(lVar3 + 8);
  uVar5 = param_1[9];
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar4,uVar5,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028becf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,uVar5,0,8);
  return;
}


