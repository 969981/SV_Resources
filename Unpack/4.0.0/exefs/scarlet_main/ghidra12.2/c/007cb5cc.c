/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cb5cc; name: FUN_007cb5cc
 */


void FUN_007cb5cc(long param_1)

{
  undefined *puVar1;
  ErrorResultVariant *this;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  int local_c0 [4];
  int local_b0 [5];
  byte local_9c [4];
  long local_98;
  undefined1 auStack_8c [4];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined8 local_80;
  int local_78 [4];
  undefined4 local_68 [2];
  
  FUN_007cbd24();
  local_88[0] = 0;
  local_84 = 0;
  local_80 = 0;
  FUN_007cbf64(local_b0,param_1,&local_98,local_88,auStack_8c,0x10);
  this = (ErrorResultVariant *)((ulong)local_78 | 4);
  local_78[0] = 0x2c09;
  local_c0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_c0);
  puVar1 = PTR_DAT_047d0860;
  if (local_b0[0] != local_78[0]) {
    do {
      FUN_00f42ddc(local_c0,*(undefined8 *)puVar1,local_9c,local_98);
      if (local_c0[0] == 0) {
        uVar2 = (ulong)local_9c[0];
        if ((local_9c[0] != 0xfd) &&
           ((uint)local_9c[0] <= *(uint *)(param_1 + 0xa0) &&
            *(uint *)(param_1 + 0xa0) != (uint)local_9c[0])) {
          lVar3 = *(long *)(param_1 + 0xb0);
          if (local_b0[0] == 0) {
            plVar4 = (long *)(lVar3 + uVar2 * 0x150 + 0x18);
            puVar5 = (undefined1 *)(lVar3 + (ulong)(uint)local_9c[0] * 0x150);
            if (*plVar4 != local_98) {
              lVar6 = lVar3 + uVar2 * 0x150;
              *puVar5 = 0;
              *(undefined2 *)(lVar6 + 1) = 0;
              *(undefined1 *)(lVar6 + 3) = 0;
              *(undefined8 *)(lVar6 + 8) = 0;
              *(undefined8 *)(lVar6 + 0x10) = 0;
              *plVar4 = 0;
              local_78[0] = 0;
              local_68[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
              FUN_018ff39c(lVar6 + 0x20,local_78);
              *(undefined8 *)(lVar6 + 0x40) = 0;
              *(undefined8 *)(lVar6 + 0x48) = 0;
              *(undefined8 *)(lVar6 + 0x58) = 0;
              *(undefined8 *)(lVar6 + 0x68) = 0;
              *(undefined8 *)(lVar6 + 0x78) = 0;
              *(undefined8 *)(lVar6 + 0x88) = 0;
              *(undefined8 *)(lVar6 + 0x98) = 0;
              *(undefined8 *)(lVar6 + 0xa8) = 0;
              *(undefined8 *)(lVar6 + 0xb8) = 0;
              *(undefined8 *)(lVar6 + 200) = 0;
              *(undefined8 *)(lVar6 + 0xd8) = 0;
              FUN_007cc9ac(lVar6 + 0xe8);
            }
            lVar3 = lVar3 + uVar2 * 0x150;
            *(undefined4 *)(lVar3 + 0x40) = local_84;
            *puVar5 = local_88[0];
            *(undefined8 *)(lVar3 + 8) = local_80;
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x78);
            *(undefined2 *)(lVar3 + 2) = 0x101;
            *plVar4 = local_98;
          }
          else {
            FUN_018ff39c(lVar3 + uVar2 * 0x150 + 0x20,local_b0);
          }
          FUN_007cbf64(local_78,param_1,&local_98,local_88,auStack_8c,0x10);
          FUN_018ff39c(local_b0,local_78);
        }
      }
      local_78[0] = 0x2c09;
      local_c0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_c0);
    } while (local_b0[0] != local_78[0]);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


