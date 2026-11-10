/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e30f98; name: FUN_01e30f98
 */


void FUN_01e30f98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar3 = PTR_LAB_047d96f8;
  uVar1 = param_3[3];
  uVar9 = *param_3;
  uVar2 = param_3[1];
  param_2[6] = param_3[2];
  param_2[7] = uVar1;
  puVar4 = PTR_LAB_047d9700;
  param_2[4] = uVar9;
  param_2[5] = uVar2;
  puVar6 = PTR_LAB_047d9710;
  puVar5 = PTR_LAB_047d9708;
  *param_2 = puVar3;
  param_2[1] = puVar4;
  param_2[2] = puVar5;
  param_2[3] = puVar6;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


