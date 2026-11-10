/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080ac4c; name: FUN_0080ac4c
 */


void FUN_0080ac4c(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  long *plStack_60;
  byte local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  long *plStack_40;
  
  FUN_0080aee0(&local_78,"nn::pia::npln::NplnPlugin",param_2,param_3,param_4 & 1);
  lVar13 = *(long *)(param_1 + 0x698);
  if (lVar13 == *(long *)(param_1 + 0x6a0)) {
    lVar13 = lVar13 - *(long *)(param_1 + 0x690) >> 3;
    uVar1 = lVar13 * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(long *)(param_1 + 0x6a0) - *(long *)(param_1 + 0x690) >> 3;
    uVar11 = lVar9 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x38e38e38e38e38e;
    }
    if (uVar1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_1 + 0x6a8) + 0x10))
                        (*(long **)(param_1 + 0x6a8),uVar1 * 0x48,8);
    }
    lVar14 = lVar9 + lVar13 * 8;
    FUN_0080b718(lVar14,&local_78);
    lVar15 = *(long *)(param_1 + 0x690);
    lVar13 = lVar14 + 0x48;
    lVar12 = *(long *)(param_1 + 0x698);
    if (lVar12 == lVar15) {
      lVar12 = lVar15;
    }
    else {
      lVar10 = 0;
      do {
        lVar2 = lVar12 + lVar10;
        uVar4 = *(undefined8 *)(lVar2 + -0x48);
        uVar5 = *(undefined8 *)(lVar2 + -0x40);
        uVar6 = *(undefined8 *)(lVar2 + -0x30);
        lVar3 = lVar14 + lVar10;
        lVar10 = lVar10 + -0x48;
        *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
        *(undefined8 *)(lVar3 + -0x30) = uVar6;
        *(undefined8 *)(lVar3 + -0x48) = uVar4;
        *(undefined8 *)(lVar3 + -0x40) = uVar5;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        uVar4 = *(undefined8 *)(lVar2 + -0x28);
        uVar5 = *(undefined8 *)(lVar2 + -0x20);
        uVar6 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x48) = 0;
        *(undefined8 *)(lVar2 + -0x40) = 0;
        *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)(lVar3 + -0x10) = uVar6;
        *(undefined8 *)(lVar3 + -0x28) = uVar4;
        *(undefined8 *)(lVar3 + -0x20) = uVar5;
        uVar7 = *(undefined4 *)(lVar2 + -8);
        *(undefined8 *)(lVar2 + -0x28) = 0;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined1 *)(lVar3 + -4) = *(undefined1 *)(lVar2 + -4);
        *(undefined4 *)(lVar3 + -8) = uVar7;
      } while (lVar15 - lVar12 != lVar10);
      lVar15 = *(long *)(param_1 + 0x690);
      lVar14 = lVar14 + lVar10;
      lVar12 = *(long *)(param_1 + 0x698);
    }
    *(long *)(param_1 + 0x690) = lVar14;
    lVar14 = *(long *)(param_1 + 0x6a0);
    *(long *)(param_1 + 0x698) = lVar13;
    *(ulong *)(param_1 + 0x6a0) = lVar9 + uVar1 * 0x48;
    for (; lVar12 != lVar15; lVar12 = lVar12 + -0x48) {
      if ((*(byte *)(lVar12 + -0x28) & 1) == 0) {
        bVar8 = *(byte *)(lVar12 + -0x48);
      }
      else {
        (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))
                  (*(long **)(lVar12 + -0x10),*(undefined8 *)(lVar12 + -0x18),
                   *(ulong *)(lVar12 + -0x28) & 0xfffffffffffffffe,1);
        bVar8 = *(byte *)(lVar12 + -0x48);
      }
      if ((bVar8 & 1) != 0) {
        (**(code **)(**(long **)(lVar12 + -0x30) + 0x18))
                  (*(long **)(lVar12 + -0x30),*(undefined8 *)(lVar12 + -0x38),
                   *(ulong *)(lVar12 + -0x48) & 0xfffffffffffffffe,1);
      }
    }
    if (lVar15 != 0) {
      (**(code **)(**(long **)(param_1 + 0x6a8) + 0x18))
                (*(long **)(param_1 + 0x6a8),lVar15,lVar14 - lVar15,8);
    }
  }
  else {
    FUN_0080b718(lVar13,&local_78);
    *(long *)(param_1 + 0x698) = lVar13 + 0x48;
  }
  if ((local_58 & 1) != 0) {
    (**(code **)(*plStack_40 + 0x18))
              (plStack_40,local_48,CONCAT71(uStack_57,local_58) & 0xfffffffffffffffe,1);
  }
  if ((local_78 & 1) != 0) {
    (**(code **)(*plStack_60 + 0x18))
              (plStack_60,local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe,1);
  }
  return;
}


