/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ad5d0; name: FUN_034ad5d0
 */


undefined1  [16] FUN_034ad5d0(long param_1,undefined8 param_2)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  float extraout_s0;
  float fVar8;
  float fVar9;
  undefined4 extraout_var;
  undefined4 uVar11;
  undefined8 extraout_var_00;
  undefined8 uVar12;
  undefined1 auVar10 [16];
  float fVar13;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  float local_24;
  
  if ((*(long *)(param_1 + 0x98) == 0) || ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0xff;
    local_38 = 0xff;
    local_30 = 0;
    local_58 = param_2;
    pfVar3 = *(float **)(param_1 + 0xb0);
    local_24 = DAT_048b0164._4_4_;
    if (pfVar3 != (float *)0x0) {
      bVar1 = *(byte *)pfVar3;
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 1;
      }
      uVar6 = (ulong)uVar7;
      pfVar2 = (float *)((long)pfVar3 + ((ulong)(bVar1 + 4) & 0x1fc));
      pfVar4 = pfVar3;
      do {
        pfVar3 = pfVar2;
        pfVar4 = (float *)((long)pfVar4 + 1);
        if (*(byte *)pfVar4 == 7) goto LAB_034ad66c;
        uVar6 = uVar6 - 1;
        pfVar2 = pfVar3 + 1;
      } while (uVar6 != 0);
      pfVar3 = (float *)0x0;
    }
LAB_034ad66c:
    pfVar4 = &local_24;
    if (pfVar3 != (float *)0x0) {
      pfVar4 = pfVar3;
    }
    fVar13 = *pfVar4;
    fVar8 = (float)FUN_034a9a38(param_1,0x11,&local_58);
    fVar9 = 50.0;
    if ((((uint)(fVar8 + fVar13) ^ 0xffffffff) & 0x7f800000) != 0) {
      fVar9 = fVar8 + fVar13;
    }
    uVar12 = 0;
    uVar11 = 0;
    if (*(char *)(param_1 + 0xdb) < '\0') {
      local_58 = CONCAT44(local_58._4_4_,DAT_048b016c);
      pbVar5 = *(byte **)(param_1 + 0xb0);
      if (pbVar5 != (byte *)0x0) {
        uVar7 = (uint)*pbVar5;
        if (*pbVar5 < 2) {
          uVar7 = 1;
        }
        uVar6 = (ulong)uVar7;
        do {
          pbVar5 = pbVar5 + 1;
          if (*pbVar5 == 8) break;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  else {
    FUN_034ad5d0();
    fVar9 = extraout_s0;
    uVar11 = extraout_var;
    uVar12 = extraout_var_00;
  }
  auVar10._4_4_ = uVar11;
  auVar10._0_4_ = fVar9;
  auVar10._8_8_ = uVar12;
  return auVar10;
}


