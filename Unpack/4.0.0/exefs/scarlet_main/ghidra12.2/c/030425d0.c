/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030425d0; name: FUN_030425d0
 */


void FUN_030425d0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar7 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar8 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0xc0);
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    puVar14 = (undefined8 *)*param_1;
    iVar10 = 0;
    puVar11 = puVar8;
    puVar13 = puVar14;
    do {
      uVar2 = *(undefined4 *)(puVar13 + 1);
      uVar3 = *(undefined4 *)((long)puVar13 + 0xc);
      *puVar11 = *puVar13;
      *(undefined4 *)(puVar11 + 1) = uVar2;
      *(undefined4 *)((long)puVar11 + 0xc) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 3);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x1c);
      puVar11[2] = puVar13[2];
      *(undefined4 *)(puVar11 + 3) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x1c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 5);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x2c);
      puVar11[4] = puVar13[4];
      *(undefined4 *)(puVar11 + 5) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x2c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 7);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x3c);
      puVar11[6] = puVar13[6];
      *(undefined4 *)(puVar11 + 7) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x3c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 9);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x4c);
      puVar11[8] = puVar13[8];
      *(undefined4 *)(puVar11 + 9) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x4c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0xb);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x5c);
      puVar11[10] = puVar13[10];
      *(undefined4 *)(puVar11 + 0xb) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x5c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0xd);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x6c);
      puVar11[0xc] = puVar13[0xc];
      *(undefined4 *)(puVar11 + 0xd) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x6c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0xf);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x7c);
      puVar11[0xe] = puVar13[0xe];
      *(undefined4 *)(puVar11 + 0xf) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x7c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0x11);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x8c);
      puVar11[0x10] = puVar13[0x10];
      *(undefined4 *)(puVar11 + 0x11) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x8c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0x13);
      uVar3 = *(undefined4 *)((long)puVar13 + 0x9c);
      puVar11[0x12] = puVar13[0x12];
      *(undefined4 *)(puVar11 + 0x13) = uVar2;
      *(undefined4 *)((long)puVar11 + 0x9c) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0x15);
      uVar3 = *(undefined4 *)((long)puVar13 + 0xac);
      puVar11[0x14] = puVar13[0x14];
      *(undefined4 *)(puVar11 + 0x15) = uVar2;
      *(undefined4 *)((long)puVar11 + 0xac) = uVar3;
      uVar2 = *(undefined4 *)(puVar13 + 0x17);
      uVar3 = *(undefined4 *)((long)puVar13 + 0xbc);
      puVar11[0x16] = puVar13[0x16];
      *(undefined4 *)(puVar11 + 0x17) = uVar2;
      *(undefined4 *)((long)puVar11 + 0xbc) = uVar3;
      if ((puVar13[0xf] != 0) && (*(long *)(puVar11[0xf] + 8) != 0)) {
        plVar9 = (long *)(puVar11[0xf] + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 0x18;
      puVar13 = puVar13 + 0x18;
    } while (iVar10 != iVar4);
    iVar10 = 0;
    do {
      plVar9 = (long *)puVar14[0xf];
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar12 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar14 = puVar14 + 0x18;
    } while (iVar10 != iVar4);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = (long)puVar8;
  return;
}


