/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351bc4c; name: FUN_0351bc4c
 */


void FUN_0351bc4c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0351bc4c(*(long *)(param_1 + 0x98),param_2);
  }
  puVar3 = PTR_DAT_047e2fd0;
  plVar8 = *(long **)(param_1 + 0x128);
  if ((plVar8 != (long *)0x0) && ((int)plVar8[1] != 0)) {
    piVar9 = (int *)*plVar8;
    do {
      piVar4 = (int *)*param_2;
      uVar11 = (ulong)*(uint *)(param_2 + 1);
      uVar10 = 0;
      if (*(uint *)(param_2 + 1) != 0) {
        piVar6 = piVar4 + uVar11 * 6;
        piVar5 = piVar4;
        do {
          uVar10 = (uint)uVar11;
          if (*piVar5 == *piVar9) {
            if (1 < uVar10) {
              uVar2 = *(undefined8 *)(piVar6 + -6);
              uVar7 = *(undefined8 *)(piVar6 + -2);
              *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar6 + -4);
              *(undefined8 *)(piVar5 + 4) = uVar7;
              *(undefined8 *)piVar5 = uVar2;
              uVar10 = *(uint *)(param_2 + 1);
              piVar4 = (int *)*param_2;
            }
            uVar11 = (ulong)(uVar10 - 1);
            *(uint *)(param_2 + 1) = uVar10 - 1;
          }
          else {
            piVar5 = piVar5 + 6;
          }
          uVar10 = (uint)uVar11;
          piVar6 = piVar4 + uVar11 * 6;
        } while (piVar6 != piVar5);
      }
      uVar12 = *(uint *)((long)param_2 + 0xc);
      if (uVar10 < uVar12) {
LAB_0351bd38:
        if (uVar10 < uVar12) {
          uVar10 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar10 + 1;
          if (piVar4 != (int *)0x0) {
            piVar4 = piVar4 + (ulong)uVar10 * 6;
            uVar2 = *(undefined8 *)piVar9;
            uVar7 = *(undefined8 *)(piVar9 + 4);
            *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar9 + 2);
            *(undefined8 *)(piVar4 + 4) = uVar7;
            *(undefined8 *)piVar4 = uVar2;
          }
        }
      }
      else {
        iVar1 = uVar12 + (uVar12 >> 1);
        if (uVar12 == 0) {
          iVar1 = 1;
        }
        uVar12 = iVar1 + uVar12;
        piVar4 = (int *)(**(code **)(puVar3 + 0x20))(2,piVar4,(ulong)uVar12 * 0x18);
        if (piVar4 != (int *)0x0) {
          *param_2 = piVar4;
          *(uint *)((long)param_2 + 0xc) = uVar12;
          goto LAB_0351bd38;
        }
      }
      piVar9 = piVar9 + 6;
    } while (piVar9 != (int *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x18));
  }
  return;
}


