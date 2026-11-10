/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278ded4; name: FUN_0278ded4
 */


void FUN_0278ded4(long *param_1,void *param_2,size_t *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 **ppuVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined2 *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined2 *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 *local_88;
  long lStack_80;
  undefined2 local_78 [4];
  long *local_70;
  long local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  ulong uStack_50;
  undefined4 local_44;
  
  plVar10 = param_1 + 1;
  *param_1 = (long)&PTR_LAB_045e0ec8;
  memset(plVar10,0,0xfd);
  local_68 = 0xfc;
  local_58 = local_60;
  local_60[0] = 0;
  uStack_50 = 0;
  local_70 = plVar10;
  memset(plVar10,0,0xfc);
  puVar1 = PTR_DAT_047e2090;
  if (((*PTR_DAT_047e2090 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2090);
  }
  puVar3 = PTR_DAT_047e20a0;
  puVar2 = PTR_DAT_047e2098;
  lVar8 = *(long *)PTR_DAT_047e2098;
  *(long *)PTR_DAT_047e20a0 = lVar8;
  if (lVar8 == 0) {
    puVar6 = &DAT_0485edd0;
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e2090);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    puVar6 = (undefined2 *)FUN_0278decc();
  }
  local_78[0] = *puVar6;
  if (local_70 == (long *)0x0) {
    ppuVar7 = (undefined2 **)0x0;
  }
  else {
    local_a0 = (undefined2 *)((long)local_70 + 2);
    local_90 = 0;
    uStack_98 = 2;
    lStack_80 = uStack_50 + 1;
    ppuVar7 = &local_a0;
    local_88 = local_58;
  }
  local_a8 = local_70 != (long *)0x0;
  FUN_0278d838(local_78,ppuVar7);
  if (local_70 == (long *)0x0) {
    return;
  }
  local_d0 = (undefined2 *)((long)local_70 + 4);
  uStack_c8 = 1;
  lStack_b0 = uStack_50 + 5;
  local_c0 = 0;
  local_b8 = local_58;
  local_44 = 0;
  FUN_0278e1d8(&local_d0,&local_44);
  plVar10 = local_70;
  if (local_70 == (long *)0x0) {
    return;
  }
  if (0x7df < (ulong)(local_68 << 3)) {
    uVar9 = uStack_50 + 6 >> 3;
    local_58[uVar9] = (byte)(1 << (uStack_50 + 6 & 7)) | local_58[uVar9];
    if ((param_2 != (void *)0x0) && (*param_3 < 0xf8)) {
      if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047e2090);
      }
      lVar8 = *(long *)puVar2;
      *(long *)puVar3 = lVar8;
      if (lVar8 != 0) {
        memcpy((void *)((long)plVar10 + 5),param_2,*param_3);
        lVar8 = (**(code **)(*param_1 + 0x10))(param_1);
        uVar4 = FUN_0278de80(lVar8 + 2,0xfa);
        if (local_70 == (long *)0x0) {
          return;
        }
        *(undefined2 *)local_70 = uVar4;
        goto LAB_0278e0cc;
      }
    }
    if (local_70 == (long *)0x0) {
      return;
    }
  }
  *(undefined2 *)local_70 = 0xffff;
LAB_0278e0cc:
  local_58[uStack_50 >> 3] = (byte)(1 << (uStack_50 & 7)) | local_58[uStack_50 >> 3];
  return;
}


