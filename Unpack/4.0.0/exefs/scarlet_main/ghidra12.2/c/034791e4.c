/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034791e4; name: FUN_034791e4
 */


undefined8 FUN_034791e4(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  
  puVar6 = PTR_DAT_047e2fd0;
  if (*param_1 == 1) {
    lVar9 = *(long *)(param_1 + 2);
    uVar5 = *(ushort *)(lVar9 + 6);
    if ((ulong)uVar5 != 0) {
      uVar12 = 0;
      do {
        piVar13 = (int *)(lVar9 + uVar12 * 0xc);
        iVar4 = *piVar13;
        piVar8 = (int *)*param_2;
        uVar3 = *(uint *)(param_2 + 1);
        piVar10 = piVar8;
        if ((uVar3 != 0) && (*piVar8 != iVar4)) {
          lVar9 = (ulong)uVar3 * 8;
          piVar11 = piVar8;
          do {
            lVar9 = lVar9 + -8;
            if (lVar9 == 0) goto LAB_0347929c;
            piVar10 = piVar11 + 2;
            piVar1 = piVar11 + 2;
            piVar11 = piVar10;
          } while (*piVar1 != iVar4);
        }
        if (piVar10 == piVar8 + (ulong)uVar3 * 2) {
LAB_0347929c:
          uVar14 = *(uint *)((long)param_2 + 0xc);
          if (uVar3 < uVar14) {
LAB_034792d8:
            if (uVar3 < uVar14) {
              uVar3 = *(uint *)(param_2 + 1);
              *(uint *)(param_2 + 1) = uVar3 + 1;
              if (piVar8 != (int *)0x0) {
                piVar10 = piVar8 + (ulong)uVar3 * 2;
                *piVar10 = iVar4;
                goto LAB_03479290;
              }
            }
          }
          else {
            iVar2 = uVar14 + (uVar14 >> 1);
            if (uVar14 == 0) {
              iVar2 = 1;
            }
            uVar14 = iVar2 + uVar14;
            piVar8 = (int *)(**(code **)(puVar6 + 0x20))(0,piVar8,(ulong)uVar14 << 3);
            if (piVar8 != (int *)0x0) {
              *param_2 = piVar8;
              *(uint *)((long)param_2 + 0xc) = uVar14;
              goto LAB_034792d8;
            }
          }
        }
        else {
LAB_03479290:
          piVar10[1] = piVar13[1];
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar5) break;
        lVar9 = *(long *)(param_1 + 2);
      } while( true );
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


