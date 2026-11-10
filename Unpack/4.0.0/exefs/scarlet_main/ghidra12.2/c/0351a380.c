/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351a380; name: FUN_0351a380
 */


undefined8 FUN_0351a380(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  
  puVar3 = PTR_DAT_047e2fd0;
  puVar1 = PTR_DAT_047e74e8 + 0x10;
  do {
    piVar8 = (int *)*param_2;
    *param_2 = (long)(piVar8 + 8);
    if (*piVar8 == 0) {
      plVar5 = (long *)(**(code **)(puVar3 + 0x10))(2,0x40);
      if (plVar5 == (long *)0x0) {
        return 2;
      }
      plVar5[1] = param_1;
      plVar5[2] = 0x100000000;
      *(undefined2 *)(plVar5 + 3) = 0;
      *(undefined4 *)((long)plVar5 + 0x1c) = 50000;
      *(undefined8 *)((long)plVar5 + 0x2d) = 0;
      *(undefined2 *)(plVar5 + 7) = 0;
      *plVar5 = (long)puVar1;
      *(undefined2 *)((long)plVar5 + 0x35) = 1;
      plVar5[4] = 0;
      plVar5[5] = 0;
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x2c);
      if (uVar7 <= uVar2) {
        iVar4 = uVar7 + (uVar7 >> 1);
        if (uVar7 == 0) {
          iVar4 = 1;
        }
        uVar7 = iVar4 + uVar7;
        lVar6 = (**(code **)(puVar3 + 0x20))(0,*(undefined8 *)(param_1 + 0x20),(ulong)uVar7 << 3);
        if (lVar6 == 0) goto LAB_0351a5b4;
        *(long *)(param_1 + 0x20) = lVar6;
        *(uint *)(param_1 + 0x2c) = uVar7;
      }
      if (uVar7 <= uVar2) goto LAB_0351a5b4;
      uVar7 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar7 + 1;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0351a5b4;
      *(long **)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8) = plVar5;
      *(short *)(plVar5 + 7) = (short)piVar8[7];
      iVar4 = piVar8[5];
      *(int *)((long)plVar5 + 0x14) = piVar8[4];
      *(short *)(plVar5 + 3) = (short)iVar4;
      *(int *)((long)plVar5 + 0x1c) = piVar8[6];
      *(int *)(plVar5 + 6) = piVar8[3];
      *(undefined1 *)((long)plVar5 + 0x34) = 0;
      *(undefined1 *)((long)plVar5 + 0x35) = *(undefined1 *)((long)piVar8 + 0x1f);
      *(int *)(plVar5 + 2) = piVar8[1];
      if ((piVar8[2] != 0) && (iVar4 = FUN_0351a380(plVar5,param_2), iVar4 != 1)) {
        return 2;
      }
    }
    else {
      plVar5 = (long *)(**(code **)(puVar3 + 0x10))(2,0x28);
      if (plVar5 == (long *)0x0) {
        return 2;
      }
      *(undefined2 *)(plVar5 + 3) = 0;
      plVar5[1] = param_1;
      plVar5[2] = 0x100000000;
      *(undefined4 *)((long)plVar5 + 0x1c) = 50000;
      *plVar5 = (long)&PTR_FUN_047c7558;
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x2c);
      if (uVar7 <= uVar2) {
        iVar4 = uVar7 + (uVar7 >> 1);
        if (uVar7 == 0) {
          iVar4 = 1;
        }
        uVar7 = iVar4 + uVar7;
        lVar6 = (**(code **)(puVar3 + 0x20))(0,*(undefined8 *)(param_1 + 0x20),(ulong)uVar7 << 3);
        if (lVar6 == 0) goto LAB_0351a5b4;
        *(long *)(param_1 + 0x20) = lVar6;
        *(uint *)(param_1 + 0x2c) = uVar7;
      }
      if (uVar7 <= uVar2) {
LAB_0351a5b4:
        (**(code **)*plVar5)(plVar5);
        (**(code **)(puVar3 + 0x30))(2,plVar5);
        return 2;
      }
      uVar7 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar7 + 1;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0351a5b4;
      *(long **)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8) = plVar5;
      iVar4 = piVar8[5];
      *(int *)((long)plVar5 + 0x14) = piVar8[4];
      *(short *)(plVar5 + 3) = (short)iVar4;
      *(int *)((long)plVar5 + 0x1c) = piVar8[6];
      *(int *)(plVar5 + 4) = *piVar8;
      *(int *)(plVar5 + 2) = piVar8[1];
      FUN_0352e680(param_1);
    }
    if (piVar8[6] != 50000) {
      *(undefined1 *)(param_1 + 0x34) = 1;
    }
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 1;
    }
  } while( true );
}


