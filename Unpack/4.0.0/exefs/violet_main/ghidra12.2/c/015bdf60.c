/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bdf60; name: FUN_015bdf60
 */


void FUN_015bdf60(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_00ca1ea4(param_2 + 4,param_3 + 4);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_00cacc64(param_2 + 0xc,param_3 + 0xc);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  FUN_00d48230(param_2 + 0x14,param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  FUN_0127739c(param_2 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  FUN_0108458c(param_2 + 0x24,param_3 + 0x24);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_010f6758(param_2 + 0x2c,param_3 + 0x2c);
  uVar4 = *(undefined8 *)(param_3 + 0x34);
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x34) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x3c);
  *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x3c) = uVar4;
  *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)(param_3 + 0x44);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_2 + 0x4c) = *(undefined8 *)(param_3 + 0x4c);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(param_3 + 0x54);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  memcpy(param_2 + 0x5c,param_3 + 0x5c,0x28);
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x54) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
  memcpy(param_2 + 0x74,param_3 + 0x74,0x28);
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x74) = 0;
  memcpy(param_2 + 0x8c,param_3 + 0x8c,0x30);
  *(undefined8 *)(param_2 + 0xa4) = *(undefined8 *)(param_3 + 0xa4);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_3 + 0xac);
  memcpy(param_2 + 0xb0,param_3 + 0xb0,0x28);
  *(undefined8 *)(param_3 + 0xa4) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  *(undefined8 *)(param_3 + 0xac) = 0;
  *(undefined8 *)(param_3 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xc4) = *(undefined8 *)(param_3 + 0xc4);
  memcpy(param_2 + 200,param_3 + 200,0x28);
  *(undefined8 *)(param_3 + 0xc4) = 0;
  *(undefined8 *)(param_3 + 200) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0xe0);
  *(undefined4 *)((long)param_2 + 0x1c3) = *(undefined4 *)((long)param_3 + 0x1c3);
  *(undefined4 *)(param_2 + 0xe0) = uVar1;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


