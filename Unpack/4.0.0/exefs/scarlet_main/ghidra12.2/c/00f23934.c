/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f23934; name: FUN_00f23934
 */


void FUN_00f23934(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,8,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    pbVar6 = (byte *)*param_2;
    puVar5 = &DAT_cbf29ce484222645;
    bVar1 = *pbVar6;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
    }
    *puVar3 = puVar5;
    *param_1 = puVar3;
    param_1[1] = plVar7;
    param_1[2] = 8;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


