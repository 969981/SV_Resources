/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f691dc; name: FUN_01f691dc
 */


void FUN_01f691dc(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_04559768;
  FUN_01f682f0(param_1 + 0x26);
  pcVar1 = (code *)param_1[0x17];
  if (pcVar1 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar1)(param_1 + 0x1a);
  }
  pcVar1 = (code *)param_1[7];
  if (pcVar1 != (code *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    (*pcVar1)(param_1 + 10);
  }
  FUN_01f69e10(param_1 + 5);
  return;
}


