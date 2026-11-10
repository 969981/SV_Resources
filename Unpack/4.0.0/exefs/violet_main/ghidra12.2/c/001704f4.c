/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001704f4; name: FUN_001704f4
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001704f4(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_68;
  
  lVar6 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x20) = param_2;
  if (param_3 < param_2 || lVar6 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_68 = 0xffffffffffffffff;
    plVar9 = param_2;
  }
  else {
    local_68 = (**(code **)PTR_DAT_047cb878)("fastctmf_preload",0);
    plVar9 = *(long **)(param_1 + 0x20);
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar6 <= param_4) {
    param_4 = lVar6;
    plVar1 = param_2;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = param_4 >> 0x12;
  if (lVar6 < 3) {
    lVar6 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = (param_4 >> 1) / lVar6;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  do {
    lVar7 = lVar7 + -1;
    lVar8 = lVar6;
    if (lVar7 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0017067c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(local_68);
        return;
      }
      lVar8 = lVar6 >> 1;
      if (lVar6 < 2) {
        iVar5 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x47a,"set_base_and_preload",
                             "step >= 1");
        if (iVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar7 = 0;
        if (lVar8 != 0) {
          lVar7 = ((long)param_3 - (long)plVar1) / lVar8;
        }
      }
      else {
        lVar7 = 0;
        if (lVar8 != 0) {
          lVar7 = ((long)param_3 - (long)plVar1) / lVar8;
        }
        if (3 < lVar6) {
          if (lVar7 < 0) {
            lVar7 = lVar7 + 1;
          }
          lVar7 = lVar7 >> 1;
        }
      }
    }
    lVar6 = *plVar1;
    iVar5 = (int)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar8);
    *(int *)(lVar2 + ((ulong)(lVar6 * lVar3) >> ((ulong)uVar4 & 0x3f)) * 4) = iVar5 - (int)plVar9;
    lVar6 = lVar8;
  } while( true );
}


