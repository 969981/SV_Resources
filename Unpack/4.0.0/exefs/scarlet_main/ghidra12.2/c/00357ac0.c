/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00357ac0; name: FUN_00357ac0
 */


void FUN_00357ac0(long *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ulong *puVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *__ptr;
  void *__ptr_00;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_60 [32];
  
  __ptr = (undefined4 *)param_1[4];
  if (__ptr == (undefined4 *)0x0) {
    return;
  }
  puVar1 = __ptr + 4;
  FUN_0038db40(puVar1);
  if (*(long **)(__ptr + 0x1e) == param_1) {
    bVar5 = param_2 == 0;
    *(undefined8 *)(__ptr + 0x1e) = 0;
    if (*(long **)(__ptr + 0x20) == param_1) goto LAB_00357b54;
  }
  else if (*(long **)(__ptr + 0x20) == param_1) {
    bVar5 = false;
LAB_00357b54:
    if (param_3 == 0) {
      bVar5 = true;
    }
    *(undefined8 *)(__ptr + 0x20) = 0;
  }
  else {
    bVar5 = false;
    if (param_1[3] != 0) {
      lVar9 = *param_1;
      *(long *)(lVar9 + 8) = param_1[1];
      bVar5 = false;
      *(long *)param_1[1] = lVar9;
    }
  }
  if ((param_2 == 0) || (lVar9 = *(long *)(__ptr + 0x22), lVar9 == 1)) {
LAB_00357b7c:
    if (param_3 == 0) goto LAB_00357c48;
LAB_00357b80:
    lVar9 = *(long *)(__ptr + 0x24);
    if (lVar9 == 1) goto LAB_00357c48;
    if (lVar9 == 0) {
      *(undefined8 *)(__ptr + 0x24) = 1;
      goto LAB_00357c48;
    }
    if (__ptr[0xc] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_003673f0(auStack_60,"FD shutdown");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1ec
                           ,auStack_60,__ptr + 0x12,1);
      uVar6 = FUN_00351770(uVar6,3,0xe);
    }
    FUN_0035351c(auStack_60,lVar9,uVar6);
    *(undefined8 *)(__ptr + 0x24) = 0;
    puVar8 = *(undefined8 **)(__ptr + 0x14);
    if (puVar8 == (undefined8 *)(__ptr + 0x14)) goto LAB_00357c84;
LAB_00357c94:
    FUN_0038db40(puVar8[2]);
    if (puVar8[3] == 0) goto LAB_00357df0;
    FUN_003576f0(puVar8[2],puVar8[3],2);
    FUN_0038db60(puVar8[2]);
  }
  else {
    if (lVar9 == 0) {
      *(undefined8 *)(__ptr + 0x22) = 1;
      goto LAB_00357b7c;
    }
    if (__ptr[0xc] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_003673f0(auStack_60,"FD shutdown");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1ec
                           ,auStack_60,__ptr + 0x12,1);
      uVar6 = FUN_00351770(uVar6,3,0xe);
    }
    FUN_0035351c(auStack_60,lVar9,uVar6);
    bVar5 = true;
    *(undefined8 *)(__ptr + 0x22) = 0;
    if (param_3 != 0) goto LAB_00357b80;
LAB_00357c48:
    if (bVar5) {
      puVar8 = *(undefined8 **)(__ptr + 0x14);
      if (puVar8 == (undefined8 *)(__ptr + 0x14)) {
LAB_00357c84:
        puVar8 = *(undefined8 **)(__ptr + 0x1e);
        if ((puVar8 == (undefined8 *)0x0) &&
           (puVar8 = *(undefined8 **)(__ptr + 0x20), puVar8 == (undefined8 *)0x0))
        goto LAB_00357cb8;
      }
      goto LAB_00357c94;
    }
  }
LAB_00357cb8:
  puVar2 = (ulong *)(__ptr + 2);
  if (((((*puVar2 & 1) == 0) && (*(long *)(__ptr + 0x1e) == 0)) && (*(long *)(__ptr + 0x20) == 0))
     && ((*(undefined8 **)(__ptr + 0x14) == (undefined8 *)(__ptr + 0x14) && (__ptr[0xd] == 0)))) {
    __ptr[0xd] = 1;
    if (__ptr[0xe] == 0) {
      nnsocketClose(*__ptr);
    }
    FUN_0035351c(auStack_60,*(undefined8 *)(__ptr + 0x26),0);
  }
  FUN_0038db60(puVar1);
  do {
    uVar7 = *puVar2;
    uVar4 = uVar7 - 2;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = uVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (uVar4 == 0) {
    FUN_0038db20(puVar1);
    FUN_00354750(__ptr + 0x28);
    if (DAT_047ef698 == '\x01') {
      __ptr_00 = *(void **)(__ptr + 0x2e);
      FUN_0038db40(&DAT_047ef6a8);
      if (DAT_047ef6a0 == __ptr_00) {
        DAT_047ef6a0 = *(void **)((long)__ptr_00 + 0x10);
      }
      lVar9 = *(long *)((long)__ptr_00 + 0x18);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)((long)__ptr_00 + 0x10);
      }
      if (*(long *)((long)__ptr_00 + 0x10) != 0) {
        *(long *)(*(long *)((long)__ptr_00 + 0x10) + 0x18) = lVar9;
      }
      free(__ptr_00);
      FUN_0038db60(&DAT_047ef6a8);
    }
    if ((__ptr[0xc] != 0) && (4 < *(ulong *)(__ptr + 0x12))) {
      FUN_00350fd0();
    }
    free(__ptr);
  }
  else if ((long)uVar7 < 3) {
LAB_00357df0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


