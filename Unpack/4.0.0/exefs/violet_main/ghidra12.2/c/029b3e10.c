/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b3e10; name: FUN_029b3e10
 */


bool FUN_029b3e10(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar5;
  int iVar6;
  undefined1 auVar4 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar7._0_4_ = ABS(param_2[4] - (float)param_1[2]);
  auVar7._4_4_ = ABS(param_2[5] - (float)((ulong)param_1[2] >> 0x20));
  auVar7._8_4_ = ABS(param_2[6] - (float)param_1[3]);
  auVar7._12_4_ = ABS(param_2[7] - (float)((ulong)param_1[3] >> 0x20));
  auVar4._0_4_ = ABS(*param_2 - (float)*param_1);
  auVar4._4_4_ = ABS(param_2[1] - (float)((ulong)*param_1 >> 0x20));
  auVar4._8_4_ = ABS(param_2[2] - (float)param_1[1]);
  auVar4._12_4_ = ABS(param_2[3] - (float)((ulong)param_1[1] >> 0x20));
  auVar4 = NEON_fmax(auVar4,auVar7,4);
  auVar8._4_4_ = ABS((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) -
                     (float)((ulong)param_1[4] >> 0x20));
  auVar8._0_4_ = ABS((float)*(undefined8 *)(param_2 + 8) - (float)param_1[4]);
  auVar8._8_4_ = ABS((float)*(undefined8 *)(param_2 + 10) - (float)param_1[5]);
  auVar8._12_4_ =
       ABS((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) -
           (float)((ulong)param_1[5] >> 0x20));
  auVar2._4_4_ = ABS((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) -
                     (float)((ulong)param_1[6] >> 0x20));
  auVar2._0_4_ = ABS((float)*(undefined8 *)(param_2 + 0xc) - (float)param_1[6]);
  auVar2._8_4_ = ABS((float)*(undefined8 *)(param_2 + 0xe) - (float)param_1[7]);
  auVar2._12_4_ =
       ABS((float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) -
           (float)((ulong)param_1[7] >> 0x20));
  auVar8 = NEON_fmax(auVar8,auVar2,4);
  auVar8 = NEON_fmax(auVar4,auVar8,4);
  fVar1 = *param_3;
  iVar3 = -(uint)(auVar8._0_4_ <= fVar1);
  iVar5 = -(uint)(auVar8._4_4_ <= fVar1);
  iVar6 = -(uint)(auVar8._8_4_ <= fVar1);
  return CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar3 >> 0x18) &
                  (byte)((uint)iVar6 >> 0x18),
                  CONCAT12((byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar3 >> 0x10) &
                           (byte)((uint)iVar6 >> 0x10),
                           CONCAT11((byte)((uint)iVar5 >> 8) & (byte)((uint)iVar3 >> 8) &
                                    (byte)((uint)iVar6 >> 8),(byte)iVar5 & (byte)iVar3 & (byte)iVar6
                                   ))) != 0;
}


