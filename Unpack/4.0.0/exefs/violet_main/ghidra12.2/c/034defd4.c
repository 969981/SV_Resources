/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034defd4; name: FUN_034defd4
 */


void FUN_034defd4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = param_1 + -1;
  *plVar2 = (long)&PTR_FUN_047c55f8;
  *param_1 = (long)&PTR_FUN_047c5888;
  param_1[3] = (long)&PTR_FUN_047c58c8;
  param_1[6] = (long)&PTR_FUN_047c5960;
  param_1[0x23] = (long)&PTR_FUN_047c5988;
  param_1[0x24] = (long)&PTR_FUN_047c59b0;
  FUN_034ded44(plVar2);
  puVar1 = PTR_DAT_047e71f8;
  *plVar2 = (long)(PTR_DAT_047e71f8 + 0x10);
  *param_1 = (long)(puVar1 + 0x290);
  param_1[3] = (long)(puVar1 + 0x2d0);
  param_1[6] = (long)(puVar1 + 0x368);
  FUN_03489800(plVar2);
  return;
}


