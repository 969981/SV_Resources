/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008065f4; name: FUN_008065f4
 */


void FUN_008065f4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ErrorResultVariant *this;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_90 [8];
  int local_70 [4];
  undefined1 auStack_60 [32];
  undefined4 local_38;
  undefined1 local_34 [4];
  
  piVar4 = (int *)&local_b0;
  FUN_0284e338(auStack_60);
  local_34[0] = 0;
  local_70[0] = 0;
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_90);
  if (param_3 == 0) {
    local_90[0] = 0;
LAB_0080680c:
    this = (ErrorResultVariant *)((ulong)local_90 | 4);
  }
  else {
    FUN_007927c8(local_90,param_3,param_4 + 0x30,0x5c0,auStack_60,local_34,param_4 + 0x5f8);
    FUN_018ff39c(local_70,local_90);
    if (local_70[0] == 0) {
      uVar1 = FUN_0078b12c(auStack_60);
      if ((uVar1 & 1) != 0) {
        FUN_00796584(local_90);
        uVar2 = *(undefined8 *)(param_2 + 0x88);
        uVar6 = (uint)*(ushort *)(*(long *)(param_2 + 0x58) + 0x114e);
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            puVar3 = (undefined8 *)FUN_008013e4(uVar2,uVar5);
            if (puVar3 != (undefined8 *)0x0) {
              uVar1 = FUN_0078b278(puVar3 + 7,auStack_60);
              if ((uVar1 & 1) != 0) {
LAB_00806764:
                FUN_007fedb0(&local_b0,*(undefined8 *)(param_2 + 0x58),*puVar3);
                FUN_00796828(local_90,&local_b0);
                FUN_00796828(param_4 + 0x628,local_90);
                *(undefined1 *)(param_4 + 0x620) = local_34[0];
                FUN_00796f04(&local_b0,param_4);
                FUN_018ff39c(local_70,&local_b0);
                if (local_70[0] == 0) {
                  local_b0 = (ulong)local_b0._4_4_ << 0x20;
                }
                else {
                  local_b0 = CONCAT44(local_b0._4_4_,0x2c09);
                }
                goto LAB_00806874;
              }
              if (*(char *)((long)puVar3 + 0x59) != '\0') {
                uVar1 = FUN_0078b278(puVar3 + 3,auStack_60);
                if ((uVar1 & 1) != 0) goto LAB_00806764;
              }
            }
            uVar2 = *(undefined8 *)(param_2 + 0x88);
            uVar5 = uVar5 + 1;
          } while (uVar6 != uVar5);
        }
        local_a8 = 0;
        local_b0 = 0x4000000;
        FUN_008015b0(uVar2,&local_b0);
        local_b0 = CONCAT44(local_b0._4_4_,0x2c09);
LAB_00806874:
        local_38 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_b0 | 4),(Result *)&local_38);
        goto LAB_0080681c;
      }
      local_90[0] = 0x2c09;
      goto LAB_0080680c;
    }
    if (*(char *)(param_2 + 0x10) != '\0') {
      local_90[0] = 0x10407;
      local_b0 = (ulong)local_b0._4_4_ << 0x20;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_b0);
      if (local_70[0] != local_90[0]) {
        local_90[0] = 0x2c18;
        local_b0 = local_b0 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_b0);
        if (local_70[0] == local_90[0]) {
          local_90[0] = 0xc47e;
          goto LAB_0080680c;
        }
      }
      piVar4 = local_70;
      goto LAB_0080681c;
    }
    this = (ErrorResultVariant *)((ulong)local_90 | 4);
    local_90[0] = 0x2c09;
    local_b0 = (ulong)local_b0._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_b0);
    local_90[0] = 0x2c09;
  }
  local_b0 = local_b0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_b0);
  piVar4 = local_90;
LAB_0080681c:
  FUN_00cbd7c0(param_1,piVar4);
  FUN_0284e3d4(auStack_60);
  return;
}


