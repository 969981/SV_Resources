/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a3440; name: FUN_001a3440
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001a3440(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (long)param_3 - (long)param_2;
  param_1[6] = (long)param_2;
  if (lVar5 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar5 < 1) &&
     (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x32a,"set_base_and_preload",
                           "preload_len > 0"), iVar3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar5 <= param_4) {
    param_4 = lVar5;
    plVar1 = param_2;
  }
  lVar5 = param_4 >> 0x12;
  if (lVar5 < 3) {
    lVar5 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = (param_4 >> 1) / lVar5;
  }
  do {
    lVar6 = lVar6 + -1;
    lVar7 = lVar5;
    if (lVar6 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001a35fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(uVar4);
        return;
      }
      lVar7 = lVar5 >> 1;
      if (lVar5 < 2) {
        iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x33b,"set_base_and_preload",
                             "step >= 1");
        if (iVar3 != 0) {
          halt_baddata();
        }
        lVar6 = 0;
        if (lVar7 != 0) {
          lVar6 = ((long)param_3 - (long)plVar1) / lVar7;
        }
      }
      else {
        lVar6 = 0;
        if (lVar7 != 0) {
          lVar6 = ((long)param_3 - (long)plVar1) / lVar7;
        }
        if (3 < lVar5) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          lVar6 = lVar6 >> 1;
        }
      }
    }
    lVar5 = *plVar1;
    sVar2 = (short)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar7);
    *(short *)(*param_1 +
              ((ulong)(lVar5 * -0x485a9b9d00000000) >>
              ((ulong)(uint)-*(int *)((long)param_1 + 0x4c) & 0x3f)) * 2) =
         sVar2 - (short)param_1[6];
    lVar5 = lVar7;
  } while( true );
}


