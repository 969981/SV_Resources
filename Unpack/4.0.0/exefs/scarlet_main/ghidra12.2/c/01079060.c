/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01079060; name: FUN_01079060
 */


void FUN_01079060(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      plVar7 = *(long **)(param_1 + 0x40);
      plVar6 = (long *)*puVar2;
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar2,0x20,4);
      }
      else {
        FUN_00c48fe8(plVar7,puVar2,0x20,4);
      }
      if (plVar6 != (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x40);
        plVar7 = (long *)*plVar6;
        uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x20,4);
        }
        else {
          FUN_00c48fe8(plVar8,plVar6,0x20,4);
        }
        while (plVar7 != (long *)0x0) {
          plVar6 = *(long **)(param_1 + 0x40);
          plVar8 = (long *)*plVar7;
          uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x20,4);
            plVar7 = plVar8;
          }
          else {
            FUN_00c48fe8(plVar6,plVar7,0x20,4);
            plVar7 = plVar8;
          }
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if ((((lVar4 != 0) && (*(undefined8 *)*plVar1 = 0, lVar4 != 1)) &&
        (*(undefined8 *)(*plVar1 + 8) = 0, lVar4 != 2)) &&
       (*(undefined8 *)(*plVar1 + 0x10) = 0, lVar4 != 3)) {
      lVar5 = 3;
      do {
        *(undefined8 *)(*plVar1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  for (plVar6 = *(long **)(param_2 + 0x38); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    puVar2 = (undefined8 *)FUN_0107a448(plVar1,plVar6 + 2);
    *puVar2 = *(undefined8 *)((long)plVar6 + 0x14);
  }
  return;
}


