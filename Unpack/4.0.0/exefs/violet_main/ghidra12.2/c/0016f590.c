/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016f590; name: FUN_0016f590
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0016f590(long param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  __n = (*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78)) - (long)param_2;
  if ((long)__n < 1) {
    return;
  }
  memcpy(*(void **)(param_1 + 8),param_2,__n);
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
  pcVar3 = *(char **)(param_1 + 0x18);
  lVar4 = -(long)*(int *)(param_1 + 0x88);
  uVar6 = __n - 0x10;
  uVar5 = __n;
  if (0xf < (long)__n) {
    if (((uint)uVar6 >> 4 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_2 + lVar4 + 8);
      uVar7 = *(undefined8 *)(param_2 + lVar4);
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)param_2;
      *(ulong *)(pcVar3 + 8) =
           CONCAT17((char)((ulong)uVar10 >> 0x38) - (char)((ulong)uVar8 >> 0x38),
                    CONCAT16((char)((ulong)uVar10 >> 0x30) - (char)((ulong)uVar8 >> 0x30),
                             CONCAT15((char)((ulong)uVar10 >> 0x28) - (char)((ulong)uVar8 >> 0x28),
                                      CONCAT14((char)((ulong)uVar10 >> 0x20) -
                                               (char)((ulong)uVar8 >> 0x20),
                                               CONCAT13((char)((ulong)uVar10 >> 0x18) -
                                                        (char)((ulong)uVar8 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar10 >> 0x10) -
                                                                 (char)((ulong)uVar8 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar10 >> 8)
                                                                          - (char)((ulong)uVar8 >> 8
                                                                                  ),
                                                                          (char)uVar10 - (char)uVar8
                                                                         )))))));
      *(ulong *)pcVar3 =
           CONCAT17((char)((ulong)uVar9 >> 0x38) - (char)((ulong)uVar7 >> 0x38),
                    CONCAT16((char)((ulong)uVar9 >> 0x30) - (char)((ulong)uVar7 >> 0x30),
                             CONCAT15((char)((ulong)uVar9 >> 0x28) - (char)((ulong)uVar7 >> 0x28),
                                      CONCAT14((char)((ulong)uVar9 >> 0x20) -
                                               (char)((ulong)uVar7 >> 0x20),
                                               CONCAT13((char)((ulong)uVar9 >> 0x18) -
                                                        (char)((ulong)uVar7 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar9 >> 0x10) -
                                                                 (char)((ulong)uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar9 >> 8)
                                                                          - (char)((ulong)uVar7 >> 8
                                                                                  ),
                                                                          (char)uVar9 - (char)uVar7)
                                                                ))))));
      uVar5 = uVar6;
      pcVar3 = pcVar3 + 0x10;
      param_2 = param_2 + 0x10;
    }
    if (0xf < uVar6) {
      do {
        pcVar1 = param_2 + lVar4;
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)param_2;
        uVar5 = uVar5 - 0x20;
        uVar10 = *(undefined8 *)(pcVar1 + 8);
        uVar9 = *(undefined8 *)pcVar1;
        *(ulong *)(pcVar3 + 8) =
             CONCAT17((char)((ulong)uVar8 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                      CONCAT16((char)((ulong)uVar8 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                               CONCAT15((char)((ulong)uVar8 >> 0x28) - (char)((ulong)uVar10 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar8 >> 0x20) -
                                                  (char)((ulong)uVar10 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar8 >> 0x18) -
                                                           (char)((ulong)uVar10 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar8 >> 0x10) -
                                                                    (char)((ulong)uVar10 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar8 >>
                                                                                   8) -
                                                                             (char)((ulong)uVar10 >>
                                                                                   8),(char)uVar8 -
                                                                                      (char)uVar10))
                                                          )))));
        *(ulong *)pcVar3 =
             CONCAT17((char)((ulong)uVar7 >> 0x38) - (char)((ulong)uVar9 >> 0x38),
                      CONCAT16((char)((ulong)uVar7 >> 0x30) - (char)((ulong)uVar9 >> 0x30),
                               CONCAT15((char)((ulong)uVar7 >> 0x28) - (char)((ulong)uVar9 >> 0x28),
                                        CONCAT14((char)((ulong)uVar7 >> 0x20) -
                                                 (char)((ulong)uVar9 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                          (char)((ulong)uVar9 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar7 >> 0x10) -
                                                                   (char)((ulong)uVar9 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar7 >> 8
                                                                                  ) - (char)((ulong)
                                                  uVar9 >> 8),(char)uVar7 - (char)uVar9)))))));
        uVar8 = *(undefined8 *)(pcVar1 + 0x18);
        uVar7 = *(undefined8 *)(pcVar1 + 0x10);
        uVar10 = *(undefined8 *)(param_2 + 0x18);
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        param_2 = param_2 + 0x20;
        *(ulong *)(pcVar3 + 0x18) =
             CONCAT17((char)((ulong)uVar10 >> 0x38) - (char)((ulong)uVar8 >> 0x38),
                      CONCAT16((char)((ulong)uVar10 >> 0x30) - (char)((ulong)uVar8 >> 0x30),
                               CONCAT15((char)((ulong)uVar10 >> 0x28) - (char)((ulong)uVar8 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar10 >> 0x20) -
                                                  (char)((ulong)uVar8 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar10 >> 0x18) -
                                                           (char)((ulong)uVar8 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar10 >> 0x10) -
                                                                    (char)((ulong)uVar8 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar10 >>
                                                                                   8) -
                                                                             (char)((ulong)uVar8 >>
                                                                                   8),(char)uVar10 -
                                                                                      (char)uVar8)))
                                                 ))));
        *(ulong *)(pcVar3 + 0x10) =
             CONCAT17((char)((ulong)uVar9 >> 0x38) - (char)((ulong)uVar7 >> 0x38),
                      CONCAT16((char)((ulong)uVar9 >> 0x30) - (char)((ulong)uVar7 >> 0x30),
                               CONCAT15((char)((ulong)uVar9 >> 0x28) - (char)((ulong)uVar7 >> 0x28),
                                        CONCAT14((char)((ulong)uVar9 >> 0x20) -
                                                 (char)((ulong)uVar7 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar9 >> 0x18) -
                                                          (char)((ulong)uVar7 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar9 >> 0x10) -
                                                                   (char)((ulong)uVar7 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar9 >> 8
                                                                                  ) - (char)((ulong)
                                                  uVar7 >> 8),(char)uVar9 - (char)uVar7)))))));
        pcVar3 = pcVar3 + 0x20;
      } while (0xf < (long)uVar5);
    }
    uVar5 = __n & 0xf;
    if (uVar5 == 0) goto LAB_0016f6d0;
  }
  uVar6 = uVar5;
  if ((__n & 1) != 0) {
    cVar2 = *param_2;
    pcVar1 = param_2 + lVar4;
    param_2 = param_2 + 1;
    *pcVar3 = cVar2 - *pcVar1;
    pcVar3 = pcVar3 + 1;
    uVar6 = uVar5 - 1;
  }
  if (uVar5 != 1) {
    do {
      uVar6 = uVar6 - 2;
      *pcVar3 = *param_2 - param_2[lVar4];
      pcVar3[1] = param_2[1] - (param_2 + lVar4)[1];
      param_2 = param_2 + 2;
      pcVar3 = pcVar3 + 2;
    } while (uVar6 != 0);
  }
LAB_0016f6d0:
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
  return;
}


