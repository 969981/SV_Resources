/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ef6a4; name: FUN_021ef6a4
 */


void FUN_021ef6a4(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00cec028(*param_1);
  if (cVar1 == '\x01') {
    uVar2 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar2;
  }
  else {
    uVar2 = param_1[1];
  }
  cVar1 = FUN_00cec028(uVar2);
  if (cVar1 == '\0') {
    uVar2 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar2;
  }
  return;
}


