/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081334c; name: FUN_0081334c
 */


void FUN_0081334c(long *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  undefined4 local_58;
  long local_50;
  undefined4 local_48 [2];
  
  local_50 = 0;
  FUN_007935cc(&local_50);
  puVar4 = PTR_DAT_047d0860;
  if (param_1[0x109] != 0) {
    if ((char)param_1[0xf8] == '\x04') {
      if (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 & 0xffff;
          if (*(long *)(param_1[0x10c] + uVar7 * 0xb0 + 8) != 0) {
            bVar2 = *(byte *)(param_1[0x10c] + uVar7 * 0xb0);
            if (bVar2 == 3) {
              lVar8 = local_50 - param_1[0x109];
              plVar5 = (long *)FUN_0079365c();
              lVar3 = 0;
              if (*plVar5 != 0) {
                lVar3 = lVar8 / *plVar5;
              }
              if (((int)param_1[0xf] < lVar3) && ((char)param_1[0x10d] == '\0')) goto LAB_0081349c;
              lVar8 = local_50 - param_1[0x109];
              plVar5 = (long *)FUN_0079365c();
              lVar3 = 0;
              if (*plVar5 != 0) {
                lVar3 = lVar8 / *plVar5;
              }
              if ((*(int *)((long)param_1 + 0x74) < lVar3) &&
                 (*(char *)(param_1[0x10c] + uVar7 * 0xb0 + 0xa9) != '\0')) {
                lVar3 = param_1[0x10c] + uVar7 * 0xb0;
                *(undefined1 *)(lVar3 + 0xa8) = 2;
                FUN_007935cc(lVar3 + 0x98);
                *(undefined1 *)(param_1[0x10c] + uVar7 * 0xb0) = 4;
              }
            }
            else {
              if (bVar2 < 2) {
                lVar8 = local_50 - param_1[0x109];
                plVar5 = (long *)FUN_0079365c();
                lVar3 = 0;
                if (*plVar5 != 0) {
                  lVar3 = lVar8 / *plVar5;
                }
                if (lVar3 <= *(int *)((long)param_1 + 0x6c)) {
                  return;
                }
                if ((char)param_1[0x10d] != '\0') {
                  return;
                }
                param_1[0x109] = 0;
                uVar6 = 0x648c;
                goto LAB_008134a4;
              }
              if (bVar2 == 2) {
                lVar8 = local_50 - param_1[0x109];
                plVar5 = (long *)FUN_0079365c();
                lVar3 = 0;
                if (*plVar5 != 0) {
                  lVar3 = lVar8 / *plVar5;
                }
                if (lVar3 <= (int)param_1[0xe]) {
                  return;
                }
                if ((char)param_1[0x10d] != '\0') {
                  return;
                }
                goto LAB_0081349c;
              }
            }
          }
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*(long *)puVar4 + 0x50) - 1));
      }
      uVar7 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((uVar7 & 1) == 0) {
        return;
      }
      param_1[0x109] = 0;
    }
    else {
      lVar8 = local_50 - param_1[0x109];
      plVar5 = (long *)FUN_0079365c();
      lVar3 = 0;
      if (*plVar5 != 0) {
        lVar3 = lVar8 / *plVar5;
      }
      if (lVar3 <= (int)param_1[0xe]) {
        return;
      }
LAB_0081349c:
      uVar6 = 0x648d;
      param_1[0x109] = 0;
LAB_008134a4:
      local_60 = CONCAT44(local_60._4_4_,uVar6);
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_48);
      FUN_018ff39c(param_1 + 0xe6,&local_60);
      *(undefined1 *)(param_1 + 0xf8) = 5;
    }
    local_58 = 0;
    local_60 = 0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_60);
  }
  return;
}


