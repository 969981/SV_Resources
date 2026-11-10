/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123440; name: FUN_00123440
 */


void FUN_00123440(long param_1,uint param_2)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  
  if ((int)param_2 < 1) {
    lVar2 = *(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10;
    plVar3 = *(long **)(param_1 + 0x20);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x20);
    lVar2 = *plVar3 + (ulong)param_2 * 0x10;
  }
  sVar1 = *(short *)((long)plVar3 + 0x3c);
  FUN_00129830(param_1,lVar2);
  if (-2 < sVar1) {
    *(short *)(*(long *)(param_1 + 0x20) + 0x3c) = -3 - sVar1;
  }
  return;
}


