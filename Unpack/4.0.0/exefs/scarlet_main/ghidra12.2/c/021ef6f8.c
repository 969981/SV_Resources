/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ef6f8; name: FUN_021ef6f8
 */


void FUN_021ef6f8(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  
  sVar3 = FUN_00cf44ec(*param_1);
  cVar2 = FUN_00cec028(param_1[1]);
  if (sVar3 == 0x84 && cVar2 == '\x02') {
    uVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar1;
  }
  return;
}


