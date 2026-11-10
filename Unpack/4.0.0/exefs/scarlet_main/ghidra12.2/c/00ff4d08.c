/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff4d08; name: FUN_00ff4d08
 */


void FUN_00ff4d08(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if (*pbVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_00ff4d4c(*param_2);
    pbVar2 = (byte *)*param_1;
  }
  *pbVar2 = bVar1 & 1;
  return;
}


