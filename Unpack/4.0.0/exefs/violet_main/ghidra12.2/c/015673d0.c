/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015673d0; name: FUN_015673d0
 */


uint FUN_015673d0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0xca0);
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x30),*param_2);
  iVar2 = FUN_01567444(*(undefined8 *)(lVar5 + 0x38),plVar4);
  uVar3 = (**(code **)(*plVar4 + 800))(plVar4);
  uVar1 = iVar2 * (uVar3 & 0xffff);
  uVar3 = uVar1 >> 0xc;
  if (0x800 < (uVar1 & 0xfff)) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  return uVar3;
}


