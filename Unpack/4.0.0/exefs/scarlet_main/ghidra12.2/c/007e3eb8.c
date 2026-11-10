/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e3eb8; name: FUN_007e3eb8
 */


void FUN_007e3eb8(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    if (((param_3 != 0) && ((param_3 & 7) == 0)) && (1 < (int)param_5)) {
      uVar3 = (ulong)param_5 * 0x40;
      if (uVar3 <= param_4) {
        uVar5 = 0;
        *(uint *)(param_2 + 5) = param_5;
        do {
          lVar7 = param_3 + uVar5;
          uVar5 = uVar5 + 0x40;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
        } while (uVar3 != uVar5);
        uVar2 = param_5 - 1;
        *param_2 = param_3;
        if (0 < (int)param_5) {
          *(ulong *)(param_3 + 0x20) = param_3 + 0x40;
          *(undefined8 *)(param_3 + 0x28) = 0;
          if (param_5 != 1) {
            lVar1 = param_3 + (ulong)uVar2 * 0x40;
            lVar6 = (ulong)uVar2 - 1;
            lVar7 = param_3 + 0x80;
            lVar4 = (ulong)param_5 - 1;
            do {
              while (lVar6 != 0) {
                *(long *)(lVar7 + -0x20) = lVar7;
                *(long *)(lVar7 + -0x18) = lVar7 + -0x80;
                lVar6 = lVar6 + -1;
                lVar7 = lVar7 + 0x40;
                lVar4 = lVar4 + -1;
                if (lVar4 == 0) goto LAB_007e3fd0;
              }
              *(undefined8 *)(lVar1 + 0x20) = 0;
              *(long *)(lVar1 + 0x28) = lVar1 + -0x40;
              lVar6 = -1;
              lVar7 = lVar7 + 0x40;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
        }
LAB_007e3fd0:
        *(undefined1 *)((long)param_2 + 0x2c) = 1;
        param_2[3] = param_3;
        param_2[4] = param_3 + (long)(int)uVar2 * 0x40;
        local_28[0] = 0;
        goto LAB_007e3f0c;
      }
    }
    local_28[0] = 0x10407;
  }
  else {
    local_28[0] = 0x10402;
  }
LAB_007e3f0c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


