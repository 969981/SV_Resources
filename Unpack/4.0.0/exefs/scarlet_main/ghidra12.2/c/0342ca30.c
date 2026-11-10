/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342ca30; name: FUN_0342ca30
 */


bool FUN_0342ca30(long param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined1 local_90 [8];
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  plVar9 = (long *)(param_3 + 8);
  *(undefined4 *)(param_3 + 0x40) = 0;
  *(undefined4 *)(param_3 + 0x48) = 0xffffffff;
  *(undefined8 *)(param_3 + 0x1c) = 0;
  (**(code **)*plVar9)(plVar9);
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x40);
  fVar3 = *(float *)(lVar8 + 0x80);
  fVar1 = *(float *)(lVar8 + 0x78);
  fVar2 = *(float *)(lVar8 + 0x7c);
  if ((((*(uint *)(param_4 + 0x58) == 0) || (**(long **)(param_4 + 0x50) == param_2)) ||
      (*(uint *)(param_4 + 0x58) < 2)) || ((*(long **)(param_4 + 0x50))[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  FUN_03423e4c(&local_70,param_4,uVar6);
  fVar10 = (fVar1 - local_70) * (fVar1 - local_70) + (fVar2 - fStack_6c) * (fVar2 - fStack_6c) +
           (fVar3 - local_68) * (fVar3 - local_68);
  fVar11 = *(float *)(param_3 + 0x88) * *(float *)(param_3 + 0x88);
  if (fVar11 <= fVar10) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x58) != *(long *)(param_4 + 0x68)) {
      local_88 = local_68;
      local_80 = fVar1;
      fStack_7c = fVar2;
      local_78 = fVar3;
      uVar4 = FUN_0342cbe0(&local_80,local_90,*(undefined8 *)(param_2 + 0xa8),0,plVar9);
      if ((uVar4 & 1) == 0) goto LAB_0342cba4;
    }
    pfVar5 = (float *)(**(code **)(*plVar9 + 8))(plVar9);
    uVar7 = 0;
    if (pfVar5 != (float *)0x0) {
      pfVar5[0x1b] = fVar1;
      pfVar5[0x1c] = fVar2;
      pfVar5[0x1d] = fVar3;
      pfVar5[0x1e] = 0.0;
      *pfVar5 = local_70;
      pfVar5[1] = fStack_6c;
      pfVar5[2] = local_68;
      *(undefined1 *)(param_3 + 0x21) = 1;
    }
  }
  *(undefined1 *)(param_3 + 0x22) = uVar7;
LAB_0342cba4:
  return fVar10 < fVar11;
}


