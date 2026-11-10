/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02790e80; name: FUN_02790e80
 */


void FUN_02790e80(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  FUN_02790df0(param_1 + 4,param_2);
  *param_1 = &LAB_027afb10;
  param_1[1] = &LAB_027afd0c;
  param_1[2] = &LAB_027afd10;
  param_1[3] = &LAB_027afd20;
  return;
}


