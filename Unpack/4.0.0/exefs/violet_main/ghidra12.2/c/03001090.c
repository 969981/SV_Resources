/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03001090; name: FUN_03001090
 */


void FUN_03001090(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte local_c0 [160];
  
  if (((DAT_0486bbd0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0486bbd0), iVar4 != 0)) {
    memset(local_c0 + 0x50,0,0x50);
    uVar5 = 0;
    do {
      local_c0[uVar5 + 0x50] =
           -(~(uVar5 < 0x10 || ((uVar5 & 0x7ffffffffffffffe) == 0x12 || uVar5 - 0x23 < 0x17)) & 1U);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x50);
    memset(local_c0,0,0x50);
    uVar5 = 0;
    do {
      local_c0[uVar5] =
           -((uVar5 & 0x7ffffffffffffff8) != 0x48 &&
            ((uVar5 & 0x7ffffffffffffff8) != 0x38 && (uVar5 & 0x7ffffffffffffffc) != 0x44));
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x50);
    memset(&DAT_0486bb80,0,0x50);
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 2;
      bVar2 = local_c0[lVar6 + 0x51];
      bVar3 = local_c0[lVar6 + 1];
      (&DAT_0486bb80)[lVar6] = local_c0[lVar6] & local_c0[lVar6 + 0x50];
      (&DAT_0486bb81)[lVar6] = bVar3 & bVar2;
      lVar6 = lVar1;
    } while (lVar1 != 0x50);
    __cxa_guard_release(&DAT_0486bbd0);
  }
  (**(code **)(*(long *)PTR_DAT_047d19f0 +
               (ulong)*(byte *)(*(long *)(param_1 + 0x38) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_1 + 0x38),PTR_DAT_047d19b0 + 0x200,local_c0 + 0x50);
  return;
}


