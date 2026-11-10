/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278a330; name: FUN_0278a330
 */


void FUN_0278a330(undefined8 param_1,long param_2,short *param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined4 local_50 [4];
  undefined4 local_28 [2];
  
  if ((param_3 != (short *)0x0) && (uVar7 = *(uint *)(param_2 + 0x10), param_4 <= uVar7)) {
    if (param_5 == 1) {
      uVar1 = FUN_01855048(param_3,param_4);
      uVar7 = *(uint *)(param_2 + 0x10);
      if (uVar1 <= uVar7 >> 2) goto LAB_0278a3e8;
    }
    else if ((param_5 == 2) && (param_4 <= (uVar7 >> 1 & 0x7ffffffe))) {
LAB_0278a3e8:
      if (uVar7 != 0) {
        memset((void *)(param_2 + 0x28),0,(ulong)uVar7);
      }
      if (param_5 == 1) {
        uVar2 = 0;
        puVar3 = (undefined1 *)(param_2 + 0x28);
        if ((uVar7 != 0) && (cVar5 = (char)*param_3, cVar5 != '\0')) {
          uVar4 = 0;
          do {
            uVar2 = uVar4 + 1;
            *(char *)(param_2 + 0x28 + uVar4) = cVar5;
            if (uVar7 <= uVar2) break;
            cVar5 = *(char *)((long)param_3 + uVar4 + 1);
            uVar4 = uVar2;
          } while (cVar5 != '\0');
          puVar3 = (undefined1 *)(param_2 + uVar2 + 0x28);
        }
      }
      else {
        uVar2 = 0;
        if ((uVar7 >> 2 != 0) && (sVar6 = *param_3, sVar6 != 0)) {
          uVar4 = 0;
          do {
            uVar2 = uVar4 + 2;
            *(short *)(param_2 + 0x28 + uVar4) = sVar6;
            if ((uVar7 >> 2) << 1 <= uVar2) break;
            sVar6 = *(short *)((long)param_3 + uVar4 + 2);
            uVar4 = uVar2;
          } while (sVar6 != 0);
        }
        *(undefined1 *)(param_2 + 0x28 + (uVar2 & 0xffffffff)) = 0;
        puVar3 = (undefined1 *)(param_2 + 0x28 + (ulong)((uint)uVar2 | 1));
      }
      *puVar3 = 0;
      *(int *)(param_2 + 0x14) = (int)uVar2;
      *(int *)(param_2 + 0x18) = param_5;
      local_50[0] = 0;
      goto LAB_0278a36c;
    }
  }
  local_50[0] = 0x10407;
LAB_0278a36c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


