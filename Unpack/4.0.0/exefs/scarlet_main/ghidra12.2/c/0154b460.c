/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b460; name: FUN_0154b460
 */


void FUN_0154b460(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x40);
  uVar7 = FUN_0154b684(param_1,param_2);
  if ((uVar7 & 1) != 0) {
    lVar8 = (**(code **)(*param_3 + 0x1e0))(param_3);
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    puVar1 = PTR_DAT_047dcd50;
    if (((*PTR_DAT_047dcd50 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar6 != 0)) {
      uVar11 = FUN_01af5520();
      *(undefined8 *)PTR_DAT_047dcd58 = uVar11;
      __cxa_guard_release(PTR_DAT_047dcd50);
    }
    for (; puVar2 = PTR_DAT_047dcd58, plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_047dcd58) {
        uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
        puVar10 = (undefined2 *)FUN_0154b718(lVar13 + 0x124,param_1,param_2,uVar4);
        uVar3 = FUN_0154b700(lVar8);
        *puVar10 = uVar3;
        uVar3 = FUN_0154b70c(lVar8);
        puVar10[1] = uVar3;
        if (param_4 != (undefined8 *)0x0) {
          uVar11 = FUN_00f7e27c(param_2);
          uVar5 = (**(code **)(*(long *)*param_4 + 0x98))();
          uVar7 = FUN_0128ab58(uVar11,uVar4,uVar5);
          if ((uVar7 & 1) == 0) {
            lVar13 = (**(code **)(*(long *)*param_4 + 0x1e0))();
            puVar12 = (undefined8 *)
                      (*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
            if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar6 != 0))
            {
              uVar11 = FUN_01af5520();
              *(undefined8 *)puVar2 = uVar11;
              __cxa_guard_release(PTR_DAT_047dcd50);
            }
            while( true ) {
              if (puVar12 == (undefined8 *)0x0) {
                return;
              }
              if (puVar12 == (undefined8 *)puVar2) break;
              puVar12 = (undefined8 *)*puVar12;
            }
            uVar3 = FUN_0154b700(lVar13);
            puVar10[3] = uVar3;
            uVar3 = FUN_0154b70c(lVar13);
            puVar10[4] = uVar3;
            puVar10[2] = *(undefined2 *)(param_4 + 1);
            return;
          }
        }
        puVar10[4] = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        return;
      }
    }
  }
  return;
}


