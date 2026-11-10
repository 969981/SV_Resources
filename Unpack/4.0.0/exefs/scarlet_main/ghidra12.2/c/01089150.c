/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01089150; name: FUN_01089150
 */


void FUN_01089150(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  int *piVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  
  uVar9 = *param_1;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  piVar6 = (int *)*param_3;
  puVar10 = &DAT_cbf29ce484222645;
  param_2[2] = &DAT_03c886bc;
  param_2[3] = 0;
  *param_2 = piVar6;
  param_2[1] = &DAT_cbf29ce484222645;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar6 + uVar8);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar5 = strlen((char *)(lVar11 + 4));
  bVar2 = *(byte *)(lVar11 + 4);
  if (bVar2 != 0) {
    pbVar7 = (byte *)(lVar11 + 5);
    do {
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  param_2[1] = puVar10;
  param_2[2] = (char *)(lVar11 + 4);
  param_2[3] = sVar5;
  param_2[4] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


