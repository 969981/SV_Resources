/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c1988; name: FUN_014c1988
 */


void FUN_014c1988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  
  iVar4 = FUN_014bb63c();
  puVar2 = PTR_DAT_047dcd58;
  puVar1 = PTR_DAT_047dcd50;
  if (iVar4 != 0) {
    iVar10 = 0;
    do {
      lVar7 = FUN_014c1b7c(param_1,iVar10);
      if (lVar7 == 0) {
LAB_014c1ae0:
        lVar11 = 0;
      }
      else {
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
          uVar9 = FUN_01af5520();
          *(undefined8 *)puVar2 = uVar9;
          __cxa_guard_release(puVar1);
        }
        if (puVar8 == (undefined8 *)0x0) goto LAB_014c1ae0;
        do {
          if (puVar8 == (undefined8 *)puVar2) {
            lVar11 = *(long *)(lVar7 + 0x48);
            break;
          }
          puVar8 = (undefined8 *)*puVar8;
          lVar11 = 0;
        } while (puVar8 != (undefined8 *)0x0);
      }
      lVar7 = FUN_014c1b7c(param_2,iVar10);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
          uVar9 = FUN_01af5520();
          *(undefined8 *)puVar2 = uVar9;
          __cxa_guard_release(puVar1);
        }
        for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
          if (puVar8 == (undefined8 *)puVar2) {
            if ((lVar11 == 0) || (lVar7 = *(long *)(lVar7 + 0x48), lVar7 == 0)) break;
            uVar3 = FUN_00cf44f4(*(undefined8 *)(lVar11 + 0x70));
            if (uVar3 < 0x306) {
              if ((uVar3 == 0x2cc) || (uVar3 == 0x2ea)) goto LAB_014c1aa4;
              if (uVar3 != 0x2ce) break;
              uVar5 = FUN_00cf41a0(lVar7);
            }
            else if (uVar3 == 0x306) {
              FUN_00cf41a0(lVar11);
              uVar5 = FUN_014c1b98();
            }
            else {
              if ((uVar3 != 0x378) && (uVar3 != 0x379)) break;
LAB_014c1aa4:
              uVar5 = 0;
            }
            FUN_0143b218(lVar11,uVar5,0);
            break;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar4);
  }
  return;
}


