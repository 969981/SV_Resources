/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278a178; name: FUN_0278a178
 */


void FUN_0278a178(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *__s2;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  ulong local_38;
  undefined4 local_30;
  undefined4 local_28 [2];
  
  local_38 = local_38 & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,&local_38);
  __s2 = *(byte **)(param_3 + 8);
  if ((void *)param_2[1] == (void *)0x0) {
    if (__s2 == (byte *)0x0) goto LAB_0278a1cc;
LAB_0278a200:
    uVar1 = *(uint *)(param_3 + 0x14);
    if (uVar1 != 0) {
      if (*(int *)(param_3 + 0x18) == 1) {
        bVar2 = *__s2;
        if (bVar2 != 0) {
          uVar4 = 0;
          pbVar5 = __s2;
          do {
            if ((long)(ulong)uVar1 <= (long)pbVar5 - (long)__s2) break;
            if ((char)bVar2 < '\0') {
              if ((byte)(bVar2 + 0x3e) < 0x1e) {
                lVar6 = 2;
              }
              else if ((bVar2 & 0xf0) == 0xe0) {
                lVar6 = 3;
              }
              else if ((bVar2 & 0xf8) == 0xf0) {
                lVar6 = 4;
              }
              else if ((bVar2 & 0xfc) == 0xf8) {
                lVar6 = 5;
              }
              else {
                if ((bVar2 & 0xfe) != 0xfc) break;
                lVar6 = 6;
              }
            }
            else {
              lVar6 = 1;
            }
            pbVar5 = pbVar5 + lVar6;
            bVar2 = *pbVar5;
            uVar4 = uVar4 + 1;
          } while (bVar2 != 0);
          goto LAB_0278a220;
        }
      }
      else if (*(int *)(param_3 + 0x18) == 2) {
        uVar4 = uVar1 >> 1;
LAB_0278a220:
        if (uVar4 != 0) {
          (**(code **)(*param_2 + 0x28))(&local_38,param_2);
          FUN_018ff39c(param_1,&local_38);
          goto LAB_0278a270;
        }
      }
    }
  }
  else if (__s2 != (byte *)0x0) {
LAB_0278a1cc:
    if ((int)param_2[3] == *(int *)(param_3 + 0x18)) {
      uVar1 = *(uint *)((long)param_2 + 0x14);
      if (uVar1 == *(uint *)(param_3 + 0x14)) {
        if ((uVar1 == 0) || (iVar3 = memcmp((void *)param_2[1],__s2,(ulong)uVar1), iVar3 == 0))
        goto LAB_0278a270;
        __s2 = *(byte **)(param_3 + 8);
      }
    }
    if (__s2 != (byte *)0x0) goto LAB_0278a200;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
LAB_0278a270:
  local_30 = 0;
  local_38 = 8;
  (**(code **)(*param_2 + 0x20))(param_2,&local_38);
  return;
}


