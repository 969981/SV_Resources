/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e8268; name: FUN_019e8268
 */


undefined * FUN_019e8268(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (*(short *)(param_1[1] + 0x1a) != 0)) &&
     (plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x38))(), plVar2 != (long *)0x0)) {
    do {
      plVar3 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2);
      if (plVar3 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar3 + 0x90))();
        plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x019e8324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined *)(**(code **)(*plVar2 + 0x10))();
        return puVar4;
      }
      plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2);
    } while (plVar2 != (long *)0x0);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  return PTR_DAT_047d3e30;
}


