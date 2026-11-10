/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212ff54; name: FUN_0212ff54
 */


void FUN_0212ff54(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *local_a8;
  undefined1 auStack_90 [96];
  undefined8 local_30;
  undefined4 local_24;
  
  local_a8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_90);
    local_a8 = *(code **)(param_3 + 8);
  }
  local_24 = FUN_0212fa30(param_2);
  FUN_019e3f2c("main.tml.TimeLineCommand","CFunc_Tml_SetEnvChangeSpan",&local_24);
  FUN_0212f80c("main.tml.TimeLineCommand","CFunc_Tml_ResetWeather");
  uVar1 = FUN_017350a8(param_2);
  if ((uVar1 & 1) != 0) {
    local_30 = 0x464f51c08c21b2ed;
    puVar2 = (undefined8 *)FUN_01235878(param_2 + 0x158,&local_30);
    *(undefined1 *)(puVar2 + 2) = 1;
    *puVar2 = PTR_LAB_047dcd90;
  }
  if (local_a8 != (code *)0x0) {
    (*local_a8)(auStack_90);
  }
  return;
}


