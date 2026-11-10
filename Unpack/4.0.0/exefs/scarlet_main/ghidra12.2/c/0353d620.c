/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353d620; name: longjmp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_047ca408)(__env,__val);
  return;
}


