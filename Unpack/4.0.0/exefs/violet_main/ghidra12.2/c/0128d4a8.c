/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128d4a8; name: FUN_0128d4a8
 */


void FUN_0128d4a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  memcpy(param_2 + 8,param_3 + 8,0x40);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x10] = 0;
  uVar5 = param_3[0x15];
  uVar1 = param_3[0x16];
  uVar2 = param_3[0x14];
  param_2[0x13] = param_3[0x13];
  param_2[0x14] = uVar2;
  param_2[0x15] = uVar5;
  param_2[0x16] = uVar1;
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = param_3[0x11];
  param_2[0x12] = param_3[0x12];
  param_3[0x12] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  uVar5 = param_3[0x1a];
  uVar1 = param_3[0x1b];
  uVar2 = param_3[0x1d];
  param_2[0x1c] = param_3[0x1c];
  param_2[0x1d] = uVar2;
  param_2[0x1a] = uVar5;
  param_2[0x1b] = uVar1;
  param_2[0x17] = param_3[0x17];
  param_2[0x18] = param_3[0x18];
  param_2[0x19] = param_3[0x19];
  param_3[0x19] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  uVar5 = param_3[0x21];
  uVar1 = param_3[0x22];
  uVar2 = param_3[0x24];
  param_2[0x23] = param_3[0x23];
  param_2[0x24] = uVar2;
  param_2[0x21] = uVar5;
  param_2[0x22] = uVar1;
  param_2[0x1e] = param_3[0x1e];
  param_2[0x1f] = param_3[0x1f];
  param_2[0x20] = param_3[0x20];
  param_3[0x20] = 0;
  param_3[0x1e] = 0;
  param_3[0x1f] = 0;
  FUN_02711978(param_2 + 0x25,param_3 + 0x25);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


