/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c2be0; name: FUN_001c2be0
 */


float FUN_001c2be0(float param_1,uint param_2,uint *param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int aiStack_660 [128];
  int aiStack_460 [256];
  
  FUN_0015cf00(aiStack_460,0x400);
  FUN_0015cf00(aiStack_660,0x200);
  if ((int)param_4 < 1) {
    iVar5 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = (ulong)param_4;
    do {
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = *param_3 / param_2;
      }
      uVar2 = 0x1c - (int)LZCOUNT(uVar3 + 8);
      uVar1 = *param_3 - uVar3 * param_2 & 0xff;
      uVar2 = uVar3 + 8 >> (ulong)(uVar2 & 0x1f) ^ 8 | uVar2 * 8;
      iVar5 = aiStack_660[uVar1];
      uVar3 = uVar2 & 0xff;
      iVar4 = (uVar2 >> 3 & 0x1f) + iVar4;
      uVar6 = uVar6 - 1;
      aiStack_460[uVar3] = aiStack_460[uVar3] + 1;
      aiStack_660[uVar1] = iVar5 + 1;
      param_3 = param_3 + 1;
    } while (uVar6 != 0);
    iVar5 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar5 = iVar4 + 7;
    }
    iVar5 = iVar5 >> 3;
  }
  iVar4 = FUN_001845e0(aiStack_460,0x100,param_4);
  fVar9 = (float)(int)(iVar5 + (iVar4 + 7U >> 3));
  if (1 < (int)param_2) {
    fVar7 = (float)(**(code **)(param_5 + 0x10))((long)(int)param_4);
    iVar5 = FUN_001845e0(aiStack_660,0x80,param_4);
    fVar8 = (float)(**(code **)(param_5 + 0x48))(0x40c00000,(long)(int)param_4,0x80,0x14);
    fVar9 = fVar8 * param_1 + fVar7 * param_1 + fVar9 + (float)(iVar5 + 7U >> 3);
  }
  return fVar9;
}


