/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ef75c; name: FUN_007ef75c
 */


void FUN_007ef75c(undefined8 param_1,long *param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_38 [2];
  
  if ((short)param_2[5] == 0) {
    local_50._0_4_ = 0x1040c;
  }
  else {
    if ((param_3 != 0) && (param_2[1] != param_3)) {
      uVar10 = param_4 & 0xff;
      uVar11 = (ulong)param_4;
      if ((*(byte *)(param_2 + 2) != uVar10) && (uVar10 < 0x18)) {
        if (*(long *)(param_2[8] + (uVar11 & 0xff) * 8) != 0) {
          plVar4 = (long *)(**(code **)(*param_2 + 0x40))(param_2,uVar11);
          if ((param_5 & 1) == 0) {
            uVar2 = *(ushort *)((long)plVar4 + 0x1a);
            if (uVar2 != 0) {
              uVar5 = 0;
              do {
                uVar9 = *(int *)((long)plVar4 + 0x14) + (uint)uVar5;
                uVar6 = 0;
                if (*(ushort *)(plVar4 + 2) <= uVar9) {
                  uVar6 = (uint)*(ushort *)(plVar4 + 2);
                }
                uVar8 = (ulong)(uVar9 - uVar6);
                if (*(char *)(plVar4[1] + uVar8 * 0x5b8) == '\0') break;
                if (*(char *)(plVar4[1] + uVar8 * 0x5b8 + 1) != '\0') goto LAB_007ef8a0;
                if (uVar5 < uVar2) {
                  uVar5 = uVar5 + 1;
                }
              } while (uVar5 < uVar2);
            }
            plVar4 = (long *)(**(code **)(*param_2 + 0x40))(param_2,uVar11);
          }
          (**(code **)(*plVar4 + 0x10))();
LAB_007ef8a0:
          uVar2 = *(ushort *)((long)param_2 + 0x32);
          if (uVar2 == 0) {
            uVar9 = ~(1 << (ulong)(param_4 & 0x1f));
            uVar8 = (ulong)(uVar10 >> 5);
          }
          else {
            uVar5 = *(ushort *)(param_2 + 5);
            lVar7 = param_2[4];
            uVar6 = 0;
            uVar9 = ~(1 << (ulong)(param_4 & 0x1f));
            uVar8 = (ulong)(uVar10 >> 5);
            do {
              uVar10 = 0;
              if ((uint)uVar5 <= uVar6 + *(int *)((long)param_2 + 0x2c)) {
                uVar10 = (uint)uVar5;
              }
              lVar1 = lVar7 + (ulong)(uVar6 + (*(int *)((long)param_2 + 0x2c) - uVar10)) * 0x5d0 +
                      uVar8 * 4;
              uVar6 = uVar6 + 1;
              *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) & uVar9;
            } while (uVar2 != uVar6);
          }
          *(uint *)((long)param_2 + uVar8 * 4 + 0x74) =
               *(uint *)((long)param_2 + uVar8 * 4 + 0x74) & uVar9;
          *(uint *)((long)param_2 + uVar8 * 4 + 0x78) =
               *(uint *)((long)param_2 + uVar8 * 4 + 0x78) & uVar9;
          FUN_007ef9e8(param_2);
          *(uint *)((long)param_2 + uVar8 * 4 + 0x74) =
               *(uint *)((long)param_2 + uVar8 * 4 + 0x74) & uVar9;
          puVar3 = PTR_DAT_047d0860;
          *(uint *)((long)param_2 + uVar8 * 4 + 0x78) =
               *(uint *)((long)param_2 + uVar8 * 4 + 0x78) & uVar9;
          uVar2 = *(ushort *)(*(long *)puVar3 + 0x50);
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            plVar4 = (long *)param_2[8];
            do {
              if (*plVar4 != 0) goto LAB_007ef9b0;
              uVar8 = uVar8 - 1;
              plVar4 = plVar4 + 1;
            } while (uVar8 != 0);
            if (uVar2 != 0) {
              uVar10 = 0;
              do {
                (**(code **)(*param_2 + 0x40))(param_2,uVar10);
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(*(long *)puVar3 + 0x50));
            }
          }
LAB_007ef9b0:
          *(undefined8 *)(param_2[8] + (uVar11 & 0xff) * 8) = 0;
          local_48 = 0;
          local_50 = 0x20000000;
          (**(code **)(*param_2 + 0x30))(param_2,&local_50);
          local_50 = local_50 & 0xffffffff00000000;
          goto LAB_007ef7d0;
        }
        local_50._0_4_ = 0;
        goto LAB_007ef7c8;
      }
    }
    local_50._0_4_ = 0x10407;
  }
LAB_007ef7c8:
LAB_007ef7d0:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,&local_50);
  return;
}


