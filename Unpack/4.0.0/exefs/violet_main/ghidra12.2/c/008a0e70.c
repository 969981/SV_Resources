/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a0e70; name: FUN_008a0e70
 */


undefined8 FUN_008a0e70(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0x30000) == 0) {
    return 0;
  }
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = ((ulong)(uVar3 << 4) & 0x30) + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8;
  lVar6 = (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14;
  lVar7 = ((ulong)(uVar3 >> 4) & 0x1c) + ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 0xc) & 8) +
          ((ulong)(uVar3 >> 0xc) & 1) * 0xc + ((ulong)(uVar3 >> 0x10) & 1) * 0x1c;
  if ((uVar2 >> 0x10 & 1) == 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             lVar6 + uVar5 + ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) + lVar7);
    local_80 = *puVar1;
    local_78 = puVar1[1];
    uVar8 = 0x53554243;
    local_70 = puVar1[2];
    local_68 = puVar1[3];
    local_60 = puVar1[4];
    local_58 = puVar1[5];
    local_50 = puVar1[6];
    local_48 = puVar1[7];
    local_40 = puVar1[8];
    local_38 = puVar1[9];
    local_30 = puVar1[10];
    local_28 = puVar1[0xb];
  }
  else {
    uVar8 = 0x42435444;
    uVar2 = uVar2 >> 6 & 7;
    if (uVar2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6 + uVar5 + lVar7);
      local_80 = *puVar1;
      local_78 = puVar1[1];
      if (uVar2 != 1) {
        local_70 = puVar1[2];
        local_68 = puVar1[3];
        if (uVar2 != 2) {
          local_60 = puVar1[4];
          local_58 = puVar1[5];
          if (uVar2 != 3) {
            local_50 = puVar1[6];
            local_48 = puVar1[7];
            if (uVar2 != 4) {
              local_40 = puVar1[8];
              local_38 = puVar1[9];
              if (uVar2 != 5) {
                local_30 = puVar1[10];
                local_28 = puVar1[0xb];
                if (uVar2 != 6) {
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = FUN_00899bd0(*(undefined8 *)(param_3 + 0x38),param_2,uVar8,0x18,&local_80);
  *(long *)(param_1 + 0x20) = lVar6;
  uVar4 = FUN_008b4430(*(undefined8 *)(lVar6 + 0x38),uVar8,0x18,&local_80);
  *(undefined2 *)(param_1 + 0x4a) = uVar4;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
  return 1;
}


