/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079e90c; name: FUN_0079e90c
 */


void FUN_0079e90c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  char local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined8 local_80;
  int local_70;
  int iStack_6c;
  
  if ((*(char *)((long)param_1 + 0x284) == '\0') && ((int)param_1[0x223] != 1)) {
    local_b8 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_c0 = *param_2;
    local_a8 = 0;
    local_b4 = ' ';
    local_c8 = PTR_DAT_047d0a88 + 0x10;
    local_b0 = 4;
    uVar1 = FUN_007a3154(&local_c8);
    if (((uVar1 & 1) != 0) &&
       ((*(int *)((long)param_2 + 0xc) == local_b0._4_4_ + (int)local_b0 && (local_b4 == ' ')))) {
      FUN_007a3e24(&local_88,param_1 + 0x52,0x4d8,0x21,param_1);
      local_88 = PTR_DAT_047d0a50 + 0x10;
      (**(code **)(*param_1 + 0x338))(param_1,&local_88);
      FUN_007a3f58(&local_88);
      FUN_007a4c48(auStack_a0,param_1 + 0x188,0x4d8);
      FUN_007a4c58(auStack_a0,local_80,iStack_6c + local_70,0x21);
      (**(code **)(*param_1 + 0x140))(param_1,auStack_a0,param_3,0);
    }
  }
  return;
}


