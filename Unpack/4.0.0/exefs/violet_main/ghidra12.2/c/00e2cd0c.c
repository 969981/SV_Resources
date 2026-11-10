/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e2cd0c; name: FUN_00e2cd0c
 */


void FUN_00e2cd0c(long param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  int *piVar3;
  ushort *puVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  
  lVar1 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x68),*(undefined2 *)(param_2 + 0x18));
  piVar3 = *(int **)(param_2 + 0x10);
  puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
  fVar7 = *(float *)(lVar1 + 0x34);
  if (*puVar4 < 0xb) {
    pfVar2 = (float *)0x0;
  }
  else {
    pfVar2 = (float *)0x0;
    if (puVar4[5] != 0) {
      pfVar2 = (float *)((long)piVar3 + (ulong)puVar4[5]);
    }
  }
  if ((ulong)puVar4[4] == 0) {
switchD_00e2cd7c_caseD_0:
    fVar5 = *(float *)(lVar1 + 0x30) - *pfVar2;
    fVar8 = *(float *)(lVar1 + 0x38) - pfVar2[2];
    fVar5 = fVar5 * fVar5;
    fVar7 = (fVar7 - pfVar2[1]) * (fVar7 - pfVar2[1]);
    fVar8 = fVar8 * fVar8;
    auVar6._0_4_ = fVar5 + fVar7;
    auVar6._4_4_ = fVar8 + 0.0;
    auVar6._8_4_ = fVar5 + fVar7;
    auVar6._12_4_ = fVar8 + 0.0;
    auVar6 = NEON_ext(auVar6,auVar6,4,1);
    fVar7 = SQRT(auVar6._0_4_ + auVar6._4_4_);
  }
  else {
    switch(*(undefined4 *)((long)piVar3 + (ulong)puVar4[4])) {
    case 0:
      goto switchD_00e2cd7c_caseD_0;
    case 1:
      fVar7 = ABS(*(float *)(lVar1 + 0x30) - *pfVar2);
      goto LAB_00e2cdb4;
    case 2:
      fVar5 = pfVar2[1];
      break;
    case 3:
      fVar5 = pfVar2[2];
      fVar7 = *(float *)(lVar1 + 0x38);
      break;
    default:
      goto switchD_00e2cd7c_default;
    }
    fVar7 = ABS(fVar7 - fVar5);
  }
LAB_00e2cdb4:
  *(float *)(param_2 + 0x30) = fVar7;
switchD_00e2cd7c_default:
  return;
}


