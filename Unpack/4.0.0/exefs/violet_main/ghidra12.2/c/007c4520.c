/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4520; name: FUN_007c4520
 */


int FUN_007c4520(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [24];
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_007c6f10(*(undefined8 *)(param_1 + 8),(long)iVar1,param_2,auStack_58 + 0x18);
  iVar1 = iVar1 + -1;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


