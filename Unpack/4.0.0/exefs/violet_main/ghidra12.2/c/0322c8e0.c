/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322c8e0; name: FUN_0322c8e0
 */


void FUN_0322c8e0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined **local_458;
  undefined1 auStack_450 [1024];
  undefined *local_38;
  
  lVar6 = (long)DAT_048855a8;
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar2 + 0x1000b8) = lVar4;
    iVar1 = DAT_048855ac;
    lVar6 = *(long *)(lVar4 + lVar6 * 8 + 1000);
    if (lVar4 == 0) {
      lVar4 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar4;
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + lVar6 * 8 + 1000);
    iVar1 = DAT_048855ac;
  }
  plVar7 = *(long **)(lVar4 + (long)iVar1 * 8 + 1000);
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar2 = FUN_030013e8(&DAT_04885558);
    if (lVar2 == 0) {
      uVar5 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(lVar2 + 4);
      uVar5 = ((int)lVar2 - (int)DAT_04885568) * 0x20000000;
    }
    if (-1 < (int)(uVar3 | uVar5)) {
      return;
    }
  }
  local_468 = (undefined1 *)0x0;
  local_460 = (undefined1 *)0x0;
  local_458 = (undefined **)0x0;
  local_38 = PTR_DAT_047e5b20 + 0x10;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    iVar1 = FUN_0322ecac(&local_38,auStack_450,0x80,1,0);
    local_460 = auStack_450 + (long)iVar1 * 8;
    *(undefined1 ***)(param_1 + 0x48) = &local_468;
    local_468 = auStack_450;
    local_458 = &local_38;
  }
  if (plVar7 != (long *)0x0) {
    if (lVar6 != 0) {
      FUN_0322ce54(lVar6,plVar7,*(undefined1 *)(param_1 + 0x18));
    }
    iVar1 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1);
    if (iVar1 == 1) {
      return;
    }
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if ((int)plVar7[1] != 0) {
    lVar2 = (long)((int)plVar7[1] + -1);
    if (lVar6 == 0) {
      lVar4 = lVar2 + 1;
      lVar2 = lVar2 << 4;
      do {
        plVar8 = *(long **)(*plVar7 + lVar2);
        if (((plVar8 != (long *)0x0) &&
            (*(byte *)(param_1 + 0x18) <= *(byte *)(*plVar7 + lVar2 + 8))) &&
           (iVar1 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1), iVar1 == 1)) {
          return;
        }
        lVar4 = lVar4 + -1;
        lVar2 = lVar2 + -0x10;
      } while (lVar4 != 0);
    }
    else {
      lVar4 = lVar2 + 1;
      lVar2 = lVar2 << 4;
      do {
        plVar8 = *(long **)(*plVar7 + lVar2);
        if ((plVar8 != (long *)0x0) && (*(byte *)(param_1 + 0x18) <= *(byte *)(*plVar7 + lVar2 + 8))
           ) {
          FUN_0322ce54(lVar6,plVar8);
          iVar1 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1);
          if (iVar1 == 1) {
            return;
          }
        }
        lVar4 = lVar4 + -1;
        lVar2 = lVar2 + -0x10;
      } while (lVar4 != 0);
    }
  }
  return;
}


