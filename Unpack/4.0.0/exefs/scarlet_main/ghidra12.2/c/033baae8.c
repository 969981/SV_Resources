/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033baae8; name: FUN_033baae8
 */


undefined8 FUN_033baae8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  uVar7 = FUN_033bac28();
  iVar11 = (int)uVar7;
  if ((int)param_1[1] == iVar11) {
    iVar1 = iVar11 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar11) {
      FUN_033bad44(param_1,(long)iVar1);
      iVar11 = (int)param_1[1];
    }
    puVar12 = (undefined8 *)(*param_1 + (long)iVar11 * 0x18);
    *puVar12 = *param_2;
    puVar14 = puVar12 + 1;
    *puVar14 = 0;
    puVar13 = (uint *)(puVar12 + 2);
    puVar13[0] = 0;
    puVar13[1] = 0x80000000;
    uVar4 = *(uint *)(param_3 + 1);
    if ((int)uVar4 < 1) {
      *puVar14 = 0;
      *puVar13 = 0;
      *(uint *)((long)puVar12 + 0x14) = 0x80000000;
    }
    else {
      param_3 = (undefined8 *)*param_3;
      puVar8 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 * 0x18)
      ;
      uVar9 = 0;
      *puVar14 = puVar8;
      *puVar13 = uVar4;
      *(uint *)((long)puVar12 + 0x14) = uVar4;
      do {
        uVar3 = param_3[1];
        *puVar8 = *param_3;
        puVar8[1] = uVar3;
        uVar10 = param_3[2];
        param_3 = param_3 + 3;
        puVar8[2] = uVar10;
        if ((uVar10 & 1) != 0) {
          piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 3;
      } while (uVar9 != uVar4);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar7;
}


