/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01facb64; name: FUN_01facb64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01facb64(long param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 local_48;
  float local_44;
  
  local_44 = nextafterf(1.0,3.4028235e+38);
  param_1 = param_1 + 0x158;
  local_48 = 0;
  fVar2 = (float)FUN_01facfb8(param_1,&local_48);
  fVar8 = *param_2;
  fVar12 = param_2[4];
  local_44 = nextafterf(1.0,3.4028235e+38);
  local_48 = 0;
  fVar3 = (float)FUN_01facfb8(param_1,&local_48);
  fVar9 = param_2[1];
  fVar13 = param_2[5];
  local_44 = nextafterf(1.0,3.4028235e+38);
  local_48 = 0;
  fVar4 = (float)FUN_01facfb8(param_1,&local_48);
  fVar10 = param_2[2];
  fVar14 = param_2[6];
  local_44 = nextafterf(1.0,3.4028235e+38);
  local_48 = 0;
  FUN_01facfb8(param_1,&local_48);
  local_44 = nextafterf(1.0,3.4028235e+38);
  local_48 = 0;
  FUN_01facfb8(param_1,&local_48);
  local_44 = nextafterf(1.0,3.4028235e+38);
  local_48 = 0;
  FUN_01facfb8(param_1,&local_48);
  local_44 = nextafterf(360.0,3.4028235e+38);
  local_48 = 0;
  fVar5 = (float)FUN_01facfb8(param_1,&local_48);
  local_44 = nextafterf(360.0,3.4028235e+38);
  local_48 = 0;
  fVar6 = (float)FUN_01facfb8(param_1,&local_48);
  local_44 = nextafterf(360.0,3.4028235e+38);
  local_48 = 0;
  fVar7 = (float)FUN_01facfb8(param_1,&local_48);
  fVar7 = ((fVar7 * 3.1415927) / 180.0) * 0.5;
  fVar6 = ((fVar6 * 3.1415927) / 180.0) * 0.5;
  fVar5 = ((fVar5 * 3.1415927) / 180.0) * 0.5;
  auVar15._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar7) & 0x80000000 ^ 0xbf000000) + fVar7 * 0.15915494);
  auVar15._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar6) & 0x80000000 ^ 0xbf000000) + fVar6 * 0.15915494);
  auVar15._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000) + fVar5 * 0.15915494);
  auVar15._12_4_ = 0;
  NEON_scvtf(auVar15,4);
  auVar11._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar7 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
            (fVar7 + 1.5707964) * 0.15915494);
  auVar11._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar6 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
            (fVar6 + 1.5707964) * 0.15915494);
  auVar11._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar5 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
            (fVar5 + 1.5707964) * 0.15915494);
  auVar11._12_4_ = 0;
  NEON_scvtf(auVar11,4);
  NEON_fmov(0x3f800000,4);
  auVar1._4_4_ = fVar9 + fVar3 * (fVar13 - fVar9);
  auVar1._0_4_ = fVar8 + fVar2 * (fVar12 - fVar8);
  auVar1._8_4_ = fVar10 + fVar4 * (fVar14 - fVar10);
  auVar1._12_4_ = 0;
  return auVar1;
}


