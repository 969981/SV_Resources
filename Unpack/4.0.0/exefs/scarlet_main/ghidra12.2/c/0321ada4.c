/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321ada4; name: FUN_0321ada4
 */


void FUN_0321ada4(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong local_48;
  
  uVar15 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar11 = uVar15 * 2;
  if (uVar11 <= param_3) {
    uVar11 = param_3;
  }
  if (0x7ffffffe < uVar11) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar11 = 0x7ffffffe;
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x20,&local_48);
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    puVar16 = (undefined8 *)*param_1;
    puVar12 = puVar8;
    puVar13 = puVar16;
    iVar10 = iVar4;
    do {
      *puVar12 = *puVar13;
      puVar12[1] = puVar13[1];
      puVar12[2] = puVar13[2];
      puVar1 = puVar13 + 3;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      iVar10 = iVar10 + -1;
      puVar13 = puVar13 + 4;
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)puVar1;
      puVar12 = puVar12 + 4;
    } while (iVar10 != 0);
    iVar10 = 0;
    do {
      if ((puVar16[2] & 1) != 0) {
        plVar9 = (long *)(puVar16[2] & 0xfffffffffffffffe);
        plVar2 = plVar9 + 1;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar16 = puVar16 + 4;
    } while (iVar10 != iVar4);
  }
  uVar3 = uVar11 * 0x20 + 0x20;
  uVar14 = uVar11;
  if (uVar3 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar14 = uVar11 + 1 + (local_48 + uVar11 * -0x20 >> 5);
    if (local_48 < uVar3) {
      uVar14 = uVar11 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar15 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)puVar8;
  return;
}


