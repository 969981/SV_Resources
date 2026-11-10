/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304038c; name: FUN_0304038c
 */


void FUN_0304038c(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 3);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    plVar9 = (long *)*param_1;
    plVar5 = plVar4;
    plVar6 = plVar9;
    if (uVar1 != 1) {
      iVar8 = -(uVar1 & 0xfffffffe);
      do {
        *plVar5 = *plVar6;
        *plVar6 = 0;
        plVar5[1] = plVar6[1];
        plVar6[1] = 0;
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 2;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar1 & 1) != 0) {
      *plVar5 = *plVar6;
      *plVar6 = 0;
    }
    uVar10 = 0;
    do {
      plVar5 = (long *)*plVar9;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar7 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      uVar10 = uVar10 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar10 != uVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = (long)plVar4;
  return;
}


