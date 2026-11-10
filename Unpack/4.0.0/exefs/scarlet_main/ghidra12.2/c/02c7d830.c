/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7d830; name: malloc
 */


void * malloc(size_t __size)

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
                    /* WARNING: Could not recover jumptable at 0x02c7d880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,__size,8);
  return pvVar3;
}


