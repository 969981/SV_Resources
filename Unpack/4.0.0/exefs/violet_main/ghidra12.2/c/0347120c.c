/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347120c; name: FUN_0347120c
 */


void FUN_0347120c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if (*(char *)((long)param_1 + 0x21) != '\0') {
    if (*param_1 == 2) {
      lVar5 = *(long *)PTR_DAT_047e7038;
      if (*(int *)(lVar5 + 0x18) != 0) {
        plVar6 = *(long **)(lVar5 + 0x10);
        do {
          iVar1 = *(int *)(*plVar6 + 0x3c);
          if (iVar1 == 2) {
            uVar7 = 3;
LAB_034712dc:
            *(undefined4 *)(*plVar6 + 0x3c) = uVar7;
          }
          else if (iVar1 == 1) {
            uVar7 = 0;
            goto LAB_034712dc;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != (long *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar5 + 0x18) * 8));
      }
    }
    else if ((*param_1 == 1) && (lVar5 = *(long *)PTR_DAT_047e7038, *(int *)(lVar5 + 0x18) != 0)) {
      plVar6 = *(long **)(lVar5 + 0x10);
      do {
        iVar1 = *(int *)(*plVar6 + 0x3c);
        if (iVar1 == 0) {
          uVar7 = 1;
LAB_03471280:
          *(undefined4 *)(*plVar6 + 0x3c) = uVar7;
        }
        else if (iVar1 == 3) {
          uVar7 = 2;
          goto LAB_03471280;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != (long *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar5 + 0x18) * 8));
    }
  }
  uVar8 = DAT_048afcb0;
  puVar2 = PTR_DAT_047e2fd0;
  if (DAT_048afcb0 != 0) {
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)DAT_048afcb0 << 3);
    if (DAT_048afcb0 != 0) {
      uVar10 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar10 = uVar8;
      }
      uVar8 = 0;
      puVar9 = DAT_048afca8;
      do {
        uVar12 = *puVar9;
        puVar4 = puVar3;
        uVar11 = uVar10;
        if (uVar8 < uVar10) {
LAB_03471380:
          puVar3 = puVar4;
          uVar10 = uVar11;
          if (uVar8 < uVar11) {
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[uVar8] = uVar12;
            }
            uVar8 = uVar8 + 1;
          }
        }
        else {
          iVar1 = uVar10 + (uVar10 >> 1);
          if (uVar10 == 0) {
            iVar1 = 1;
          }
          uVar11 = iVar1 + uVar10;
          puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x20))(0,puVar3,(ulong)uVar11 << 3);
          if (puVar4 != (undefined8 *)0x0) goto LAB_03471380;
        }
        puVar4 = puVar9 + 1;
        (**(code **)(*(long *)*puVar9 + 0x28))();
        puVar9 = puVar4;
      } while (puVar4 != DAT_048afca8 + DAT_048afcb0);
      if (uVar8 != 0) {
        lVar5 = (ulong)uVar8 << 3;
        puVar9 = puVar3;
        do {
          (**(code **)(*(long *)*puVar9 + 0x98))((long *)*puVar9,param_1);
          (**(code **)(*(long *)*puVar9 + 0x30))();
          lVar5 = lVar5 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar5 != 0);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03471420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2 + 0x30))(0,puVar3);
      return;
    }
  }
  return;
}


