/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dc2cc; name: FUN_034dc2cc
 */


undefined8 FUN_034dc2cc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  
  puVar4 = PTR_DAT_047e2fd0;
  piVar7 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (*piVar7 == param_2)) {
    piVar6 = piVar7;
  }
  else {
    lVar8 = (ulong)uVar3 * 0x10;
    piVar9 = piVar7;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_034dc310;
      piVar6 = piVar9 + 4;
      piVar1 = piVar9 + 4;
      piVar9 = piVar6;
    } while (*piVar1 != param_2);
  }
  if (piVar6 == piVar7 + (ulong)uVar3 * 4) {
LAB_034dc310:
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      return 2;
    }
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0x2ca33bdb00000000;
    puVar5[1] = 0;
    piVar6 = (int *)*param_1;
    uVar3 = *(uint *)(param_1 + 1);
    piVar7 = piVar6;
    if ((uVar3 != 0) && (*piVar6 != param_2)) {
      lVar8 = (ulong)uVar3 * 0x10;
      piVar9 = piVar6;
      do {
        lVar8 = lVar8 + -0x10;
        if (lVar8 == 0) goto LAB_034dc3c8;
        piVar7 = piVar9 + 4;
        piVar1 = piVar9 + 4;
        piVar9 = piVar7;
      } while (*piVar1 != param_2);
    }
    if (piVar7 == piVar6 + (ulong)uVar3 * 4) {
LAB_034dc3c8:
      uVar10 = *(uint *)((long)param_1 + 0xc);
      if (uVar10 <= uVar3) {
        iVar2 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar2 = 1;
        }
        uVar10 = iVar2 + uVar10;
        piVar6 = (int *)(**(code **)(puVar4 + 0x20))(0,piVar6,(ulong)uVar10 << 4);
        if (piVar6 == (int *)0x0) goto LAB_034dc444;
        *param_1 = piVar6;
        *(uint *)((long)param_1 + 0xc) = uVar10;
      }
      if (uVar10 <= uVar3) {
LAB_034dc444:
        if (puVar5[2] != 0) {
          *(undefined4 *)(puVar5 + 3) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          puVar5[2] = 0;
          *(undefined4 *)((long)puVar5 + 0x1c) = 0;
        }
        puVar5[1] = 0;
        (**(code **)(puVar4 + 0x30))(2,puVar5);
        return 2;
      }
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      if (piVar6 == (int *)0x0) goto LAB_034dc444;
      piVar7 = piVar6 + (ulong)uVar3 * 4;
      *piVar7 = param_2;
    }
    *(undefined8 **)(piVar7 + 2) = puVar5;
  }
  return 1;
}


