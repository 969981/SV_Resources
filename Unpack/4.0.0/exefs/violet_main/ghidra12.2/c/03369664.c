/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03369664; name: FUN_03369664
 */


void FUN_03369664(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  undefined1 *local_308;
  int local_300;
  uint local_2fc;
  undefined1 auStack_2f8 [128];
  int local_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint local_220;
  undefined8 local_218;
  ulong local_210;
  undefined8 local_208 [2];
  undefined *local_1f8;
  ulong local_1f0;
  long local_1e8;
  undefined8 local_1b0;
  undefined8 local_190;
  undefined8 local_168;
  ulong local_160;
  undefined8 local_150;
  undefined8 *local_138;
  undefined8 local_128;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  
  puVar4 = PTR_PTR_047d1a50;
  local_248 = 0;
  uStack_240 = 0;
  local_250 = 0xffffffff;
  local_220 = 0;
  local_260 = PTR_PTR_047d1a50 + 0x20;
  local_270 = PTR_DAT_047e5b58 + 0x10;
  puStack_268 = PTR_DAT_047e5b60 + 0x10;
  local_218 = 0;
  local_210 = 0;
  uStack_258 = 0x4000;
  local_e0 = auStack_d0;
  local_d8 = 0x8000000200000000;
  local_a0 = auStack_90;
  local_238 = 0x8000000000000000;
  uStack_230 = 0;
  local_228 = 0x8000000000000000;
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  local_f8 = 0x8000000000000000;
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  local_98 = 0x8000000300000000;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x8000000000000000;
  local_60 = 0;
  local_58 = 1;
  local_56 = 0;
  memset(local_208,0,0x100);
  if ((int)param_1[0xe] == 0) {
    local_210 = 0;
  }
  else {
    local_308 = auStack_2f8;
    local_300 = 0;
    local_2fc = 0x80000080;
    local_278 = 1;
    FUN_031c6afc(&local_308,param_1[3] & 0xfffffffffffffffe,0xffffffff);
    iVar11 = local_300;
    puVar5 = local_308;
    pvVar6 = memchr(local_308,0x3c,(long)local_300 - 1);
    iVar3 = (int)pvVar6 - (int)puVar5;
    if (pvVar6 == (void *)0x0) {
      iVar3 = -1;
    }
    if (-1 < iVar3) {
      iVar2 = (local_2fc & 0x7fffffff) - 1;
      iVar1 = iVar3;
      if (iVar2 <= iVar3) {
        iVar1 = iVar2;
      }
      if (local_278 != 0) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1 + 1;
      if ((int)(local_2fc & 0x7fffffff) <= iVar1) {
        FUN_030b4a20(&local_308,puVar4 + 0x20,iVar3);
        iVar11 = local_300;
      }
      if ((iVar11 <= iVar1) || (iVar3 < iVar11)) {
        local_300 = iVar3;
      }
      local_308[iVar1] = 0;
      FUN_031ca768(param_1 + 3,&local_308);
    }
    local_300 = 0;
    if ((-1 < (int)local_2fc) && (local_308 != (undefined1 *)0x0)) {
      plVar10 = (long *)(puVar4 + 0x20);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  uVar8 = local_210 | 0x800001;
  local_218 = 0;
  local_208[0] = 7;
  local_150 = 0;
  if ((param_1[3] & 0xfffffffffffffffeU) != 0) {
    uVar8 = local_210 | 0x800009;
    local_1f0 = param_1[3] & 0xfffffffffffffffeU;
  }
  local_168 = 0;
  local_1e8 = (long)(int)param_1[4];
  local_1f8 = PTR_DAT_047e67a8;
  local_108 = (undefined8 *)*param_1;
  if (local_108 == (undefined8 *)0x0) {
    uVar8 = uVar8 & 0xfffffffffbffffff | 0x100014;
  }
  else {
    uVar8 = uVar8 | 0x4100014;
    local_138 = local_108;
  }
  uVar9 = (ulong)local_220;
  local_210 = uVar8 | 0x200800;
  local_160 = uVar9 | 0x1000;
  local_220 = (uint)local_160;
  local_1b0 = 0;
  if (*(char *)((long)param_1 + 0x49) == '\0') {
    if (*(char *)((long)param_1 + 0x4a) == '\0') goto LAB_03369920;
    local_160 = 0x1020;
  }
  else {
    local_160 = 0x1820;
  }
  local_160 = uVar9 | local_160;
  local_220 = (uint)local_160;
LAB_03369920:
  if (*(char *)((long)param_1 + 0x4b) != '\0') {
    local_128 = 0;
    local_210 = uVar8 | 0x10200800;
  }
  if ((int)param_1[0xe] != 0) {
    local_210 = local_210 | 0x8000;
    local_190 = 0;
  }
  uVar7 = (**(code **)*local_108)();
  FUN_031d8d9c(&local_270,uVar7,&local_308);
  param_1[10] = (long)local_308;
  FUN_031d798c(&local_270);
  return;
}


