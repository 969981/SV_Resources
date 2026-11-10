/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c9d00; name: FUN_001c9d00
 */


int FUN_001c9d00(long param_1,long *param_2,undefined4 param_3,char *param_4,long param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  local_68 = 0;
  sVar4 = strlen(param_4);
  if (0x200 < sVar4 + 0x10) {
    uVar6 = 4;
LAB_001c9e88:
    FUN_001db9c8(param_1,"Failed to encode DOH packet [%d]\n",uVar6);
    return 0x1b;
  }
  lVar1 = (long)param_2 + 0xc;
  plVar9 = param_2 + 3;
  *(undefined4 *)((long)param_2 + 0xc) = 0x10000;
  *(undefined2 *)(param_2 + 2) = 0x100;
  *(undefined4 *)((long)param_2 + 0x12) = 0;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  do {
    pcVar5 = strchr(param_4,0x2e);
    if (pcVar5 == (char *)0x0) {
      sVar4 = strlen(param_4);
    }
    else {
      sVar4 = (long)pcVar5 - (long)param_4;
    }
    if (0x3f < sVar4) {
      uVar6 = 1;
      param_2[0x42] = 0;
      goto LAB_001c9e88;
    }
    *(char *)plVar9 = (char)sVar4;
    memcpy((void *)((long)plVar9 + 1),param_4,sVar4);
    plVar9 = (long *)((long)plVar9 + 1 + sVar4);
    param_4 = param_4 + sVar4 + 1;
  } while (pcVar5 != (char *)0x0);
  *(undefined2 *)((long)plVar9 + 3) = 0x100;
  lVar8 = (long)plVar9 + (5 - lVar1);
  *(undefined2 *)plVar9 = 0;
  *(char *)((long)plVar9 + 2) = (char)param_3;
  param_2[0x42] = lVar8;
  *(undefined4 *)(param_2 + 1) = param_3;
  param_2[0x44] = 0;
  param_2[0x43] = 0;
  if ((*(byte *)(param_1 + 0xf47) >> 1 & 1) == 0) {
    lVar8 = 0;
LAB_001c9e14:
    iVar2 = FUN_001c5a28(param_1,0,1);
    iVar3 = FUN_001e4b44(&local_68);
    if ((((((iVar3 == 0) && (iVar3 = FUN_0278ca04(local_68,0x2712,param_5), iVar3 == 0)) &&
          (iVar3 = FUN_0278ca04(local_68,0x4e2b,FUN_001cac90), iVar3 == 0)) &&
         (iVar3 = FUN_0278ca04(local_68,0x2711,param_2 + 0x43), iVar3 == 0)) &&
        (((*(byte *)(param_1 + 0xf47) >> 1 & 1) != 0 ||
         ((iVar3 = FUN_0278ca04(local_68,0x271f,lVar1), iVar3 == 0 &&
          (iVar3 = FUN_0278ca04(local_68,0x3c,param_2[0x42]), iVar3 == 0)))))) &&
       ((iVar3 = FUN_0278ca04(local_68,0x2727,param_7), iVar3 == 0 &&
        (((iVar3 = FUN_0278ca04(local_68,0x54,4), iVar3 == 0 &&
          (iVar3 = FUN_0278ca04(local_68,0xb5,2), iVar3 == 0)) &&
         (iVar3 = FUN_0278ca04(local_68,0x9b,(long)iVar2), iVar3 == 0)))))) {
      uVar7 = *(ulong *)(param_1 + 0xf40);
      if (((uint)uVar7 >> 0x1a & 1) != 0) {
        iVar3 = FUN_0278ca04(local_68,0x29,1);
        if (iVar3 != 0) goto LAB_001c9ec0;
        uVar7 = *(ulong *)(param_1 + 0xf40);
      }
      if (((((((((((uVar7 >> 0x21 & 1) == 0) || (iVar3 = FUN_0278ca04(local_68,99,1), iVar3 == 0))
                && (((*(byte *)(param_1 + 0xb18) >> 1 & 1) == 0 ||
                    (iVar3 = FUN_0278ca04(local_68,0xe9,1), iVar3 == 0)))) &&
               (((*(byte *)(param_1 + 0xac1) >> 1 & 1) == 0 ||
                (iVar3 = FUN_0278ca04(local_68,0x51,2), iVar3 == 0)))) &&
              (((*(byte *)(param_1 + 0xb99) >> 1 & 1) == 0 ||
               (iVar3 = FUN_0278ca04(local_68,0xf9,2), iVar3 == 0)))) &&
             (((((*(byte *)(param_1 + 0xac1) & 1) == 0 ||
                (iVar3 = FUN_0278ca04(local_68,0x40,1), iVar3 == 0)) &&
               (((*(byte *)(param_1 + 0xb99) & 1) == 0 ||
                (iVar3 = FUN_0278ca04(local_68,0xf8,1), iVar3 == 0)))) &&
              (((*(byte *)(param_1 + 0xac1) >> 2 & 1) == 0 ||
               (iVar3 = FUN_0278ca04(local_68,0xe8,1), iVar3 == 0)))))) &&
            ((*(long *)(param_1 + 0xd60) == 0 || (iVar3 = FUN_0278ca04(local_68,0x2751), iVar3 == 0)
             ))) && (((((*(long *)(param_1 + 0xd68) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0x2806), iVar3 == 0)) &&
                       ((*(long *)(param_1 + 0xd50) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0x2771), iVar3 == 0)))) &&
                      (((*(long *)(param_1 + 0xd58) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0x2807), iVar3 == 0)) &&
                       ((*(long *)(param_1 + 0xdb8) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0x27b9), iVar3 == 0)))))) &&
                     ((((*(long *)(param_1 + 0xdc0) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0x2814), iVar3 == 0)) &&
                       (((*(byte *)(param_1 + 0xb18) & 1) == 0 ||
                        (iVar3 = FUN_0278ca04(local_68,0xac,1), iVar3 == 0)))) &&
                      ((*(long *)(param_1 + 0xda8) == 0 ||
                       (iVar3 = FUN_0278ca04(local_68,0x275c), iVar3 == 0)))))))) &&
          ((*(long *)(param_1 + 0xda0) == 0 || (iVar3 = FUN_0278ca04(local_68,0x275d), iVar3 == 0)))
          ) && ((((((*(byte *)(param_1 + 0xb18) >> 3 & 1) == 0 ||
                   (iVar3 = FUN_0278ca04(local_68,0xd8,2), iVar3 == 0)) &&
                  (((*(byte *)(param_1 + 0xbf0) >> 3 & 1) == 0 ||
                   (iVar3 = FUN_0278ca04(local_68,0x105,2), iVar3 == 0)))) &&
                 ((*(long *)(param_1 + 0xae0) == 0 ||
                  (iVar3 = FUN_0278ca04(local_68,0x4e8c), iVar3 == 0)))) &&
                ((*(long *)(param_1 + 0xae8) == 0 ||
                 (iVar3 = FUN_0278ca04(local_68,0x277d), iVar3 == 0)))))) {
        *(code **)(local_68 + 0xf18) = FUN_001cad08;
        *(long *)(local_68 + 0xf20) = param_1;
        *param_2 = local_68;
        iVar3 = FUN_001ce818(param_6);
        if (iVar3 == 0) {
          FUN_001ec308(lVar8);
          return 0;
        }
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = FUN_001cb004(param_1,lVar1,lVar8,&local_70,auStack_78);
    if (iVar3 == 0) {
      lVar8 = FUN_001ce400("%s?dns=%s",param_5,local_70);
      FUN_001ec308(local_70);
      if (lVar8 != 0) {
        param_5 = lVar8;
        goto LAB_001c9e14;
      }
      iVar3 = 0x1b;
    }
    lVar8 = 0;
  }
LAB_001c9ec0:
  FUN_001ec308(lVar8);
  FUN_001e4720(local_68);
  return iVar3;
}


