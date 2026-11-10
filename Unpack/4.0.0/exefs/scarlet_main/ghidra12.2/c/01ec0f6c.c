/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec0f6c; name: FUN_01ec0f6c
 */


void FUN_01ec0f6c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 local_78;
  undefined8 local_70;
  long local_68 [4];
  undefined8 local_48;
  undefined4 local_3c;
  undefined1 local_38 [8];
  
  if (((*(char *)(param_4 + 0x90) != '\0') ||
      ((*(long *)(param_4 + 0x78) != 0 && (*(short *)(*(long *)(param_4 + 0x78) + 0x1a) != 0)))) &&
     (puVar6 = *(undefined8 **)(param_4 + 0x88), puVar6 != (undefined8 *)0x0)) {
    local_3c = param_6;
    local_48 = FUN_017516e8();
    cVar1 = FUN_00f41720(&local_48);
    if (cVar1 != '\x02') {
      FUN_016947d8(local_68);
      local_38[0] = 2;
      if ((local_68[0] != 0) && (FUN_011dbce8(&local_78,local_38,local_68[0] + 8), local_68[0] != 0)
         ) {
        FUN_018b820c(&local_78,&local_3c,local_68[0] + 8);
      }
      local_70 = CONCAT44(local_70._4_4_,param_1._8_4_);
      if (local_68[0] != 0) {
        local_78 = param_1._0_8_;
        FUN_011dbc60(local_38,&local_78,local_68[0] + 8);
      }
      auVar7 = NEON_ext(param_2,param_2,8,1);
      local_70 = auVar7._0_8_;
      if (local_68[0] != 0) {
        local_78 = param_2._0_8_;
        FUN_011dbd5c(local_38,&local_78,local_68[0] + 8);
      }
      local_70 = CONCAT44(local_70._4_4_,param_3._8_4_);
      local_78 = param_3._0_8_;
      if (local_68[0] != 0) {
        FUN_011dbc60(local_38,&local_78,local_68[0] + 8);
      }
      uVar2 = FUN_011dbca0(param_4);
      local_78 = CONCAT44(local_78._4_4_,uVar2);
      uVar3 = FUN_014c27b0(local_68);
      uVar4 = FUN_014c27c8(local_68);
      uVar5 = (**(code **)*puVar6)(puVar6,&local_78,uVar3,uVar4);
      if ((uVar5 & 1) != 0) {
        FUN_01a74108(param_4 + 0x68,param_5);
      }
      FUN_01694aa8(local_68);
    }
  }
  return;
}


