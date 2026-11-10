/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7d8f0; name: calloc
 */


void * calloc(size_t __nmemb,size_t __size)

{
  long lVar1;
  int iVar2;
  void *__s;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__size * __nmemb,8);
  if (__s != (void *)0x0) {
    memset(__s,0,__size * __nmemb);
  }
  return __s;
}


