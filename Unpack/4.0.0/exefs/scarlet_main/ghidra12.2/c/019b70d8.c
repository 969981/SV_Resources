/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b70d8; name: FUN_019b70d8
 */


void FUN_019b70d8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_60 [2];
  undefined8 *local_50;
  char local_48;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = lVar2 + *(long *)(param_1 + 0x30) * 0x20;
  }
  if (lVar2 != lVar1) {
    local_60[0] = 0;
    local_60[1] = 0;
    FUN_00c43ef0(local_60,lVar2);
    local_50 = *(undefined8 **)(lVar2 + 0x10);
    local_48 = *(char *)(lVar2 + 0x18);
    if (((local_48 != '\0') || ((local_60[0] != 0 && (*(short *)(local_60[0] + 0x1a) != 0)))) &&
       (local_50 != (undefined8 *)0x0)) {
      (**(code **)*local_50)(local_50,param_2,param_3,param_4);
    }
    FUN_019b7290(local_60);
    if (lVar2 + 0x20 != lVar1) {
      local_60[0] = 0;
      local_60[1] = 0;
      FUN_00c43ef0(local_60);
      local_50 = *(undefined8 **)(lVar2 + 0x30);
      local_48 = *(char *)(lVar2 + 0x38);
      if (((local_48 != '\0') || ((local_60[0] != 0 && (*(short *)(local_60[0] + 0x1a) != 0)))) &&
         (local_50 != (undefined8 *)0x0)) {
        (**(code **)*local_50)(local_50,param_2,param_3,param_4);
      }
      FUN_019b7290(local_60);
      for (lVar2 = lVar2 + 0x40; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
        local_60[0] = 0;
        local_60[1] = 0;
        FUN_00c43ef0(local_60,lVar2);
        local_50 = *(undefined8 **)(lVar2 + 0x10);
        local_48 = *(char *)(lVar2 + 0x18);
        if (((local_48 != '\0') || ((local_60[0] != 0 && (*(short *)(local_60[0] + 0x1a) != 0)))) &&
           (local_50 != (undefined8 *)0x0)) {
          (**(code **)*local_50)(local_50,param_2,param_3,param_4);
        }
        FUN_019b7290(local_60);
      }
    }
  }
  return;
}


