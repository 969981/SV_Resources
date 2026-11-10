/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4acb0; name: FUN_00c4acb0
 */


void FUN_00c4acb0(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(param_1 + 8);
  param_4 = lVar8 - param_4;
  uVar1 = param_2 + param_4;
  lVar9 = lVar8;
  if (uVar1 < param_3) {
    lVar9 = 0;
    do {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
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
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      puVar2 = (undefined8 *)(lVar8 + lVar9);
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar3 = (undefined8 *)(uVar1 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      if ((code *)puVar3[3] != (code *)0x0) {
        (*(code *)puVar3[3])(puVar3 + 4,puVar2 + 4);
        uVar10 = puVar3[1];
        puVar2[3] = puVar3[3];
        uVar7 = puVar3[2];
        *puVar2 = *puVar3;
        puVar2[1] = uVar10;
        puVar2[2] = uVar7;
        pcVar6 = (code *)puVar3[1];
        if (pcVar6 != (code *)0x0) {
          puVar3[2] = 0;
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          (*pcVar6)(puVar3 + 4);
        }
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar9 = lVar9 + 0x80;
    } while (uVar1 + lVar9 < param_3);
    lVar9 = lVar8 + lVar9;
  }
  *(long *)(param_1 + 8) = lVar9;
  if (param_4 != 0) {
    lVar9 = (param_4 >> 7) << 7;
    do {
      lVar8 = lVar8 + -0x80;
      FUN_00c4a25c(lVar8,param_2 + -0x80 + lVar9);
      lVar9 = lVar9 + -0x80;
    } while (lVar9 != 0);
  }
  return;
}


