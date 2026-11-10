/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d66a8; name: FUN_027d66a8
 */


void FUN_027d66a8(undefined8 *param_1,long param_2)

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
  FUN_027c84f8(param_1 + 4,param_2);
  FUN_027d6574(param_1 + 5,param_2 + 8);
  *param_1 = thunk_FUN_027d7628;
  param_1[1] = FUN_027d7668;
  param_1[2] = FUN_027d7690;
  param_1[3] = &LAB_027d76c4;
  return;
}


