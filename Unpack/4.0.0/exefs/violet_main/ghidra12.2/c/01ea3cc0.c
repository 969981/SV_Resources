/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea3cc0; name: FUN_01ea3cc0
 */


void FUN_01ea3cc0(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long local_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x4058);
  lVar4 = *(long *)(param_1 + 0x4060);
  if (lVar3 == lVar4) {
LAB_01ea3cf0:
    if ((lVar3 != lVar4) && (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) {
      if ((*(long *)(lVar3 + 0x60) != 0) &&
         (local_30 = *(long *)(*(long *)(lVar3 + 0x60) + 0x10), local_30 != 0)) {
        local_30 = local_30 + -0x28;
        uStack_28 = param_3;
        uVar1 = FUN_01ea739c(&local_30);
        if ((uVar1 & 0xff) != 0) {
          uVar5 = (ulong)*(byte *)(lVar3 + 0x144);
          if (uVar5 < 0x10) {
            pcVar6 = (char *)(lVar3 + 0x84);
            iVar2 = (int)(uVar1 >> 0x20);
            if (((((*pcVar6 == '\0') || (*(int *)(lVar3 + 0x88) != iVar2)) &&
                 ((pcVar6 = (char *)(lVar3 + 0x90), *pcVar6 == '\0' ||
                  (*(int *)(lVar3 + 0x94) != iVar2)))) &&
                ((pcVar6 = (char *)(lVar3 + 0x9c), *pcVar6 == '\0' ||
                 (*(int *)(lVar3 + 0xa0) != iVar2)))) &&
               (((((pcVar6 = (char *)(lVar3 + 0xa8), *pcVar6 == '\0' ||
                   (*(int *)(lVar3 + 0xac) != iVar2)) &&
                  ((((pcVar6 = (char *)(lVar3 + 0xb4), *pcVar6 == '\0' ||
                     (*(int *)(lVar3 + 0xb8) != iVar2)) &&
                    ((pcVar6 = (char *)(lVar3 + 0xc0), *pcVar6 == '\0' ||
                     (*(int *)(lVar3 + 0xc4) != iVar2)))) &&
                   ((pcVar6 = (char *)(lVar3 + 0xcc), *pcVar6 == '\0' ||
                    (*(int *)(lVar3 + 0xd0) != iVar2)))))) &&
                 ((pcVar6 = (char *)(lVar3 + 0xd8), *pcVar6 == '\0' ||
                  (*(int *)(lVar3 + 0xdc) != iVar2)))) &&
                ((((pcVar6 = (char *)(lVar3 + 0xe4), *pcVar6 == '\0' ||
                   (*(int *)(lVar3 + 0xe8) != iVar2)) &&
                  ((pcVar6 = (char *)(lVar3 + 0xf0), *pcVar6 == '\0' ||
                   (*(int *)(lVar3 + 0xf4) != iVar2)))) &&
                 ((pcVar6 = (char *)(lVar3 + 0xfc), *pcVar6 == '\0' ||
                  (*(int *)(lVar3 + 0x100) != iVar2)))))))) {
              if ((*(char *)(lVar3 + 0x108) == '\0') || (*(int *)(lVar3 + 0x10c) != iVar2)) {
                if ((*(char *)(lVar3 + 0x114) == '\0') || (*(int *)(lVar3 + 0x118) != iVar2)) {
                  if ((*(char *)(lVar3 + 0x120) == '\0') || (*(int *)(lVar3 + 0x124) != iVar2)) {
                    if ((*(char *)(lVar3 + 300) == '\0') || (*(int *)(lVar3 + 0x130) != iVar2)) {
                      if ((*(char *)(lVar3 + 0x138) == '\0') || (*(int *)(lVar3 + 0x13c) != iVar2))
                      {
                        *(byte *)(lVar3 + 0x144) = *(byte *)(lVar3 + 0x144) + 1;
                        pcVar6 = (char *)(lVar3 + uVar5 * 0xc + 0x84);
                        if (*pcVar6 == '\0') {
                          *(ulong *)(lVar3 + uVar5 * 0xc + 0x88) =
                               uVar1 >> 0x20 | (ulong)param_4 << 0x20;
                          *pcVar6 = '\x01';
                          return;
                        }
                        *(ulong *)(lVar3 + uVar5 * 0xc + 0x88) =
                             uVar1 >> 0x20 | (ulong)param_4 << 0x20;
                        return;
                      }
                      pcVar6 = (char *)(lVar3 + 0x138);
                    }
                    else {
                      pcVar6 = (char *)(lVar3 + 300);
                    }
                  }
                  else {
                    pcVar6 = (char *)(lVar3 + 0x120);
                  }
                }
                else {
                  pcVar6 = (char *)(lVar3 + 0x114);
                }
              }
              else {
                pcVar6 = (char *)(lVar3 + 0x108);
              }
            }
            *(uint *)(pcVar6 + 8) = param_4;
          }
        }
      }
      return;
    }
  }
  else {
    do {
      if (*(long *)(lVar3 + 8) == *param_2) goto LAB_01ea3cf0;
      lVar3 = lVar3 + 0xb0;
    } while (lVar4 != lVar3);
  }
  return;
}


