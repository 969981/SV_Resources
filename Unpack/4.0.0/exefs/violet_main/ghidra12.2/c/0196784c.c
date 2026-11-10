/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196784c; name: FUN_0196784c
 */


void FUN_0196784c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047dcd60 + 3000;
  *param_1 = (long)(PTR_DAT_047dcd60 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_019678a4(param_1 + 0xe);
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_010aa124(param_1 + 0xb);
  return;
}


