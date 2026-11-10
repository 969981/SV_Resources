/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e1bb64; name: FUN_00e1bb64
 */


void FUN_00e1bb64(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31e8 + 0x10);
  memcpy(param_2 + 1,(void *)(param_3 + 8),0x40);
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  lVar1 = *(long *)(param_3 + 0x70);
  lVar2 = *(long *)(param_3 + 0x78);
  lVar3 = *(long *)(param_3 + 0x68);
  param_2[0xc] = *(long *)(param_3 + 0x60);
  param_2[0xd] = lVar3;
  param_2[0xe] = lVar1;
  param_2[0xf] = lVar2;
  param_2[9] = *(long *)(param_3 + 0x48);
  param_2[10] = *(long *)(param_3 + 0x50);
  param_2[0xb] = *(long *)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  memcpy(param_2 + 0x10,(void *)(param_3 + 0x80),0x30);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


