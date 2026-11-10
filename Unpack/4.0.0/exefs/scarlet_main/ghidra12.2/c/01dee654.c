/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dee654; name: FUN_01dee654
 */


void FUN_01dee654(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  char *__format;
  char *pcVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *local_b0;
  byte *pbStack_a8;
  undefined8 local_a0;
  long *local_98;
  byte local_90 [64];
  char *local_50 [4];
  char *local_30;
  char *pcStack_28;
  
  local_50[0] = "L_hp_00";
  local_50[1] = "L_attack_00";
  local_50[2] = "L_defense_00";
  local_50[3] = "L_spattack_00";
  local_30 = "L_spdefense_00";
  pcStack_28 = "L_speed_00";
  local_90[0x30] = 0;
  local_90[0x31] = 0;
  local_90[0x32] = 0;
  local_90[0x33] = 0;
  local_90[0x34] = 0;
  local_90[0x35] = 0;
  local_90[0x36] = 0;
  local_90[0x37] = 0;
  local_90[0x38] = 0;
  local_90[0x39] = 0;
  local_90[0x3a] = 0;
  local_90[0x3b] = 0;
  local_90[0x3c] = 0;
  local_90[0x3d] = 0;
  local_90[0x3e] = 0;
  local_90[0x3f] = 0;
  local_90[0x20] = 0;
  local_90[0x21] = 0;
  local_90[0x22] = 0;
  local_90[0x23] = 0;
  local_90[0x24] = 0;
  local_90[0x25] = 0;
  local_90[0x26] = 0;
  local_90[0x27] = 0;
  local_90[0x28] = 0;
  local_90[0x29] = 0;
  local_90[0x2a] = 0;
  local_90[0x2b] = 0;
  local_90[0x2c] = 0;
  local_90[0x2d] = 0;
  local_90[0x2e] = 0;
  local_90[0x2f] = 0;
  local_90[0x10] = 0;
  local_90[0x11] = 0;
  local_90[0x12] = 0;
  local_90[0x13] = 0;
  local_90[0x14] = 0;
  local_90[0x15] = 0;
  local_90[0x16] = 0;
  local_90[0x17] = 0;
  local_90[0x18] = 0;
  local_90[0x19] = 0;
  local_90[0x1a] = 0;
  local_90[0x1b] = 0;
  local_90[0x1c] = 0;
  local_90[0x1d] = 0;
  local_90[0x1e] = 0;
  local_90[0x1f] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  if (param_3 == 0) {
    pcVar3 = local_50[param_2 & 0xff];
    __format = "%s/default";
  }
  else {
    pcVar3 = local_50[param_2 & 0xff];
    if (param_3 == 1) {
      __format = "%s/red";
    }
    else {
      __format = "%s/blue";
    }
  }
  snprintf((char *)local_90,0x40,__format,pcVar3);
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  local_b0 = &DAT_cbf29ce484222645;
  if (local_90[0] != 0) {
    pbVar4 = (byte *)((ulong)local_90 | 1);
    bVar1 = local_90[0];
    do {
      local_b0 = (undefined1 *)(((ulong)local_b0 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  pbStack_a8 = local_90;
  local_a0 = 0x3f;
  local_98 = (long *)0x0;
  lVar2 = FUN_00e895f4(plVar5[0x2e],&local_b0);
  if (lVar2 != 0) {
    FUN_00dfcea4();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  (**(code **)(*plVar5 + 0x60))(plVar5);
  return;
}


