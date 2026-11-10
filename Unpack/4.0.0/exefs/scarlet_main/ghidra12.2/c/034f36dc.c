/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f36dc; name: FUN_034f36dc
 */


undefined1 (*) [12] FUN_034f36dc(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 (*pauVar5) [12];
  int *piVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  long local_58;
  
  puVar4 = PTR_DAT_047e70e8;
  local_58 = 0;
  auVar11 = FUN_03468d28(*(undefined8 *)PTR_DAT_047e70e8,param_3,&local_58);
  if (auVar11._0_8_ == 0) {
    return (undefined1 (*) [12])0x0;
  }
  piVar6 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar8 = piVar6;
  if ((uVar3 != 0) && (*piVar6 != param_2)) {
    lVar7 = (ulong)uVar3 * 0x20;
    piVar9 = piVar6;
    do {
      lVar7 = lVar7 + -0x20;
      if (lVar7 == 0) goto LAB_034f378c;
      piVar8 = piVar9 + 8;
      piVar1 = piVar9 + 8;
      piVar9 = piVar8;
    } while (*piVar1 != param_2);
  }
  if (piVar8 == piVar6 + (ulong)uVar3 * 8) {
LAB_034f378c:
    uVar10 = *(uint *)((long)param_1 + 0xc);
    if (uVar3 < uVar10) {
LAB_034f37d0:
      if (uVar3 < uVar10) {
        uVar3 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar3 + 1;
        if (piVar6 != (int *)0x0) {
          piVar8 = piVar6 + (ulong)uVar3 * 8;
          *piVar8 = param_2;
          goto LAB_034f37f0;
        }
      }
    }
    else {
      iVar2 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar2 = 1;
      }
      uVar10 = iVar2 + uVar10;
      piVar6 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar6,(ulong)uVar10 << 5);
      if (piVar6 != (int *)0x0) {
        *param_1 = piVar6;
        *(uint *)((long)param_1 + 0xc) = uVar10;
        goto LAB_034f37d0;
      }
    }
    FUN_03468ed8(*(undefined8 *)puVar4,param_3);
    pauVar5 = (undefined1 (*) [12])0x0;
    if (local_58 != 0) {
      FUN_0346034c(local_58,0);
      pauVar5 = (undefined1 (*) [12])0x0;
    }
  }
  else {
LAB_034f37f0:
    pauVar5 = (undefined1 (*) [12])(piVar8 + 2);
    *pauVar5 = auVar11;
    piVar8[5] = param_3;
    *(long *)(piVar8 + 6) = local_58;
  }
  return pauVar5;
}


