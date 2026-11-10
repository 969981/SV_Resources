/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00520908; name: FUN_00520908
 */


void FUN_00520908(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) != lVar1 + 0x10)) {
      lVar2 = FUN_005209d8(param_1,lVar1 + 0x10);
    }
  }
  if ((ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28)) < param_2) {
    FUN_00520b10(lVar2,param_2);
    return;
  }
  *(ulong *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + param_2;
  return;
}


