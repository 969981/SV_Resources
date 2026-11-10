/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034293fc; name: FUN_034293fc
 */


uint FUN_034293fc(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = 0;
  local_48 = 0;
  uVar8 = (uint)param_2;
  bVar3 = (byte)((ulong)param_2 >> 0x38);
  uVar4 = (ushort)((ulong)param_2 >> 0x30);
  uVar6 = (uint)((ulong)param_2 >> 0x20);
  if ((param_5 & 1) == 0) {
    puVar10 = (undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xe8) - 1) * 0x10);
    local_60 = *puVar10;
    local_58 = *(undefined4 *)(puVar10 + 1);
    lVar2 = param_4;
    if (*(int *)(param_3 + 0x78) != 0) {
      lVar2 = param_3 + (ulong)(*(int *)(param_3 + 0x78) - 1) * 0xc + 0xc;
    }
    FUN_034237c0(param_2,&local_60,lVar2,&local_50);
    *(uint *)(param_1 + 0xec) =
         (((((((*(int *)(param_1 + 0xec) * 0x1000193 ^ uVar8 & 0xff) * 0x1000193 ^ uVar8 >> 8 & 0xff
              ) * 0x1000193 ^ uVar8 >> 0x10 & 0xff) * 0x1000193 ^ uVar8 >> 0x18) * 0x1000193 ^
           uVar6 & 0xff) * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^ uVar4 & 0xff) * 0x1000193 ^
         (uint)bVar3;
    uVar6 = *(int *)(param_3 + 0x78) - 1;
    if (-1 < (int)uVar6) {
      puVar10 = (undefined8 *)(param_3 + (ulong)uVar6 * 0xc + 0xc);
      uVar9 = (ulong)uVar6;
      do {
        local_60 = *puVar10;
        local_58 = *(undefined4 *)(puVar10 + 1);
        local_80 = local_50;
        local_78 = local_48;
        uVar7 = FUN_034292bc(param_1,&local_80,&local_60);
        local_50 = local_60;
        local_48 = local_58;
        if ((long)uVar9 < 1) break;
        puVar10 = (undefined8 *)((long)puVar10 + -0xc);
        uVar9 = uVar9 - 1;
      } while ((uVar7 & 1) != 0);
      goto LAB_03429660;
    }
  }
  else {
    puVar10 = (undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xe8) - 1) * 0x10);
    local_60 = *puVar10;
    local_58 = *(undefined4 *)(puVar10 + 1);
    puVar10 = (undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined8 *)(param_3 + 0x6c);
    if (*(int *)(param_3 + 0x78) != 0) {
      puVar1 = puVar10;
    }
    FUN_034237c0(param_2,&local_60,puVar1,&local_50);
    *(uint *)(param_1 + 0xec) =
         (((((((*(int *)(param_1 + 0xec) * 0x1000193 ^ uVar8 & 0xff) * 0x1000193 ^ uVar8 >> 8 & 0xff
              ) * 0x1000193 ^ uVar8 >> 0x10 & 0xff) * 0x1000193 ^ uVar8 >> 0x18) * 0x1000193 ^
           uVar6 & 0xff) * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^ uVar4 & 0xff) * 0x1000193 ^
         (uint)bVar3;
    if (*(int *)(param_3 + 0x78) != 0) {
      uVar9 = 1;
      do {
        local_60 = *puVar10;
        local_58 = *(undefined4 *)(puVar10 + 1);
        local_70 = local_50;
        local_68 = local_48;
        uVar7 = FUN_034292bc(param_1,&local_70,&local_60);
        local_50 = local_60;
        local_48 = local_58;
        if ((uVar7 & 1) == 0) break;
        bVar5 = uVar9 < *(uint *)(param_3 + 0x78);
        uVar9 = uVar9 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (bVar5);
LAB_03429660:
      local_60 = local_50;
      local_58 = local_48;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        goto LAB_0342968c;
      }
    }
  }
  local_90 = local_50;
  local_88 = local_48;
  uVar6 = FUN_034292bc(param_1,&local_90,param_4);
LAB_0342968c:
  uVar8 = *(uint *)(param_3 + 0x90);
  *(uint *)(param_1 + 0xec) =
       (((*(int *)(param_1 + 0xec) * 0x1000193 ^ uVar8 & 0xff) * 0x1000193 ^ uVar8 >> 8 & 0xff) *
        0x1000193 ^ uVar8 >> 0x10 & 0xff) * 0x1000193 ^ uVar8 >> 0x18;
  return uVar6 & 1;
}


