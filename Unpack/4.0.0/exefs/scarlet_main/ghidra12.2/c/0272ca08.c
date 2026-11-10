/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272ca08; name: FUN_0272ca08
 */


void FUN_0272ca08(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar5 = &DAT_cbf29ce484222645;
  bVar2 = *param_3;
  pbVar6 = param_3;
  while (bVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar2) * 0x100000001b3);
    bVar2 = *pbVar6;
  }
  uVar1 = *param_5;
  *(undefined4 *)(param_2 + 4) = *param_4;
  *(undefined4 *)((long)param_2 + 0x24) = uVar1;
  *param_2 = puVar5;
  param_2[1] = param_3;
  param_2[2] = 0x13;
  param_2[3] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


