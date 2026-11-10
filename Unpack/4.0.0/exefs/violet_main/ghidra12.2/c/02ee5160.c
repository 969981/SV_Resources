/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee5160; name: FUN_02ee5160
 */


void FUN_02ee5160(long param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_1 + 0x40);
  puVar4 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)((long)iVar1 + param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    auVar6._8_4_ = 0xff7fffee;
    auVar6._0_8_ = 0xff7fffeeff7fffee;
    auVar6._12_4_ = 0xff7fffee;
    auVar7._8_4_ = 0x7f7fffee;
    auVar7._0_8_ = 0x7f7fffee7f7fffee;
    auVar7._12_4_ = 0x7f7fffee;
  }
  else {
    auVar7._8_4_ = 0x7f7fffee;
    auVar7._0_8_ = 0x7f7fffee7f7fffee;
    auVar7._12_4_ = 0x7f7fffee;
    auVar6._8_4_ = 0xff7fffee;
    auVar6._0_8_ = 0xff7fffeeff7fffee;
    auVar6._12_4_ = 0xff7fffee;
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(param_1 + 0x44) * 0xc);
    do {
      fVar12 = (float)*puVar4;
      fVar8 = (float)((ulong)*puVar4 >> 0x20);
      fVar13 = *(float *)(puVar4 + 1);
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      fVar9 = (float)*param_2 * fVar12 + (float)param_2[2] * fVar8 + (float)param_2[4] * fVar13;
      fVar10 = (float)((ulong)*param_2 >> 0x20) * fVar12 +
               (float)((ulong)param_2[2] >> 0x20) * fVar8 +
               (float)((ulong)param_2[4] >> 0x20) * fVar13;
      fVar11 = (float)param_2[1] * fVar12 + (float)param_2[3] * fVar8 + (float)param_2[5] * fVar13;
      fVar12 = (float)((ulong)param_2[1] >> 0x20) * fVar12 +
               (float)((ulong)param_2[3] >> 0x20) * fVar8 +
               (float)((ulong)param_2[5] >> 0x20) * fVar13;
      auVar2._4_4_ = fVar10;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar12;
      auVar7 = NEON_fmin(auVar7,auVar2,4);
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = fVar11;
      auVar3._12_4_ = fVar12;
      auVar6 = NEON_fmax(auVar6,auVar3,4);
    } while (puVar4 != puVar5);
  }
  fVar12 = (float)param_2[6];
  fVar9 = (float)((ulong)param_2[6] >> 0x20);
  fVar8 = (float)param_2[7];
  fVar10 = (float)((ulong)param_2[7] >> 0x20);
  param_3[2] = auVar7._8_4_ + fVar8;
  param_3[3] = auVar7._12_4_ + fVar10;
  *param_3 = auVar7._0_4_ + fVar12;
  param_3[1] = auVar7._4_4_ + fVar9;
  param_3[6] = auVar6._8_4_ + fVar8;
  param_3[7] = auVar6._12_4_ + fVar10;
  param_3[4] = auVar6._0_4_ + fVar12;
  param_3[5] = auVar6._4_4_ + fVar9;
  return;
}


