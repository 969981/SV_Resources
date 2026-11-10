/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029611cc; name: FUN_029611cc
 */


bool FUN_029611cc(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      uVar3 = FUN_015b5634(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1);
      plVar4 = (long *)FUN_0124c614(uVar3,0);
      if (plVar4 == (long *)0x0) {
        iVar2 = *(int *)(param_1 + 0x18);
      }
      else {
        iVar2 = (**(code **)(*plVar4 + 0x98))();
        *(int *)(param_1 + 0x18) = iVar2;
      }
    }
    bVar1 = iVar2 == param_2;
  }
  return bVar1;
}


