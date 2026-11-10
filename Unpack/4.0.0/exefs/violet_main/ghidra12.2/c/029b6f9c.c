/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b6f9c; name: FUN_029b6f9c
 */


void FUN_029b6f9c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
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
  uVar4 = *param_2;
  puVar3[2] = uVar4;
  puVar3[6] = 0;
  puVar3[7] = uVar4;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
  puVar3[3] = 0x2e8ba2e8ba2e8ba;
  puVar3[4] = 0;
  puVar3[8] = 0x2e8ba2e8ba2e8ba;
  puVar3[9] = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3 + 0xd;
  return;
}


