/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f340e4; name: FUN_02f340e4
 */


void FUN_02f340e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = 0x8000000000000000;
  lVar9 = *(long *)(param_1 + 0x4c8);
  lVar10 = *(long *)(param_1 + 0x4d0);
  uVar8 = *(uint *)(lVar10 + 4);
  if (lVar9 == lVar10 && uVar8 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(lVar9 + ((long)((ulong)uVar4 << 0x20) >> 0x1e) + 0x10);
      if (*(uint *)(*(long *)(param_1 + 0x38) + ((ulong)uVar5 & 0xffffff) * 0xc0 + 0x50) == uVar5) {
        pbVar11 = (byte *)(*(long *)(param_1 + 0x38) + ((ulong)uVar5 & 0xffffff) * 0xc0 + 0x88);
        if ((*pbVar11 & 7) == 3) {
          lVar6 = (long)(int)local_68;
          if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
            FUN_02f23d90(&local_70,puVar1,lVar6 + 1);
          }
          *(uint *)(local_70 + (long)(int)local_68 * 4) = uVar5;
          local_68 = CONCAT44(local_68._4_4_,(int)(lVar6 + 1));
          bVar3 = *pbVar11 ^ 6;
        }
        else {
          bVar3 = *pbVar11 & 0xfd;
        }
        *pbVar11 = bVar3;
      }
      uVar5 = uVar4 + 1;
      if ((0xfe < (int)uVar4) || (*(int *)(lVar9 + 4) <= (int)uVar5)) {
        if (*(long *)(lVar9 + 8) != 0) {
          uVar5 = 0;
          lVar9 = *(long *)(lVar9 + 8);
        }
      }
      uVar4 = uVar5;
    } while ((lVar9 != lVar10) || (uVar8 != uVar5));
    uVar2 = local_68 & 0xffffffff;
  }
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x30))(*(long **)(param_1 + 0x4c0),local_70,uVar2,1);
  lVar9 = *(long *)(*(long *)(param_1 + 0x4c8) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x4c8) + 8) = 0;
  lVar10 = *(long *)(param_1 + 0x4c8);
  uVar4 = *(uint *)(lVar10 + 4);
  uVar8 = uVar4;
  if (0xff < (int)uVar4) {
    uVar8 = 0x100;
  }
  if (0 < (int)uVar4) {
    uVar4 = uVar8;
    if ((int)uVar8 < 2) {
      uVar4 = 1;
    }
    if ((int)uVar8 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        *(undefined4 *)(lVar10 + uVar2 * 4 + 0x10) = 0xffffff;
        lVar10 = uVar2 * 4;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(long *)(param_1 + 0x4c8) + lVar10 + 0x14) = 0xffffff;
        lVar10 = *(long *)(param_1 + 0x4c8);
      } while (((ulong)uVar4 & 0x7ffffffe) != uVar2);
    }
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(lVar10 + uVar2 * 4 + 0x10) = 0xffffff;
      lVar10 = *(long *)(param_1 + 0x4c8);
    }
  }
  *(undefined4 *)(lVar10 + 4) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x4c8);
  puVar1 = PTR_DAT_047d1a08;
  uVar2 = local_68;
  while (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 8);
    local_68 = uVar2;
    (**(code **)(puVar1 + 8))(0,lVar9,0);
    uVar2 = local_68;
    lVar9 = lVar10;
  }
  local_68._4_4_ = (uint)(uVar2 >> 0x20);
  uVar7 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_70 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_70,uVar7 << 2);
  }
  return;
}


