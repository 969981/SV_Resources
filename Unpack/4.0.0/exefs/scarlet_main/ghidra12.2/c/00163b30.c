/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163b30; name: FUN_00163b30
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00163b30(long *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_3 != 0) {
    if ((param_1[2] == 0) &&
       (iVar4 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x47a,
                             "LRM_CascadeGetSetByChunkIndex","! casc->lrms[0].empty()"), iVar4 != 0)
       ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar3 = PTR_PTR_047cb898;
    uVar8 = 1;
    plVar9 = param_1;
    do {
      uVar2 = param_3;
      param_3 = (int)uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)(*plVar9 + (long)(int)(uVar2 - 1) * 8);
        if ((ulong)param_2[1] < param_2[2] + 1U) {
          lVar5 = FUN_00164720(param_2);
          *(undefined8 *)(*param_2 + param_2[2] * 8) = uVar7;
          param_2[2] = param_2[2] + 1;
          if (lVar5 != 0) {
            (**(code **)puVar3)();
          }
        }
        else {
          *(undefined8 *)(*param_2 + param_2[2] * 8) = uVar7;
          param_2[2] = param_2[2] + 1;
        }
      }
      if (7 < uVar8) break;
      plVar9 = plVar9 + 3;
      uVar8 = uVar8 + 1;
    } while (param_3 != 0);
    if ((param_3 != 0) && (-1 < (int)((uVar2 & 0xfffffffe) - 3))) {
      lVar5 = (long)(int)((uVar2 & 0xfffffffe) - 4 | 1);
      do {
        while( true ) {
          uVar7 = *(undefined8 *)(param_1[0x15] + lVar5 * 8);
          if ((ulong)param_2[1] < param_2[2] + 1U) break;
          *(undefined8 *)(*param_2 + param_2[2] * 8) = uVar7;
          param_2[2] = param_2[2] + 1;
LAB_00163c54:
          bVar1 = lVar5 < 1;
          lVar5 = lVar5 + -1;
          if (bVar1) {
            return;
          }
        }
        lVar6 = FUN_00164720(param_2);
        *(undefined8 *)(*param_2 + param_2[2] * 8) = uVar7;
        param_2[2] = param_2[2] + 1;
        if (lVar6 == 0) goto LAB_00163c54;
        (**(code **)puVar3)();
        bVar1 = 0 < lVar5;
        lVar5 = lVar5 + -1;
      } while (bVar1);
    }
  }
  return;
}


