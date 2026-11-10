/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


