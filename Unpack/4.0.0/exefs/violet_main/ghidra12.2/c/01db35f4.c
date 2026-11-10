/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db35f4; name: FUN_01db35f4
 */


void FUN_01db35f4(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar1 = *param_2;
  *puVar4 = &LAB_01db390c;
  puVar4[1] = &LAB_00a2ddfc;
  *(undefined1 *)(puVar4 + 4) = uVar1;
  puVar4[2] = &LAB_00a2de00;
  puVar4[3] = &LAB_00a2de0c;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 0x10;
  return;
}


