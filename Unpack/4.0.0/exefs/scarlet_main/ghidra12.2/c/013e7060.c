/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e7060; name: FUN_013e7060
 */


void FUN_013e7060(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x810,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    uVar10 = param_3[3];
    uVar4 = param_3[4];
    uVar5 = param_3[6];
    puVar7[5] = param_3[5];
    puVar7[6] = uVar5;
    puVar7[3] = uVar10;
    puVar7[4] = uVar4;
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    uVar10 = param_3[10];
    uVar4 = param_3[0xb];
    uVar5 = param_3[0xd];
    puVar7[0xc] = param_3[0xc];
    puVar7[0xd] = uVar5;
    puVar7[10] = uVar10;
    puVar7[0xb] = uVar4;
    puVar7[7] = param_3[7];
    puVar7[8] = param_3[8];
    puVar7[9] = param_3[9];
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[7] = 0;
    *(undefined1 *)(puVar7 + 0xe) = *(undefined1 *)(param_3 + 0xe);
    lVar9 = 0;
    do {
      lVar1 = lVar9 + 0x40;
      *(undefined1 *)((long)puVar7 + lVar9 + 0x80) = *(undefined1 *)((long)param_3 + lVar9 + 0x80);
      *(undefined8 *)((long)puVar7 + lVar9 + 0x88) = *(undefined8 *)((long)param_3 + lVar9 + 0x88);
      *(undefined8 *)((long)puVar7 + lVar9 + 0x90) = *(undefined8 *)((long)param_3 + lVar9 + 0x90);
      *(undefined8 *)((long)puVar7 + lVar9 + 0x98) = *(undefined8 *)((long)param_3 + lVar9 + 0x98);
      uVar10 = *(undefined8 *)((long)param_3 + lVar9 + 0xa0);
      *(undefined8 *)((long)param_3 + lVar9 + 0xa0) = 0;
      *(undefined8 *)((long)puVar7 + lVar9 + 0xa0) = uVar10;
      *(undefined8 *)((long)puVar7 + lVar9 + 0xb8) = *(undefined8 *)((long)param_3 + lVar9 + 0xb8);
      *(undefined8 *)((long)puVar7 + lVar9 + 0xb0) = *(undefined8 *)((long)param_3 + lVar9 + 0xb0);
      lVar9 = lVar1;
    } while (lVar1 != 0x500);
    *(undefined2 *)(puVar7 + 0xb0) = *(undefined2 *)(param_3 + 0xb0);
    lVar9 = 0x588;
    do {
      puVar2 = (undefined8 *)((long)param_3 + lVar9);
      puVar3 = (undefined8 *)((long)puVar7 + lVar9);
      lVar9 = lVar9 + 0x20;
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      uVar10 = puVar2[3];
      puVar2[3] = 0;
      puVar3[3] = uVar10;
    } while (lVar9 != 0x808);
    *param_1 = puVar7;
    param_1[1] = param_2;
    param_1[2] = 0x810;
    param_1[3] = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


