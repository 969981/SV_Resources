/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed9418; name: FUN_01ed9418
 */


void FUN_01ed9418(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar6 = FUN_01ed96ac();
  if (lVar6 == 0) {
    return;
  }
  uStack_50 = *param_1;
  lVar13 = param_1[1];
  local_38 = 0;
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  local_58 = 0;
  local_48 = 0x5c0b81702e05c0;
  uStack_40 = 0;
  lVar14 = param_1[2];
  if (lVar13 != lVar14) {
    do {
      uVar7 = FUN_01ed9708(lVar6,lVar13);
      if ((uVar7 & 1) == 0) {
        FUN_01ed9190(&local_68,lVar13);
      }
      lVar13 = lVar13 + 0x2c8;
    } while (lVar14 != lVar13);
    if (local_68 != pvStack_60) {
      uVar4 = 0;
      pvVar8 = local_68;
      do {
        pbVar1 = (byte *)((long)pvVar8 + 0x14);
        pvVar8 = (void *)((long)pvVar8 + 0x2c8);
        uVar9 = (uint)*pbVar1;
        if (*pbVar1 < 2) {
          uVar9 = 1;
        }
        uVar4 = uVar4 + uVar9;
      } while (pvStack_60 != pvVar8);
      local_70 = 0;
      local_80 = 0xf4b17a579f18960;
      uStack_78 = 0x82a2b175229d6a5b;
      FUN_00d1af18(&local_80);
      if (uVar4 == 0) {
        uVar9 = (int)uStack_78 + (int)local_80;
        uStack_78 = uStack_78 ^ local_80;
        local_80 = uStack_78 ^ (local_80 >> 0x28 | local_80 << 0x18) ^ uStack_78 << 0x10;
        uStack_78 = uStack_78 >> 0x1b | uStack_78 << 0x25;
      }
      else if (uVar4 == 1) {
        uVar9 = 0;
      }
      else {
        lVar6 = 0x1f;
        if ((uVar4 << (ulong)((uint)LZCOUNT(uVar4) & 0x1f) & 0x7fffffff) != 0) {
          lVar6 = 0x20;
        }
        uVar10 = lVar6 - LZCOUNT(uVar4);
        uVar7 = uVar10 >> 6;
        if ((uVar10 & 0x3f) != 0) {
          uVar7 = uVar7 + 1;
        }
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar10 / uVar7;
        }
        uVar12 = local_80 ^ uStack_78;
        lVar6 = local_80 + uStack_78;
        uVar11 = 0;
        if (uVar7 <= uVar10) {
          uVar11 = (uint)(0xffffffffffffffff >> (-uVar3 & 0x3f));
        }
        local_80 = uVar12 ^ (local_80 >> 0x28 | local_80 << 0x18) ^ uVar12 << 0x10;
        uStack_78 = uVar12 >> 0x1b | uVar12 << 0x25;
        while (uVar9 = (uint)lVar6 & uVar11, uVar4 <= uVar9) {
          uVar7 = local_80 ^ uStack_78;
          lVar6 = local_80 + uStack_78;
          local_80 = uVar7 ^ (local_80 >> 0x28 | local_80 << 0x18) ^ uVar7 << 0x10;
          uStack_78 = uVar7 >> 0x1b | uVar7 << 0x25;
        }
      }
      if (local_68 != pvStack_60) {
        pvVar8 = local_68;
        uVar4 = 0;
        do {
          uVar11 = (uint)*(byte *)((long)pvVar8 + 0x14);
          if (*(byte *)((long)pvVar8 + 0x14) < 2) {
            uVar11 = 1;
          }
          if ((uVar4 <= uVar9) && (uVar9 < uVar4 + uVar11)) {
            cVar2 = *(char *)(param_1 + 8);
            memcpy(param_1 + 9,pvVar8,0x2c8);
            if (cVar2 == '\0') {
              *(undefined1 *)(param_1 + 8) = 1;
            }
            uVar4 = FUN_01c879cc(param_1 + 9);
            *(uint *)((long)param_1 + 0x314) = ~uVar4 & 1;
            break;
          }
          pvVar8 = (void *)((long)pvVar8 + 0x2c8);
          uVar4 = uVar4 + uVar11;
        } while (pvStack_60 != pvVar8);
      }
      goto LAB_01ed95ac;
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
LAB_01ed95ac:
  FUN_01ed9328(&local_68);
  return;
}


