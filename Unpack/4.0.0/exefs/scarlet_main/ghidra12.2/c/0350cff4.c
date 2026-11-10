/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350cff4; name: FUN_0350cff4
 */


undefined8 FUN_0350cff4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0xe0);
  if (plVar6 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
    uVar4 = (ulong)*(uint *)(plVar6 + 5);
    if (*(uint *)(plVar6 + 5) != 0) {
      lVar5 = plVar6[4];
      uVar2 = uVar1;
      lVar7 = lVar5;
      do {
        if (*(long *)(lVar7 + 0x18) == param_2) {
          uVar2 = FUN_034f3918(uVar2,lVar7 + 8,uVar1);
          if ((uVar2 & 1) == 0) goto LAB_0350d1d8;
          lVar5 = plVar6[4];
          uVar4 = (ulong)*(uint *)(plVar6 + 5);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar5 + uVar4 * 0x20);
    }
  }
  plVar6 = *(long **)(param_1 + 0xe8);
  if (plVar6 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
    uVar4 = (ulong)*(uint *)(plVar6 + 5);
    if (*(uint *)(plVar6 + 5) != 0) {
      lVar5 = plVar6[4];
      uVar2 = uVar1;
      lVar7 = lVar5;
      do {
        if (*(long *)(lVar7 + 0x18) == param_2) {
          uVar2 = FUN_034f3918(uVar2,lVar7 + 8,uVar1);
          if ((uVar2 & 1) == 0) goto LAB_0350d1d8;
          lVar5 = plVar6[4];
          uVar4 = (ulong)*(uint *)(plVar6 + 5);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar5 + uVar4 * 0x20);
    }
  }
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar6 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
    uVar4 = (ulong)*(uint *)(plVar6 + 5);
    if (*(uint *)(plVar6 + 5) != 0) {
      lVar5 = plVar6[4];
      uVar2 = uVar1;
      lVar7 = lVar5;
      do {
        if (*(long *)(lVar7 + 0x18) == param_2) {
          uVar2 = FUN_034f3918(uVar2,lVar7 + 8,uVar1);
          if ((uVar2 & 1) == 0) goto LAB_0350d1d8;
          lVar5 = plVar6[4];
          uVar4 = (ulong)*(uint *)(plVar6 + 5);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar5 + uVar4 * 0x20);
    }
  }
  plVar6 = *(long **)(param_1 + 0xf8);
  if (plVar6 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
    uVar4 = (ulong)*(uint *)(plVar6 + 5);
    if (*(uint *)(plVar6 + 5) != 0) {
      lVar5 = plVar6[4];
      uVar2 = uVar1;
      lVar7 = lVar5;
      do {
        if (*(long *)(lVar7 + 0x18) == param_2) {
          uVar2 = FUN_034f3918(uVar2,lVar7 + 8,uVar1);
          if ((uVar2 & 1) == 0) goto LAB_0350d1d8;
          lVar5 = plVar6[4];
          uVar4 = (ulong)*(uint *)(plVar6 + 5);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar5 + uVar4 * 0x20);
    }
  }
  plVar6 = *(long **)(param_1 + 0x118);
  if (((plVar6 == (long *)0x0) ||
      (uVar1 = (**(code **)(*plVar6 + 0x98))(plVar6,param_2), (uVar1 & 1) == 0)) &&
     ((plVar6 = *(long **)(param_1 + 0x120), plVar6 == (long *)0x0 ||
      (uVar1 = (**(code **)(*plVar6 + 0x98))(plVar6,param_2), (uVar1 & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
LAB_0350d1d8:
    uVar3 = 1;
  }
  return uVar3;
}


