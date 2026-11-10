/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e26c4; name: FUN_014e26c4
 */


void FUN_014e26c4(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_28;
  
  if (((int)param_3 < 0) ||
     ((int)((ulong)(*(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70)) >> 3) <= (int)param_3)) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0)) {
      local_28 = FUN_00d44228(param_1);
      puVar1 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
      FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    FUN_0135d26c(param_1,PTR_DAT_047d8c30);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x70) + (ulong)param_3 * 8);
    *param_1 = *(undefined8 *)(lVar4 + 0x40);
    param_1[1] = *(undefined8 *)(lVar4 + 0x48);
    param_1[2] = *(undefined8 *)(lVar4 + 0x50);
    plVar3 = *(long **)(lVar4 + 0x58);
    param_1[3] = plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014e2738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}


