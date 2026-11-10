/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01603214; name: FUN_01603214
 */


void FUN_01603214(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x400000004;
  uVar1 = *(undefined4 *)(PTR_DAT_047e2fa0 + 0x1c);
  uVar2 = *(undefined4 *)(PTR_DAT_047e2fa0 + 0x1f);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1f) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  FUN_01603264(param_1 + 5);
  FUN_01603264(param_1 + 0x12);
  return;
}


