/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e4710; name: FUN_007e4710
 */


void FUN_007e4710(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_3) {
        if (plVar2 == plVar3) {
          if (plVar2 != (long *)param_2[1]) {
            *param_2 = plVar3[6];
            goto LAB_007e4784;
          }
          *param_2 = 0;
          param_2[1] = 0;
          lVar1 = plVar2[6];
          lVar4 = plVar2[7];
        }
        else if (plVar2 == (long *)param_2[1]) {
          param_2[1] = plVar2[7];
          lVar1 = plVar2[6];
          lVar4 = plVar2[7];
        }
        else {
LAB_007e4784:
          lVar1 = plVar2[6];
          lVar4 = plVar2[7];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x38) = lVar4;
        }
        lVar4 = param_2[2];
        lVar1 = *(long *)(lVar4 + 0x20);
        if (*(long *)(lVar4 + 0x18) == 0) {
          if (lVar1 == 0) {
            plVar2[4] = 0;
            plVar2[5] = 0;
            *(long **)(lVar4 + 0x18) = plVar2;
            goto LAB_007e47c0;
          }
        }
        else if (lVar1 != 0) {
          *(long **)(lVar1 + 0x20) = plVar2;
          plVar2[4] = 0;
          plVar2[5] = lVar1;
LAB_007e47c0:
          *(long **)(lVar4 + 0x20) = plVar2;
        }
        if (*(long **)(lVar4 + 8) == plVar2) {
          if (*(long **)(lVar4 + 0x10) != plVar2) {
            *(long *)(lVar4 + 8) = plVar2[2];
            goto LAB_007e47fc;
          }
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          lVar1 = plVar2[2];
          lVar4 = plVar2[3];
        }
        else if (*(long **)(lVar4 + 0x10) == plVar2) {
          *(long *)(lVar4 + 0x10) = plVar2[3];
          lVar1 = plVar2[2];
          lVar4 = plVar2[3];
        }
        else {
LAB_007e47fc:
          lVar1 = plVar2[2];
          lVar4 = plVar2[3];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar4;
        }
        local_28[0] = 0;
        goto LAB_007e4814;
      }
      plVar2 = (long *)plVar2[6];
    } while (plVar2 != (long *)0x0);
  }
  local_28[0] = 0x2c0a;
LAB_007e4814:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


