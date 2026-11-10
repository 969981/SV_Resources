/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e164; name: FUN_01f6e164
 */


undefined1 FUN_01f6e164(char *param_1,long param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = 0;
    if (*param_1 != '\0') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
      uVar1 = 1;
      *param_1 = '\x01';
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


