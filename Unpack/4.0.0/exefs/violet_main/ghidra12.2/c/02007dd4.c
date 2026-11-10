/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02007dd4; name: FUN_02007dd4
 */


void FUN_02007dd4(long param_1,undefined8 param_2,ulong *param_3,uint param_4,uint param_5,
                 uint param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  ulong local_50;
  ulong uStack_48;
  
  FUN_02008320(&local_50);
  puVar1 = (ulong *)(param_1 + 0x10);
  local_50 = *puVar1 & local_50;
  *puVar1 = local_50;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & uStack_48;
  if ((param_5 & 1) != 0) {
    local_50 = local_50 | 0x8000000000000;
    *puVar1 = local_50;
  }
  uVar3 = 0x2000000000;
  if ((param_4 & 1) == 0) {
    uVar3 = 0x4000000000;
  }
  local_50 = local_50 | uVar3;
  *(ulong *)(param_1 + 0x10) = local_50 | 0x80000000;
  if (*(float *)(param_1 + 0x20) <= *(float *)(param_1 + 4)) {
    uVar3 = local_50 | 0x80000004;
    *puVar1 = uVar3;
    uVar2 = *param_3;
    if ((DAT_0483c1c0 & uVar2) != 0) {
      uVar3 = local_50 | 0x80000005;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1c8 & uVar2) != 0) {
      uVar3 = uVar3 | 0x10000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1d0 & uVar2) != 0) {
      uVar3 = uVar3 | 0x800;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1d8 & uVar2) != 0) {
      uVar3 = uVar3 | 2;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1e8 & uVar2) != 0) {
      uVar3 = uVar3 | 0x100;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1f0 & uVar2) != 0) {
      uVar3 = uVar3 | 0x4000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c1f8 & uVar2) != 0) {
      uVar3 = uVar3 | 0x200000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c200 & uVar2) != 0) {
      uVar3 = uVar3 | 0x400000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c208 & uVar2) != 0) {
      uVar3 = uVar3 | 0x800000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c210 & uVar2) != 0) {
      uVar3 = uVar3 | 0x1000000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c218 & uVar2) != 0) {
      uVar3 = uVar3 | 0x2000000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c220 & uVar2) != 0) {
      uVar3 = uVar3 | 0x4000000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c228 & uVar2) != 0) {
      uVar3 = uVar3 | 0x20000000;
      *puVar1 = uVar3;
      uVar2 = *param_3;
    }
    if ((DAT_0483c230 & uVar2) == 0) goto LAB_02008148;
    uVar3 = uVar3 | 0x40000000;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 4);
    *puVar1 = local_50 | 0x80000088;
    uVar2 = local_50 | 0x80000088;
    if ((DAT_0483c1e0 & *param_3) != 0) {
      uVar2 = local_50 | 0x80020088;
    }
    if (fVar4 <= 5.0) {
      uVar2 = uVar2 | 0x8000000;
    }
    if (fVar4 <= 3.0) {
      uVar2 = uVar2 | 0x10000000;
    }
    uVar3 = uVar2 | 0x100000000;
    if ((((fVar4 <= 0.4) || (uVar3 = uVar2, fVar4 <= 3.0)) || (fVar4 <= 5.0)) ||
       ((DAT_0483c1e0 & *param_3) != 0)) {
      *puVar1 = uVar3;
    }
    if (((((fVar4 < 0.15) || (*puVar1 = uVar3 | 0x200000000000, fVar4 < 0.2)) ||
         ((*puVar1 = uVar3 | 0x600000000000, fVar4 < 0.25 ||
          ((*puVar1 = uVar3 | 0xe00000000000, fVar4 < 0.5 ||
           (*puVar1 = uVar3 | 0xe10000000000, fVar4 < 1.0)))))) ||
        (*puVar1 = uVar3 | 0xe30000000000, fVar4 < 1.5)) ||
       ((*puVar1 = uVar3 | 0xe70000000000, fVar4 < 2.0 ||
        (*puVar1 = uVar3 | 0xef0000000000, fVar4 < 2.5)))) goto LAB_02008148;
    uVar3 = uVar3 | 0xff0000000000;
  }
  *puVar1 = uVar3;
LAB_02008148:
  FUN_0200705c(param_1,param_2,param_6 & 1);
  return;
}


