/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124fc70; name: FUN_0124fc70
 */


undefined4 FUN_0124fc70(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
     (*(int *)(param_1 + 0x18) == 0)) {
    uVar2 = FUN_015b5634(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1);
    plVar3 = (long *)FUN_0124c614(uVar2,0);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x98))();
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
  }
  return *(undefined4 *)(param_1 + 0x18);
}


