/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f30120; name: FUN_02f30120
 */


void FUN_02f30120(long param_1,byte param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  
  puVar12 = *(undefined4 **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
  uVar3 = *puVar12;
  uVar4 = *puVar12;
  *(undefined4 **)(param_1 + 0x740) = puVar12;
  *(short *)(param_1 + 0x748) = (short)((uint)uVar3 >> 0x10);
  *(short *)(param_1 + 0x74a) = (short)uVar4;
  *(int *)(param_1 + 0x74c) = -*(int *)(param_1 + 0x538);
  piVar1 = (int *)(*(long *)(param_3 + 0x40) + (ulong)param_2 * 8);
  FUN_02f2ec1c(param_1,param_3,*piVar1 + 1,piVar1[1] + -1,*(undefined8 *)(param_1 + 0x30),param_4);
  iVar8 = *(int *)(param_1 + 0x74c) + *(int *)(param_1 + 0x538);
  if (iVar8 == 0) {
    *(undefined4 *)(param_1 + 0x74c) = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x740);
    if ((puVar14 !=
         *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8)) &&
       ((uint)*(ushort *)(param_1 + 0x74a) == (*puVar14 & 0xffff))) {
      puVar14 = *(uint **)(puVar14 + 2);
      *(undefined4 *)(param_1 + 0x748) = 0;
    }
    uVar9 = *puVar14;
    *(int *)(param_1 + 0x74c) = iVar8;
    lVar16 = *(long *)(param_1 + 0x730);
    *(uint **)(param_1 + 0x740) = puVar14;
    *(short *)(param_1 + 0x74a) = (short)uVar9 - *(short *)(param_1 + 0x74a);
    puVar7 = PTR_PTR_047d1a50;
    uVar15 = (ulong)((uint)param_2 +
                    (((uint)param_2 * 0x10000 + 0x10000 >> 0x10) * (uint)param_2 >> 1));
    puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x10) + uVar15 * 8);
    if (*(int *)((long)puVar17 + 0xc) == 0) {
      puVar17[1] = *(undefined8 *)(param_1 + 0x748);
      uVar13 = *(undefined8 *)(param_1 + 0x740);
      puVar17[2] = *(undefined8 *)(param_1 + 0x750);
      *puVar17 = uVar13;
    }
    else {
      puVar14 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
      puVar19 = *(undefined8 **)(param_1 + 0x4e0);
      uVar9 = *puVar14;
      if (0x1e < uVar9 >> 0x17) {
        puVar18 = puVar14;
        do {
          uVar9 = *(int *)(puVar19 + 0xb) - 1;
          if (*(int *)(puVar19 + 0xb) < 1) {
            lVar11 = puVar19[1];
            (**(code **)(*(long *)*puVar19 + 0x20))((long *)*puVar19,lVar11,6);
            puVar10 = (undefined8 *)(lVar11 + 0x28);
            *(undefined4 *)(puVar19 + 0xb) = 5;
          }
          else {
            *(uint *)(puVar19 + 0xb) = uVar9;
            puVar10 = (undefined8 *)(puVar19[1] + (ulong)uVar9 * 8);
          }
          puVar14 = (uint *)*puVar10;
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[0] = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[1] = *(uint *)(param_1 + 0x548);
          iVar8 = *(int *)(param_1 + 0x548);
          lVar11 = (long)iVar8;
          if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar8) {
            FUN_031c25b4(param_1 + 0x540,puVar7,lVar11 + 1);
            iVar8 = *(int *)(param_1 + 0x548);
          }
          *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar8 * 8) = puVar14;
          *(int *)(param_1 + 0x548) = (int)(lVar11 + 1);
          *(uint **)(puVar18 + 2) = puVar14;
          uVar9 = *puVar14;
          puVar18 = puVar14;
        } while (0x1e < uVar9 >> 0x17);
      }
      uVar9 = uVar9 >> 0x10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar6) {
          *puVar14 = *puVar14 + 0x200001;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
      uVar13 = *(undefined8 *)(param_1 + 0x748);
      uVar2 = *(undefined8 *)(param_1 + 0x750);
      puVar19 = (undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x20);
      *puVar19 = *(undefined8 *)(param_1 + 0x740);
      *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x28) = uVar13;
      *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30) = uVar2;
      if (*(int *)((long)puVar17 + 0xc) == 0) {
        puVar17[1] = *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x28);
        uVar13 = *puVar19;
        puVar17[2] = *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30);
        *puVar17 = uVar13;
      }
      else {
        *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30) = puVar17[2];
        puVar17[2] = puVar19;
      }
      *(undefined8 **)(*(long *)(lVar16 + 0x10) + uVar15 * 8) = puVar19;
    }
  }
  puVar12 = *(undefined4 **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
  uVar3 = *puVar12;
  uVar4 = *puVar12;
  *(undefined4 **)(param_1 + 0x740) = puVar12;
  *(short *)(param_1 + 0x748) = (short)((uint)uVar3 >> 0x10);
  *(short *)(param_1 + 0x74a) = (short)uVar4;
  *(int *)(param_1 + 0x74c) = -*(int *)(param_1 + 0x538);
  return;
}


