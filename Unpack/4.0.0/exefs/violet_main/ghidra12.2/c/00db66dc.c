/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db66dc; name: FUN_00db66dc
 */


void FUN_00db66dc(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  FUN_0270eabc(param_2,param_3);
  *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1b0) = *(undefined8 *)(param_3 + 0x1b0);
  *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
  uVar4 = *(undefined8 *)(param_3 + 0x1c0);
  *(undefined8 *)(param_3 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = uVar4;
  *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
  *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_3 + 0x1d0);
  *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_3 + 0x1d8);
  uVar4 = *(undefined8 *)(param_3 + 0x1e0);
  *(undefined8 *)(param_3 + 0x1e0) = 0;
  *(undefined8 *)(param_2 + 0x1e0) = uVar4;
  *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_3 + 0x1e8);
  *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_3 + 0x1f0);
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_3 + 0x1f8);
  uVar4 = *(undefined8 *)(param_3 + 0x200);
  *(undefined8 *)(param_3 + 0x200) = 0;
  *(undefined8 *)(param_2 + 0x200) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x208);
  uVar3 = *(undefined8 *)(param_3 + 0x210);
  *(undefined1 *)(param_2 + 0x218) = *(undefined1 *)(param_3 + 0x218);
  *(undefined8 *)(param_2 + 0x210) = uVar3;
  *(undefined8 *)(param_2 + 0x208) = uVar4;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


