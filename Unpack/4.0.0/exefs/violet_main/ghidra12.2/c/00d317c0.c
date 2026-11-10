/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d317c0; name: FUN_00d317c0
 */


void FUN_00d317c0(undefined1 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],long *param_6,char *param_7,
                 undefined2 param_8,byte *param_9)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long *local_90;
  undefined2 local_84 [2];
  undefined1 local_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar14 = param_5._8_8_;
  uVar13 = param_5._0_8_;
  uVar12 = param_4._8_8_;
  uVar11 = param_4._0_8_;
  uVar10 = param_3._8_8_;
  uVar9 = param_3._0_8_;
  pcVar8 = (code *)*param_6;
  uVar1 = param_6[1];
  local_84[0] = param_8;
  if (param_9 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a8 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_a0 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_98 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_90 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
  else {
    local_98 = strlen((char *)param_9);
    bVar3 = *param_9;
    local_a8 = &DAT_cbf29ce484222645;
    pbVar7 = param_9;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_90 = (long *)0x0;
    pbStack_a0 = param_9;
  }
  cVar2 = *param_7;
  local_80 = ZEXT816(0);
  if (cVar2 == '\x02') {
    if (*(long *)(param_7 + 8) == 0) {
      uVar10 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar14 = 0;
      uVar13 = 0;
      local_80 = ZEXT816(0);
    }
    else {
      lVar6 = *(long *)(*(long *)(param_7 + 8) + 0x10);
      uVar10 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar14 = 0;
      uVar13 = 0;
      local_80 = ZEXT816(0);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + ((long)uVar1 >> 1) + -0x28);
        if ((uVar1 & 1) != 0) {
          pcVar8 = *(code **)(pcVar8 + *plVar5);
        }
        local_80 = (*pcVar8)(plVar5,local_84[0],&local_a8);
      }
    }
  }
  else if (cVar2 == '\x03') {
    local_80 = FUN_00d32058(param_7 + 8,pcVar8,uVar1,local_84,&local_a8);
  }
  else if (cVar2 == '\x01') {
    local_80 = FUN_00d3200c(param_7 + 8,pcVar8,uVar1,local_84,&local_a8);
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar14 = 0;
    uVar13 = 0;
    if (cVar2 == '\0') {
      local_80 = FUN_00d31fc4(*(undefined8 *)(param_7 + 8),pcVar8,uVar1,local_84,&local_a8);
    }
  }
  *param_1 = 1;
  uStack_70 = uVar9;
  uStack_68 = uVar10;
  local_60 = uVar11;
  uStack_58 = uVar12;
  uStack_50 = uVar13;
  uStack_48 = uVar14;
  FUN_00d319d0(param_1 + 8,local_80);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  return;
}


