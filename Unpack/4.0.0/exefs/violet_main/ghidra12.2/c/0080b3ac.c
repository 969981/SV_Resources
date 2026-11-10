/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080b3ac; name: FUN_0080b3ac
 */


void FUN_0080b3ac(undefined8 param_1,long param_2,short *param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  short sVar6;
  ulong uVar7;
  undefined1 *puVar8;
  char cVar9;
  ulong uVar10;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((param_3 != (short *)0x0) && (uVar3 = *(uint *)(param_2 + 0x10), param_4 <= uVar3)) {
    if (param_5 == 2) {
      if (param_4 <= (uVar3 >> 1 & 0x7ffffffe)) {
LAB_0080b458:
        if (uVar3 != 0) {
          uVar10 = (ulong)uVar3;
          uVar5 = uVar10 & 3;
          if (uVar10 - 1 < 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar1 = param_2 + uVar7;
              uVar7 = uVar7 + 4;
              *(undefined4 *)(lVar1 + 0x28) = 0;
            } while ((uVar10 & 0xfffffffc) != uVar7);
          }
          if ((uVar3 & 3) != 0) {
            puVar8 = (undefined1 *)(uVar7 + param_2 + 0x28);
            do {
              uVar5 = uVar5 - 1;
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            } while (uVar5 != 0);
          }
        }
        if (param_5 == 1) {
          uVar5 = 0;
          puVar8 = (undefined1 *)(param_2 + 0x28);
          if ((uVar3 != 0) && (cVar9 = (char)*param_3, cVar9 != '\0')) {
            uVar10 = 0;
            do {
              uVar5 = uVar10 + 1;
              *(char *)(param_2 + 0x28 + uVar10) = cVar9;
              if (uVar3 <= uVar5) break;
              cVar9 = *(char *)((long)param_3 + uVar10 + 1);
              uVar10 = uVar5;
            } while (cVar9 != '\0');
            puVar8 = (undefined1 *)(param_2 + uVar5 + 0x28);
          }
LAB_0080b554:
          uVar4 = (undefined4)uVar5;
          *puVar8 = 0;
        }
        else {
          if (param_5 == 2) {
            sVar6 = *param_3;
            uVar5 = 0;
            if ((sVar6 != 0) && (uVar3 >> 2 != 0)) {
              uVar5 = 0;
              do {
                *(short *)(param_2 + 0x28 + uVar5) = sVar6;
                sVar6 = *(short *)((long)param_3 + uVar5 + 2);
                uVar5 = uVar5 + 2;
              } while (sVar6 != 0 && uVar5 < (uVar3 >> 2) << 1);
            }
            puVar8 = (undefined1 *)(param_2 + 0x28 + (ulong)((uint)uVar5 | 1));
            *(undefined1 *)(param_2 + 0x28 + (uVar5 & 0xffffffff)) = 0;
            goto LAB_0080b554;
          }
          uVar4 = 0;
        }
        *(undefined4 *)(param_2 + 0x14) = uVar4;
        *(int *)(param_2 + 0x18) = param_5;
        local_40[0] = 0;
        goto LAB_0080b3e0;
      }
    }
    else if (param_5 == 1) {
      uVar2 = FUN_01855048(param_3,param_4);
      uVar3 = *(uint *)(param_2 + 0x10);
      if (uVar2 <= uVar3 >> 2) goto LAB_0080b458;
    }
  }
  local_40[0] = 0x10407;
LAB_0080b3e0:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


