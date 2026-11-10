/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7900; name: FUN_034c7900
 */


undefined8 FUN_034c7900(undefined8 param_1,int param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  
  if (param_3 == 0) {
    for (lVar2 = *(long *)(PTR_DAT_047e6968 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
      piVar3 = *(int **)(lVar2 + 0x20);
      uVar4 = *(uint *)(lVar2 + 0x28);
      piVar5 = piVar3 + (ulong)uVar4 * 3;
      if ((uVar4 != 0) && (*piVar3 != param_2)) {
        lVar7 = (ulong)uVar4 * 0xc;
        do {
          lVar7 = lVar7 + -0xc;
          if (lVar7 == 0) {
            piVar3 = piVar5;
            break;
          }
          piVar1 = piVar3 + 3;
          piVar6 = piVar3 + 3;
          piVar3 = piVar1;
        } while (*piVar6 != param_2);
      }
      if (piVar5 != piVar3) {
        if (piVar3 < piVar5 + -3) {
          do {
            piVar6 = piVar3 + 3;
            *(undefined8 *)piVar3 = *(undefined8 *)piVar6;
            piVar3[2] = piVar3[5];
            piVar3 = piVar6;
          } while (piVar6 < piVar5 + -3);
          uVar4 = *(uint *)(lVar2 + 0x28);
        }
        *(uint *)(lVar2 + 0x28) = uVar4 - 1;
      }
    }
  }
  else {
    lVar2 = *(long *)(param_3 + 0x50);
    if (lVar2 != 0) {
      piVar3 = *(int **)(lVar2 + 0x20);
      uVar4 = *(uint *)(lVar2 + 0x28);
      piVar5 = piVar3 + (ulong)uVar4 * 3;
      if ((uVar4 != 0) && (*piVar3 != param_2)) {
        lVar7 = (ulong)uVar4 * 0xc;
        do {
          lVar7 = lVar7 + -0xc;
          if (lVar7 == 0) {
            piVar3 = piVar5;
            break;
          }
          piVar1 = piVar3 + 3;
          piVar6 = piVar3 + 3;
          piVar3 = piVar1;
        } while (*piVar6 != param_2);
      }
      if (piVar5 != piVar3) {
        if (piVar3 < piVar5 + -3) {
          do {
            piVar6 = piVar3 + 3;
            *(undefined8 *)piVar3 = *(undefined8 *)piVar6;
            piVar3[2] = piVar3[5];
            piVar3 = piVar6;
          } while (piVar6 < piVar5 + -3);
          uVar4 = *(uint *)(lVar2 + 0x28);
        }
        *(uint *)(lVar2 + 0x28) = uVar4 - 1;
      }
    }
  }
  return 1;
}


