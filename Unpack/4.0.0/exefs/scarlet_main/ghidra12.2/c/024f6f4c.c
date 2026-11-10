/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f6f4c; name: FUN_024f6f4c
 */


void FUN_024f6f4c(undefined1 *param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_30;
  
  fVar1 = (float)param_3;
  uVar2 = 0;
  uVar3 = 0;
  local_60 = FUN_02500c5c();
  *param_1 = 1;
  uStack_50 = CONCAT44(uVar2,fVar1);
  uStack_48 = uVar3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


