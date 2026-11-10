/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9414; name: FUN_001c9414
 */


void FUN_001c9414(byte *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_1);
  if (0xfe < sVar2) {
    sVar2 = 0xff;
  }
  for (; sVar2 != 0; sVar2 = sVar2 - 1) {
    iVar1 = tolower((uint)*param_1);
    *param_3 = (char)iVar1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  FUN_001ce394(param_3,7,&DAT_03bf381b,param_2);
  return;
}


