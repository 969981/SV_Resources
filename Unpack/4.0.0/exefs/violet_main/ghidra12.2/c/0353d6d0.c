/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353d6d0; name: pthread_condattr_init
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_init(pthread_condattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_init_047ca460)((int)__attr);
  return iVar1;
}


