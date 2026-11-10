/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fa600; name: FUN_015fa600
 */


void FUN_015fa600(long param_1,void *param_2,ulong param_3,short *param_4)

{
  short *psVar1;
  long *plVar2;
  short *psVar3;
  long lVar4;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  psVar3 = *(short **)(param_1 + 0x4090);
  psVar1 = *(short **)(param_1 + 0x4098);
  if (psVar3 != psVar1) {
    while (*psVar3 != *param_4) {
      psVar3 = psVar3 + 0xe4;
      if (psVar1 == psVar3) {
        return;
      }
    }
  }
  if (psVar3 == psVar1) {
    return;
  }
  if (*(long *)(psVar3 + 4) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(psVar3 + 4) + 0x10);
  if (lVar4 == 0) {
    return;
  }
  local_70[0] = 0;
  FUN_01667884(&local_60);
  memcpy(local_70,param_2,param_3 & 0xffffffff);
  *(undefined8 *)(lVar4 + 0xa0) = uStack_58;
  *(undefined8 *)(lVar4 + 0x98) = local_60;
  if (*(char *)(lVar4 + 0xcc) == '\0') {
    *(undefined1 *)(lVar4 + 0xcc) = 1;
    plVar2 = (long *)(lVar4 + -0x28);
    (**(code **)(*(long *)(lVar4 + -0x28) + 0x78))(plVar2);
    *(undefined8 *)(lVar4 + 0xb0) = uStack_48;
    *(undefined8 *)(lVar4 + 0xa8) = local_50;
    if (*(char *)(lVar4 + 0xcc) == '\0') {
      *(undefined1 *)(lVar4 + 0xcc) = 1;
      (**(code **)(*(long *)(lVar4 + -0x28) + 0x78))(plVar2);
      *(undefined8 *)(lVar4 + 0xc0) = uStack_38;
      *(undefined8 *)(lVar4 + 0xb8) = local_40;
      if (*(char *)(lVar4 + 0xcc) == '\0') {
        *(undefined1 *)(lVar4 + 0xcc) = 1;
        (**(code **)(*plVar2 + 0x78))(plVar2);
      }
      goto LAB_015fa710;
    }
  }
  else {
    *(undefined8 *)(lVar4 + 0xb0) = uStack_48;
    *(undefined8 *)(lVar4 + 0xa8) = local_50;
  }
  *(undefined8 *)(lVar4 + 0xc0) = uStack_38;
  *(undefined8 *)(lVar4 + 0xb8) = local_40;
LAB_015fa710:
  *(undefined1 *)(psVar3 + 0x44) = 2;
  *(undefined1 *)(psVar3 + 0x40) = local_70[0];
  if (((*(long *)(psVar3 + 0xc) != 0) &&
      (lVar4 = *(long *)(*(long *)(psVar3 + 0xc) + 0x10), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0xf8), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x210) = local_70[0];
  }
  return;
}


