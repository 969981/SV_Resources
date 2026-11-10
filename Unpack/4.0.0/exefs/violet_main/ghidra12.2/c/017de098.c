/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017de098; name: FUN_017de098
 */


void FUN_017de098(void *param_1,undefined8 *param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  uint *puVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong local_218;
  undefined1 *local_210;
  undefined1 **ppuStack_208;
  undefined8 local_200;
  long *local_1f8;
  undefined1 *local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  long *local_180 [3];
  undefined1 auStack_168 [8];
  long *local_160;
  undefined1 auStack_128 [64];
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  memset(param_1,0,0x3c1);
  puVar2 = PTR_DAT_047d8e88;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = PTR_DAT_047d8e88 + 0x10;
  uStack_a0 = 0;
  local_e8 = param_3;
  FUN_00e52f24(local_180,&local_e8);
  FUN_00dc5c18(&local_a8,0,local_180,0,*(undefined8 *)*param_2);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_180[0] != (long *)0x0) {
    (**(code **)(*local_180[0] + 0x20))();
  }
  local_e8 = puVar2 + 0x10;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1f0 = param_4;
  FUN_00e52f24(local_180,&local_1f0);
  FUN_00dc5c18(&local_e8,0,local_180,0,*(undefined8 *)*param_2);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_180[0] != (long *)0x0) {
    (**(code **)(*local_180[0] + 0x20))();
  }
  FUN_00fb9e50(local_180,&local_a8,&local_e8);
  FUN_00fb4dd0(auStack_198,local_180);
  local_1f0 = &DAT_fbec41851566601b;
  local_1e8 = "values";
  local_1e0 = 6;
  local_1d8 = (long *)0x0;
  puVar4 = (uint *)FUN_00efa07c(auStack_198,&local_1f0);
  if (puVar4 == (uint *)0x0) {
    local_218 = 0;
  }
  else {
    local_218 = (ulong)*puVar4;
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  uVar7 = 0;
  do {
    if (uVar7 < local_218) {
      local_1d8 = (long *)0x0;
      local_1f0 = &DAT_fbec41851566601b;
      local_1e8 = "values";
      local_1e0 = 6;
      FUN_00e90ee0(auStack_1b0,auStack_198,&local_1f0,uVar7 & 0xffffffff);
      if (local_1d8 != (long *)0x0) {
        (**(code **)(*local_1d8 + 0x20))();
      }
      lVar8 = 0;
      do {
        lVar1 = lVar8 + 1;
        snprintf((char *)&local_1f0,0x40,"c_%03d",(int)lVar1);
        uVar5 = (ulong)local_1f0 & 0xff;
        local_210 = &DAT_cbf29ce484222645;
        if ((char)local_1f0 != '\0') {
          local_210 = &DAT_cbf29ce484222645;
          pbVar6 = (byte *)((ulong)&local_1f0 | 1);
          do {
            local_210 = (undefined1 *)(((ulong)local_210 ^ uVar5) * 0x100000001b3);
            bVar3 = *pbVar6;
            uVar5 = (ulong)bVar3;
            pbVar6 = pbVar6 + 1;
          } while (bVar3 != 0);
        }
        local_200 = 0x3f;
        local_1f8 = (long *)0x0;
        ppuStack_208 = &local_1f0;
        bVar3 = FUN_00cf7518(auStack_1b0,&local_210);
        *(byte *)((long)param_1 + lVar8 + uVar7 * 0x1f) = bVar3 & 1;
        if (local_1f8 != (long *)0x0) {
          (**(code **)(*local_1f8 + 0x20))();
        }
        lVar8 = lVar1;
      } while (lVar1 != 0x1f);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x1f);
  FUN_00db239c(auStack_128);
  FUN_00db239c(auStack_168);
  FUN_00db239c(&local_e8);
  FUN_00db239c(&local_a8);
  return;
}


