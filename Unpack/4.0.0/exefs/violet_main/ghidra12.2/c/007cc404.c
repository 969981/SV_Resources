/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cc404; name: FUN_007cc404
 */


void FUN_007cc404(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ErrorResultVariant *this;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  int local_c8 [4];
  int local_b8 [5];
  byte local_a4 [4];
  long local_a0;
  undefined1 auStack_94 [4];
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  int local_78 [4];
  undefined4 local_68 [2];
  
  FUN_007cbd24();
  local_8c = 0;
  local_84 = 0;
  local_90[0] = 0;
  local_80 = 0;
  FUN_007cbf64(local_b8,param_1,&local_a0,local_90,auStack_94,0x18);
  this = (ErrorResultVariant *)((ulong)local_78 | 4);
  local_78[0] = 0x2c09;
  local_c8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_c8);
  puVar1 = PTR_DAT_047d0860;
  if (local_b8[0] != local_78[0]) {
    do {
      FUN_00f42ddc(local_c8,*(undefined8 *)puVar1,local_a4,local_a0);
      if (local_c8[0] == 0) {
        uVar4 = (ulong)local_a4[0];
        if ((local_a4[0] != 0xfd) &&
           ((uint)local_a4[0] <= *(uint *)(param_1 + 0xa0) &&
            *(uint *)(param_1 + 0xa0) != (uint)local_a4[0])) {
          lVar6 = *(long *)(param_1 + 0xe0);
          if (local_b8[0] == 0) {
            plVar5 = (long *)(lVar6 + uVar4 * 0x1c0 + 0x18);
            puVar7 = (undefined1 *)(lVar6 + (ulong)(uint)local_a4[0] * 0x1c0);
            if (*plVar5 != local_a0) {
              lVar3 = lVar6 + uVar4 * 0x1c0;
              *puVar7 = 0;
              *(undefined2 *)(lVar3 + 1) = 0;
              *(undefined1 *)(lVar3 + 3) = 0;
              *(undefined8 *)(lVar3 + 8) = 0;
              *(undefined8 *)(lVar3 + 0x10) = 0;
              *plVar5 = 0;
              local_78[0] = 0;
              local_68[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
              FUN_018ff39c(lVar3 + 0x20,local_78);
              *(undefined8 *)(lVar3 + 0x50) = 0;
              *(undefined8 *)(lVar3 + 0x58) = 0;
              *(undefined8 *)(lVar3 + 0x80) = 0;
              *(undefined8 *)(lVar3 + 0x98) = 0;
              *(undefined8 *)(lVar3 + 0xb0) = 0;
              *(undefined8 *)(lVar3 + 200) = 0;
              *(undefined8 *)(lVar3 + 0xe0) = 0;
              *(undefined8 *)(lVar3 + 0xf8) = 0;
              *(undefined8 *)(lVar3 + 0x110) = 0;
              *(undefined8 *)(lVar3 + 0x128) = 0;
              *(undefined8 *)(lVar3 + 0x140) = 0;
              *(undefined8 *)(lVar3 + 0x60) = 0;
              *(undefined8 *)(lVar3 + 0x68) = 0;
              FUN_007cc9ac(lVar3 + 0x158);
            }
            lVar6 = lVar6 + uVar4 * 0x1c0;
            uVar2 = *(undefined8 *)((ulong)local_90 | 4);
            *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)((undefined8 *)((ulong)local_90 | 4) + 1)
            ;
            *(undefined8 *)(lVar6 + 0x50) = uVar2;
            *puVar7 = local_90[0];
            *(undefined8 *)(lVar6 + 8) = local_80;
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x78);
            *(undefined2 *)(lVar6 + 2) = 0x101;
            *plVar5 = local_a0;
          }
          else {
            FUN_018ff39c(lVar6 + uVar4 * 0x1c0 + 0x20,local_b8);
          }
          FUN_007cbf64(local_78,param_1,&local_a0,local_90,auStack_94,0x18);
          FUN_018ff39c(local_b8,local_78);
        }
      }
      local_78[0] = 0x2c09;
      local_c8[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_c8);
    } while (local_b8[0] != local_78[0]);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


