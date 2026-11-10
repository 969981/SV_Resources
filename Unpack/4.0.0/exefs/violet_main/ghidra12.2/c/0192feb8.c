/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192feb8; name: FUN_0192feb8
 */


void FUN_0192feb8(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
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
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar3 = *param_7;
  *puVar6 = *param_2;
  *(undefined8 *)(puVar6 + 6) = param_3[1];
  *(undefined8 *)(puVar6 + 4) = *param_3;
  *(undefined8 *)(puVar6 + 10) = param_4[1];
  *(undefined8 *)(puVar6 + 8) = *param_4;
  puVar6[0xc] = uVar1;
  puVar6[0xd] = uVar2;
  *(undefined1 *)(puVar6 + 0xe) = uVar3;
  puVar6[0xf] = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *(undefined4 **)(param_1 + 8) = puVar6 + 0x10;
  return;
}


