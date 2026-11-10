/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008993a4; name: FUN_008993a4
 */


void FUN_008993a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  char cVar10;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_0089969c();
  FUN_00892dc4(param_3,param_1);
  for (lVar9 = *(long *)(param_1 + 0x50); lVar9 != param_1 + 0x48; lVar9 = *(long *)(lVar9 + 8)) {
    FUN_008993a4(*(undefined8 *)(lVar9 + 0x10),param_2,param_3,param_4,0);
  }
  piVar6 = *(int **)(param_1 + 0x58);
  if ((piVar6 != (int *)0x0) && (*(long **)(piVar6 + 2) != (long *)0x0)) {
    uVar1 = piVar6[1] + *piVar6;
    if (0 < (int)uVar1) {
      plVar3 = (long *)**(long **)(piVar6 + 2);
      lVar9 = plVar3[3];
      if ((param_5 & 1) == 0) {
        lVar7 = 0;
        cVar10 = (char)lVar9;
        while ((**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,param_4),
              (ulong)uVar1 * 8 + -8 != lVar7) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 8) + lVar7;
          lVar7 = lVar7 + 8;
          plVar3 = *(long **)(lVar9 + 8);
          cVar8 = (char)plVar3[3];
          bVar2 = cVar10 != cVar8;
          cVar10 = cVar8;
          if (bVar2) {
            FUN_00d8d070(param_4,0x80);
            FUN_008f110c(param_4,0x20);
            plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar7);
          }
        }
      }
      else {
        lVar7 = 0;
        lVar4 = (**(code **)(*plVar3 + 0x30))();
        cVar10 = (char)lVar9;
        while( true ) {
          if (((lVar4 == 0) || (lVar9 = FUN_008a8338(), lVar9 == 0)) ||
             (uVar5 = FUN_008aca04(), cVar8 = cVar10, (uVar5 & 1) == 0)) {
            plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar7);
            cVar8 = (char)plVar3[3];
            if (cVar10 != cVar8) {
              FUN_00d8d070(param_4,0x80);
              FUN_008f110c(param_4,0x20);
              plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar7);
            }
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,param_4);
          }
          if ((ulong)uVar1 * 8 + -8 == lVar7) break;
          lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 8) + lVar7;
          lVar7 = lVar7 + 8;
          lVar4 = (**(code **)(**(long **)(lVar9 + 8) + 0x30))();
          cVar10 = cVar8;
        }
      }
    }
    FUN_00d8d070(param_4,0x80);
    FUN_008f110c(param_4,0x20);
  }
  FUN_00892ddc(param_3);
  return;
}


