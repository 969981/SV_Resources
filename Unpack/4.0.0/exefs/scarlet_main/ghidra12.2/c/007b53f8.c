/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b53f8; name: FUN_007b53f8
 */


void FUN_007b53f8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xb];
  *param_1 = (long)(PTR_DAT_047d0e30 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    param_1[0xb] = 0;
  }
  param_1[0x31] = 0;
  FUN_0078cb10(param_1 + 0x2b);
  thunk_FUN_0078ccbc(param_1);
  return;
}


