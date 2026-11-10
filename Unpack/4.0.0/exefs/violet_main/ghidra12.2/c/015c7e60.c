/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c7e60; name: operator.new
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  plVar4 = *(long **)(lVar1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
                    /* WARNING: Could not recover jumptable at 0x015c7eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,param_1,8);
  return pvVar3;
}


