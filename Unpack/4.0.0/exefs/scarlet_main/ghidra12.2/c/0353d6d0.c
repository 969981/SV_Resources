/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353d6d0; name: pthread_condattr_init
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_init(pthread_condattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_init_047ca460)((int)__attr);
  return iVar1;
}


