/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324e634; name: FUN_0324e634
 */


void FUN_0324e634(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong local_48;
  
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar7 = uVar12 * 2;
  if (uVar7 <= param_3) {
    uVar7 = param_3;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    plVar13 = (long *)*param_1;
    plVar6 = plVar5;
    plVar8 = plVar13;
    if (uVar2 != 1) {
      iVar10 = -(uVar2 & 0xfffffffe);
      do {
        *plVar6 = *plVar8;
        *plVar8 = 0;
        *(short *)(plVar6 + 1) = (short)plVar8[1];
        plVar6[2] = plVar8[2];
        plVar8[2] = 0;
        *(short *)(plVar6 + 3) = (short)plVar8[3];
        plVar6 = plVar6 + 4;
        plVar8 = plVar8 + 4;
        iVar10 = iVar10 + 2;
      } while (iVar10 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *plVar6 = *plVar8;
      *plVar8 = 0;
      *(short *)(plVar6 + 1) = (short)plVar8[1];
    }
    uVar14 = 0;
    do {
      plVar6 = (long *)*plVar13;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar8 = plVar6 + 2;
        do {
          lVar9 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar14 = uVar14 + 1;
      plVar13 = plVar13 + 2;
    } while (uVar14 != uVar2);
  }
  uVar1 = uVar7 * 0x10 + 0x10;
  uVar11 = uVar7;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar11 = uVar7 + 1 + (local_48 + uVar7 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar11 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar12 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = plVar5;
  return;
}


