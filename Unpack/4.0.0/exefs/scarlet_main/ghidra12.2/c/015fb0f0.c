/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fb0f0; name: FUN_015fb0f0
 */


void FUN_015fb0f0(long param_1,void *param_2,ulong param_3,short *param_4)

{
  short *psVar1;
  long lVar2;
  long *plVar3;
  short *psVar4;
  long lVar5;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_df [143];
  
  psVar4 = *(short **)(param_1 + 0x4090);
  psVar1 = *(short **)(param_1 + 0x4098);
  if (psVar4 != psVar1) {
    while (*psVar4 != *param_4) {
      psVar4 = psVar4 + 0xe4;
      if (psVar1 == psVar4) {
        return;
      }
    }
  }
  if (psVar4 == psVar1) {
    return;
  }
  if (*(long *)(psVar4 + 4) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(psVar4 + 4) + 0x10);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(psVar4 + 0x1c) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(psVar4 + 0x1c) + 0x10);
  if (lVar2 == 0) {
    return;
  }
  local_120[0] = 0;
  FUN_01667884(&local_110);
  memset(&uStack_e0,0,0x81);
  memcpy(local_120,param_2,param_3 & 0xffffffff);
  *(undefined8 *)(lVar5 + 0xa0) = uStack_108;
  *(undefined8 *)(lVar5 + 0x98) = local_110;
  if (*(char *)(lVar5 + 0xcc) == '\0') {
    *(undefined1 *)(lVar5 + 0xcc) = 1;
    plVar3 = (long *)(lVar5 + -0x28);
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x78))(plVar3);
    *(undefined8 *)(lVar5 + 0xb0) = uStack_f8;
    *(undefined8 *)(lVar5 + 0xa8) = local_100;
    if (*(char *)(lVar5 + 0xcc) == '\0') {
      *(undefined1 *)(lVar5 + 0xcc) = 1;
      (**(code **)(*(long *)(lVar5 + -0x28) + 0x78))(plVar3);
      *(undefined8 *)(lVar5 + 0xc0) = uStack_e8;
      *(undefined8 *)(lVar5 + 0xb8) = local_f0;
      if (*(char *)(lVar5 + 0xcc) == '\0') {
        *(undefined1 *)(lVar5 + 0xcc) = 1;
        (**(code **)(*plVar3 + 0x78))(plVar3);
      }
      goto LAB_015fb234;
    }
  }
  else {
    *(undefined8 *)(lVar5 + 0xb0) = uStack_f8;
    *(undefined8 *)(lVar5 + 0xa8) = local_100;
  }
  *(undefined8 *)(lVar5 + 0xc0) = uStack_e8;
  *(undefined8 *)(lVar5 + 0xb8) = local_f0;
LAB_015fb234:
  FUN_01ea585c(lVar2 + -0x28,auStack_df);
  *(undefined1 *)(psVar4 + 0x44) = 2;
  *(undefined1 *)(psVar4 + 0x40) = local_120[0];
  if (((*(long *)(psVar4 + 0xc) != 0) &&
      (lVar5 = *(long *)(*(long *)(psVar4 + 0xc) + 0x10), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0xf8), lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x210) = local_120[0];
  }
  return;
}


