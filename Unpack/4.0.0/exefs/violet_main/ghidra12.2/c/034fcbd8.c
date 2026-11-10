/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fcbd8; name: FUN_034fcbd8
 */


bool FUN_034fcbd8(long *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((((*param_1 == 0) || (param_1[2] == 0)) || (param_1[4] == 0)) || (param_1[6] == 0)) {
    bVar3 = true;
  }
  else {
    if (*(char *)((long)param_1 + 0x4b) != '\0') {
      *(undefined1 *)((long)param_1 + 0x4b) = 0;
      if (*(char *)((long)param_1 + 0x4c) == '\0') {
        if ((0.1 < *(float *)(param_1 + 8)) || (0.1 < *(float *)((long)param_1 + 0x44))) {
          cVar4 = '\0';
          *(undefined1 *)((long)param_1 + 0x4a) = 0;
        }
        else {
          cVar4 = '\x01';
        }
        if (*(char *)((long)param_1 + 0x4d) != cVar4) {
          *(undefined1 *)((long)param_1 + 0x4e) = 0;
        }
        *(char *)((long)param_1 + 0x4d) = cVar4;
        uVar1 = *(undefined2 *)PTR_DAT_047e7208;
        if (cVar4 == '\0') {
          uVar1 = 0;
        }
        *(undefined2 *)(param_1 + 9) = uVar1;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x4c) = 0;
        puVar2 = PTR_DAT_047e7208;
        fVar7 = *(float *)((long)param_1 + 0x44);
        *(float *)(param_1 + 8) = fVar7;
        *(undefined2 *)(param_1 + 9) = *(undefined2 *)puVar2;
        if (0.1 < fVar7) {
          *(undefined1 *)((long)param_1 + 0x4a) = 0;
        }
        if ((bool)*(char *)((long)param_1 + 0x4d) != fVar7 <= 0.1) {
          *(undefined1 *)((long)param_1 + 0x4e) = 0;
        }
        *(bool *)((long)param_1 + 0x4d) = fVar7 <= 0.1;
        if (0.1 < fVar7) {
          uVar6 = (uint)(fVar7 * -1042939.94 + 1.1696472e+09);
          fVar8 = (float)(uVar6 & 0x7fffff | 0x3f800000);
          fVar8 = (float)(uVar6 & 0xff800000) * 16.797443 *
                  (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345);
          if (fVar7 < 30.0) {
            fVar8 = fVar7 * -433.33334 + 20000.0;
          }
          fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
          fVar7 = (float)NEON_fminnm(fVar9 * 0.45,fVar8);
          fVar7 = tanf((fVar7 * 3.1415927) / fVar9);
          fVar7 = 1.0 / fVar7;
          fVar9 = fVar7 * fVar7;
          fVar8 = 1.0 / (fVar7 * 1.4142135 + 1.0 + fVar9);
          FUN_034fd1e0(fVar8,fVar8 + fVar8,fVar8,fVar8 * (2.0 - fVar9 * 2.0),
                       fVar8 * ((1.0 - fVar7 * 1.4142135) + fVar9),param_1 + 2);
        }
      }
    }
    cVar4 = *(char *)((long)param_1 + 0x4d);
    if (*(char *)((long)param_1 + 0x5b) != '\0') {
      *(undefined1 *)((long)param_1 + 0x5b) = 0;
      if (*(char *)((long)param_1 + 0x5c) == '\0') {
        if ((0.1 < *(float *)(param_1 + 10)) || (0.1 < *(float *)((long)param_1 + 0x54))) {
          cVar5 = '\0';
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
        }
        else {
          cVar5 = '\x01';
        }
        if (*(char *)((long)param_1 + 0x5d) != cVar5) {
          *(undefined1 *)((long)param_1 + 0x5e) = 0;
        }
        *(char *)((long)param_1 + 0x5d) = cVar5;
        uVar1 = *(undefined2 *)PTR_DAT_047e7208;
        if (cVar5 == '\0') {
          uVar1 = 0;
        }
        *(undefined2 *)(param_1 + 0xb) = uVar1;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x5c) = 0;
        puVar2 = PTR_DAT_047e7208;
        fVar7 = *(float *)((long)param_1 + 0x54);
        *(float *)(param_1 + 10) = fVar7;
        *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)puVar2;
        if (0.1 < fVar7) {
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
        }
        if ((bool)*(char *)((long)param_1 + 0x5d) != fVar7 <= 0.1) {
          *(undefined1 *)((long)param_1 + 0x5e) = 0;
        }
        *(bool *)((long)param_1 + 0x5d) = fVar7 <= 0.1;
        if (0.1 < fVar7) {
          fVar7 = 100.0 - fVar7;
          uVar6 = (uint)(fVar7 * -1042939.94 + 1.1696472e+09);
          fVar8 = (float)(uVar6 & 0x7fffff | 0x3f800000);
          fVar8 = (float)(uVar6 & 0xff800000) * 16.797443 *
                  (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345);
          if (fVar7 < 30.0) {
            fVar8 = fVar7 * -433.33334 + 20000.0;
          }
          fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
          fVar7 = (float)NEON_fminnm(fVar9 * 0.45,fVar8);
          fVar7 = tanf((fVar7 * 3.1415927) / fVar9);
          fVar10 = fVar7 * fVar7 + 1.0;
          fVar8 = 1.0 / (fVar10 + fVar7 * 1.4142135);
          fVar9 = fVar8 * -2.0;
          FUN_034fd1e0(fVar8,fVar9,fVar8,fVar9 - fVar9 * fVar7 * fVar7,
                       fVar8 * (fVar10 - fVar7 * 1.4142135),param_1 + 6);
        }
      }
    }
    bVar3 = cVar4 != '\0' && *(char *)((long)param_1 + 0x5d) != '\0';
  }
  return bVar3;
}


