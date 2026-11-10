/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fe864; name: FUN_030fe864
 */


void FUN_030fe864(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong local_48;
  
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar13 * 2;
  if (uVar9 <= param_3) {
    uVar9 = param_3;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x60,&local_48);
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    plVar14 = (long *)*param_1;
    plVar10 = plVar6;
    plVar7 = plVar14;
    iVar8 = iVar2;
    do {
      *plVar10 = *plVar7;
      lVar11 = plVar7[5];
      *plVar7 = 0;
      plVar10[3] = plVar7[3];
      plVar10[5] = lVar11;
      lVar11 = plVar7[2];
      plVar10[4] = plVar7[4];
      plVar10[2] = lVar11;
      plVar10[7] = plVar7[7];
      plVar10[6] = plVar7[6];
      plVar10[9] = plVar7[9];
      plVar10[8] = plVar7[8];
      uVar3 = *(undefined1 *)((long)plVar7 + 0x52);
      iVar8 = iVar8 + -1;
      *(short *)(plVar10 + 10) = (short)plVar7[10];
      *(undefined1 *)((long)plVar10 + 0x52) = uVar3;
      plVar7 = plVar7 + 0xc;
      plVar10 = plVar10 + 0xc;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      plVar7 = (long *)*plVar14;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar10 = plVar7 + 2;
        do {
          lVar11 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      iVar8 = iVar8 + 1;
      plVar14 = plVar14 + 0xc;
    } while (iVar8 != iVar2);
  }
  uVar1 = uVar9 * 0x60 + 0x60;
  uVar12 = uVar9;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x60;
    uVar12 = uVar9 + 1;
    if (uVar1 <= local_48) {
      uVar12 = uVar12 + (local_48 + uVar9 * -0x60) / 0x60;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar13 * 0x60);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = plVar6;
  return;
}


