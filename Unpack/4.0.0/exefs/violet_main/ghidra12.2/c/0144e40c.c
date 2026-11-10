/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144e40c; name: FUN_0144e40c
 */


void FUN_0144e40c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (param_1._0_4_ - param_3) / 3.0;
  iVar3 = (int)fVar9;
  fVar8 = (param_1._8_4_ - param_3) / 3.0;
  iVar3 = iVar3 - (uint)(fVar9 < (float)iVar3);
  iVar5 = (int)fVar8;
  iVar5 = iVar5 - (uint)(fVar8 < (float)iVar5);
  fVar9 = (param_1._0_4_ + param_3) / 3.0;
  fVar8 = (param_1._8_4_ + param_3) / 3.0;
  iVar4 = (int)fVar9;
  iVar6 = (int)fVar8;
  iVar4 = iVar4 - (uint)(fVar9 < (float)iVar4);
  iVar6 = iVar6 - (uint)(fVar8 < (float)iVar6);
  iVar1 = iVar4 - iVar3;
  if (0x3f < iVar1) {
    iVar4 = iVar1 + -0x3e;
    if (-1 < iVar1 + -0x3f) {
      iVar4 = iVar1 + -0x3f;
    }
    iVar3 = iVar3 + (iVar4 >> 1);
    iVar4 = iVar3 + 0x3f;
  }
  iVar1 = iVar6 - iVar5;
  if (0x3f < iVar1) {
    iVar6 = iVar1 + -0x3e;
    if (-1 < iVar1 + -0x3f) {
      iVar6 = iVar1 + -0x3f;
    }
    iVar5 = iVar5 + (iVar6 >> 1);
    iVar6 = iVar5 + 0x3f;
  }
  param_4[2] = CONCAT44(iVar6,iVar4);
  *param_4 = CONCAT44(iVar5,iVar3);
  param_4[1] = CONCAT44(iVar5,iVar3);
  if (iVar5 <= iVar6) {
    uVar2 = FUN_0144e5c0(iVar5);
    param_4[3] = uVar2;
    if (iVar5 < *(int *)((long)param_4 + 0x14)) {
      puVar7 = param_4 + 4;
      do {
        iVar5 = iVar5 + 1;
        uVar2 = FUN_0144e5c0(param_1._0_8_,iVar5,*(undefined4 *)param_4);
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
      } while (iVar5 < *(int *)((long)param_4 + 0x14));
    }
  }
  return;
}


