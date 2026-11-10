/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2f8c4; name: FUN_00f2f8c4
 */


void FUN_00f2f8c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = uVar5;
  param_2[4] = 0;
  uVar5 = param_3[7];
  uVar1 = param_3[8];
  uVar2 = param_3[10];
  param_2[9] = param_3[9];
  param_2[10] = uVar2;
  param_2[7] = uVar5;
  param_2[8] = uVar1;
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  uVar5 = param_3[0xe];
  uVar1 = param_3[0xf];
  uVar2 = param_3[0x11];
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = uVar2;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar1;
  param_2[0xb] = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  param_2[0xd] = param_3[0xd];
  uVar5 = param_3[0x12];
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xb] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = uVar5;
  param_2[0x13] = 0;
  uVar5 = param_3[0x16];
  uVar1 = param_3[0x17];
  uVar2 = param_3[0x19];
  param_2[0x18] = param_3[0x18];
  param_2[0x19] = uVar2;
  param_2[0x16] = uVar5;
  param_2[0x17] = uVar1;
  param_2[0x13] = param_3[0x13];
  param_2[0x14] = param_3[0x14];
  param_2[0x15] = param_3[0x15];
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  uVar5 = param_3[0x1d];
  uVar1 = param_3[0x1e];
  uVar2 = param_3[0x20];
  param_2[0x1f] = param_3[0x1f];
  param_2[0x20] = uVar2;
  param_2[0x1d] = uVar5;
  param_2[0x1e] = uVar1;
  param_2[0x1a] = param_3[0x1a];
  param_2[0x1b] = param_3[0x1b];
  param_2[0x1c] = param_3[0x1c];
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  param_3[0x1c] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  uVar5 = param_3[0x24];
  uVar1 = param_3[0x25];
  uVar2 = param_3[0x27];
  param_2[0x26] = param_3[0x26];
  param_2[0x27] = uVar2;
  param_2[0x24] = uVar5;
  param_2[0x25] = uVar1;
  param_2[0x21] = param_3[0x21];
  param_2[0x22] = param_3[0x22];
  param_2[0x23] = param_3[0x23];
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  uVar5 = param_3[0x2b];
  uVar1 = param_3[0x2c];
  uVar2 = param_3[0x2e];
  param_2[0x2d] = param_3[0x2d];
  param_2[0x2e] = uVar2;
  param_2[0x2b] = uVar5;
  param_2[0x2c] = uVar1;
  param_2[0x28] = param_3[0x28];
  param_2[0x29] = param_3[0x29];
  param_2[0x2a] = param_3[0x2a];
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  uVar5 = param_3[0x32];
  uVar1 = param_3[0x33];
  uVar2 = param_3[0x35];
  param_2[0x34] = param_3[0x34];
  param_2[0x35] = uVar2;
  param_2[0x32] = uVar5;
  param_2[0x33] = uVar1;
  param_2[0x2f] = param_3[0x2f];
  param_2[0x30] = param_3[0x30];
  param_2[0x31] = param_3[0x31];
  param_3[0x2f] = 0;
  param_3[0x30] = 0;
  param_3[0x31] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


