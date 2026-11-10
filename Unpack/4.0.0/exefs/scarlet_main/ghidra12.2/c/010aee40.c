/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010aee40; name: FUN_010aee40
 */


void FUN_010aee40(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_48 = param_2;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x1f0,8);
  if (lVar2 == 0) {
    local_58 = 0;
    local_50 = 0;
    local_60 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0136bfa4(lVar2,&local_48);
    local_58 = 0x1f0;
    local_50 = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    local_60 = param_2;
  }
  local_68 = 0;
  FUN_010af7b0(param_1 + 0x468,lVar2);
  *(undefined8 *)(param_1 + 0x480) = local_50;
  *(undefined8 *)(param_1 + 0x478) = local_58;
  *(long **)(param_1 + 0x470) = local_60;
  FUN_010af7b0(&local_68,0);
  FUN_010aef9c(*(undefined8 *)(param_1 + 0x468));
  return;
}


