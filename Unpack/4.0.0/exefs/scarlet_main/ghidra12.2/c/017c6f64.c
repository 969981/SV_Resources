/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c6f64; name: FUN_017c6f64
 */


void FUN_017c6f64(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  
  uVar3 = FUN_017c70d0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_017c7194(auStack_68,uVar3,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  puVar1 = local_58;
  lVar5 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *puVar1 = *param_2;
  puVar1[2] = 0;
  puVar1[1] = 0;
  FUN_00c43ef0(puVar1 + 1,param_2 + 1);
  uVar3 = param_2[4];
  puVar1[3] = param_2[3];
  puVar1[4] = uVar3;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 5;
  FUN_017c712c(param_1,auStack_68);
  FUN_017c7228(auStack_68);
  return;
}


