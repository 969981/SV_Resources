/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4a7f4; name: FUN_00d4a7f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4a7f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*(long *)(param_1 + 0x1e8) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,400,0x10);
    if (puVar11 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      memset(puVar11 + 0x18,0,0xd0);
      uVar9 = _UNK_03cabe68;
      uVar8 = _DAT_03cabe60;
      uVar7 = _UNK_03cabe58;
      uVar6 = _DAT_03cabe50;
      uVar5 = DAT_03cab628;
      uVar4 = DAT_03cab620;
      uVar3 = _UNK_03caa5b8;
      uVar14 = _DAT_03caa5b0;
      *(undefined1 *)(puVar11 + 0x30) = 1;
      uVar15 = 400;
      puVar11[1] = uVar5;
      *puVar11 = uVar4;
      puVar11[3] = uVar9;
      puVar11[2] = uVar8;
      puVar11[5] = uVar3;
      puVar11[4] = uVar14;
      puVar11[7] = uVar7;
      puVar11[6] = uVar6;
      puVar11[9] = uVar5;
      puVar11[8] = uVar4;
      puVar11[0xb] = uVar9;
      puVar11[10] = uVar8;
      puVar11[0xd] = uVar3;
      puVar11[0xc] = uVar14;
      puVar11[0xf] = uVar7;
      puVar11[0xe] = uVar6;
      puVar11[0x11] = uVar5;
      puVar11[0x10] = uVar4;
      puVar11[0x13] = uVar9;
      puVar11[0x12] = uVar8;
      puVar11[0x15] = uVar3;
      puVar11[0x14] = uVar14;
      puVar11[0x17] = uVar7;
      puVar11[0x16] = uVar6;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      uVar14 = 0x10;
    }
    lVar12 = *(long *)(param_1 + 0x1e8);
    *(undefined8 **)(param_1 + 0x1e8) = puVar11;
    if (lVar12 != 0) {
      FUN_0270a5d4(param_1 + 0x1f0);
      puVar11 = *(undefined8 **)(param_1 + 0x1e8);
    }
    *(long **)(param_1 + 0x1f0) = plVar13;
    *(undefined8 *)(param_1 + 0x1f8) = uVar15;
    *(undefined8 *)(param_1 + 0x200) = uVar14;
    *(undefined8 **)(param_1 + 0x208) = puVar11;
    puVar1 = *(undefined8 **)(param_1 + 0x110);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (puVar1 != puVar2) {
      FUN_013447c0(*puVar1,puVar11);
      while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
        FUN_013447c0(*puVar1,puVar11);
      }
    }
  }
  return;
}


