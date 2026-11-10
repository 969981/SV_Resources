/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03431b50; name: FUN_03431b50
 */


void FUN_03431b50(long param_1,undefined8 *param_2,long *param_3,uint param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **local_c0 [6];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  uVar1 = *(uint *)(param_3 + 1);
  plVar3 = param_3;
  if ((ulong)uVar1 != 0) {
    plVar3 = (undefined8 *)*param_3 + (ulong)(uVar1 - 1) * 10;
  }
  lVar5 = plVar3[6];
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * 0x50;
    puVar6 = (undefined8 *)*param_3;
    do {
      (**(code **)*puVar6)(puVar6);
      lVar4 = lVar4 + -0x50;
      puVar6 = puVar6 + 10;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar2 = PTR_DAT_047e2fd0;
  if ((int)param_3[4] != 0) {
    uVar7 = 0;
    do {
      lVar4 = param_3[3];
      plVar3 = *(long **)(lVar4 + uVar7 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          (**(code **)(puVar2 + 0x30))(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = param_3[3];
      }
      *(undefined8 *)(lVar4 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_3 + 4));
  }
  *(undefined4 *)(param_3 + 5) = 0;
  (**(code **)(*param_5 + 0x10))(param_5);
  auVar10 = NEON_fmov(0x3f800000,4);
  uVar11 = auVar10._8_8_;
  uVar9 = auVar10._0_8_;
  do {
    (**(code **)(*param_5 + 0x18))(&local_70,param_5);
    fVar8 = *(float *)(param_1 + 0x18);
    local_70 = local_70 * fVar8;
    fStack_6c = fStack_6c * fVar8;
    local_68 = local_68 * fVar8;
    local_90 = param_3[6];
    param_3[6] = local_90 + 1;
    local_c0[0] = &PTR_FUN_047bf6c0;
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = CONCAT44(fStack_6c,local_70);
    uStack_d0 = *param_2;
    uStack_d8 = (ulong)(uint)local_68;
    uStack_c8 = CONCAT44((int)((ulong)uVar11 >> 0x20),*(undefined4 *)(param_2 + 1));
    FUN_03431d2c(param_1,&uStack_d0,&local_e0,param_2,param_3,1,local_c0,param_5,uVar9,uVar11);
  } while ((ulong)(param_3[6] - lVar5) <= (ulong)param_4);
  return;
}


