/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03471440; name: FUN_03471440
 */


void FUN_03471440(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar5 = DAT_048afcb0;
  puVar2 = PTR_DAT_047e2fd0;
  if (DAT_048afcb0 != 0) {
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)DAT_048afcb0 << 3);
    if (DAT_048afcb0 != 0) {
      uVar8 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar8 = uVar5;
      }
      uVar5 = 0;
      puVar7 = DAT_048afca8;
      do {
        uVar10 = *puVar7;
        puVar4 = puVar3;
        uVar9 = uVar8;
        if (uVar5 < uVar8) {
LAB_034714e8:
          puVar3 = puVar4;
          uVar8 = uVar9;
          if (uVar5 < uVar9) {
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[uVar5] = uVar10;
            }
            uVar5 = uVar5 + 1;
          }
        }
        else {
          iVar1 = uVar8 + (uVar8 >> 1);
          if (uVar8 == 0) {
            iVar1 = 1;
          }
          uVar9 = iVar1 + uVar8;
          puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x20))(0,puVar3,(ulong)uVar9 << 3);
          if (puVar4 != (undefined8 *)0x0) goto LAB_034714e8;
        }
        puVar4 = puVar7 + 1;
        (**(code **)(*(long *)*puVar7 + 0x28))();
        puVar7 = puVar4;
      } while (puVar4 != DAT_048afca8 + DAT_048afcb0);
      if (uVar5 != 0) {
        lVar6 = (ulong)uVar5 << 3;
        puVar7 = puVar3;
        do {
          (**(code **)(*(long *)*puVar7 + 0xa8))((long *)*puVar7,param_1);
          (**(code **)(*(long *)*puVar7 + 0x30))();
          lVar6 = lVar6 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03471588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2 + 0x30))(0,puVar3);
      return;
    }
  }
  return;
}


