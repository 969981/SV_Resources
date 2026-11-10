/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e380; name: FUN_0047e380
 */


undefined8 FUN_0047e380(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  iVar1 = *param_1 + -1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
  *param_1 = iVar1;
  return uVar2;
}


