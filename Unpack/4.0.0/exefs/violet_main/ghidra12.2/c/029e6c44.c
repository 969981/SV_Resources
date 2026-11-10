/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e6c44; name: FUN_029e6c44
 */


void FUN_029e6c44(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 local_48;
  uint local_44;
  
  iVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  if (iVar3 != 0) {
    uVar11 = 0;
    do {
      local_48 = CONCAT31(local_48._1_3_,1);
      local_44 = uVar11;
      puVar5 = (ulong *)(**(code **)(*param_3 + 0xa8))(param_3,&local_48);
      uVar7 = param_4[1];
      if (uVar7 != 0) {
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar6 = *puVar5;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & uVar6;
        }
        else if (uVar6 < uVar7) {
          uVar9 = uVar6;
        }
        else {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = uVar6 / uVar7;
          }
          uVar9 = uVar6 - uVar9 * uVar7;
        }
        plVar10 = *(long **)(*param_4 + uVar9 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          if (uVar8 < 2) {
            do {
              if (plVar10[1] == uVar6) {
                if (plVar10[2] == uVar6) goto LAB_029e6db0;
              }
              else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar10[1];
              if (uVar8 == uVar6) {
                if (plVar10[2] == uVar6) goto LAB_029e6db0;
              }
              else {
                if (uVar7 <= uVar8) {
                  uVar2 = 0;
                  if (uVar7 != 0) {
                    uVar2 = uVar8 / uVar7;
                  }
                  uVar8 = uVar8 - uVar2 * uVar7;
                }
                if (uVar8 != uVar9) break;
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
      }
      local_48 = CONCAT31(local_48._1_3_,1);
      local_44 = uVar11;
      uVar4 = (**(code **)(*param_3 + 0xc0))(param_3,&local_48);
      FUN_029e704c(param_4,puVar5);
      local_48 = FUN_029e7520(param_2,*puVar5,uVar4 & 1);
      puVar1 = *(undefined4 **)(param_1 + 8);
      if (puVar1 < *(undefined4 **)(param_1 + 0x10)) {
        *puVar1 = local_48;
        *(undefined4 **)(param_1 + 8) = puVar1 + 1;
      }
      else {
        FUN_029e7640(param_1,&local_48);
      }
LAB_029e6db0:
      uVar11 = uVar11 + 1;
      uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
    } while (uVar11 < uVar4);
  }
  return;
}


