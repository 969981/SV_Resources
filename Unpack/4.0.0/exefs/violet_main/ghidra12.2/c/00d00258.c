/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d00258; name: FUN_00d00258
 */


void FUN_00d00258(long *param_1,long param_2,ulong param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_047d8b70;
  puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x288) + param_3 * 8);
  uVar6 = *(ulong *)(param_2 + 0x290);
  if ((puVar7 == (undefined8 *)0x0) || (plVar8 = (long *)*puVar7, plVar8 == (long *)0x0)) {
LAB_00d00320:
    plVar3 = (long *)0x0;
  }
  else if ((uVar6 & uVar6 - 1) == 0) {
    do {
      plVar3 = (long *)puVar2;
      if (plVar8[2] != 0) {
        plVar3 = (long *)(plVar8[2] + 0x30);
      }
      plVar5 = (long *)puVar2;
      if (*param_4 != 0) {
        plVar5 = (long *)(*param_4 + 0x30);
      }
      if ((*plVar3 == *plVar5) &&
         ((plVar3 = (long *)plVar8[8], plVar3 == param_5 ||
          (((plVar3 != (long *)0x0 && (uVar4 = (**(code **)(*plVar3 + 0xb8))(), (uVar4 & 1) != 0))
           && (uVar4 = (**(code **)(*param_5 + 0xb8))(param_5), (uVar4 & 1) != 0)))))) {
        plVar3 = plVar8;
        break;
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_00d00320;
      plVar3 = (long *)0x0;
    } while ((plVar8[1] & uVar6 - 1) == param_3);
  }
  else {
    do {
      plVar3 = (long *)puVar2;
      if (plVar8[2] != 0) {
        plVar3 = (long *)(plVar8[2] + 0x30);
      }
      plVar5 = (long *)puVar2;
      if (*param_4 != 0) {
        plVar5 = (long *)(*param_4 + 0x30);
      }
      if (*plVar3 == *plVar5) {
        plVar5 = (long *)plVar8[8];
        plVar3 = plVar8;
        if ((plVar5 == param_5) ||
           (((plVar5 != (long *)0x0 && (uVar4 = (**(code **)(*plVar5 + 0xb8))(), (uVar4 & 1) != 0))
            && (uVar4 = (**(code **)(*param_5 + 0xb8))(param_5), (uVar4 & 1) != 0)))) break;
      }
      plVar8 = (long *)*plVar8;
      plVar3 = plVar8;
      if (plVar8 == (long *)0x0) break;
      uVar4 = plVar8[1];
      if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
      plVar3 = (long *)0x0;
    } while (uVar4 == param_3);
  }
  *param_1 = (long)plVar3;
  param_1[1] = param_3;
  param_1[2] = uVar6;
  return;
}


