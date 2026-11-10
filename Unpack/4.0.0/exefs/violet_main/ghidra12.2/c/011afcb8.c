/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011afcb8; name: FUN_011afcb8
 */


ulong FUN_011afcb8(long *param_1,uint param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 0xd);
  if ((param_4 & 0xff) != 0) {
    param_4 = param_4 + 3;
    goto LAB_011afd8c;
  }
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar6 = (ulong)param_2 & 0xffff;
    if (uVar9 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar5 <= uVar6) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        uVar7 = uVar6 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            if ((uint)*(ushort *)(plVar8 + 2) == (param_2 & 0xffff)) goto LAB_011afd64;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) goto LAB_011afe58;
          plVar8 = (long *)*plVar8;
          uVar3 = 0;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if ((uint)*(ushort *)(plVar8 + 2) == (param_2 & 0xffff)) goto LAB_011afd64;
          }
          else {
            if (uVar5 <= uVar9) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar2 * uVar5;
            }
            if (uVar9 != uVar7) goto LAB_011afe58;
          }
          plVar8 = (long *)*plVar8;
          uVar3 = 0;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_011afd68;
    }
  }
LAB_011afe58:
  uVar3 = 0;
  goto LAB_011afd68;
LAB_011afd64:
  uVar3 = *(undefined1 *)((long)plVar8 + 0x12);
LAB_011afd68:
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0129bf58(param_1,param_2,uVar3,&local_70);
  param_4 = (int)param_1[0xd] - uVar1;
LAB_011afd8c:
  uVar5 = (ulong)uVar1 & 0xffff;
  iVar4 = (int)uVar5;
  *(char *)((long)param_1 + uVar5 + 0x70) = (char)((param_3 & 0xffffffff) >> 8);
  *(char *)((long)param_1 + (ulong)(iVar4 + 1) + 0x70) = (char)(param_3 & 0xffffffff);
  *(char *)((long)param_1 + (ulong)(iVar4 + 2) + 0x70) = (char)param_4 + -3;
  *(uint *)(param_1 + 0xd) = iVar4 + (param_4 & 0xff);
  return (ulong)uVar1;
}


