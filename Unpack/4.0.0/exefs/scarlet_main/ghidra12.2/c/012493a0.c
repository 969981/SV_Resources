/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012493a0; name: FUN_012493a0
 */


bool FUN_012493a0(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x310);
  if (((*(byte *)(*(long *)(*(long *)(lVar4 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
     (*(int *)(lVar4 + 0x18) == 0)) {
    uVar2 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x30),1);
    plVar3 = (long *)FUN_0124c614(uVar2,0);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x98))();
      *(undefined4 *)(lVar4 + 0x18) = uVar1;
    }
  }
  return *(int *)(lVar4 + 0x18) == param_2;
}


