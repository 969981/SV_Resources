/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f8e3f8; name: FUN_00f8e3f8
 */


ulong FUN_00f8e3f8(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  do {
    lVar3 = param_1[0xf] - param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        lVar12 = param_1[3];
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
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar12;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 4) = *param_2;
        puVar1[6] = 0;
        puVar1[5] = 0;
        FUN_00fd9730(puVar1 + 5,param_2 + 8);
        puVar6 = PTR_LAB_047dd420;
        puVar5 = PTR_LAB_047dd418;
        puVar4 = PTR_LAB_047dd410;
        *puVar1 = PTR_FUN_047dd408;
        puVar1[1] = puVar4;
        puVar1[2] = puVar5;
        puVar1[3] = puVar6;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        param_1[1] = (long)(puVar1 + 0x10);
      }
      else {
        FUN_00f8fdc4(param_1,param_2);
      }
      uVar11 = (long)puVar1 - lVar3 >> 7;
      goto LAB_00f8e4d8;
    }
    uVar11 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar3 + param_1[0xe] + -8;
    uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar10) =
         *(ulong *)(param_1[7] + uVar10) & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar11);
  puVar1 = (undefined8 *)(*param_1 + uVar11 * 0x80);
  pcVar9 = (code *)puVar1[1];
  if (pcVar9 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar9)(puVar1 + 4);
  }
  uVar2 = *param_2;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 4) = uVar2;
  puVar1[6] = 0;
  FUN_00fd9730(puVar1 + 5,param_2 + 8);
  *puVar1 = PTR_FUN_047dd408;
  puVar1[1] = PTR_LAB_047dd410;
  puVar4 = PTR_LAB_047dd420;
  puVar1[2] = PTR_LAB_047dd418;
  puVar1[3] = puVar4;
  if ((ulong)param_1[0x15] <= uVar11) {
LAB_00f8e4d8:
    param_1[0x15] = uVar11 + 1;
  }
  return uVar11;
}


