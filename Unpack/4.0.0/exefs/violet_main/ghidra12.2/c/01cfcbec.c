/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfcbec; name: FUN_01cfcbec
 */


void FUN_01cfcbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d70a8;
  if (DAT_0482cc98 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d0254c(auStack_30,param_2,puVar1,0);
  FUN_01d025c0(param_1,auStack_30);
  FUN_01d02618(auStack_30);
  return;
}


