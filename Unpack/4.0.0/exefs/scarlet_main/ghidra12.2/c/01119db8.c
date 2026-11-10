/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01119db8; name: FUN_01119db8
 */


void FUN_01119db8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  uVar5 = param_3[3];
  param_3[3] = 0;
  param_2[3] = uVar5;
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  uVar5 = param_3[7];
  param_3[7] = 0;
  param_2[7] = uVar5;
  memcpy(param_2 + 8,param_3 + 8,0x34);
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  uVar5 = param_3[0x14];
  uVar1 = param_3[0x15];
  uVar2 = param_3[0x13];
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = uVar2;
  param_2[0x14] = uVar5;
  param_2[0x15] = uVar1;
  param_2[0xf] = param_3[0xf];
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = param_3[0x11];
  param_3[0x11] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  uVar5 = param_3[0x19];
  uVar1 = param_3[0x1a];
  uVar2 = param_3[0x1c];
  param_2[0x1b] = param_3[0x1b];
  param_2[0x1c] = uVar2;
  param_2[0x19] = uVar5;
  param_2[0x1a] = uVar1;
  param_2[0x16] = param_3[0x16];
  param_2[0x17] = param_3[0x17];
  param_2[0x18] = param_3[0x18];
  param_3[0x18] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  uVar5 = param_3[0x20];
  uVar1 = param_3[0x21];
  uVar2 = param_3[0x23];
  param_2[0x22] = param_3[0x22];
  param_2[0x23] = uVar2;
  param_2[0x20] = uVar5;
  param_2[0x21] = uVar1;
  param_2[0x1d] = param_3[0x1d];
  param_2[0x1e] = param_3[0x1e];
  param_2[0x1f] = param_3[0x1f];
  param_3[0x1f] = 0;
  param_3[0x1d] = 0;
  param_3[0x1e] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  uVar5 = param_3[0x27];
  uVar1 = param_3[0x28];
  uVar2 = param_3[0x2a];
  param_2[0x29] = param_3[0x29];
  param_2[0x2a] = uVar2;
  param_2[0x27] = uVar5;
  param_2[0x28] = uVar1;
  param_2[0x24] = param_3[0x24];
  param_2[0x25] = param_3[0x25];
  param_2[0x26] = param_3[0x26];
  param_3[0x26] = 0;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  uVar5 = param_3[0x2e];
  uVar1 = param_3[0x2f];
  uVar2 = param_3[0x31];
  param_2[0x30] = param_3[0x30];
  param_2[0x31] = uVar2;
  param_2[0x2e] = uVar5;
  param_2[0x2f] = uVar1;
  param_2[0x2b] = param_3[0x2b];
  param_2[0x2c] = param_3[0x2c];
  param_2[0x2d] = param_3[0x2d];
  param_3[0x2d] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  uVar5 = param_3[0x32];
  *(undefined8 *)((long)param_2 + 0x196) = *(undefined8 *)((long)param_3 + 0x196);
  param_2[0x32] = uVar5;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


