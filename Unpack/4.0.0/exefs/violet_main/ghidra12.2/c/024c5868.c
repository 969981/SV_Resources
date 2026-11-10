/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c5868; name: FUN_024c5868
 */


void FUN_024c5868(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 *param_4
                 ,undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = FUN_01af3d38(param_6);
  local_50 = FUN_024c8994(param_5,uVar1,uVar2,uVar3);
  *param_1 = 1;
  uStack_40 = param_3;
  FUN_024c863c(param_1 + 8,local_50);
  return;
}


