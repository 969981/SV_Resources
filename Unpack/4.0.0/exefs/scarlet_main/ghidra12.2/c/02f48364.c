/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f48364; name: FUN_02f48364
 */


void FUN_02f48364(float param_1,float param_2,long param_3,undefined8 *param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  
  if (((*(int *)(param_3 + 0x70) != param_5) || ((float)*(undefined8 *)(param_3 + 0x10) != param_1))
     && (*(float *)(param_3 + 0x84) < 1.8446726e+19)) {
    *(float *)(param_3 + 0x84) =
         *(float *)(param_3 + 0x84) *
         (((float)param_5 * (float)*(undefined8 *)(param_3 + 0x10)) /
         ((float)*(int *)(param_3 + 0x70) * param_1));
  }
  fVar4 = 1.0 / (float)param_5;
  uVar11 = NEON_fmov(0x3f800000,4);
  *(float *)(param_3 + 0x74) = fVar4;
  *(float *)(param_3 + 0x7c) = 1.0 / (float)param_6;
  uVar8 = CONCAT44(param_1,param_1);
  *(int *)(param_3 + 0x70) = param_5;
  *(int *)(param_3 + 0x78) = param_6;
  fVar7 = 1.0 / param_1;
  *(ulong *)(param_3 + 0x10) = uVar8;
  *(ulong *)(param_3 + 0x18) = CONCAT44(fVar7,fVar7);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x20);
  iVar10 = -(uint)(fVar5 == 0.0);
  uVar9 = CONCAT44(param_1 / (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),param_1 / fVar5
                  );
  iVar1 = -(uint)(param_2 < param_1);
  uVar2 = CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar1 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar1 >> 8),~(byte)iVar1)));
  *(ulong *)(param_3 + 0x28) = uVar9 ^ (uVar9 ^ uVar11) & CONCAT44(iVar10,iVar10);
  *(ulong *)(param_3 + 0x30) = uVar8 ^ (uVar8 ^ CONCAT44(param_2,param_2)) & CONCAT44(uVar2,uVar2);
  fVar4 = fVar4 * param_1;
  uVar6 = NEON_scvtf(CONCAT44(param_5,param_5),4);
  fVar5 = (float)uVar6 * fVar7;
  *(ulong *)(param_3 + 0x38) = CONCAT44(fVar4,fVar4);
  *(ulong *)(param_3 + 0x40) = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar7,fVar5);
  uVar6 = *param_4;
  *(ulong *)(param_3 + 0x98) =
       CONCAT44((float)((ulong)param_4[1] >> 0x20) * fVar4,(float)param_4[1] * fVar4);
  *(ulong *)(param_3 + 0x90) = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4,(float)uVar6 * fVar4);
  fVar4 = (float)*param_4 * param_1;
  fVar7 = (float)((ulong)*param_4 >> 0x20) * param_1;
  param_1 = (float)param_4[1] * param_1;
  fVar3 = -*(float *)(param_3 + 0xec) * fVar5;
  *(ulong *)(param_3 + 0xa8) =
       CONCAT44(SQRT(fVar4 * fVar4 + fVar7 * fVar7 + param_1 * param_1),param_1);
  *(ulong *)(param_3 + 0xa0) = CONCAT44(fVar7,fVar4);
  fVar5 = *(float *)(param_3 + 0xe4) * fVar5;
  *(ulong *)(param_3 + 0xd0) = CONCAT44(fVar5,fVar5);
  *(ulong *)(param_3 + 0xd8) = CONCAT44(fVar3,fVar3);
  fVar4 = (float)*param_4;
  fVar5 = (float)((ulong)*param_4 >> 0x20);
  fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + (float)param_4[1] * (float)param_4[1]);
  if (fVar4 == 0.0) {
    fVar4 = 9.81;
  }
  *(float *)(param_3 + 0x80) = fVar4;
  return;
}


