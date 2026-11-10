/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d43108; name: FUN_00d43108
 */


void FUN_00d43108(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

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
  uVar3 = *param_3;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *param_2 = uVar3;
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)(param_3 + 10);
  uVar2 = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 0xe) = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 10) = uVar1;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  uVar6 = *(undefined8 *)(param_3 + 0x16);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
  *(undefined8 *)(param_2 + 0x1c) = uVar2;
  *(undefined8 *)(param_2 + 0x16) = uVar6;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


