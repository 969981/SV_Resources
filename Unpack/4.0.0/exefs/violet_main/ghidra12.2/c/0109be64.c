/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109be64; name: FUN_0109be64
 */


void FUN_0109be64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  puVar2 = PTR_LAB_047d9aa0;
  puVar1 = PTR_LAB_047d9a98;
  puVar7[4] = param_2;
  puVar4 = PTR_LAB_047d9ab0;
  puVar3 = PTR_LAB_047d9aa8;
  *puVar7 = puVar1;
  puVar7[1] = puVar2;
  puVar7[2] = puVar3;
  puVar7[3] = puVar4;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar7 + 0x10;
  return;
}


