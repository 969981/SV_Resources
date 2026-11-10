/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d0b80; name: FUN_031d0b80
 */


void FUN_031d0b80(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031d0c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3 + 1);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  plVar1 = *(long **)(lVar3 + -0x10);
  if (((ulong)plVar1 & 1) == 0) {
    if (plVar1 != (long *)0x0) {
      param_1 = plVar1;
    }
  }
  else {
    plVar2 = *(long **)((ulong)plVar1 & 0xfffffffffffffffe);
    if (plVar2 != (long *)0x0) {
      param_1 = plVar2;
    }
    FUN_031d1828((ulong *)((ulong)plVar1 & 0xfffffffffffffffe));
  }
                    /* WARNING: Could not recover jumptable at 0x031d0bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))
            (param_1,(long)(lVar3 + -0x10) - ((ulong)*(ushort *)(lVar3 + -4) & 0xfff0),
             (ulong)*(uint *)(lVar3 + -8) << 4);
  return;
}


