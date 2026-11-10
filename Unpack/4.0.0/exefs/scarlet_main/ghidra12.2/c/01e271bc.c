/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e271bc; name: FUN_01e271bc
 */


void FUN_01e271bc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[0xb] != 0) {
    puVar5 = (undefined8 *)param_1[6];
    if (puVar5 != (undefined8 *)0x0) {
      plVar6 = (long *)*puVar5;
      FUN_0115b014(puVar5 + 3);
      plVar7 = (long *)param_1[7];
      uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar5,0x80,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar5,0x80,8);
      }
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)*plVar6;
        FUN_0115b014(plVar6 + 3);
        plVar8 = (long *)param_1[7];
        uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x80,8);
        }
        else {
          FUN_00c48fe8(plVar8,plVar6,0x80,8);
        }
        while (plVar7 != (long *)0x0) {
          plVar8 = (long *)*plVar7;
          FUN_0115b014(plVar7 + 3);
          plVar6 = (long *)param_1[7];
          uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x80,8);
            plVar7 = plVar8;
          }
          else {
            FUN_00c48fe8(plVar6,plVar7,0x80,8);
            plVar7 = plVar8;
          }
        }
      }
    }
    uVar4 = param_1[1];
    param_1[6] = 0;
    if (uVar4 != 0) {
      uVar1 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar2 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar2 * 8 + 0x10) = 0;
          lVar3 = uVar2 * 8;
          uVar2 = uVar2 + 4;
          *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar2);
      }
      if (uVar1 != 0) {
        lVar3 = uVar2 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar3) = 0;
          uVar1 = uVar1 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


