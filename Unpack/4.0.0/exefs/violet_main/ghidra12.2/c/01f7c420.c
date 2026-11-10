/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7c420; name: FUN_01f7c420
 */


ulong FUN_01f7c420(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  if ((((*(long *)(param_1 + 0x70) != 0) && (lVar4 = *(long *)PTR_DAT_047d0860, lVar4 != 0)) &&
      (plVar1 = (long *)FUN_01f7c4e8(lVar4), plVar1 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x70)), lVar2 != 0 &&
      (lVar3 = FUN_01f7c4f0(lVar4), lVar3 != 0)))) {
    lVar4 = FUN_01f7c4f0(lVar4);
    if (lVar4 != 0) {
      FUN_01f7c4f8(auStack_40);
    }
    if ((*(byte *)(lVar3 + (ulong)*(byte *)(lVar2 + 0x28) * 0x30 + 0x647c) & 1) != 0) {
      lVar3 = lVar3 + (ulong)*(byte *)(lVar2 + 0x28) * 0x30;
      return (ulong)(uint)(*(int *)(lVar3 + 0x6460) + *(int *)(lVar3 + 0x6470));
    }
  }
  return *(ulong *)(param_1 + 0x48);
}


