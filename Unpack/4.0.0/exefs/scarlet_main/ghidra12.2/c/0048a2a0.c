/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048a2a0; name: FUN_0048a2a0
 */


void FUN_0048a2a0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_80 [14];
  
  local_80[0] = param_1;
  if ((DAT_047f43d8 == 0) || (iVar1 = FUN_0047e200(DAT_047f43d8,local_80), iVar1 < 0)) {
    FUN_0045c970(local_80,&PTR_s_default_044bfc68,5,0x70,&LAB_0048a310);
    return;
  }
  FUN_0047e450(DAT_047f43d8,iVar1);
  return;
}


