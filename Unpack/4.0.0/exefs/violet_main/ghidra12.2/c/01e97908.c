/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e97908; name: FUN_01e97908
 */


bool FUN_01e97908(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    FUN_01e97944();
    *(undefined8 *)(param_1 + 0x40) = 0x100000001;
    iVar1 = 1;
  }
  return iVar1 == 1;
}


