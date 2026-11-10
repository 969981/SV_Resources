/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294b980; name: FUN_0294b980
 */


undefined8 FUN_0294b980(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar2 = 0;
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = *(int *)(*(long *)(lVar1 + 0x18) + 0xc);
  }
  if ((((iVar2 != param_2) || (*(long *)(lVar1 + 0x1b0) == 0)) ||
      (*(int *)(*(long *)(lVar1 + 0x1b0) + 0xc) < 1)) ||
     ((lVar1 = *(long *)(lVar1 + 0x248), lVar1 == 0 || (1 < *(byte *)(lVar1 + 10))))) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = 1;
  if (*(byte *)(lVar1 + 10) == 1) {
    *(undefined1 *)(lVar1 + 10) = 2;
    return 1;
  }
  return 1;
}


