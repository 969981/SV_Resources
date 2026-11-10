/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02992254; name: FUN_02992254
 */


void FUN_02992254(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x499) >> 2 & 1) != 0) {
    iVar2 = FUN_0176882c();
    if ((((iVar2 == 1) && (*(short *)(*(long *)(param_1 + 0x38) + 0x510) != 0)) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0x170) + 0x30), *(char *)(lVar5 + 0x90) != '\0')) &&
       (plVar4 = *(long **)(lVar5 + 0x60), plVar4 != (long *)0x0)) {
      uVar1 = *(undefined1 *)(param_1 + 0x95);
      uVar3 = (**(code **)(*plVar4 + 0x98))();
      FUN_019fb3d8(param_1,uVar1,uVar3,param_2,*(undefined2 *)(*(long *)(param_1 + 0x38) + 0x512));
      return;
    }
  }
  return;
}


