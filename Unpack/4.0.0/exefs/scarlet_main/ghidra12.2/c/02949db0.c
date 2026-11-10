/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02949db0; name: FUN_02949db0
 */


void FUN_02949db0(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (((iVar3 == param_2) &&
      (plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30)),
      plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,0x1e7), (uVar2 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xb8);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0xc) & 0xf7) == 7)) {
      FUN_01453738(*(long *)(param_1 + 0x38),0x34,0x1333);
      return;
    }
  }
  return;
}


