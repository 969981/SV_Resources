/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc8850; name: FUN_00cc8850
 */


void FUN_00cc8850(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  ulong local_30;
  void *pvStack_28;
  
  local_30 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = "<no name>";
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  pvStack_28 = param_2;
  std::align(8,param_3,&pvStack_28,&local_30);
  param_1[6] = pvStack_28;
  param_1[7] = param_3 - local_30 & 0xfffffffffffffff8;
  uVar1 = FUN_00cc8a58(param_1);
  param_1[8] = uVar1;
  FUN_00cc88e8(auStack_48,param_1,0,0);
  param_1[9] = local_38;
  return;
}


