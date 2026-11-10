/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e7d90; name: FUN_011e7d90
 */


void FUN_011e7d90(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar4 = *(long **)(param_1 + 0x40);
  lVar2 = *plVar4;
  lVar6 = plVar4[1];
  if (lVar6 != lVar2) {
    uVar3 = 0;
    uVar5 = 1;
    do {
      if ((ulong)((lVar6 - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      local_58 = *(ulong *)(lVar2 + uVar3 * 0x110);
      if ((local_58 & 0xff) != 0) {
        FUN_01292394(*(undefined8 *)(param_1 + 0x30),&local_58);
        plVar4 = *(long **)(param_1 + 0x40);
      }
      lVar2 = *plVar4;
      lVar6 = plVar4[1];
      bVar1 = uVar5 < (ulong)((lVar6 - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f);
      uVar3 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
  }
  if ((param_2 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x60);
    lVar2 = *plVar4;
    lVar6 = plVar4[1];
    if (((lVar6 != lVar2) && (FUN_011e675c(lVar6 + -0x110), lVar6 + -0x110 != lVar2)) &&
       (FUN_011e675c(lVar6 + -0x220), lVar6 + -0x220 != lVar2)) {
      do {
        FUN_011e675c(lVar6 + -0x330);
        lVar6 = lVar6 + -0x110;
      } while (lVar2 + 0x220 != lVar6);
    }
    plVar4[1] = lVar2;
    plVar4 = *(long **)(param_1 + 0x60);
    local_58 = *(ulong *)(param_1 + 0x68);
    local_50 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = local_50;
    *(undefined8 *)(param_1 + 0x58) = uStack_48;
    *(long **)(param_1 + 0x40) = plVar4;
    *(ulong *)(param_1 + 0x48) = local_58;
  }
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    lVar6 = plVar4[1];
    if (((lVar6 != lVar2) && (FUN_011e675c(lVar6 + -0x110), lVar6 + -0x110 != lVar2)) &&
       (FUN_011e675c(lVar6 + -0x220), lVar6 + -0x220 != lVar2)) {
      do {
        FUN_011e675c(lVar6 + -0x330);
        lVar6 = lVar6 + -0x110;
      } while (lVar2 + 0x220 != lVar6);
    }
    plVar4[1] = lVar2;
  }
  return;
}


