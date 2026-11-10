/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cd5f0; name: FUN_003cd5f0
 */


undefined8 FUN_003cd5f0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x2a) + 0x230) == 0x101) goto LAB_003cd618;
  lVar6 = *(long *)(param_1 + 0x26);
  lVar8 = *(long *)(*(long *)(param_1 + 0x2a) + 0x228) - lVar6;
  if (lVar8 != 0) {
    lVar9 = *(long *)(param_1 + 0x24);
    do {
      iVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                        (param_1,0x16,0,lVar9 + lVar6,lVar8,0,&local_38);
      if (iVar1 < 1) {
        uVar5 = 0;
        param_1[10] = 3;
        uVar2 = 0;
        goto LAB_003cd620;
      }
      lVar8 = lVar8 - local_38;
      lVar6 = *(long *)(param_1 + 0x26) + local_38;
      *(long *)(param_1 + 0x26) = lVar6;
    } while (lVar8 != 0);
  }
  if (**(char **)(*(long *)(param_1 + 0x22) + 8) == '\x14') {
    lVar8 = *(long *)(*(long *)(param_1 + 2) + 0xc0);
    lVar6 = 0x48;
    if (param_1[0xe] != 0) {
      lVar6 = 0x38;
    }
    lVar9 = 0x40;
    if (param_1[0xe] != 0) {
      lVar9 = 0x30;
    }
    lVar6 = (**(code **)(lVar8 + 0x28))
                      (param_1,*(undefined8 *)(lVar8 + lVar9),*(undefined8 *)(lVar8 + lVar6),
                       *(long *)(param_1 + 0x2a) + 0x1a0);
    *(long *)(*(long *)(param_1 + 0x2a) + 0x220) = lVar6;
    uVar2 = 0;
    if (lVar6 != 0) goto LAB_003cd6fc;
LAB_003cd878:
    uVar5 = 0;
  }
  else {
LAB_003cd6fc:
    iVar1 = FUN_003a6970(param_1 + 0x252);
    if (iVar1 == 0) {
      if (((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
             (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
           ((*(int *)(*(long *)(param_1 + 0x2a) + 0x230) != 4 &&
            (*(int *)(*(long *)(param_1 + 0x2a) + 0x230) != 0x18)))) &&
          ((*(int *)(*(long *)(param_1 + 0x2a) + 0x230) != 2 ||
           ((*(ulong *)(param_1 + 0x26) < 0x26 ||
            (lVar6 = *(long *)(*(long *)(param_1 + 0x22) + 8),
            (*(long *)(lVar6 + 6) != 0x11619ae574ad21cf ||
            *(long *)(lVar6 + 0xe) != -0x6e479ae1fd73e242) ||
            (*(long *)(lVar6 + 0x16) != 0x5e8cbb7a1611a2c2 ||
            *(long *)(lVar6 + 0x1e) != -0x63cc57371df661f9))))))) &&
         (uVar2 = FUN_003acec0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                               *(ulong *)(param_1 + 0x26) + 4), (int)uVar2 == 0)) goto LAB_003cd878;
      pcVar7 = *(code **)(param_1 + 0x2e);
      if (pcVar7 != (code *)0x0) {
        uVar2 = 0x16;
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 8);
        uVar3 = *param_1;
        lVar6 = *(long *)(param_1 + 0x26) + 4;
        goto LAB_003cd86c;
      }
    }
    else {
      uVar2 = FUN_003acec0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                           *(undefined8 *)(param_1 + 0x26));
      if ((int)uVar2 == 0) goto LAB_003cd878;
      pcVar7 = *(code **)(param_1 + 0x2e);
      if (pcVar7 != (code *)0x0) {
        uVar3 = 2;
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 8);
        lVar6 = *(long *)(param_1 + 0x26);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = 0;
LAB_003cd86c:
        (*pcVar7)(0,uVar3,uVar2,uVar5,lVar6,param_1,uVar4);
      }
    }
LAB_003cd618:
    uVar5 = *(undefined8 *)(param_1 + 0x26);
    uVar2 = 1;
  }
LAB_003cd620:
  *param_2 = uVar5;
  return uVar2;
}


