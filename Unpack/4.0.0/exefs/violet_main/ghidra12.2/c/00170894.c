/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00170894; name: FUN_00170894
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00170894(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_68;
  
  lVar7 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x20) = param_2;
  if (param_3 < param_2 || lVar7 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_68 = 0xffffffffffffffff;
    plVar10 = param_2;
  }
  else {
    local_68 = (**(code **)PTR_DAT_047cb878)("fastctmf_preload",0);
    plVar10 = *(long **)(param_1 + 0x20);
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar7 <= param_4) {
    param_4 = lVar7;
    plVar1 = param_2;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar7 = param_4 >> 0x12;
  if (lVar7 < 3) {
    lVar7 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = (param_4 >> 1) / lVar7;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  do {
    lVar8 = lVar8 + -1;
    lVar9 = lVar7;
    if (lVar8 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00170a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(local_68);
        return;
      }
      lVar9 = lVar7 >> 1;
      if (lVar7 < 2) {
        iVar6 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x47a,"set_base_and_preload",
                             "step >= 1");
        if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar9;
        }
      }
      else {
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar9;
        }
        if (3 < lVar7) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          lVar8 = lVar8 >> 1;
        }
      }
    }
    lVar7 = *plVar1;
    sVar5 = (short)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar9);
    *(short *)(lVar2 + ((ulong)(lVar7 * lVar3) >> ((ulong)uVar4 & 0x3f)) * 2) =
         sVar5 - (short)plVar10;
    lVar7 = lVar9;
  } while( true );
}


