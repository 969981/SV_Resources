/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027662c0; name: FUN_027662c0
 */


undefined8 FUN_027662c0(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    if (iVar1 == 3) {
      *(undefined1 *)(param_1 + 0x336) = 1;
      return 1;
    }
    if (iVar1 == 2) {
      FUN_00c95034();
    }
    else if (iVar1 == 1) {
      FUN_00c95778();
    }
  }
  return 0;
}


