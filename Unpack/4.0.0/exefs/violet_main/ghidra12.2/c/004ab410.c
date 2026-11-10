/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ab410; name: FUN_004ab410
 */


undefined1  [16] FUN_004ab410(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_004ab270(param_1,*param_1,param_2,param_3 & 1);
  uVar2 = auVar7._8_8_;
  switch(auVar7._0_4_) {
  case 1:
  case 4:
  case 6:
    uVar2 = *(ulong *)(uVar2 + 0x10);
    if (uVar2 != param_1[10]) {
LAB_004ab4dc:
      plVar1 = (long *)param_1[0xd];
      do {
        if (plVar1 == (long *)0x0) {
          return auVar7;
        }
        if ((ulong)plVar1[4] <= uVar2) {
          if (uVar2 <= (ulong)plVar1[4]) break;
          plVar1 = plVar1 + 1;
        }
        plVar1 = (long *)*plVar1;
      } while( true );
    }
    break;
  case 2:
    uVar2 = *(ulong *)(uVar2 + 0x28);
    if (uVar2 != param_1[10]) goto LAB_004ab4dc;
    break;
  case 3:
  case 7:
    uVar2 = *(ulong *)(*(long *)(uVar2 + 0x10) + 0x10);
    if (uVar2 != param_1[10]) goto LAB_004ab4dc;
    break;
  case 5:
    uVar2 = *(ulong *)(*(long *)(uVar2 + 0x18) + 0x10);
    if (uVar2 != param_1[10]) goto LAB_004ab4dc;
    break;
  case 8:
    if (uVar2 != param_1[10]) goto LAB_004ab4dc;
    break;
  default:
    uVar2 = 0;
    if (param_1[10] != 0) goto LAB_004ab4dc;
  }
  plVar3 = param_1 + 0x10;
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    plVar4 = plVar1;
    plVar6 = plVar3;
    do {
      if ((ulong)plVar4[4] >= uVar2) {
        plVar6 = plVar4;
      }
      plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar2];
    } while (plVar4 != (long *)0x0);
    if ((plVar6 != plVar3) && ((ulong)plVar6[4] <= uVar2)) {
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar3 = plVar6 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != plVar6) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((long *)param_1[0xf] == plVar6) {
        param_1[0xf] = plVar4;
      }
      param_1[0x11] = param_1[0x11] + -1;
      FUN_01336080(plVar1,plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
  }
  return auVar7;
}


