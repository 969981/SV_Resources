/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01520420; name: FUN_01520420
 */


void FUN_01520420(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x11e) == '\0') {
    uVar1 = 0xffffff82;
    if (*(char *)(param_1 + 0x11f) != '\0') {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_00c6a514(param_1 + 0x38,uVar1);
  return;
}


