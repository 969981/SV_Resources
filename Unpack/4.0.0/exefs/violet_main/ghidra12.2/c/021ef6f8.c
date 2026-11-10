/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


