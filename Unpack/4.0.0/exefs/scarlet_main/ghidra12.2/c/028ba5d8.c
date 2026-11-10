/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ba5d8; name: FUN_028ba5d8
 */


void FUN_028ba5d8(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _func_void_void_ptr_void_ptr *p_Var8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 local_a0 [8];
  
  pcVar1 = (char *)(param_1 + 0x1bd1);
  uVar6 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer();
  uVar16 = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  if (*pcVar1 == '\0') goto LAB_028ba650;
  while (uVar16 < *(uint *)(param_1 + 0x1bd4)) {
    while( true ) {
      uVar7 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer();
      local_a0[uVar16] = uVar7;
      uVar16 = uVar16 + 1;
      if (*pcVar1 != '\0') break;
LAB_028ba650:
      bVar5 = uVar16 != 0;
      uVar16 = 0;
      if (bVar5) goto LAB_028ba680;
    }
  }
LAB_028ba680:
  if (*(int *)(param_1 + 0x1884) != 0) {
    uVar16 = 0;
    uVar17 = 0;
    do {
      pbVar2 = (byte *)(param_1 + uVar16 + 0x1888);
      bVar4 = *pbVar2;
      uVar9 = (uint)bVar4;
      if (bVar4 != 0) {
        lVar14 = 0;
        uVar15 = -(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
        do {
          p_Var8 = *(_func_void_void_ptr_void_ptr **)
                    (*(long *)(param_1 + 0x1c48) + uVar15 + lVar14 * 8);
          if (p_Var8 != (_func_void_void_ptr_void_ptr *)0x0) {
            nn::fontll::ScalableFontEngine::FinalizeOtfKerningTable
                      (*(OtfKerningTable **)(param_1 + 8),p_Var8,param_3);
            *(undefined8 *)(*(long *)(param_1 + 0x1c48) + uVar15 + lVar14 * 8) = 0;
            uVar9 = (uint)*pbVar2;
          }
          lVar14 = lVar14 + 1;
        } while ((uint)lVar14 < uVar9);
        uVar17 = (ulong)((int)uVar17 + (uint)lVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_1 + 0x1884));
  }
  nn::fontll::ScalableFontEngine::Finalize();
  nn::fontll::ScalableFontEngine::GetError();
  uVar16 = 0;
  if (*pcVar1 == '\0') goto LAB_028ba738;
  while (uVar16 < *(uint *)(param_1 + 0x1bd4)) {
    while( true ) {
      nn::fontll::ScalableFontEngine::Finalize();
      nn::fontll::ScalableFontEngine::GetError();
      uVar16 = uVar16 + 1;
      if (*pcVar1 != '\0') break;
LAB_028ba738:
      bVar5 = uVar16 != 0;
      uVar16 = 0;
      if (bVar5) goto LAB_028ba770;
    }
  }
LAB_028ba770:
  (*param_3)(*(undefined8 *)(param_1 + 8),param_4);
  *(undefined8 *)(param_1 + 8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x10),param_4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*param_3)(uVar6,param_4);
  uVar16 = 0;
  if (*pcVar1 == '\0') goto LAB_028ba7bc;
  while (uVar16 < *(uint *)(param_1 + 0x1bd4)) {
    while( true ) {
      (*param_3)(local_a0[uVar16],param_4);
      uVar16 = uVar16 + 1;
      if (*pcVar1 != '\0') break;
LAB_028ba7bc:
      bVar5 = uVar16 != 0;
      uVar16 = 0;
      if (bVar5) goto LAB_028ba7e4;
    }
  }
LAB_028ba7e4:
  lVar14 = 0;
  do {
    lVar10 = param_1 + lVar14 * 0x18;
    puVar11 = (undefined8 *)(lVar10 + 0x88);
    plVar12 = (long *)*puVar11;
    while (plVar12 != (long *)(lVar10 + 0x80)) {
      plVar3 = (long *)plVar12[1];
      lVar13 = *plVar3;
      *(long **)(*plVar12 + 8) = plVar3;
      *plVar3 = *plVar12;
      *(long **)(lVar13 + 8) = plVar12;
      *plVar12 = lVar13;
      plVar12 = (long *)*puVar11;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x100);
  plVar12 = *(long **)(param_1 + 0x58);
  while (plVar12 != (long *)(param_1 + 0x50)) {
    plVar3 = (long *)plVar12[1];
    lVar14 = *plVar3;
    *(long **)(*plVar12 + 8) = plVar3;
    *plVar3 = *plVar12;
    *(long **)(lVar14 + 8) = plVar12;
    *plVar12 = lVar14;
    plVar12 = *(long **)(param_1 + 0x58);
  }
  plVar12 = *(long **)(param_1 + 0x68);
  while (plVar12 != (long *)(param_1 + 0x60)) {
    plVar3 = (long *)plVar12[1];
    lVar14 = *plVar3;
    *(long **)(*plVar12 + 8) = plVar3;
    *plVar3 = *plVar12;
    *(long **)(lVar14 + 8) = plVar12;
    *plVar12 = lVar14;
    plVar12 = *(long **)(param_1 + 0x68);
  }
  plVar12 = *(long **)(param_1 + 0x78);
  while (plVar12 != (long *)(param_1 + 0x70)) {
    plVar3 = (long *)plVar12[1];
    lVar14 = *plVar3;
    *(long **)(*plVar12 + 8) = plVar3;
    *plVar3 = *plVar12;
    *(long **)(lVar14 + 8) = plVar12;
    *plVar12 = lVar14;
    plVar12 = *(long **)(param_1 + 0x78);
  }
  FUN_00888f8c(param_1 + 0x30,param_3,param_4);
  (*param_3)(*(undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf0),param_4);
  *(undefined8 *)(param_1 + 0x1bf0) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf8),param_4);
  *(undefined8 *)(param_1 + 0x1bf8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c00),param_4);
  *(undefined8 *)(param_1 + 0x1c00) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c08),param_4);
  *(undefined8 *)(param_1 + 0x1c08) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c10),param_4);
  *(undefined8 *)(param_1 + 0x1c10) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c18),param_4);
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c20),param_4);
  *(undefined8 *)(param_1 + 0x1c20) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c28),param_4);
  *(undefined8 *)(param_1 + 0x1c28) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c30),param_4);
  *(undefined8 *)(param_1 + 0x1c30) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c38),param_4);
  *(undefined8 *)(param_1 + 0x1c38) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c40),param_4);
  *(undefined8 *)(param_1 + 0x1c40) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c48),param_4);
  *(undefined8 *)(param_1 + 0x1c48) = 0;
  if (*(char *)(param_1 + 0x1ec0) != '\0') {
    FUN_00e5c070(param_1 + 0x1d30,param_2);
    FUN_00e5c0b4(param_1 + 0x1c58,param_2);
    if (*(long *)(param_1 + 0x1e98) == param_1 + 0x1d78) {
      FUN_00e5c07c(*(long *)(param_1 + 0x1e98),param_2);
    }
  }
  if (*(long *)(param_1 + 0x1e98) == param_1 + 0x1d78) {
    (*param_3)(*(undefined8 *)(param_1 + 0x20),param_4);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


