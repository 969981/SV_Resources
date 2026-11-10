/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a3a88; name: FUN_001a3a88
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001a3a88(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_68;
  
  lVar3 = (long)param_3 - (long)param_2;
  param_1[6] = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_68 = 0xffffffffffffffff;
  }
  else {
    local_68 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar3 < 1) &&
     (iVar2 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x32a,"set_base_and_preload",
                           "preload_len > 0"), iVar2 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar3 <= param_4) {
    param_4 = lVar3;
    plVar1 = param_2;
  }
  lVar3 = param_4 >> 0x12;
  if (lVar3 < 3) {
    lVar3 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = (param_4 >> 1) / lVar3;
  }
  do {
    lVar4 = lVar4 + -1;
    lVar6 = lVar3;
    if (lVar4 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001a3c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(local_68);
        return;
      }
      lVar6 = lVar3 >> 1;
      if (lVar3 < 2) {
        iVar2 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0x33b,"set_base_and_preload",
                             "step >= 1");
        if (iVar2 != 0) {
          halt_baddata();
        }
        lVar4 = 0;
        if (lVar6 != 0) {
          lVar4 = ((long)param_3 - (long)plVar1) / lVar6;
        }
      }
      else {
        lVar4 = 0;
        if (lVar6 != 0) {
          lVar4 = ((long)param_3 - (long)plVar1) / lVar6;
        }
        if (3 < lVar3) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          lVar4 = lVar4 >> 1;
        }
      }
    }
    iVar2 = (int)plVar1;
    *(int *)(*param_1 +
            ((ulong)(*plVar1 * -0x485a9b9d00000000) >>
            ((ulong)(uint)-*(int *)((long)param_1 + 0x4c) & 0x3f)) * 4) = iVar2 - (int)param_1[6];
    lVar3 = *plVar1;
    plVar1 = (long *)((long)plVar1 + lVar6);
    uVar5 = (uint)((ulong)(lVar3 * -0x30e44323485a9b9d) >> 0x20);
    *(uint *)(param_1[4] + (ulong)(uVar5 >> (ulong)(-(int)param_1[10] & 0x1f)) * 4) =
         uVar5 & 0x3f | (iVar2 - (int)param_1[6]) * 0x40;
    lVar3 = lVar6;
  } while( true );
}


