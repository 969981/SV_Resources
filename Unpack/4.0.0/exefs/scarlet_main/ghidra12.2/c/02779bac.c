/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02779bac; name: FUN_02779bac
 */


/* WARNING: Removing unreachable block (ram,0x02779d18) */
/* WARNING: Removing unreachable block (ram,0x02779d84) */
/* WARNING: Removing unreachable block (ram,0x02779da4) */

void FUN_02779bac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [32];
  undefined1 *local_80;
  code *local_78;
  code *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
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
  local_70 = (code *)0x0;
  pcStack_68 = (code *)0x0;
  local_80 = (undefined1 *)0x0;
  local_78 = (code *)0x0;
  FUN_00d0a34c(&local_60,param_4);
  local_50 = *(undefined8 *)(param_4 + 0x10);
  local_80 = &LAB_0277a124;
  local_78 = FUN_0277a2f8;
  local_70 = FUN_0277ab80;
  pcStack_68 = FUN_0277abb8;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_00d0a34c(param_2 + 4,&local_60);
  pcVar1 = local_78;
  param_2[6] = local_50;
  param_2[3] = pcStack_68;
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
    local_70 = (code *)0x0;
    pcStack_68 = (code *)0x0;
    local_80 = (undefined1 *)0x0;
    local_78 = (code *)0x0;
    (*pcVar1)(&local_60);
    param_2[8] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
  }
  FUN_02bd7d5c(auStack_a0,param_2 + 0xc);
  param_2[0xb] = FUN_02bd7d5c;
  param_2[8] = &LAB_02bd7d34;
  param_2[9] = FUN_02bd7d54;
  param_2[10] = &LAB_02bd7d58;
  FUN_02bd7d54(auStack_a0);
  pcVar1 = local_78;
  param_2[0x10] = uVar4;
  if (local_78 != (code *)0x0) {
    local_70 = (code *)0x0;
    pcStack_68 = (code *)0x0;
    local_80 = (undefined1 *)0x0;
    local_78 = (code *)0x0;
    (*pcVar1)(&local_60);
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


