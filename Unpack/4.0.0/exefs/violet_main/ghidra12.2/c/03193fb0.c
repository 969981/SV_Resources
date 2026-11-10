/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03193fb0; name: FUN_03193fb0
 */


void FUN_03193fb0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_047e3378;
  puVar1 = PTR_PTR_047d1a50;
  local_78 = 1;
  local_70 = (ulong *)0x0;
  local_88 = PTR_DAT_047e3378 + 0x10;
  uStack_80 = 0xffffffff;
  local_68 = 0x8000000000000000;
  local_60 = (undefined8 *)0x0;
  local_58 = -0x8000000000000000;
  fVar14 = (float)param_1 * 0.5257311;
  fVar9 = (float)param_1 * 0.8506508;
  FUN_02e8df28(&local_70,PTR_PTR_047d1a50,0xc);
  if ((int)local_68 != 0xc) {
    local_68 = CONCAT44(local_68._4_4_,0xc);
  }
  fVar13 = -fVar9;
  fVar10 = -fVar14;
  uVar5 = (ulong)(uint)fVar14;
  uVar6 = (ulong)(uint)fVar10;
  local_70[1] = (ulong)(uint)fVar9;
  *local_70 = uVar6;
  local_70[3] = (ulong)(uint)fVar9;
  local_70[2] = uVar5;
  local_70[9] = uVar5;
  local_70[8] = (ulong)(uint)fVar9 << 0x20;
  local_70[0xb] = uVar6;
  local_70[10] = (ulong)(uint)fVar9 << 0x20;
  local_70[5] = (ulong)(uint)fVar13;
  local_70[4] = uVar6;
  local_70[7] = (ulong)(uint)fVar13;
  local_70[6] = uVar5;
  local_70[0xd] = uVar5;
  local_70[0xc] = (ulong)(uint)fVar13 << 0x20;
  local_70[0xf] = uVar6;
  local_70[0xe] = (ulong)(uint)fVar13 << 0x20;
  local_70[0x11] = 0;
  local_70[0x10] = CONCAT44(fVar14,fVar9);
  local_70[0x13] = 0;
  local_70[0x12] = CONCAT44(fVar14,fVar13);
  local_70[0x15] = 0;
  local_70[0x14] = CONCAT44(fVar10,fVar9);
  local_70[0x17] = 0;
  local_70[0x16] = CONCAT44(fVar10,fVar13);
  if ((local_58._4_4_ & 0x7ffffffc) < 0x14) {
    FUN_02ebb440(&local_60,PTR_PTR_047d1a50,0x14);
  }
  if ((int)local_58 != 0x14) {
    local_58 = CONCAT44(local_58._4_4_,0x14);
  }
  *local_60 = 0x400000001;
  local_60[1] = 0xffffffff00000000;
  local_60[2] = 0x900000004;
  local_60[3] = 0xffffffff00000000;
  local_60[4] = 0x500000004;
  local_60[5] = 0xffffffff00000009;
  local_60[6] = 0x500000008;
  local_60[7] = 0xffffffff00000004;
  local_60[10] = 0xa00000001;
  local_60[0xb] = 0xffffffff00000008;
  local_60[0xe] = 0x300000008;
  local_60[0xf] = 0xffffffff00000005;
  local_60[8] = 0x800000001;
  local_60[9] = 0xffffffff00000004;
  local_60[0x14] = 0xa00000003;
  local_60[0x15] = 0xffffffff00000007;
  local_60[0x12] = 0x700000003;
  local_60[0x13] = 0xffffffff00000002;
  local_60[0xc] = 0x30000000a;
  local_60[0xd] = 0xffffffff00000008;
  local_60[0x10] = 0x200000003;
  local_60[0x11] = 0xffffffff00000005;
  local_60[0x16] = 0x60000000a;
  local_60[0x17] = 0xffffffff00000007;
  local_60[0x18] = 0xb00000006;
  local_60[0x19] = 0xffffffff00000007;
  local_60[0x1a] = 6;
  local_60[0x1b] = 0xffffffff0000000b;
  local_60[0x1c] = 0x100000006;
  local_60[0x1d] = 0xffffffff00000000;
  local_60[0x1e] = 0x10000000a;
  local_60[0x1f] = 0xffffffff00000006;
  local_60[0x20] = 0xb;
  local_60[0x21] = 0xffffffff00000009;
  local_60[0x22] = 0xb00000002;
  local_60[0x23] = 0xffffffff00000009;
  local_60[0x24] = 0x200000005;
  local_60[0x25] = 0xffffffff00000009;
  local_60[0x26] = 0x20000000b;
  local_60[0x27] = 0xffffffff00000007;
  iVar3 = (int)local_58;
  if (0 < (int)local_58) {
    iVar8 = 0;
    do {
      FUN_031943f0(param_1,&local_88,iVar8,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  if (0 < (int)local_68) {
    if ((int)local_68 == 1) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar12 = (local_70 + uVar5 * 2)[1];
        uVar6 = local_70[uVar5 * 2];
        uVar11 = *param_2;
        (local_70 + uVar5 * 2)[1] =
             CONCAT44((float)(uVar12 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                      (float)uVar12 + (float)param_2[1]);
        local_70[uVar5 * 2] =
             CONCAT44((float)(uVar6 >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                      (float)uVar6 + (float)uVar11);
        uVar11 = *param_2;
        uVar6 = uVar5 + 2;
        local_70[uVar5 * 2 + 3] =
             CONCAT44((float)(local_70[uVar5 * 2 + 3] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                      (float)local_70[uVar5 * 2 + 3] + (float)param_2[1]);
        local_70[uVar5 * 2 + 2] =
             CONCAT44((float)(local_70[uVar5 * 2 + 2] >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                      (float)local_70[uVar5 * 2 + 2] + (float)uVar11);
        uVar5 = uVar6;
      } while ((local_68 & 0xfffffffe) != uVar6);
    }
    if ((local_68 & 1) != 0) {
      uVar12 = (local_70 + uVar6 * 2)[1];
      uVar5 = local_70[uVar6 * 2];
      uVar11 = *param_2;
      (local_70 + uVar6 * 2)[1] =
           CONCAT44((float)(uVar12 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                    (float)uVar12 + (float)param_2[1]);
      local_70[uVar6 * 2] =
           CONCAT44((float)(uVar5 >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                    (float)uVar5 + (float)uVar11);
    }
  }
  if ((param_5 != -1) && (0 < (int)local_58)) {
    lVar4 = 0;
    lVar7 = 0xc;
    do {
      *(int *)((long)local_60 + lVar7) = param_5;
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar4 < (int)local_58);
  }
  FUN_03241cc4(param_4,&local_88,0);
  lVar4 = local_58;
  local_88 = puVar2 + 0x10;
  uVar5 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_60 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_60,uVar5 << 4);
  }
  uVar5 = local_68;
  local_58 = CONCAT44(0x80000000,(int)local_58);
  uVar6 = (ulong)local_68._4_4_;
  local_60 = (undefined8 *)0x0;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_70 != (ulong *)0x0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_70,uVar6 << 4);
  }
  return;
}


