/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c9000; name: FUN_004c9000
 */


undefined1  [16]
FUN_004c9000(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *local_38 [3];
  
  puVar8 = (ulong *)(param_1 + 1);
  puVar9 = (ulong *)*puVar8;
  if (puVar9 == (ulong *)0x0) {
    puVar10 = puVar8;
LAB_004c90e8:
    uVar4 = *puVar8;
  }
  else {
    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    puVar10 = puVar9;
    if (piVar1 != piVar2) {
      do {
        piVar6 = (int *)puVar10[4];
        piVar3 = piVar1;
        for (piVar7 = piVar6; piVar7 != (int *)puVar10[5]; piVar7 = piVar7 + 1) {
          if (piVar2 == piVar3) {
LAB_004c90b4:
            puVar9 = (ulong *)*puVar10;
            puVar8 = puVar10;
            if (puVar9 == (ulong *)0x0) goto LAB_004c9108;
            goto LAB_004c90c0;
          }
          if (*piVar3 < *piVar7) goto LAB_004c90b4;
          if (*piVar7 < *piVar3) break;
          piVar3 = piVar3 + 1;
        }
        piVar7 = piVar1;
        while ((int *)puVar10[5] != piVar6) {
          if (*piVar6 < *piVar7) break;
          if (*piVar7 < *piVar6) goto LAB_004c90e8;
          piVar7 = piVar7 + 1;
          piVar6 = piVar6 + 1;
          if (piVar2 == piVar7) goto LAB_004c90e8;
        }
        puVar8 = puVar10 + 1;
        puVar9 = (ulong *)*puVar8;
        if (puVar9 == (ulong *)0x0) goto LAB_004c90e8;
LAB_004c90c0:
        puVar10 = puVar9;
      } while( true );
    }
    do {
      puVar10 = puVar9;
      if (puVar10[4] == puVar10[5]) goto LAB_004c90e8;
      puVar8 = puVar10;
      puVar9 = (ulong *)*puVar10;
    } while ((ulong *)*puVar10 != (ulong *)0x0);
LAB_004c9108:
    uVar4 = *puVar10;
    puVar8 = puVar10;
  }
  if (uVar4 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar4;
    return auVar11;
  }
  FUN_004c917c(local_38,param_1,param_3,param_4,param_5);
  *local_38[0] = 0;
  local_38[0][1] = 0;
  local_38[0][2] = puVar10;
  *puVar8 = (ulong)local_38[0];
  puVar5 = local_38[0];
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*puVar8;
  }
  FUN_010108e0(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  auVar12._8_8_ = 1;
  auVar12._0_8_ = local_38[0];
  return auVar12;
}


