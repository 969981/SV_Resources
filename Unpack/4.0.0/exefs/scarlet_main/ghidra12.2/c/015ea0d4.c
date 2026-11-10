/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ea0d4; name: FUN_015ea0d4
 */


void FUN_015ea0d4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  
  uVar3 = FUN_015ea274(param_1,(param_1[1] - *param_1 >> 4) * -0x3333333333333333 + 1);
  FUN_015ea338(auStack_68,uVar3,(param_1[1] - *param_1 >> 4) * -0x3333333333333333,param_1 + 3);
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
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  uVar3 = param_2[3];
  param_2[3] = 0;
  puVar1[3] = uVar3;
  uVar3 = param_2[4];
  param_2[4] = 0;
  puVar1[4] = uVar3;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 5);
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  uVar3 = param_2[9];
  param_2[9] = 0;
  puVar1[9] = uVar3;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 10;
  FUN_015ea2d0(param_1,auStack_68);
  FUN_015ea3cc(auStack_68);
  return;
}


