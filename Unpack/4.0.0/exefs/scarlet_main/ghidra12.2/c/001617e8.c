/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001617e8; name: FUN_001617e8
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_001617e8(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar5 = *param_1;
    if ((lVar5 == 0) || ((param_1[2] + 0xfU & 0xfffffffffffffff0) + lVar4 != *(long *)(lVar5 + 8)))
    {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(lVar5 + 8) = lVar4;
    }
    param_1[1] = 0;
  }
  *param_1 = (long)param_3;
  param_1[2] = param_2;
  if (param_3 == (long *)0x0) {
LAB_00161880:
    lVar4 = (**(code **)PTR_PTR_047cb890)(param_2,0x10);
    if (lVar4 != 0) {
      param_1[1] = lVar4;
      return lVar4;
    }
    FUN_0015ed40(param_2);
  }
  else {
    lVar4 = param_3[1];
    param_2 = param_2 + 0xf & 0xfffffffffffffff0;
    uVar1 = lVar4 + param_2;
    if (uVar1 <= (ulong)(param_3[3] + *param_3)) {
      param_3[1] = uVar1;
      uVar2 = param_3[2];
      if ((ulong)param_3[2] <= uVar1) {
        uVar2 = uVar1;
      }
      param_3[2] = uVar2;
      param_1[1] = lVar4;
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_001618e8;
    }
    if ((int)param_3[4] != 0) goto LAB_00161880;
  }
  param_1[1] = 0;
LAB_001618e8:
  iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/rrarenaallocator.h",0x118,"Alloc",
                       "m_ptr != NULL");
  if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1[1];
}


