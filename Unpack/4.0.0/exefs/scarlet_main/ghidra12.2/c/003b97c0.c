/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b97c0; name: FUN_003b97c0
 */


undefined8 FUN_003b97c0(int *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  size_t __n;
  bool bVar11;
  int *local_38;
  
  local_38 = (int *)0x0;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
      (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    param_1[0x1d0] = 1;
    iVar3 = FUN_003ba8c0(param_1,0x12,0x80,*(undefined8 *)(param_2 + 0x288),0,0);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_003ba8c0(param_1,0x1b,0x80,*(undefined8 *)(param_2 + 0x288),0,0), iVar3 == 0)) {
      return 0xffffffff;
    }
    bVar2 = false;
    bVar11 = true;
    piVar5 = *(int **)(param_1 + 0x174);
  }
  else {
    uVar4 = FUN_003d75d0(param_1,param_2,&local_38);
    if (uVar4 - 2 < 2) {
      if (*(long *)(param_2 + 0x28) != 0) {
        piVar5 = (int *)FUN_003b9420(param_1,param_2 + 0x30);
        bVar11 = false;
        bVar2 = true;
        goto joined_r0x003b98dc;
      }
    }
    else if (uVar4 < 2) {
      FUN_003c3950(param_1,0x50,0xd9,0x44,"external/openssl/ssl/ssl_sess.c",0x213);
      bVar2 = false;
      uVar7 = 0xffffffff;
      goto joined_r0x003b99c0;
    }
    bVar2 = false;
    bVar11 = true;
    piVar5 = local_38;
  }
joined_r0x003b98dc:
  local_38 = piVar5;
  if (((piVar5 != (int *)0x0) && (*piVar5 == *param_1)) &&
     ((__n = *(size_t *)(piVar5 + 0x5e), __n == *(size_t *)(param_1 + 0x16a) &&
      (iVar3 = memcmp(piVar5 + 0x60,param_1 + 0x16c,__n), iVar3 == 0)))) {
    if ((__n == 0) && ((param_1[0x188] & 1U) != 0)) {
      uVar7 = 0x50;
      uVar8 = 0x115;
      uVar9 = 0x242;
LAB_003b99b0:
      FUN_003c3950(param_1,uVar7,0xd9,uVar8,"external/openssl/ssl/ssl_sess.c",uVar9);
      uVar7 = 0xffffffff;
      goto joined_r0x003b99c0;
    }
    lVar10 = *(long *)(piVar5 + 0x76);
    tVar6 = time((time_t *)0x0);
    if (lVar10 < tVar6 - *(long *)(local_38 + 0x78)) {
      piVar5 = (int *)(*(long *)(param_1 + 0x21e) + 0x8c);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (bVar11) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        FUN_003b9ad0(*(undefined8 *)(param_1 + 0x21e),local_38,1);
      }
    }
    else {
      if ((*(byte *)(local_38 + 0x9c) & 1) != 0) {
        if (((uint)**(undefined8 **)(param_1 + 0x2a) >> 9 & 1) != 0) goto LAB_003b9a58;
        uVar7 = 0x2f;
        uVar8 = 0x68;
        uVar9 = 0x255;
        goto LAB_003b99b0;
      }
      if (((uint)**(undefined8 **)(param_1 + 0x2a) >> 9 & 1) == 0) {
LAB_003b9a58:
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
            (iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
          FUN_003b8e30(*(undefined8 *)(param_1 + 0x174));
          *(int **)(param_1 + 0x174) = local_38;
        }
        piVar5 = (int *)(*(long *)(param_1 + 0x21e) + 0x94);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1c8);
        return 1;
      }
    }
  }
  uVar7 = 0;
joined_r0x003b99c0:
  if (local_38 != (int *)0x0) {
    FUN_003b8e30();
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
      param_1[0x174] = 0;
      param_1[0x175] = 0;
    }
    if (!bVar2) {
      param_1[0x1d0] = 1;
    }
  }
  return uVar7;
}


