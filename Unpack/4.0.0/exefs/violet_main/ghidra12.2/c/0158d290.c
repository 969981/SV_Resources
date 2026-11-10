/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158d290; name: FUN_0158d290
 */


void FUN_0158d290(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  uVar6 = param_3[3];
  param_3[3] = 0;
  param_2[3] = uVar6;
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  uVar6 = param_3[7];
  param_3[7] = 0;
  param_2[7] = uVar6;
  uVar6 = param_3[8];
  uVar3 = *(undefined4 *)(param_3 + 9);
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 9) = uVar3;
  param_2[8] = uVar6;
  uVar6 = param_3[0xd];
  uVar1 = param_3[0xe];
  uVar2 = param_3[0x10];
  param_2[0xf] = param_3[0xf];
  param_2[0x10] = uVar2;
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar1;
  param_2[10] = param_3[10];
  param_2[0xb] = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar6 = param_3[0x14];
  uVar1 = param_3[0x15];
  uVar2 = param_3[0x17];
  param_2[0x16] = param_3[0x16];
  param_2[0x17] = uVar2;
  param_2[0x14] = uVar6;
  param_2[0x15] = uVar1;
  param_2[0x11] = param_3[0x11];
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = param_3[0x13];
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  uVar6 = param_3[0x1b];
  uVar1 = param_3[0x1c];
  uVar2 = param_3[0x1e];
  param_2[0x1d] = param_3[0x1d];
  param_2[0x1e] = uVar2;
  param_2[0x1b] = uVar6;
  param_2[0x1c] = uVar1;
  param_2[0x18] = param_3[0x18];
  param_2[0x19] = param_3[0x19];
  param_2[0x1a] = param_3[0x1a];
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


