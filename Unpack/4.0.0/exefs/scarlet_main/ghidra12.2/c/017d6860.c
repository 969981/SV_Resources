/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d6860; name: FUN_017d6860
 */


bool FUN_017d6860(byte *param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if ((((1 < *param_1) || (plVar2 = *(long **)(param_1 + 8), *(long **)(param_1 + 8) == (long *)0x0)
       ) && (plVar2 = (long *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b98), plVar2 = (long *)PTR_DAT_047d3ba0, iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  if (((1 < *param_2) || (plVar3 = *(long **)(param_2 + 8), *(long **)(param_2 + 8) == (long *)0x0))
     && ((plVar3 = (long *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0 &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b98), plVar3 = (long *)PTR_DAT_047d3ba0,
         iVar1 != 0)))) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  return *plVar2 == *plVar3;
}


