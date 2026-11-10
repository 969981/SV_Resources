/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed214; name: FUN_001ed214
 */


size_t FUN_001ed214(void *param_1,long param_2,long param_3,long param_4)

{
  void *__dest;
  size_t __n;
  
  if (*(long *)PTR_stdout_047cb860 != param_4 && *(long *)PTR_stderr_047cb8b8 != param_4) {
LAB_001ed2a4:
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
  }
  __n = param_3 * param_2;
  if (__n != 0) {
    __dest = (void *)FUN_001ec2f8(__n + 1);
    if (__dest == (void *)0x0) goto LAB_001ed2a4;
    memset((void *)((long)__dest + __n),0,(ulong)(__n != 0xffffffffffffffff));
    memcpy(__dest,param_1,__n);
    FUN_001ec308(__dest);
  }
  return __n;
}


