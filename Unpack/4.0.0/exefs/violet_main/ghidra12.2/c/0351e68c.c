/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351e68c; name: FUN_0351e68c
 */


void FUN_0351e68c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long local_180 [32];
  uint local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined4 local_58;
  
  local_80 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_180,0);
  local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
  if (local_78 != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    do {
      if (*(long *)(local_78 + 0x18) != 0) {
        uVar7 = (ulong)local_80;
        if (local_80 == 0) {
          iVar3 = 0;
        }
        else {
          uVar2 = uVar7 & 3;
          if (uVar7 - 1 < 3) {
            uVar5 = 0;
            lVar4 = 0;
          }
          else {
            uVar5 = 0;
            lVar4 = 0;
            plVar6 = local_180 + 2;
            do {
              uVar5 = uVar5 + 4;
              lVar4 = *(long *)(*(long *)(plVar6[1] + 8) + 0x68) +
                      *(long *)(*(long *)(*plVar6 + 8) + 0x68) +
                      *(long *)(*(long *)(plVar6[-1] + 8) + 0x68) +
                      *(long *)(*(long *)(plVar6[-2] + 8) + 0x68) + lVar4;
              plVar6 = plVar6 + 4;
            } while ((uVar7 & 0xfffffffc) != uVar5);
          }
          iVar3 = (int)lVar4;
          if ((local_80 & 3) != 0) {
            plVar6 = local_180 + uVar5;
            do {
              uVar2 = uVar2 - 1;
              lVar4 = *(long *)(*(long *)(*plVar6 + 8) + 0x68) + lVar4;
              iVar3 = (int)lVar4;
              plVar6 = plVar6 + 1;
            } while (uVar2 != 0);
          }
        }
        FUN_0351d8a4(*(undefined4 *)(param_1 + 0x4c),local_78,
                     *(int *)(local_70 + 0x88) + (((int)param_2 - iVar3) - *(int *)(local_78 + 8)),
                     param_3,uVar1 & 0x7f00,*(undefined4 *)(param_1 + 0x2c));
      }
      if ((char)local_58 != '\0') {
        return;
      }
      uVar7 = (ulong)local_80;
      if (local_80 == 0) {
        lVar4 = 0;
      }
      else {
        uVar2 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          uVar5 = 0;
          lVar4 = 0;
        }
        else {
          uVar5 = 0;
          lVar4 = 0;
          plVar6 = local_180 + 2;
          do {
            uVar5 = uVar5 + 4;
            lVar4 = *(long *)(*(long *)(plVar6[1] + 8) + 0x68) +
                    *(long *)(*(long *)(*plVar6 + 8) + 0x68) +
                    *(long *)(*(long *)(plVar6[-1] + 8) + 0x68) +
                    *(long *)(*(long *)(plVar6[-2] + 8) + 0x68) + lVar4;
            plVar6 = plVar6 + 4;
          } while ((uVar7 & 0xfffffffc) != uVar5);
        }
        if ((local_80 & 3) != 0) {
          plVar6 = local_180 + uVar5;
          do {
            uVar2 = uVar2 - 1;
            lVar4 = *(long *)(*(long *)(*plVar6 + 8) + 0x68) + lVar4;
            plVar6 = plVar6 + 1;
          } while (uVar2 != 0);
        }
      }
      lVar4 = ((param_2 - lVar4) - *(long *)(local_78 + 8)) + (ulong)*(uint *)(local_70 + 0x88);
      uVar7 = local_60 - lVar4;
      if (uVar7 == 0 || local_60 < lVar4) {
        uVar7 = 0;
      }
      if (param_3 <= uVar7) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_180,0);
    } while (local_78 != 0);
  }
  return;
}


