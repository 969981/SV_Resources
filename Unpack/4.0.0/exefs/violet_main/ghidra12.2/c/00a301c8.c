/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a301c8; name: FUN_00a301c8
 */


void FUN_00a301c8(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_fa;
  char local_f2 [8];
  undefined1 local_ea;
  undefined1 auStack_e9 [65];
  undefined1 local_a8;
  undefined1 local_40;
  undefined4 local_3c;
  char local_38 [8];
  undefined8 uStack_30;
  undefined1 local_28;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar2 != 0))
  {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  plVar5 = (long *)PTR_DAT_047d8cd8;
  plVar4 = (long *)PTR_DAT_047d8cd0;
  puVar1 = PTR_DAT_047d8cc8;
  lVar3 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar3;
  if (lVar3 != 0) {
    local_a8 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0x100000600000;
    local_158 = 0x10000;
    if (((*puVar1 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8cc8), plVar4 = (long *)PTR_DAT_047d8cd0,
       plVar5 = (long *)PTR_DAT_047d8cd8, iVar2 != 0)) {
      FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8cc8);
      plVar4 = (long *)PTR_DAT_047d8cd0;
      plVar5 = (long *)PTR_DAT_047d8cd8;
    }
    lVar3 = *plVar4;
    *plVar5 = lVar3;
    local_180 = 0;
    if (lVar3 != 0) {
      local_180 = *(undefined8 *)(lVar3 + 0x50);
    }
    local_178 = *param_1;
    local_170 = param_1[1];
    local_168 = param_1[2];
    local_140 = 0x4000000080;
    uStack_138 = 0x4000000060;
    local_130 = 0x8000000060;
    uStack_128 = 0x6000000008;
    local_120 = 0x2000000060;
    uStack_118 = 0x2000000020;
    local_110 = 0x200000020;
    uStack_108 = 0;
    local_100 = 0x18;
    local_fc = 0x15;
    local_150 = 0x801800000;
    uStack_148 = 0x8000000004;
    local_fa = DAT_03d2fc00;
    local_ea = 0;
    local_f2[0] = s_eCZWFv0X_03d2fc08[0];
    local_f2[1] = s_eCZWFv0X_03d2fc08[1];
    local_f2[2] = s_eCZWFv0X_03d2fc08[2];
    local_f2[3] = s_eCZWFv0X_03d2fc08[3];
    local_f2[4] = s_eCZWFv0X_03d2fc08[4];
    local_f2[5] = s_eCZWFv0X_03d2fc08[5];
    local_f2[6] = s_eCZWFv0X_03d2fc08[6];
    local_f2[7] = s_eCZWFv0X_03d2fc08[7];
    memcpy(auStack_e9,&DAT_03d0c8a4,0x41);
    local_3c = 0xc00000;
    local_154 = 1;
    local_40 = 1;
    local_38[0] = s_50e39f8f_03caafb0[0];
    local_38[1] = s_50e39f8f_03caafb0[1];
    local_38[2] = s_50e39f8f_03caafb0[2];
    local_38[3] = s_50e39f8f_03caafb0[3];
    local_38[4] = s_50e39f8f_03caafb0[4];
    local_38[5] = s_50e39f8f_03caafb0[5];
    local_38[6] = s_50e39f8f_03caafb0[6];
    local_38[7] = s_50e39f8f_03caafb0[7];
    uStack_30 = 0;
    local_28 = 1;
    FUN_01757660(&local_180);
  }
  return;
}


