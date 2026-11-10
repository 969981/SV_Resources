/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4d320; name: FUN_00a4d320
 */


void FUN_00a4d320(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == 2) {
    plVar4 = (long *)(param_1 + 0x6140);
    lVar5 = param_1 + 0x6178;
    *(undefined8 *)(param_1 + 0x6180) = *(undefined8 *)(param_1 + 0x6178);
    lVar2 = 0x6148;
  }
  else if (param_2 == 1) {
    plVar4 = (long *)(param_1 + 0x60d0);
    lVar5 = param_1 + 0x6108;
    *(undefined8 *)(param_1 + 0x6110) = *(undefined8 *)(param_1 + 0x6108);
    lVar2 = 0x60d8;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    plVar4 = (long *)(param_1 + 0x6060);
    lVar5 = param_1 + 0x6098;
    *(undefined8 *)(param_1 + 0x60a0) = *(undefined8 *)(param_1 + 0x6098);
    lVar2 = 0x6068;
  }
  uVar3 = (*(long *)(param_1 + lVar2) - *plVar4 >> 3) * -0x5555555555555555;
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      if ((ulong)((plVar4[1] - *plVar4 >> 3) * -0x5555555555555555) <= uVar6) goto LAB_00a4d480;
      uVar1 = FUN_00a65174(*plVar4 + uVar6 * 0x18,param_2,0);
      if ((uVar1 & 1) == 0) {
        if ((ulong)((plVar4[1] - *plVar4 >> 3) * -0x5555555555555555) <= uVar6) goto LAB_00a4d480;
        uVar1 = FUN_00a65174(*plVar4 + uVar6 * 0x18,param_2,1);
        if ((uVar1 & 1) != 0) goto LAB_00a4d438;
      }
      else {
LAB_00a4d438:
        if ((ulong)((plVar4[1] - *plVar4 >> 3) * -0x5555555555555555) <= uVar6) {
LAB_00a4d480:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_00a4cf28(lVar5,*plVar4 + uVar6 * 0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uVar3 & 0xffffffff));
  }
  return;
}


