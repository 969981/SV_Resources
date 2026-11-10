/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c3c6d4; name: FUN_01c3c6d4
 */


void FUN_01c3c6d4(void *param_1)

{
  undefined8 uVar1;
  
  memcpy(param_1,"raid/raid_priority_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x40),"raid/raid_enemy_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x80),"raid/lottery_reward_item_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0xc0),"raid/fixed_reward_item_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x100),"encountOutbreak/pokedata_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x140),"encountOutbreak/zone_main_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x180),"encountOutbreak/zone_su1_array_3_0_0",0x40);
  memcpy((void *)((long)param_1 + 0x1c0),"encountOutbreak/zone_su2_array_3_0_0",0x40);
  *(undefined8 *)((long)param_1 + 0x200) = 0x100000000;
  uVar1 = FUN_0126a9c0();
  *(undefined8 *)((long)param_1 + 0x208) = uVar1;
  *(undefined8 *)((long)param_1 + 0x210) = 0;
  return;
}


