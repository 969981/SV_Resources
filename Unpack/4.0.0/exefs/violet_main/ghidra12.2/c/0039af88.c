/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039af88; name: FUN_0039af88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0039af88(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_d0 [14];
  
  lVar6 = *(long *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x28);
  lVar1 = lVar9 - lVar6;
  if (lVar1 == 0) {
    FUN_0039ed98((long *)(param_1 + 0x20),1);
    lVar9 = *(long *)(param_1 + 0x28);
  }
  else if (1 < (ulong)((lVar1 >> 4) * -0x5555555555555555)) {
    lVar9 = lVar6 + 0x30;
    *(long *)(param_1 + 0x28) = lVar9;
  }
  *(int *)(lVar9 + -0x30) = (int)*param_2;
  *(undefined2 *)(lVar9 + -8) = 0;
  plVar7 = (long *)(param_1 + 8);
  *(long *)(param_1 + 0x10) = *plVar7;
  if ((ulong)((*(long *)(param_1 + 0x18) - *plVar7 >> 4) * -0x5555555555555555) < 0xc) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x240);
    pvVar3 = *(void **)(param_1 + 8);
    sVar5 = *(long *)(param_1 + 0x10) - (long)pvVar3;
    if (0 < (long)sVar5) {
      memcpy((void *)(lVar1 - sVar5),pvVar3,sVar5);
      pvVar3 = (void *)*plVar7;
    }
    *(void **)(param_1 + 8) = (void *)(lVar1 - sVar5);
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1 + 0x240;
    if (pvVar3 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  local_d0[9] = _UNK_03cdc270;
  local_d0[8] = _DAT_03cdc268;
  local_d0[0xb] = _UNK_03cdc280;
  local_d0[10] = _DAT_03cdc278;
  local_d0[1] = _UNK_03cdc230;
  local_d0[0] = _DAT_03cdc228;
  local_d0[3] = _UNK_03cdc240;
  local_d0[2] = _DAT_03cdc238;
  lVar6 = -0x800000000000000;
  lVar1 = 8;
  local_d0[0xc] = DAT_03cdc288;
  local_d0[5] = _UNK_03cdc250;
  local_d0[4] = _DAT_03cdc248;
  local_d0[7] = _UNK_03cdc260;
  local_d0[6] = _DAT_03cdc258;
  while( true ) {
    plVar2 = (long *)FUN_0039b364(plVar7,*(undefined8 *)(param_1 + 0x10));
    *plVar2 = lVar6;
    *(undefined1 *)(plVar2 + 1) = 0;
    auVar10 = FUN_00398570(0x7b2,1,1,0,lVar6 / 0x3c,lVar6 % 0x3c);
    lVar6 = auVar10._8_8_;
    auVar10 = FUN_00398570(auVar10._0_8_,(long)auVar10[8],(lVar6 << 0x30) >> 0x38,
                           (lVar6 << 0x28) >> 0x38,
                           (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar6 << 0x20) >> 0x38),
                           (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar6 << 0x18) >> 0x38));
    uVar4 = auVar10._8_8_;
    plVar2[2] = auVar10._0_8_;
    plVar2[3] = uVar4 & 0xffffffffff;
    auVar10 = FUN_00398570(auVar10._0_8_,(long)auVar10[8],(long)(uVar4 << 0x30) >> 0x38,
                           (long)(uVar4 << 0x28) >> 0x38,(long)(uVar4 << 0x20) >> 0x38,
                           ((long)(uVar4 << 0x18) >> 0x38) + -1);
    plVar2[4] = auVar10._0_8_;
    plVar2[5] = auVar10._8_8_ & 0xffffffffff;
    if (lVar1 == 0x68) break;
    lVar6 = *(long *)((long)local_d0 + lVar1);
    lVar1 = lVar1 + 8;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_00399510(local_d0,param_2);
  pbVar8 = (byte *)(param_1 + 0x40);
  if ((*pbVar8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x50));
  }
  *(long *)(param_1 + 0x50) = local_d0[2];
  *(long *)(param_1 + 0x48) = local_d0[1];
  *(long *)pbVar8 = local_d0[0];
  FUN_002ce498(pbVar8,1,0);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x70) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  auVar10 = FUN_00398570(0x7b2,1,1,0,0x222222222222222,7);
  lVar1 = auVar10._8_8_;
  auVar10 = FUN_00398570(auVar10._0_8_,(long)auVar10[8],(lVar1 << 0x30) >> 0x38,
                         (lVar1 << 0x28) >> 0x38,
                         (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar1 << 0x20) >> 0x38),
                         (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar1 << 0x18) >> 0x38));
  *(long *)(lVar9 + -0x28) = auVar10._0_8_;
  *(ulong *)(lVar9 + -0x20) = auVar10._8_8_ & 0xffffffffff;
  auVar10 = FUN_00398570(0x7b2,1,1,0,0xfdddddddddddddde,0xfffffffffffffff8);
  lVar1 = auVar10._8_8_;
  auVar10 = FUN_00398570(auVar10._0_8_,(long)auVar10[8],(lVar1 << 0x30) >> 0x38,
                         (lVar1 << 0x28) >> 0x38,
                         (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar1 << 0x20) >> 0x38),
                         (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar1 << 0x18) >> 0x38));
  *(long *)(lVar9 + -0x18) = auVar10._0_8_;
  *(ulong *)(lVar9 + -0x10) = auVar10._8_8_ & 0xffffffffff;
  lVar9 = *(long *)(param_1 + 0x10);
  pvVar3 = *(void **)(param_1 + 8);
  lVar1 = lVar9 - (long)pvVar3;
  if ((ulong)((lVar1 >> 4) * -0x5555555555555555) <
      (ulong)((*(long *)(param_1 + 0x18) - (long)pvVar3 >> 4) * -0x5555555555555555)) {
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,lVar1);
      pvVar3 = *(void **)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x10);
    }
    lVar6 = lVar6 + (lVar1 >> 4) * 0x10;
    sVar5 = lVar9 - (long)pvVar3;
    if (0 < (long)sVar5) {
      memcpy((void *)(lVar6 - sVar5),pvVar3,sVar5);
      pvVar3 = (void *)*plVar7;
    }
    *(void **)(param_1 + 8) = (void *)(lVar6 - sVar5);
    *(long *)(param_1 + 0x10) = lVar6;
    *(long *)(param_1 + 0x18) = lVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return 1;
}


