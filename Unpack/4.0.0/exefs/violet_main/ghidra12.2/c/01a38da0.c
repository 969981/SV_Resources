/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a38da0; name: FUN_01a38da0
 */


void FUN_01a38da0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  uVar6 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  puVar5[6] = param_2[2];
  puVar5[7] = uVar2;
  puVar5[4] = uVar6;
  puVar5[5] = uVar1;
  uVar6 = param_2[4];
  puVar5[10] = 0;
  puVar5[8] = uVar6;
  puVar5[9] = 0;
  FUN_00cacc64(puVar5 + 9,param_2 + 5);
  *puVar5 = &LAB_00fe9670;
  puVar5[1] = &LAB_02773394;
  puVar5[2] = &LAB_027734a4;
  puVar5[3] = &LAB_027734d4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar5 + 0x10;
  return;
}


