/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


