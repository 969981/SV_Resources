/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d4bac; name: FUN_007d4bac
 */


void FUN_007d4bac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_88 [16];
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  
  lVar1 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar7 = *(long *)(lVar1 + 0x20);
  if (lVar7 != lVar1 + 0x18) {
    do {
      if (*(int *)(param_1 + 0x784) != 0) {
        return;
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      if (*(char *)(lVar8 + 0x78) != '\0') {
        lVar2 = FUN_007ec50c(param_1);
        if (lVar2 != 0) {
          lVar2 = FUN_007ec50c(param_1);
          lVar3 = FUN_007ec4a8(param_1);
          if (lVar2 == lVar3) {
            if (*(char *)(lVar8 + 0x3a) == '\x02') {
              *(undefined1 *)(lVar8 + 0x3a) = 3;
              uVar4 = FUN_007d6714(param_1 + 0x868,*(undefined8 *)(lVar8 + 0x30),
                                   *(undefined2 *)(lVar8 + 0x38));
              if ((uVar4 & 1) == 0) {
                FUN_007d9788(param_1 + 0x868,*(undefined8 *)(lVar8 + 0x30),
                             *(undefined2 *)(lVar8 + 0x38));
                if (*(code **)(param_1 + 0x778) != (code *)0x0) {
                  local_70 = CONCAT44(local_70._4_4_,1);
                  local_68 = lVar8;
                  (**(code **)(param_1 + 0x778))(&local_70);
                }
              }
              *(undefined1 *)(param_1 + 0x792) = 1;
            }
            goto LAB_007d4c10;
          }
        }
        lVar2 = FUN_007ec50c(param_1);
        if ((lVar2 != 0) && (lVar2 = FUN_007ec4a8(param_1), lVar2 != 0)) {
          lVar2 = FUN_007ec50c(param_1);
          lVar3 = FUN_007ec4a8(param_1);
          if (lVar2 != lVar3) {
            uVar4 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xc0));
            if ((uVar4 & 1) != 0) {
              return;
            }
            local_70 = 0;
            FUN_007935cc(&local_70);
            lVar2 = local_70 - *(long *)(lVar8 + 0x88);
            plVar5 = (long *)FUN_0079365c();
            lVar8 = 0;
            if (*plVar5 != 0) {
              lVar8 = lVar2 / *plVar5;
            }
            if (9000 < lVar8) {
              local_70 = CONCAT44(local_70._4_4_,0x8c52);
              uVar6 = *(undefined8 *)PTR_DAT_047d0a08;
              local_78[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_78);
              FUN_00cbd7c0(auStack_88,&local_70);
              FUN_007cd5e8(uVar6,auStack_88,3);
            }
          }
        }
      }
LAB_007d4c10:
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != lVar1 + 0x18);
  }
  FUN_007dcbd8(*(undefined8 *)(param_1 + 200));
  FUN_007d4d90(param_1);
  return;
}


