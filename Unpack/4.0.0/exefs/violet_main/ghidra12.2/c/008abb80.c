/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008abb80; name: FUN_008abb80
 */


char FUN_008abb80(long *param_1,long param_2,int param_3,long param_4)

{
  float *pfVar1;
  byte bVar2;
  char cVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_e0 [32];
  float local_58;
  float fStack_54;
  
  pfVar1 = (float *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3);
  pfVar1[0x34] = 0.0;
  pfVar1[0x35] = 0.0;
  pfVar1[0x36] = 0.0;
  pfVar1[0x37] = 0.0;
  pfVar1[0x30] = 0.0;
  pfVar1[0x31] = 0.0;
  pfVar1[0x32] = 0.0;
  pfVar1[0x33] = 0.0;
  pfVar1[0x2c] = 0.0;
  pfVar1[0x2d] = 0.0;
  pfVar1[0x2e] = 0.0;
  pfVar1[0x2f] = 0.0;
  pfVar1[0x28] = 0.0;
  pfVar1[0x29] = 0.0;
  pfVar1[0x2a] = 0.0;
  pfVar1[0x2b] = 0.0;
  pfVar1[0x24] = 0.0;
  pfVar1[0x25] = 0.0;
  pfVar1[0x26] = 0.0;
  pfVar1[0x27] = 0.0;
  pfVar1[0x20] = 0.0;
  pfVar1[0x21] = 0.0;
  pfVar1[0x22] = 0.0;
  pfVar1[0x23] = 0.0;
  pfVar1[0x1c] = 0.0;
  pfVar1[0x1d] = 0.0;
  pfVar1[0x1e] = 0.0;
  pfVar1[0x1f] = 0.0;
  pfVar1[0x18] = 0.0;
  pfVar1[0x19] = 0.0;
  pfVar1[0x1a] = 0.0;
  pfVar1[0x1b] = 0.0;
  pfVar1[0x14] = 0.0;
  pfVar1[0x15] = 0.0;
  pfVar1[0x16] = 0.0;
  pfVar1[0x17] = 0.0;
  pfVar1[0x10] = 0.0;
  pfVar1[0x11] = 0.0;
  pfVar1[0x12] = 0.0;
  pfVar1[0x13] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xf] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  fVar7 = *(float *)(param_4 + 0x18) / -100.0 + 1.0;
  if (fVar7 <= 0.0039) {
    fVar7 = 0.0039;
  }
  pfVar1[4] = 1.0 / fVar7;
  *pfVar1 = *(float *)(param_4 + 8) / 255.0;
  pfVar1[1] = *(float *)(param_4 + 0xc) / 255.0;
  pfVar1[2] = *(float *)(param_4 + 0x10) / 255.0;
  pfVar1[3] = *(float *)(param_4 + 0x14) / 255.0;
  fVar7 = *(float *)(param_4 + 0x1c);
  if (fVar7 == 0.0) {
    pfVar1[0x34] = 0.0;
    pfVar1[0x35] = 0.0;
    pfVar1[0x36] = 0.0;
    pfVar1[0x37] = 0.0;
    pfVar1[5] = 1.0;
    pfVar1[0x30] = 0.0;
    pfVar1[0x31] = 0.0;
    pfVar1[0x32] = 0.0;
    pfVar1[0x33] = 0.0;
    pfVar1[0x2c] = 0.0;
    pfVar1[0x2d] = 0.0;
    pfVar1[0x2e] = 0.0;
    pfVar1[0x2f] = 0.0;
    pfVar1[0x28] = 0.0;
    pfVar1[0x29] = 0.0;
    pfVar1[0x2a] = 0.0;
    pfVar1[0x2b] = 0.0;
  }
  else {
    fVar9 = 0.0;
    lVar6 = 0;
    local_e0[0x1c] = 0.0;
    local_e0[0x1d] = 0.0;
    local_e0[0x1e] = 0.0;
    local_e0[0x1f] = 0.0;
    local_e0[0x18] = 0.0;
    local_e0[0x19] = 0.0;
    local_e0[0x1a] = 0.0;
    local_e0[0x1b] = 0.0;
    local_e0[0x14] = 0.0;
    local_e0[0x15] = 0.0;
    local_e0[0x16] = 0.0;
    local_e0[0x17] = 0.0;
    local_e0[0x10] = 0.0;
    local_e0[0x11] = 0.0;
    local_e0[0x12] = 0.0;
    local_e0[0x13] = 0.0;
    local_e0[0xc] = 0.0;
    local_e0[0xd] = 0.0;
    local_e0[0xe] = 0.0;
    local_e0[0xf] = 0.0;
    local_e0[8] = 0.0;
    local_e0[9] = 0.0;
    local_e0[10] = 0.0;
    local_e0[0xb] = 0.0;
    local_e0[4] = 0.0;
    local_e0[5] = 0.0;
    local_e0[6] = 0.0;
    local_e0[7] = 0.0;
    local_e0[0] = 0.0;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_e0[3] = 0.0;
    while( true ) {
      fVar7 = ((float)(int)lVar6 / fVar7) * 2.8;
      fVar7 = expf(fVar7 * fVar7 * -0.5);
      local_e0[lVar6] = fVar7;
      if (lVar6 != 0) {
        fVar7 = fVar7 + fVar7;
      }
      fVar9 = fVar9 + fVar7;
      if (lVar6 == 0x1f) break;
      fVar7 = *(float *)(param_4 + 0x1c);
      lVar6 = lVar6 + 1;
    }
    local_e0[1] = local_e0[1] / fVar9;
    local_e0[0] = local_e0[0] / fVar9;
    local_e0[3] = local_e0[3] / fVar9;
    local_e0[2] = local_e0[2] / fVar9;
    local_e0[5] = local_e0[5] / fVar9;
    local_e0[4] = local_e0[4] / fVar9;
    local_e0[7] = local_e0[7] / fVar9;
    local_e0[6] = local_e0[6] / fVar9;
    local_e0[9] = local_e0[9] / fVar9;
    local_e0[8] = local_e0[8] / fVar9;
    local_e0[0xb] = local_e0[0xb] / fVar9;
    local_e0[10] = local_e0[10] / fVar9;
    local_e0[0xd] = local_e0[0xd] / fVar9;
    local_e0[0xc] = local_e0[0xc] / fVar9;
    local_e0[0xf] = local_e0[0xf] / fVar9;
    local_e0[0xe] = local_e0[0xe] / fVar9;
    local_e0[0x11] = local_e0[0x11] / fVar9;
    local_e0[0x10] = local_e0[0x10] / fVar9;
    local_e0[0x13] = local_e0[0x13] / fVar9;
    local_e0[0x12] = local_e0[0x12] / fVar9;
    local_e0[0x15] = local_e0[0x15] / fVar9;
    local_e0[0x14] = local_e0[0x14] / fVar9;
    local_e0[0x17] = local_e0[0x17] / fVar9;
    local_e0[0x16] = local_e0[0x16] / fVar9;
    local_e0[0x19] = local_e0[0x19] / fVar9;
    local_e0[0x18] = local_e0[0x18] / fVar9;
    local_e0[0x1b] = local_e0[0x1b] / fVar9;
    local_e0[0x1a] = local_e0[0x1a] / fVar9;
    local_e0[0x1d] = local_e0[0x1d] / fVar9;
    local_e0[0x1c] = local_e0[0x1c] / fVar9;
    local_e0[0x1f] = local_e0[0x1f] / fVar9;
    local_e0[0x1e] = local_e0[0x1e] / fVar9;
    (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_58);
    lVar6 = 0;
    lVar5 = 4;
    bVar2 = *(byte *)(param_1[0xb] + 0xc);
    pfVar1[5] = local_e0[0];
    pfVar4 = pfVar1 + 0x28;
    fVar7 = 1.0 / (fStack_54 + (float)((uint)bVar2 << 1));
    do {
      if (lVar6 + 1U < 0x1f) {
        fVar9 = 0.0;
        fVar8 = *(float *)((long)local_e0 + lVar5) + local_e0[lVar6 + 2];
        if (0.0 < fVar8) {
          fVar9 = local_e0[lVar6 + 2] / fVar8 + (float)((int)lVar6 + 1);
        }
        pfVar4[-0x20] = (1.0 / local_58) * fVar9;
        pfVar4[-0x10] = fVar7 * fVar9;
        *pfVar4 = fVar8;
      }
      else {
        fVar9 = (float)((int)lVar6 + 1);
        pfVar4[-0x20] = (1.0 / local_58) * fVar9;
        pfVar4[-0x10] = fVar7 * fVar9;
        *pfVar4 = *(float *)((long)local_e0 + lVar5);
      }
      lVar6 = lVar6 + 2;
      lVar5 = lVar5 + 8;
      pfVar4 = pfVar4 + 1;
    } while (lVar6 != 0x20);
  }
  bVar2 = *(byte *)(*param_1 + 0x5a);
  pfVar1[6] = 1.0;
  pfVar1[7] = 1.0;
  if ((bVar2 != 0) &&
     (((param_1[0xb] == 0 || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)))) {
    fVar7 = (float)bVar2;
    pfVar1[6] = fVar7 / 255.0;
    pfVar1[7] = 255.0 / fVar7;
  }
  cVar3 = '\0';
  if (((((6.1035156e-05 <= pfVar1[0x28]) &&
        (cVar3 = (6.1035156e-05 <= pfVar1[0x29]) + '\x01', 6.1035156e-05 <= pfVar1[0x29])) &&
       ((cVar3 = (6.1035156e-05 <= pfVar1[0x2a]) + '\x02', 6.1035156e-05 <= pfVar1[0x2a] &&
        ((cVar3 = (6.1035156e-05 <= pfVar1[0x2b]) + '\x03', 6.1035156e-05 <= pfVar1[0x2b] &&
         (cVar3 = (6.1035156e-05 <= pfVar1[0x2c]) + '\x04', 6.1035156e-05 <= pfVar1[0x2c])))))) &&
      ((cVar3 = (6.1035156e-05 <= pfVar1[0x2d]) + '\x05', 6.1035156e-05 <= pfVar1[0x2d] &&
       ((((cVar3 = (6.1035156e-05 <= pfVar1[0x2e]) + '\x06', 6.1035156e-05 <= pfVar1[0x2e] &&
          (cVar3 = (6.1035156e-05 <= pfVar1[0x2f]) + '\a', 6.1035156e-05 <= pfVar1[0x2f])) &&
         (cVar3 = (6.1035156e-05 <= pfVar1[0x30]) + '\b', 6.1035156e-05 <= pfVar1[0x30])) &&
        ((cVar3 = (6.1035156e-05 <= pfVar1[0x31]) + '\t', 6.1035156e-05 <= pfVar1[0x31] &&
         (cVar3 = (6.1035156e-05 <= pfVar1[0x32]) + '\n', 6.1035156e-05 <= pfVar1[0x32])))))))) &&
     (((cVar3 = (6.1035156e-05 <= pfVar1[0x33]) + '\v', 6.1035156e-05 <= pfVar1[0x33] &&
       ((cVar3 = (6.1035156e-05 <= pfVar1[0x34]) + '\f', 6.1035156e-05 <= pfVar1[0x34] &&
        (cVar3 = (6.1035156e-05 <= pfVar1[0x35]) + '\r', 6.1035156e-05 <= pfVar1[0x35])))) &&
      (cVar3 = (6.1035156e-05 <= pfVar1[0x36]) + '\x0e', 6.1035156e-05 <= pfVar1[0x36])))) {
    cVar3 = (6.1035156e-05 <= pfVar1[0x37]) + '\x0f';
  }
  return cVar3;
}


