/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c660; name: _setjmp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__setjmp_047c9c28)((int)__env);
  return iVar1;
}


