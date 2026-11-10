/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01854ea4; name: FUN_01854ea4
 */


void FUN_01854ea4(undefined8 param_1,long param_2,short *param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  undefined4 local_50 [4];
  undefined4 local_28 [2];
  
  if (param_3 != (short *)0x0) {
    uVar9 = *(uint *)(param_2 + 0x10);
    if (param_4 <= uVar9) {
      if (param_5 == 1) {
        uVar2 = FUN_01855048(param_3,param_4);
        uVar9 = *(uint *)(param_2 + 0x10);
        if (uVar9 >> 2 < uVar2) goto LAB_01854fe4;
      }
      else if ((param_5 != 2) || ((uVar9 >> 1 & 0x7ffffffe) < param_4)) goto LAB_01854fe4;
      if (uVar9 != 0) {
        memset((void *)(param_2 + 0x28),0,(ulong)uVar9);
      }
      if (param_5 == 1) {
        uVar2 = 0;
        puVar4 = (undefined1 *)(param_2 + 0x28);
        if ((uVar9 != 0) && ((char)*param_3 != '\0')) {
          puVar4 = (undefined1 *)(param_2 + 0x29);
          uVar2 = 1;
          *(char *)(param_2 + 0x28) = (char)*param_3;
          if ((1 < uVar9) && (cVar7 = *(char *)((long)param_3 + 1), cVar7 != '\0')) {
            lVar5 = 0;
            do {
              *(char *)(param_2 + 0x29 + lVar5) = cVar7;
              lVar1 = lVar5 + 1;
              if ((ulong)uVar9 <= lVar5 + 2U) break;
              cVar7 = *(char *)((long)param_3 + lVar5 + 2);
              lVar5 = lVar1;
            } while (cVar7 != '\0');
            uVar2 = (int)lVar1 + 1;
            puVar4 = (undefined1 *)(param_2 + lVar1 + 0x29);
          }
        }
      }
      else {
        uVar3 = 0;
        if ((uVar9 >> 2 != 0) && (sVar8 = *param_3, sVar8 != 0)) {
          uVar6 = 0;
          do {
            uVar3 = uVar6 + 2;
            *(short *)(param_2 + 0x28 + uVar6) = sVar8;
            if ((uVar9 >> 2) << 1 <= uVar3) break;
            sVar8 = *(short *)((long)param_3 + uVar6 + 2);
            uVar6 = uVar3;
          } while (sVar8 != 0);
        }
        uVar2 = (uint)uVar3;
        *(undefined1 *)(param_2 + 0x28 + (uVar3 & 0xffffffff)) = 0;
        puVar4 = (undefined1 *)(param_2 + 0x28 + (ulong)(uVar2 | 1));
      }
      *puVar4 = 0;
      *(uint *)(param_2 + 0x14) = uVar2;
      *(int *)(param_2 + 0x18) = param_5;
      local_50[0] = 0;
      goto LAB_01854f38;
    }
  }
LAB_01854fe4:
  local_50[0] = 0x10407;
LAB_01854f38:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


