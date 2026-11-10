/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01457cac; name: FUN_01457cac
 */


void FUN_01457cac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar5 = param_3[0x15];
  uVar1 = param_3[0x16];
  uVar2 = param_3[0x18];
  param_2[0x17] = param_3[0x17];
  param_2[0x18] = uVar2;
  param_2[0x15] = uVar5;
  param_2[0x16] = uVar1;
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = param_3[0x13];
  param_2[0x14] = param_3[0x14];
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


