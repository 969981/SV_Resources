/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03440398; name: FUN_03440398
 */


undefined8
FUN_03440398(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_3 != 0) {
    if (param_4 == 0) {
      return 2;
    }
    uVar2 = param_3 - (param_3 >> 1 & 0x55555555);
    uVar3 = param_4 - (param_4 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    if ((((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 |
         (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101) >> 0x18 & 0x3e) != 0) {
      return 2;
    }
    iVar4 = 0;
    if (param_4 - 1 != 0) {
      iVar4 = 0x20 - (int)LZCOUNT(param_4 - 1);
    }
    iVar1 = 0;
    if (param_3 - 1 != 0) {
      iVar1 = 0x20 - (int)LZCOUNT(param_3 - 1);
    }
    *(int *)(param_1 + 0x314) = iVar4;
    uVar2 = (iVar1 - iVar4) + 1;
    *(uint *)(param_1 + 0x30c) = param_3;
    *(uint *)(param_1 + 0x310) = param_4;
    *(uint *)(param_1 + 0x318) = uVar2;
    if (uVar2 < 0x21) {
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = param_2 / param_3;
      }
      iVar4 = uVar2 * param_3;
      *(int *)(param_1 + 0x308) = iVar4;
      if (iVar4 != 0) {
        if (param_6 == 0) {
          *(uint *)(param_1 + 0x31c) = param_5 | 8;
          param_6 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(param_5 | 8,param_2,param_4);
          *(long *)(param_1 + 0x300) = param_6;
          if (param_6 == 0) {
            return 2;
          }
          iVar4 = *(int *)(param_1 + 0x308);
          param_3 = *(uint *)(param_1 + 0x30c);
        }
        else {
          *(long *)(param_1 + 0x300) = param_6;
        }
        param_3 = iVar4 - param_3;
        if (param_6 == 0) goto LAB_034404c4;
        do {
          plVar5 = (long *)(param_6 + (ulong)param_3);
          *plVar5 = 0;
          while( true ) {
            uVar6 = (ulong)(*(int *)(param_1 + 0x318) - 1);
            plVar7 = (long *)(param_1 + uVar6 * 0x18 + 0x10);
            if (*plVar7 == 0) {
              *plVar7 = (long)plVar5;
              *(long **)(param_1 + uVar6 * 0x18 + 8) = plVar5;
              *plVar5 = 0;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = (long)plVar5;
            }
            *(int *)(param_1 + uVar6 * 0x18) = *(int *)(param_1 + uVar6 * 0x18) + 1;
            if (param_3 == 0) {
              return 1;
            }
            param_3 = param_3 - *(int *)(param_1 + 0x30c);
            param_6 = *(long *)(param_1 + 0x300);
            if (param_6 != 0) break;
LAB_034404c4:
            plVar5 = (long *)0x0;
          }
        } while( true );
      }
    }
  }
  return 2;
}


