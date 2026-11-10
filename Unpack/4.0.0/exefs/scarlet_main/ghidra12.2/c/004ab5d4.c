/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ab5d4; name: FUN_004ab5d4
 */


undefined1  [16] FUN_004ab5d4(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_004ab410(param_1,param_2,param_3 & 1);
  uVar6 = auVar7._8_8_;
  iVar5 = auVar7._0_4_;
  if ((iVar5 != 0) && (*(char *)(*param_1 + 0x28) != '\0')) {
    switch(iVar5) {
    case 1:
    case 4:
    case 6:
      uVar6 = *(ulong *)(uVar6 + 0x10);
      break;
    case 2:
      uVar6 = *(ulong *)(uVar6 + 0x28);
      break;
    case 3:
    case 7:
      uVar6 = *(ulong *)(*(long *)(uVar6 + 0x10) + 0x10);
      break;
    case 5:
      uVar6 = *(ulong *)(*(long *)(uVar6 + 0x18) + 0x10);
      break;
    case 8:
      break;
    default:
      uVar6 = 0;
    }
    if (uVar6 != param_1[10]) {
      for (plVar2 = (long *)param_1[0xd]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if ((ulong)plVar2[4] <= uVar6) {
          if (uVar6 <= (ulong)plVar2[4]) {
            return auVar7;
          }
          plVar2 = plVar2 + 1;
        }
      }
      if (iVar5 == 8) {
        uVar1 = FUN_004aafe8(auVar7._0_8_,param_1[10],param_2);
        if ((uVar1 & 1) != 0) {
          return auVar7;
        }
        plVar2 = (long *)param_1[0xc];
        while (plVar2 != param_1 + 0xd) {
          if ((plVar2[4] != 0) && (uVar1 = FUN_004aafe8(uVar1,plVar2[4],param_2), (uVar1 & 1) != 0))
          {
            return auVar7;
          }
          plVar3 = (long *)plVar2[1];
          if ((long *)plVar2[1] == (long *)0x0) {
            plVar3 = plVar2 + 2;
            if (*(long **)*plVar3 == plVar2) {
              plVar2 = (long *)*plVar3;
            }
            else {
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x10);
                plVar2 = (long *)*plVar3;
              } while (*plVar2 != lVar4);
            }
          }
          else {
            do {
              plVar2 = plVar3;
              plVar3 = (long *)*plVar2;
            } while ((long *)*plVar2 != (long *)0x0);
          }
        }
      }
      param_1[0x12] = uVar6;
      FUN_001fcec0(param_1 + 0x13,param_2);
      auVar7 = ZEXT816(0);
    }
  }
  return auVar7;
}


