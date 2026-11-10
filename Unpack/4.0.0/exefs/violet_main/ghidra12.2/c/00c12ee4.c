/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c12ee4; name: FUN_00c12ee4
 */


undefined4 FUN_00c12ee4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x80))();
  lVar1 = 0;
  if (*(char *)(lVar2 + 0xc) != '\0') {
    lVar1 = 0x28;
  }
  return *(undefined4 *)(*(long *)(lVar2 + 0x10) + lVar1);
}


