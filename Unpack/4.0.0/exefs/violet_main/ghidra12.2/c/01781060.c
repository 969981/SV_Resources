/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01781060; name: FUN_01781060
 */


/* WARNING: Removing unreachable block (ram,0x017811bc) */
/* WARNING: Removing unreachable block (ram,0x01781228) */
/* WARNING: Removing unreachable block (ram,0x01781248) */

void FUN_01781060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [32];
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  uVar4 = *param_3;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (undefined1 *)0x0;
  puStack_68 = (undefined1 *)0x0;
  local_80 = (code *)0x0;
  local_78 = (code *)0x0;
  FUN_00d0a34c(&local_60,param_4);
  local_80 = FUN_0214157c;
  local_78 = FUN_02141c00;
  local_70 = &LAB_02142098;
  puStack_68 = &LAB_021420ac;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_00d0a34c(param_2 + 4,&local_60);
  pcVar1 = local_78;
  param_2[3] = puStack_68;
  *param_2 = local_80;
  param_2[1] = local_78;
  param_2[2] = local_70;
  if (local_78 == (code *)0x0) {
    param_2[8] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
  }
  else {
    local_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    local_80 = (code *)0x0;
    local_78 = (code *)0x0;
    (*pcVar1)(&local_60);
    param_2[8] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
  }
  FUN_02b2cfd4(auStack_a0,param_2 + 0xc);
  param_2[0xb] = FUN_02b2cfd4;
  param_2[8] = &LAB_02b2cf14;
  param_2[9] = FUN_02b2cfcc;
  param_2[10] = &LAB_02b2cfd0;
  FUN_02b2cfcc(auStack_a0);
  pcVar1 = local_78;
  param_2[0x10] = uVar4;
  if (local_78 != (code *)0x0) {
    local_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    local_80 = (code *)0x0;
    local_78 = (code *)0x0;
    (*pcVar1)(&local_60);
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


