/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd8988; name: FUN_01dd8988
 */


void FUN_01dd8988(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((DAT_04836660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04836660), iVar1 != 0)) {
    FUN_00100190(&LAB_00a69bb0,0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04836660);
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3);
  lVar2 = FUN_00e895f4(plVar3[0x2e],(long)*(int *)(param_1 + 0x298) * 0x28 + 0x4541af0);
  if (lVar2 != 0) {
    FUN_00dfcea4();
  }
                    /* WARNING: Could not recover jumptable at 0x01dd89fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


