/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e31f70; name: FUN_01e31f70
 */


void FUN_01e31f70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  code *local_b8;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  code *local_68;
  undefined1 auStack_60 [32];
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar8 = *param_3;
  local_70 = 0;
  local_68 = (code *)0x0;
  local_80 = 0;
  local_78 = (code *)0x0;
  FUN_01e323ac(&local_80,param_4);
  puVar4 = PTR_FUN_047d9730;
  puVar3 = PTR_LAB_047d9728;
  puVar2 = PTR_FUN_047d9720;
  puVar1 = PTR_LAB_047d9718;
  local_b8 = (code *)PTR_FUN_047d9720;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (local_68 != (code *)0x0) {
    (*local_68)(auStack_60,param_2 + 4);
    pcVar5 = local_78;
    param_2[3] = local_68;
    *param_2 = local_80;
    param_2[1] = local_78;
    param_2[2] = local_70;
    if (local_78 != (code *)0x0) {
      local_70 = 0;
      local_68 = (code *)0x0;
      local_80 = 0;
      local_78 = (code *)0x0;
      (*pcVar5)(auStack_60);
    }
  }
  param_2[8] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  if (puVar4 != (undefined *)0x0) {
    (*(code *)puVar4)(auStack_a0,param_2 + 0xc);
    param_2[0xb] = puVar4;
    param_2[8] = puVar1;
    param_2[9] = puVar2;
    param_2[10] = puVar3;
    if (puVar2 == (undefined *)0x0) {
      param_2[0x10] = uVar8;
      goto LAB_01e320b4;
    }
    local_b8 = (code *)0x0;
    (*(code *)puVar2)(auStack_a0);
  }
  param_2[0x10] = uVar8;
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
LAB_01e320b4:
  pcVar5 = local_78;
  if (local_78 != (code *)0x0) {
    local_70 = 0;
    local_68 = (code *)0x0;
    local_80 = 0;
    local_78 = (code *)0x0;
    (*pcVar5)(auStack_60);
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


