/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121bc0; name: FUN_00121bc0
 */


void FUN_00121bc0(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((int)param_2 < 1) {
    plVar2 = (long *)(param_1 + 0x10);
    uVar1 = (ulong)(int)param_2;
    FUN_001299c0(param_1,*plVar2 + (long)(int)param_2 * 0x10,0xffffffff,0);
  }
  else {
    uVar1 = (ulong)param_2;
    FUN_001299c0(param_1,**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10,0xffffffff,0);
    plVar2 = *(long **)(param_1 + 0x20);
  }
  *(undefined1 *)(*plVar2 + uVar1 * 0x10 + 8) = 0;
  return;
}


