/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d31f0; name: FUN_002d31f0
 */


void FUN_002d31f0(undefined8 param_1,long *param_2,int param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *local_4a8;
  undefined1 *puStack_4a0;
  uint *local_498;
  uint *puStack_490;
  uint local_488;
  uint local_484;
  undefined1 auStack_480 [1020];
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong local_68;
  
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (param_3 <= (int)param_4) {
    bVar7 = false;
    uVar6 = (ulong)param_4;
    local_484 = param_4;
    do {
      while ((uVar5 = (uint)uVar6, uVar5 == param_4 ||
             ((*(uint *)(*param_2 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) & 7) != 2)
             )) {
        if (bVar7) {
          local_68 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_70 = 0;
        }
        local_68 = local_68 | 0x8000000000000000;
        bVar7 = false;
        local_484 = uVar5 - 1;
        uVar6 = (ulong)local_484;
        local_84 = uVar5;
        if ((int)uVar5 <= param_3) {
          return;
        }
      }
      lVar2 = *param_2 + (long)(int)uVar5 * 8;
      bVar3 = *(byte *)(lVar2 + 4);
      bVar4 = *(byte *)(lVar2 + 5);
      local_4a8 = &local_80;
      puStack_4a0 = auStack_480;
      local_498 = &local_488;
      puStack_490 = &local_484;
      local_488 = param_4;
      FUN_002d337c(&local_4a8,bVar3,bVar4);
      if (((0x60 < bVar4) && (bVar3 < 0x7b)) && ((*(ushort *)(lVar2 + 6) & 1) != 0)) {
        uVar5 = (uint)bVar3;
        if (uVar5 < 0x62) {
          uVar5 = 0x61;
        }
        uVar8 = (uint)bVar4;
        if (0x79 < bVar4) {
          uVar8 = 0x7a;
        }
        if (uVar5 <= uVar8) {
          FUN_002d337c(&local_4a8,uVar5 - 0x20,uVar8 - 0x20);
        }
      }
      if (local_488 != param_4) {
        iVar9 = local_488 - local_484;
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        *(ushort *)(lVar2 + 6) = *(ushort *)(lVar2 + 6) | (ushort)(iVar9 << 1);
      }
      bVar7 = true;
      uVar6 = (ulong)(local_484 - 1);
      bVar1 = param_3 < (int)local_484;
      local_484 = local_484 - 1;
    } while (bVar1);
  }
  return;
}


