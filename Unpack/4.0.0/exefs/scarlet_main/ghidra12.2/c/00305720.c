/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305720; name: FUN_00305720
 */


bool FUN_00305720(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((param_1 == (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    return false;
  }
  bVar1 = param_1 == (undefined8 *)0x0 || param_2 != (undefined8 *)0x0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uVar2 = *param_1;
    bVar1 = true;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
  }
  return bVar1;
}


