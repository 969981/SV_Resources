/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081a8c8; name: FUN_0081a8c8
 */


undefined8 FUN_0081a8c8(long *param_1,long param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *local_98;
  ulong local_90 [5];
  int *local_68;
  ushort local_58 [2];
  ushort local_54 [2];
  
  uVar8 = FUN_0081981c(param_2,param_1 + 1);
  if (((uVar8 & 1) == 0) || ((short)param_1[1] < 0)) {
    return 0;
  }
  puVar1 = (ushort *)((long)param_1 + 10);
  uVar8 = FUN_0081981c(param_2,puVar1);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  local_90[3] = 0;
  local_90[4] = 0;
  local_68 = (int *)0x0;
                    /* try { // try from 0081a924 to 0081a933 has its CatchHandler @ 0081ac68 */
  uVar8 = FUN_008198f8(param_2,local_90 + 3,4);
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
    goto LAB_0081abec;
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0081a940 to 0081a94f has its CatchHandler @ 0081ac0c */
  uVar8 = FUN_008198f8(param_2,local_90,0xc);
  if ((uVar8 & 1) == 0) {
LAB_0081abd0:
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)((ulong)(local_90 + 3) | 1);
    if ((local_90[3] & 1) != 0) {
      piVar3 = local_68;
    }
    if (*piVar3 != 0x42a41221) {
      uVar8 = local_90[3] >> 1 & 0x7f;
      if ((local_90[3] & 1) != 0) {
        uVar8 = local_90[4];
      }
                    /* try { // try from 0081a990 to 0081a9a7 has its CatchHandler @ 0081ac08 */
      FUN_00273ff4(local_90,0,piVar3,uVar8);
    }
    FUN_001fcec0(param_1 + 2,local_90);
    puVar4 = PTR_LAB_047cba48;
    lVar13 = *(long *)(param_2 + 0x18);
    lVar12 = *(long *)(param_2 + 0x20);
    uVar14 = lVar12 - lVar13;
    uVar8 = (ulong)*puVar1;
    if (uVar14 != uVar8) goto LAB_0081abd0;
    puVar16 = (undefined8 *)param_1[5];
    puVar17 = (undefined8 *)param_1[6];
    if (puVar17 != puVar16) {
      if (puVar16 != puVar17) {
        do {
          puVar17 = puVar17 + -1;
          puVar15 = (undefined8 *)*puVar17;
          *puVar17 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15);
            FUN_0049e790(puVar4,puVar15);
          }
        } while (puVar16 != puVar17);
        lVar13 = *(long *)(param_2 + 0x18);
        lVar12 = *(long *)(param_2 + 0x20);
        uVar14 = lVar12 - lVar13;
        uVar8 = (ulong)*puVar1;
      }
      param_1[6] = (long)puVar16;
    }
    puVar5 = PTR_LAB_047cba48;
    puVar4 = PTR_FUN_047cba38;
    if (uVar14 - uVar8 < (ulong)(lVar12 - lVar13)) {
      puVar2 = PTR_DAT_047d1928 + 0x10;
      do {
                    /* try { // try from 0081aa98 to 0081aab3 has its CatchHandler @ 0081ac78 */
        uVar9 = FUN_0081981c(param_2,local_54);
        if (((uVar9 & 1) == 0) ||
           (uVar9 = FUN_0081981c(param_2,local_58), uVar7 = local_54[0], uVar6 = local_58[0],
           (uVar9 & 1) == 0)) goto LAB_0081abd0;
                    /* try { // try from 0081aac8 to 0081aae7 has its CatchHandler @ 0081ac64 */
        uVar10 = (**(code **)(*param_1 + 0x18))(param_1,local_54[0]);
        if ((int)uVar10 == 0) {
          if ((uVar7 >> 0xe & 1) != 0) {
            plVar11 = (long *)FUN_0049e770(puVar4,0x18);
            if (plVar11 != (long *)0x0) {
              *(ushort *)(plVar11 + 1) = uVar7;
              *(ushort *)((long)plVar11 + 10) = uVar6;
              *plVar11 = (long)puVar2;
              plVar11[2] = 0;
            }
            goto LAB_0081aaec;
          }
          local_98 = (long *)0x0;
LAB_0081ab4c:
          if ((local_58[0] & 3) != 0) {
            local_58[0] = (local_58[0] - (local_58[0] & 3)) + 4;
          }
                    /* try { // try from 0081ab68 to 0081ab6f has its CatchHandler @ 0081ac10 */
          uVar9 = FUN_00819960(param_2,local_58[0]);
          if ((uVar9 & 1) == 0) goto LAB_0081abd0;
          local_98 = (long *)0x0;
        }
        else {
          plVar11 = (long *)FUN_0081ada4(uVar10,uVar7,uVar6,param_1);
LAB_0081aaec:
          local_98 = plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0081ab4c;
                    /* try { // try from 0081aafc to 0081ab17 has its CatchHandler @ 0081ac10 */
          uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2);
          if ((uVar9 & 1) == 0) {
            local_98 = (long *)0x0;
            (**(code **)*plVar11)(plVar11);
            FUN_0049e790(PTR_LAB_047cba48,plVar11);
            goto LAB_0081abd0;
          }
          FUN_00819ed4(param_1 + 5,&local_98);
          plVar11 = local_98;
          local_98 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            (**(code **)*plVar11)(plVar11);
            FUN_0049e790(puVar5,plVar11);
          }
        }
      } while (uVar14 - uVar8 < (ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18)));
    }
    uVar10 = 1;
  }
  if ((local_90[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90[2]);
  }
LAB_0081abec:
  if ((local_90[3] & 1) == 0) {
    return uVar10;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_68);
  return uVar10;
}


