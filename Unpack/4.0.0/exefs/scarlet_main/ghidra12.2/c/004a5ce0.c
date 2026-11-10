/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5ce0; name: FUN_004a5ce0
 */


long FUN_004a5ce0(long param_1,long param_2)

{
  long lVar1;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  lVar1 = FUN_004c458c(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0xb0));
  if (lVar1 == 0) {
    uStack_e0 = *(undefined8 *)(param_1 + 0x20);
    local_d8 = *(undefined8 *)(param_1 + 0x10);
    local_b0 = 0;
    uStack_a8 = 0;
    local_88 = &local_80;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = &local_68;
    local_b8 = 0;
    local_a0 = 0;
    local_38 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
                    /* try { // try from 004a5d5c to 004a5d67 has its CatchHandler @ 004a5d9c */
    local_e8 = param_1;
    lVar1 = FUN_004a9f94(&local_e8,param_2);
    FUN_004aa6cc(&local_e8);
    if (lVar1 == 0) {
      FUN_004a5db0(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0xb0));
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


