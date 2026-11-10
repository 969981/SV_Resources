/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1c2cc; name: FUN_00e1c2cc
 */


void FUN_00e1c2cc(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31e0 + 0x10);
  lVar3 = *(long *)(param_3 + 8);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0x10);
  param_2[1] = lVar3;
  param_2[3] = *(long *)(param_3 + 0x18);
  param_2[4] = *(long *)(param_3 + 0x20);
  param_2[5] = *(long *)(param_3 + 0x28);
  lVar3 = *(long *)(param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x30) = 0;
  param_2[6] = lVar3;
  param_2[7] = *(long *)(param_3 + 0x38);
  param_2[8] = *(long *)(param_3 + 0x40);
  param_2[9] = *(long *)(param_3 + 0x48);
  lVar3 = *(long *)(param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x50) = 0;
  param_2[10] = lVar3;
  lVar4 = *(long *)(param_3 + 0x68);
  lVar3 = *(long *)(param_3 + 0x60);
  param_2[0xb] = *(long *)(param_3 + 0x58);
  param_2[0xc] = lVar3;
  param_2[0xd] = lVar4;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


