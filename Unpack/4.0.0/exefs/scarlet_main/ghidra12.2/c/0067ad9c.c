/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067ad9c; name: FUN_0067ad9c
 */


void FUN_0067ad9c(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  short *psVar4;
  short *psVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  
  psVar5 = *(short **)(param_1 + 0x60);
  if (*(short **)(param_1 + 0x58) == psVar5) {
    sVar1 = 0;
  }
  else {
    sVar1 = psVar5[-1] + 1;
  }
  if (param_2 == 0) {
    return;
  }
  lVar10 = 0;
  psVar7 = *(short **)(param_1 + 0x68);
  if (psVar5 == psVar7) goto LAB_0067ae08;
  do {
    *psVar5 = sVar1;
    *(short **)(param_1 + 0x60) = psVar5 + 1;
    while( true ) {
      lVar10 = lVar10 + 1;
      if (lVar10 == param_2) {
        return;
      }
      psVar5 = *(short **)(param_1 + 0x60);
      psVar7 = *(short **)(param_1 + 0x68);
      if (psVar5 != psVar7) break;
LAB_0067ae08:
      psVar4 = *(short **)(param_1 + 0x58);
      uVar8 = (long)psVar7 - (long)psVar4;
      if ((long)uVar8 < -2) {
                    /* try { // try from 0067aedc to 0067aee3 has its CatchHandler @ 0067aee4 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar11 = (long)uVar8 >> 1;
      uVar2 = uVar11 + 1;
      if (uVar11 + 1 <= uVar8) {
        uVar2 = uVar8;
      }
      if (0x3ffffffffffffffe < uVar11) {
        uVar2 = 0x7fffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                          (*(long **)(param_1 + 0x70),uVar2 << 1,2);
        psVar4 = *(short **)(param_1 + 0x58);
        psVar5 = *(short **)(param_1 + 0x60);
      }
      psVar7 = (short *)(lVar3 + uVar11 * 2);
      psVar9 = psVar7 + 1;
      *psVar7 = sVar1;
      while (psVar5 != psVar4) {
        psVar5 = psVar5 + -1;
        psVar7 = psVar7 + -1;
        *psVar7 = *psVar5;
      }
      lVar6 = *(long *)(param_1 + 0x68);
      *(short **)(param_1 + 0x58) = psVar7;
      *(short **)(param_1 + 0x60) = psVar9;
      *(ulong *)(param_1 + 0x68) = lVar3 + uVar2 * 2;
      if (psVar4 != (short *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
                  (*(long **)(param_1 + 0x70),psVar4,lVar6 - (long)psVar4,2);
      }
    }
  } while( true );
}


